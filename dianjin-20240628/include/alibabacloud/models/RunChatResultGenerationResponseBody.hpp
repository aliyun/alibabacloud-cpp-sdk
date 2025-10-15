// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunChatResultGenerationResponseBodyChoices.hpp>
#include <alibabacloud/models/RunChatResultGenerationResponseBodyUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunChatResultGenerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunChatResultGenerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(choices, choices_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunChatResultGenerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(choices, choices_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunChatResultGenerationResponseBody() = default ;
    RunChatResultGenerationResponseBody(const RunChatResultGenerationResponseBody &) = default ;
    RunChatResultGenerationResponseBody(RunChatResultGenerationResponseBody &&) = default ;
    RunChatResultGenerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunChatResultGenerationResponseBody() = default ;
    RunChatResultGenerationResponseBody& operator=(const RunChatResultGenerationResponseBody &) = default ;
    RunChatResultGenerationResponseBody& operator=(RunChatResultGenerationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->choices_ == nullptr
        && return this->created_ == nullptr && return this->id_ == nullptr && return this->modelId_ == nullptr && return this->requestId_ == nullptr && return this->time_ == nullptr
        && return this->totalTokens_ == nullptr && return this->usage_ == nullptr; };
    // choices Field Functions 
    bool hasChoices() const { return this->choices_ != nullptr;};
    void deleteChoices() { this->choices_ = nullptr;};
    inline const vector<RunChatResultGenerationResponseBodyChoices> & choices() const { DARABONBA_PTR_GET_CONST(choices_, vector<RunChatResultGenerationResponseBodyChoices>) };
    inline vector<RunChatResultGenerationResponseBodyChoices> choices() { DARABONBA_PTR_GET(choices_, vector<RunChatResultGenerationResponseBodyChoices>) };
    inline RunChatResultGenerationResponseBody& setChoices(const vector<RunChatResultGenerationResponseBodyChoices> & choices) { DARABONBA_PTR_SET_VALUE(choices_, choices) };
    inline RunChatResultGenerationResponseBody& setChoices(vector<RunChatResultGenerationResponseBodyChoices> && choices) { DARABONBA_PTR_SET_RVALUE(choices_, choices) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int64_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
    inline RunChatResultGenerationResponseBody& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline RunChatResultGenerationResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunChatResultGenerationResponseBody& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunChatResultGenerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline RunChatResultGenerationResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int32_t totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
    inline RunChatResultGenerationResponseBody& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const RunChatResultGenerationResponseBodyUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, RunChatResultGenerationResponseBodyUsage) };
    inline RunChatResultGenerationResponseBodyUsage usage() { DARABONBA_PTR_GET(usage_, RunChatResultGenerationResponseBodyUsage) };
    inline RunChatResultGenerationResponseBody& setUsage(const RunChatResultGenerationResponseBodyUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunChatResultGenerationResponseBody& setUsage(RunChatResultGenerationResponseBodyUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<vector<RunChatResultGenerationResponseBodyChoices>> choices_ = nullptr;
    std::shared_ptr<int64_t> created_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<int32_t> totalTokens_ = nullptr;
    std::shared_ptr<RunChatResultGenerationResponseBodyUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
