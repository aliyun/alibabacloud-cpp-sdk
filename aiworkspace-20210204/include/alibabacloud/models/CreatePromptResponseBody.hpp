// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreatePromptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePromptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PromptId, promptId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePromptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PromptId, promptId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePromptResponseBody() = default ;
    CreatePromptResponseBody(const CreatePromptResponseBody &) = default ;
    CreatePromptResponseBody(CreatePromptResponseBody &&) = default ;
    CreatePromptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePromptResponseBody() = default ;
    CreatePromptResponseBody& operator=(const CreatePromptResponseBody &) = default ;
    CreatePromptResponseBody& operator=(CreatePromptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->promptId_ == nullptr
        && this->requestId_ == nullptr; };
    // promptId Field Functions 
    bool hasPromptId() const { return this->promptId_ != nullptr;};
    void deletePromptId() { this->promptId_ = nullptr;};
    inline string getPromptId() const { DARABONBA_PTR_GET_DEFAULT(promptId_, "") };
    inline CreatePromptResponseBody& setPromptId(string promptId) { DARABONBA_PTR_SET_VALUE(promptId_, promptId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePromptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The prompt ID.
    shared_ptr<string> promptId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
