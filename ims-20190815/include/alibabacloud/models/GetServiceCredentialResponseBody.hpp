// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICECREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICECREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetServiceCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceCredential, serviceCredential_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceCredential, serviceCredential_);
    };
    GetServiceCredentialResponseBody() = default ;
    GetServiceCredentialResponseBody(const GetServiceCredentialResponseBody &) = default ;
    GetServiceCredentialResponseBody(GetServiceCredentialResponseBody &&) = default ;
    GetServiceCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceCredentialResponseBody() = default ;
    GetServiceCredentialResponseBody& operator=(const GetServiceCredentialResponseBody &) = default ;
    GetServiceCredentialResponseBody& operator=(GetServiceCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceCredential : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceCredential& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(ServiceCredentialId, serviceCredentialId_);
        DARABONBA_PTR_TO_JSON(ServiceCredentialName, serviceCredentialName_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceCredential& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(ServiceCredentialId, serviceCredentialId_);
        DARABONBA_PTR_FROM_JSON(ServiceCredentialName, serviceCredentialName_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
      };
      ServiceCredential() = default ;
      ServiceCredential(const ServiceCredential &) = default ;
      ServiceCredential(ServiceCredential &&) = default ;
      ServiceCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceCredential() = default ;
      ServiceCredential& operator=(const ServiceCredential &) = default ;
      ServiceCredential& operator=(ServiceCredential &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->expirationTime_ == nullptr && this->serviceCredentialId_ == nullptr && this->serviceCredentialName_ == nullptr && this->serviceName_ == nullptr && this->status_ == nullptr
        && this->userPrincipalName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ServiceCredential& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline string getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
      inline ServiceCredential& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // serviceCredentialId Field Functions 
      bool hasServiceCredentialId() const { return this->serviceCredentialId_ != nullptr;};
      void deleteServiceCredentialId() { this->serviceCredentialId_ = nullptr;};
      inline string getServiceCredentialId() const { DARABONBA_PTR_GET_DEFAULT(serviceCredentialId_, "") };
      inline ServiceCredential& setServiceCredentialId(string serviceCredentialId) { DARABONBA_PTR_SET_VALUE(serviceCredentialId_, serviceCredentialId) };


      // serviceCredentialName Field Functions 
      bool hasServiceCredentialName() const { return this->serviceCredentialName_ != nullptr;};
      void deleteServiceCredentialName() { this->serviceCredentialName_ = nullptr;};
      inline string getServiceCredentialName() const { DARABONBA_PTR_GET_DEFAULT(serviceCredentialName_, "") };
      inline ServiceCredential& setServiceCredentialName(string serviceCredentialName) { DARABONBA_PTR_SET_VALUE(serviceCredentialName_, serviceCredentialName) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline ServiceCredential& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ServiceCredential& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userPrincipalName Field Functions 
      bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
      void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
      inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
      inline ServiceCredential& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


    protected:
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The expiration time. This field is not returned for permanent service credentials.
      shared_ptr<string> expirationTime_ {};
      // The service credential ID.
      shared_ptr<string> serviceCredentialId_ {};
      // The service credential name.
      shared_ptr<string> serviceCredentialName_ {};
      // The Alibaba Cloud service name.
      shared_ptr<string> serviceName_ {};
      // The service credential status.
      shared_ptr<string> status_ {};
      // The logon name of the Resource Access Management (RAM) user.
      shared_ptr<string> userPrincipalName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceCredential_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceCredential Field Functions 
    bool hasServiceCredential() const { return this->serviceCredential_ != nullptr;};
    void deleteServiceCredential() { this->serviceCredential_ = nullptr;};
    inline const GetServiceCredentialResponseBody::ServiceCredential & getServiceCredential() const { DARABONBA_PTR_GET_CONST(serviceCredential_, GetServiceCredentialResponseBody::ServiceCredential) };
    inline GetServiceCredentialResponseBody::ServiceCredential getServiceCredential() { DARABONBA_PTR_GET(serviceCredential_, GetServiceCredentialResponseBody::ServiceCredential) };
    inline GetServiceCredentialResponseBody& setServiceCredential(const GetServiceCredentialResponseBody::ServiceCredential & serviceCredential) { DARABONBA_PTR_SET_VALUE(serviceCredential_, serviceCredential) };
    inline GetServiceCredentialResponseBody& setServiceCredential(GetServiceCredentialResponseBody::ServiceCredential && serviceCredential) { DARABONBA_PTR_SET_RVALUE(serviceCredential_, serviceCredential) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The service credential information.
    shared_ptr<GetServiceCredentialResponseBody::ServiceCredential> serviceCredential_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
