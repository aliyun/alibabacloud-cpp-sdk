// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESSHKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESSHKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSshKeyResponseBodySshKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateSshKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSshKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sshKey, sshKey_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSshKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sshKey, sshKey_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateSshKeyResponseBody() = default ;
    CreateSshKeyResponseBody(const CreateSshKeyResponseBody &) = default ;
    CreateSshKeyResponseBody(CreateSshKeyResponseBody &&) = default ;
    CreateSshKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSshKeyResponseBody() = default ;
    CreateSshKeyResponseBody& operator=(const CreateSshKeyResponseBody &) = default ;
    CreateSshKeyResponseBody& operator=(CreateSshKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->sshKey_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateSshKeyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateSshKeyResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSshKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sshKey Field Functions 
    bool hasSshKey() const { return this->sshKey_ != nullptr;};
    void deleteSshKey() { this->sshKey_ = nullptr;};
    inline const CreateSshKeyResponseBodySshKey & sshKey() const { DARABONBA_PTR_GET_CONST(sshKey_, CreateSshKeyResponseBodySshKey) };
    inline CreateSshKeyResponseBodySshKey sshKey() { DARABONBA_PTR_GET(sshKey_, CreateSshKeyResponseBodySshKey) };
    inline CreateSshKeyResponseBody& setSshKey(const CreateSshKeyResponseBodySshKey & sshKey) { DARABONBA_PTR_SET_VALUE(sshKey_, sshKey) };
    inline CreateSshKeyResponseBody& setSshKey(CreateSshKeyResponseBodySshKey && sshKey) { DARABONBA_PTR_SET_RVALUE(sshKey_, sshKey) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateSshKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<CreateSshKeyResponseBodySshKey> sshKey_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
