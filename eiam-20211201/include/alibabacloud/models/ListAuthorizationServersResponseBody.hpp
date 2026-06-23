// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZATIONSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZATIONSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListAuthorizationServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizationServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationServers, authorizationServers_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizationServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationServers, authorizationServers_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAuthorizationServersResponseBody() = default ;
    ListAuthorizationServersResponseBody(const ListAuthorizationServersResponseBody &) = default ;
    ListAuthorizationServersResponseBody(ListAuthorizationServersResponseBody &&) = default ;
    ListAuthorizationServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizationServersResponseBody() = default ;
    ListAuthorizationServersResponseBody& operator=(const ListAuthorizationServersResponseBody &) = default ;
    ListAuthorizationServersResponseBody& operator=(ListAuthorizationServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorizationServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizationServers& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationServerId, authorizationServerId_);
        DARABONBA_PTR_TO_JSON(AuthorizationServerName, authorizationServerName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreationType, creationType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(IssuerDomain, issuerDomain_);
        DARABONBA_PTR_TO_JSON(IssuerMode, issuerMode_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizationServers& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationServerId, authorizationServerId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationServerName, authorizationServerName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreationType, creationType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(IssuerDomain, issuerDomain_);
        DARABONBA_PTR_FROM_JSON(IssuerMode, issuerMode_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      AuthorizationServers() = default ;
      AuthorizationServers(const AuthorizationServers &) = default ;
      AuthorizationServers(AuthorizationServers &&) = default ;
      AuthorizationServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizationServers() = default ;
      AuthorizationServers& operator=(const AuthorizationServers &) = default ;
      AuthorizationServers& operator=(AuthorizationServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorizationServerId_ == nullptr
        && this->authorizationServerName_ == nullptr && this->createTime_ == nullptr && this->creationType_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr
        && this->issuer_ == nullptr && this->issuerDomain_ == nullptr && this->issuerMode_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // authorizationServerId Field Functions 
      bool hasAuthorizationServerId() const { return this->authorizationServerId_ != nullptr;};
      void deleteAuthorizationServerId() { this->authorizationServerId_ = nullptr;};
      inline string getAuthorizationServerId() const { DARABONBA_PTR_GET_DEFAULT(authorizationServerId_, "") };
      inline AuthorizationServers& setAuthorizationServerId(string authorizationServerId) { DARABONBA_PTR_SET_VALUE(authorizationServerId_, authorizationServerId) };


      // authorizationServerName Field Functions 
      bool hasAuthorizationServerName() const { return this->authorizationServerName_ != nullptr;};
      void deleteAuthorizationServerName() { this->authorizationServerName_ = nullptr;};
      inline string getAuthorizationServerName() const { DARABONBA_PTR_GET_DEFAULT(authorizationServerName_, "") };
      inline AuthorizationServers& setAuthorizationServerName(string authorizationServerName) { DARABONBA_PTR_SET_VALUE(authorizationServerName_, authorizationServerName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline AuthorizationServers& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creationType Field Functions 
      bool hasCreationType() const { return this->creationType_ != nullptr;};
      void deleteCreationType() { this->creationType_ = nullptr;};
      inline string getCreationType() const { DARABONBA_PTR_GET_DEFAULT(creationType_, "") };
      inline AuthorizationServers& setCreationType(string creationType) { DARABONBA_PTR_SET_VALUE(creationType_, creationType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AuthorizationServers& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AuthorizationServers& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline AuthorizationServers& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // issuerDomain Field Functions 
      bool hasIssuerDomain() const { return this->issuerDomain_ != nullptr;};
      void deleteIssuerDomain() { this->issuerDomain_ = nullptr;};
      inline string getIssuerDomain() const { DARABONBA_PTR_GET_DEFAULT(issuerDomain_, "") };
      inline AuthorizationServers& setIssuerDomain(string issuerDomain) { DARABONBA_PTR_SET_VALUE(issuerDomain_, issuerDomain) };


      // issuerMode Field Functions 
      bool hasIssuerMode() const { return this->issuerMode_ != nullptr;};
      void deleteIssuerMode() { this->issuerMode_ = nullptr;};
      inline string getIssuerMode() const { DARABONBA_PTR_GET_DEFAULT(issuerMode_, "") };
      inline AuthorizationServers& setIssuerMode(string issuerMode) { DARABONBA_PTR_SET_VALUE(issuerMode_, issuerMode) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AuthorizationServers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline AuthorizationServers& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The unique identifier of the authorization server.
      shared_ptr<string> authorizationServerId_ {};
      // The name of the authorization server.
      shared_ptr<string> authorizationServerName_ {};
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The creation type.
      shared_ptr<string> creationType_ {};
      // The description of the authorization server.
      shared_ptr<string> description_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The currently active issuer address.
      shared_ptr<string> issuer_ {};
      // The domain name used by the issuer.
      shared_ptr<string> issuerDomain_ {};
      // The issuer mode.
      shared_ptr<string> issuerMode_ {};
      // The status.
      shared_ptr<string> status_ {};
      // The update time.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->authorizationServers_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // authorizationServers Field Functions 
    bool hasAuthorizationServers() const { return this->authorizationServers_ != nullptr;};
    void deleteAuthorizationServers() { this->authorizationServers_ = nullptr;};
    inline const vector<ListAuthorizationServersResponseBody::AuthorizationServers> & getAuthorizationServers() const { DARABONBA_PTR_GET_CONST(authorizationServers_, vector<ListAuthorizationServersResponseBody::AuthorizationServers>) };
    inline vector<ListAuthorizationServersResponseBody::AuthorizationServers> getAuthorizationServers() { DARABONBA_PTR_GET(authorizationServers_, vector<ListAuthorizationServersResponseBody::AuthorizationServers>) };
    inline ListAuthorizationServersResponseBody& setAuthorizationServers(const vector<ListAuthorizationServersResponseBody::AuthorizationServers> & authorizationServers) { DARABONBA_PTR_SET_VALUE(authorizationServers_, authorizationServers) };
    inline ListAuthorizationServersResponseBody& setAuthorizationServers(vector<ListAuthorizationServersResponseBody::AuthorizationServers> && authorizationServers) { DARABONBA_PTR_SET_RVALUE(authorizationServers_, authorizationServers) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAuthorizationServersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAuthorizationServersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizationServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAuthorizationServersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of authorization servers.
    shared_ptr<vector<ListAuthorizationServersResponseBody::AuthorizationServers>> authorizationServers_ {};
    // The number of entries per page for a paged query.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token returned in this call.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of authorization servers.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
