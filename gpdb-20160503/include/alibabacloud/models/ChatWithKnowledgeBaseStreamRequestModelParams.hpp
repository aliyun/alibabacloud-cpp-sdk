// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTMODELPARAMS_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTMODELPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamRequestModelParamsMessages.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamRequestModelParamsTools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamRequestModelParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamRequestModelParams& obj) { 
      DARABONBA_PTR_TO_JSON(MaxTokens, maxTokens_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(N, n_);
      DARABONBA_PTR_TO_JSON(PresencePenalty, presencePenalty_);
      DARABONBA_PTR_TO_JSON(Seed, seed_);
      DARABONBA_PTR_TO_JSON(Stop, stop_);
      DARABONBA_PTR_TO_JSON(Temperature, temperature_);
      DARABONBA_PTR_TO_JSON(Tools, tools_);
      DARABONBA_PTR_TO_JSON(TopP, topP_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamRequestModelParams& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxTokens, maxTokens_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(N, n_);
      DARABONBA_PTR_FROM_JSON(PresencePenalty, presencePenalty_);
      DARABONBA_PTR_FROM_JSON(Seed, seed_);
      DARABONBA_PTR_FROM_JSON(Stop, stop_);
      DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(Tools, tools_);
      DARABONBA_PTR_FROM_JSON(TopP, topP_);
    };
    ChatWithKnowledgeBaseStreamRequestModelParams() = default ;
    ChatWithKnowledgeBaseStreamRequestModelParams(const ChatWithKnowledgeBaseStreamRequestModelParams &) = default ;
    ChatWithKnowledgeBaseStreamRequestModelParams(ChatWithKnowledgeBaseStreamRequestModelParams &&) = default ;
    ChatWithKnowledgeBaseStreamRequestModelParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamRequestModelParams() = default ;
    ChatWithKnowledgeBaseStreamRequestModelParams& operator=(const ChatWithKnowledgeBaseStreamRequestModelParams &) = default ;
    ChatWithKnowledgeBaseStreamRequestModelParams& operator=(ChatWithKnowledgeBaseStreamRequestModelParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxTokens_ == nullptr
        && return this->messages_ == nullptr && return this->model_ == nullptr && return this->n_ == nullptr && return this->presencePenalty_ == nullptr && return this->seed_ == nullptr
        && return this->stop_ == nullptr && return this->temperature_ == nullptr && return this->tools_ == nullptr && return this->topP_ == nullptr; };
    // maxTokens Field Functions 
    bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
    void deleteMaxTokens() { this->maxTokens_ = nullptr;};
    inline int64_t maxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0L) };
    inline ChatWithKnowledgeBaseStreamRequestModelParams& setMaxTokens(int64_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsMessages>) };
    inline vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsMessages> messages() { DARABONBA_PTR_GET(messages_, vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsMessages>) };
    inline ChatWithKnowledgeBaseStreamRequestModelParams& setMessages(const vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ChatWithKnowledgeBaseStreamRequestModelParams& setMessages(vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ChatWithKnowledgeBaseStreamRequestModelParams& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // n Field Functions 
    bool hasN() const { return this->n_ != nullptr;};
    void deleteN() { this->n_ = nullptr;};
    inline int64_t n() const { DARABONBA_PTR_GET_DEFAULT(n_, 0L) };
    inline ChatWithKnowledgeBaseStreamRequestModelParams& setN(int64_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


    // presencePenalty Field Functions 
    bool hasPresencePenalty() const { return this->presencePenalty_ != nullptr;};
    void deletePresencePenalty() { this->presencePenalty_ = nullptr;};
    inline double presencePenalty() const { DARABONBA_PTR_GET_DEFAULT(presencePenalty_, 0.0) };
    inline ChatWithKnowledgeBaseStreamRequestModelParams& setPresencePenalty(double presencePenalty) { DARABONBA_PTR_SET_VALUE(presencePenalty_, presencePenalty) };


    // seed Field Functions 
    bool hasSeed() const { return this->seed_ != nullptr;};
    void deleteSeed() { this->seed_ = nullptr;};
    inline int64_t seed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0L) };
    inline ChatWithKnowledgeBaseStreamRequestModelParams& setSeed(int64_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline const vector<string> & stop() const { DARABONBA_PTR_GET_CONST(stop_, vector<string>) };
    inline vector<string> stop() { DARABONBA_PTR_GET(stop_, vector<string>) };
    inline ChatWithKnowledgeBaseStreamRequestModelParams& setStop(const vector<string> & stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };
    inline ChatWithKnowledgeBaseStreamRequestModelParams& setStop(vector<string> && stop) { DARABONBA_PTR_SET_RVALUE(stop_, stop) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline double temperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline ChatWithKnowledgeBaseStreamRequestModelParams& setTemperature(double temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsTools> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsTools>) };
    inline vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsTools> tools() { DARABONBA_PTR_GET(tools_, vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsTools>) };
    inline ChatWithKnowledgeBaseStreamRequestModelParams& setTools(const vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsTools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline ChatWithKnowledgeBaseStreamRequestModelParams& setTools(vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsTools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline double topP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline ChatWithKnowledgeBaseStreamRequestModelParams& setTopP(double topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


  protected:
    // Maximum number of tokens to generate.
    std::shared_ptr<int64_t> maxTokens_ = nullptr;
    // Message list.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsMessages>> messages_ = nullptr;
    // The model name. See [Model Studio Document](https://help.aliyun.com/zh/model-studio/compatibility-of-openai-with-dashscope?spm=openapi-amp.newDocPublishment.0.0.257c281fH8TtM8\\&scm=20140722.H_2833609._.OR_help-T_cn~zh-V_1#eadfc13038jd5) for the available models.
    // 
    // This parameter is required.
    std::shared_ptr<string> model_ = nullptr;
    // The number of candidate responses to generate.
    std::shared_ptr<int64_t> n_ = nullptr;
    // Presence penalty coefficient (-2.0 to 2.0).
    std::shared_ptr<double> presencePenalty_ = nullptr;
    // The random seed.
    std::shared_ptr<int64_t> seed_ = nullptr;
    // Stop words.
    std::shared_ptr<vector<string>> stop_ = nullptr;
    // Sampling temperature (0~2).
    std::shared_ptr<double> temperature_ = nullptr;
    // Tools.
    std::shared_ptr<vector<Models::ChatWithKnowledgeBaseStreamRequestModelParamsTools>> tools_ = nullptr;
    // Top-p (nucleus) sampling threshold (0–1).
    std::shared_ptr<double> topP_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
