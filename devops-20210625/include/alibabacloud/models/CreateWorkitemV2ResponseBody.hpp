// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateWorkitemV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkitemV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(workitemIdentifier, workitemIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkitemV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(workitemIdentifier, workitemIdentifier_);
    };
    CreateWorkitemV2ResponseBody() = default ;
    CreateWorkitemV2ResponseBody(const CreateWorkitemV2ResponseBody &) = default ;
    CreateWorkitemV2ResponseBody(CreateWorkitemV2ResponseBody &&) = default ;
    CreateWorkitemV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkitemV2ResponseBody() = default ;
    CreateWorkitemV2ResponseBody& operator=(const CreateWorkitemV2ResponseBody &) = default ;
    CreateWorkitemV2ResponseBody& operator=(CreateWorkitemV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->workitemIdentifier_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateWorkitemV2ResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateWorkitemV2ResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWorkitemV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreateWorkitemV2ResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workitemIdentifier Field Functions 
    bool hasWorkitemIdentifier() const { return this->workitemIdentifier_ != nullptr;};
    void deleteWorkitemIdentifier() { this->workitemIdentifier_ = nullptr;};
    inline string workitemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemIdentifier_, "") };
    inline CreateWorkitemV2ResponseBody& setWorkitemIdentifier(string workitemIdentifier) { DARABONBA_PTR_SET_VALUE(workitemIdentifier_, workitemIdentifier) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
    std::shared_ptr<string> workitemIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
