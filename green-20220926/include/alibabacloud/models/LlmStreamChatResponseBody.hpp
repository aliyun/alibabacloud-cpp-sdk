// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSTREAMCHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LLMSTREAMCHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LlmStreamChatResponseBodyChoices.hpp>
#include <alibabacloud/models/LlmStreamChatResponseBodyError.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class LlmStreamChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmStreamChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Choices, choices_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Object, object_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemFingerprint, systemFingerprint_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, LlmStreamChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Choices, choices_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Object, object_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemFingerprint, systemFingerprint_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    LlmStreamChatResponseBody() = default ;
    LlmStreamChatResponseBody(const LlmStreamChatResponseBody &) = default ;
    LlmStreamChatResponseBody(LlmStreamChatResponseBody &&) = default ;
    LlmStreamChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmStreamChatResponseBody() = default ;
    LlmStreamChatResponseBody& operator=(const LlmStreamChatResponseBody &) = default ;
    LlmStreamChatResponseBody& operator=(LlmStreamChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->choices_ == nullptr
        && return this->created_ == nullptr && return this->error_ == nullptr && return this->id_ == nullptr && return this->model_ == nullptr && return this->object_ == nullptr
        && return this->requestId_ == nullptr && return this->systemFingerprint_ == nullptr && return this->usage_ == nullptr; };
    // choices Field Functions 
    bool hasChoices() const { return this->choices_ != nullptr;};
    void deleteChoices() { this->choices_ = nullptr;};
    inline const vector<LlmStreamChatResponseBodyChoices> & choices() const { DARABONBA_PTR_GET_CONST(choices_, vector<LlmStreamChatResponseBodyChoices>) };
    inline vector<LlmStreamChatResponseBodyChoices> choices() { DARABONBA_PTR_GET(choices_, vector<LlmStreamChatResponseBodyChoices>) };
    inline LlmStreamChatResponseBody& setChoices(const vector<LlmStreamChatResponseBodyChoices> & choices) { DARABONBA_PTR_SET_VALUE(choices_, choices) };
    inline LlmStreamChatResponseBody& setChoices(vector<LlmStreamChatResponseBodyChoices> && choices) { DARABONBA_PTR_SET_RVALUE(choices_, choices) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int64_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
    inline LlmStreamChatResponseBody& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const LlmStreamChatResponseBodyError & error() const { DARABONBA_PTR_GET_CONST(error_, LlmStreamChatResponseBodyError) };
    inline LlmStreamChatResponseBodyError error() { DARABONBA_PTR_GET(error_, LlmStreamChatResponseBodyError) };
    inline LlmStreamChatResponseBody& setError(const LlmStreamChatResponseBodyError & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline LlmStreamChatResponseBody& setError(LlmStreamChatResponseBodyError && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline LlmStreamChatResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline LlmStreamChatResponseBody& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string object() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline LlmStreamChatResponseBody& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LlmStreamChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemFingerprint Field Functions 
    bool hasSystemFingerprint() const { return this->systemFingerprint_ != nullptr;};
    void deleteSystemFingerprint() { this->systemFingerprint_ = nullptr;};
    inline string systemFingerprint() const { DARABONBA_PTR_GET_DEFAULT(systemFingerprint_, "") };
    inline LlmStreamChatResponseBody& setSystemFingerprint(string systemFingerprint) { DARABONBA_PTR_SET_VALUE(systemFingerprint_, systemFingerprint) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline LlmStreamChatResponseBody& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // List of model generation results
    std::shared_ptr<vector<LlmStreamChatResponseBodyChoices>> choices_ = nullptr;
    // Timestamp of session creation
    std::shared_ptr<int64_t> created_ = nullptr;
    // Streaming response error information content
    std::shared_ptr<LlmStreamChatResponseBodyError> error_ = nullptr;
    // Unique ID for this session
    std::shared_ptr<string> id_ = nullptr;
    // Model identifier
    std::shared_ptr<string> model_ = nullptr;
    // Response type
    std::shared_ptr<string> object_ = nullptr;
    // Unique request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // System fingerprint
    std::shared_ptr<string> systemFingerprint_ = nullptr;
    // Token usage
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
