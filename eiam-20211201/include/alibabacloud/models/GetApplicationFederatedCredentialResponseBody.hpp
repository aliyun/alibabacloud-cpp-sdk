// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONFEDERATEDCREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONFEDERATEDCREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredential.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationFederatedCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationFederatedCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredential, applicationFederatedCredential_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationFederatedCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredential, applicationFederatedCredential_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationFederatedCredentialResponseBody() = default ;
    GetApplicationFederatedCredentialResponseBody(const GetApplicationFederatedCredentialResponseBody &) = default ;
    GetApplicationFederatedCredentialResponseBody(GetApplicationFederatedCredentialResponseBody &&) = default ;
    GetApplicationFederatedCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationFederatedCredentialResponseBody() = default ;
    GetApplicationFederatedCredentialResponseBody& operator=(const GetApplicationFederatedCredentialResponseBody &) = default ;
    GetApplicationFederatedCredentialResponseBody& operator=(GetApplicationFederatedCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationFederatedCredential_ == nullptr
        && return this->requestId_ == nullptr; };
    // applicationFederatedCredential Field Functions 
    bool hasApplicationFederatedCredential() const { return this->applicationFederatedCredential_ != nullptr;};
    void deleteApplicationFederatedCredential() { this->applicationFederatedCredential_ = nullptr;};
    inline const GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredential & applicationFederatedCredential() const { DARABONBA_PTR_GET_CONST(applicationFederatedCredential_, GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredential) };
    inline GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredential applicationFederatedCredential() { DARABONBA_PTR_GET(applicationFederatedCredential_, GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredential) };
    inline GetApplicationFederatedCredentialResponseBody& setApplicationFederatedCredential(const GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredential & applicationFederatedCredential) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredential_, applicationFederatedCredential) };
    inline GetApplicationFederatedCredentialResponseBody& setApplicationFederatedCredential(GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredential && applicationFederatedCredential) { DARABONBA_PTR_SET_RVALUE(applicationFederatedCredential_, applicationFederatedCredential) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationFederatedCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredential> applicationFederatedCredential_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
