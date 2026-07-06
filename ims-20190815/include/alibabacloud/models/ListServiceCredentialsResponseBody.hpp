// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECREDENTIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECREDENTIALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListServiceCredentialsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceCredentialsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceCredentials, serviceCredentials_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceCredentialsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceCredentials, serviceCredentials_);
    };
    ListServiceCredentialsResponseBody() = default ;
    ListServiceCredentialsResponseBody(const ListServiceCredentialsResponseBody &) = default ;
    ListServiceCredentialsResponseBody(ListServiceCredentialsResponseBody &&) = default ;
    ListServiceCredentialsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceCredentialsResponseBody() = default ;
    ListServiceCredentialsResponseBody& operator=(const ListServiceCredentialsResponseBody &) = default ;
    ListServiceCredentialsResponseBody& operator=(ListServiceCredentialsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceCredentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceCredentials& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(ServiceCredentialId, serviceCredentialId_);
        DARABONBA_PTR_TO_JSON(ServiceCredentialName, serviceCredentialName_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceCredentials& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(ServiceCredentialId, serviceCredentialId_);
        DARABONBA_PTR_FROM_JSON(ServiceCredentialName, serviceCredentialName_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
      };
      ServiceCredentials() = default ;
      ServiceCredentials(const ServiceCredentials &) = default ;
      ServiceCredentials(ServiceCredentials &&) = default ;
      ServiceCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceCredentials() = default ;
      ServiceCredentials& operator=(const ServiceCredentials &) = default ;
      ServiceCredentials& operator=(ServiceCredentials &&) = default ;
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
      inline ServiceCredentials& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline string getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
      inline ServiceCredentials& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // serviceCredentialId Field Functions 
      bool hasServiceCredentialId() const { return this->serviceCredentialId_ != nullptr;};
      void deleteServiceCredentialId() { this->serviceCredentialId_ = nullptr;};
      inline string getServiceCredentialId() const { DARABONBA_PTR_GET_DEFAULT(serviceCredentialId_, "") };
      inline ServiceCredentials& setServiceCredentialId(string serviceCredentialId) { DARABONBA_PTR_SET_VALUE(serviceCredentialId_, serviceCredentialId) };


      // serviceCredentialName Field Functions 
      bool hasServiceCredentialName() const { return this->serviceCredentialName_ != nullptr;};
      void deleteServiceCredentialName() { this->serviceCredentialName_ = nullptr;};
      inline string getServiceCredentialName() const { DARABONBA_PTR_GET_DEFAULT(serviceCredentialName_, "") };
      inline ServiceCredentials& setServiceCredentialName(string serviceCredentialName) { DARABONBA_PTR_SET_VALUE(serviceCredentialName_, serviceCredentialName) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline ServiceCredentials& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ServiceCredentials& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userPrincipalName Field Functions 
      bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
      void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
      inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
      inline ServiceCredentials& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


    protected:
      // The time when the service credential was created.
      shared_ptr<string> createTime_ {};
      // The expiration time. This field is not returned for permanent service credentials.
      shared_ptr<string> expirationTime_ {};
      // The ID of the service credential.
      shared_ptr<string> serviceCredentialId_ {};
      // The name of the service credential.
      shared_ptr<string> serviceCredentialName_ {};
      // The service name of the Alibaba Cloud service.
      shared_ptr<string> serviceName_ {};
      // The status of the service credential.
      shared_ptr<string> status_ {};
      // The logon name of the Resource Access Management (RAM) user.
      shared_ptr<string> userPrincipalName_ {};
    };

    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->serviceCredentials_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListServiceCredentialsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceCredentialsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceCredentialsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceCredentialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceCredentials Field Functions 
    bool hasServiceCredentials() const { return this->serviceCredentials_ != nullptr;};
    void deleteServiceCredentials() { this->serviceCredentials_ = nullptr;};
    inline const vector<ListServiceCredentialsResponseBody::ServiceCredentials> & getServiceCredentials() const { DARABONBA_PTR_GET_CONST(serviceCredentials_, vector<ListServiceCredentialsResponseBody::ServiceCredentials>) };
    inline vector<ListServiceCredentialsResponseBody::ServiceCredentials> getServiceCredentials() { DARABONBA_PTR_GET(serviceCredentials_, vector<ListServiceCredentialsResponseBody::ServiceCredentials>) };
    inline ListServiceCredentialsResponseBody& setServiceCredentials(const vector<ListServiceCredentialsResponseBody::ServiceCredentials> & serviceCredentials) { DARABONBA_PTR_SET_VALUE(serviceCredentials_, serviceCredentials) };
    inline ListServiceCredentialsResponseBody& setServiceCredentials(vector<ListServiceCredentialsResponseBody::ServiceCredentials> && serviceCredentials) { DARABONBA_PTR_SET_RVALUE(serviceCredentials_, serviceCredentials) };


  protected:
    // Indicates whether there is a next page of results.
    shared_ptr<bool> isTruncated_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of service credentials.
    shared_ptr<vector<ListServiceCredentialsResponseBody::ServiceCredentials>> serviceCredentials_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
