__Assignment__1
1. Messages
These are the back-and-forth inputs and outputs in a conversation with a model. For example, when you ask a question or give an instruction (input), the AI's response is also considered a message.
2. Model
Refers to the specific version or type of AI being used, such as GPT-4 or GPT-3.5. Different models may have varying levels of capability, speed, and token limits.
3. Max Completion Tokens
This sets the maximum number of tokens (words, parts of words, or symbols) the model can generate in its response. A token roughly equals 4 characters or 0.75 words in English text.
4. n
Refers to the number of responses you want the model to generate for a given input. For example, setting n=3 will return three different responses to the same query.
5. Stream
If enabled, it allows the response to be delivered piece by piece as it's being generated, rather than waiting for the entire response to be completed. This is like how typing appears in real-time during a chat.
6. Temperature
Controls the randomness of the model's output. Lower values (e.g., 0.2) make the model more focused and deterministic,and innovative , while higher values (e.g., 0.8) make it less creative and diverse.
7. Top_p
This is another way to control randomness, but instead of adjusting the temperature, it focuses on the probability of choosing the next token. A lower top_p means only the most likely options are considered, while a higher value allows for a broader range of outputs.
8. Tools
Additional functionalities or resources that the AI can use to enhance its responses. For example, web search tools, calculators, or image generation capabilities. These extend the AI's core abilities.
