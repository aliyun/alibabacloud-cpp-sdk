// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKAGESTORAGECREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPACKAGESTORAGECREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPackageStorageCredentialResponseBodyCredential.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetPackageStorageCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackageStorageCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Credential, credential_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPackageStorageCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Credential, credential_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPackageStorageCredentialResponseBody() = default ;
    GetPackageStorageCredentialResponseBody(const GetPackageStorageCredentialResponseBody &) = default ;
    GetPackageStorageCredentialResponseBody(GetPackageStorageCredentialResponseBody &&) = default ;
    GetPackageStorageCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackageStorageCredentialResponseBody() = default ;
    GetPackageStorageCredentialResponseBody& operator=(const GetPackageStorageCredentialResponseBody &) = default ;
    GetPackageStorageCredentialResponseBody& operator=(GetPackageStorageCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->credential_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetPackageStorageCredentialResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline const GetPackageStorageCredentialResponseBodyCredential & credential() const { DARABONBA_PTR_GET_CONST(credential_, GetPackageStorageCredentialResponseBodyCredential) };
    inline GetPackageStorageCredentialResponseBodyCredential credential() { DARABONBA_PTR_GET(credential_, GetPackageStorageCredentialResponseBodyCredential) };
    inline GetPackageStorageCredentialResponseBody& setCredential(const GetPackageStorageCredentialResponseBodyCredential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
    inline GetPackageStorageCredentialResponseBody& setCredential(GetPackageStorageCredentialResponseBodyCredential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPackageStorageCredentialResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPackageStorageCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The STS credential.
    std::shared_ptr<GetPackageStorageCredentialResponseBodyCredential> credential_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
