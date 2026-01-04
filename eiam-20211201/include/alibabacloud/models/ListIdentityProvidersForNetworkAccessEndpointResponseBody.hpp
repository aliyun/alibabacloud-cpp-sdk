// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSFORNETWORKACCESSENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSFORNETWORKACCESSENDPOINTRESPONSEBODY_HPP_
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
  class ListIdentityProvidersForNetworkAccessEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdentityProvidersForNetworkAccessEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProvidersForNetworkAccessEndpoint, identityProvidersForNetworkAccessEndpoint_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdentityProvidersForNetworkAccessEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProvidersForNetworkAccessEndpoint, identityProvidersForNetworkAccessEndpoint_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIdentityProvidersForNetworkAccessEndpointResponseBody() = default ;
    ListIdentityProvidersForNetworkAccessEndpointResponseBody(const ListIdentityProvidersForNetworkAccessEndpointResponseBody &) = default ;
    ListIdentityProvidersForNetworkAccessEndpointResponseBody(ListIdentityProvidersForNetworkAccessEndpointResponseBody &&) = default ;
    ListIdentityProvidersForNetworkAccessEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdentityProvidersForNetworkAccessEndpointResponseBody() = default ;
    ListIdentityProvidersForNetworkAccessEndpointResponseBody& operator=(const ListIdentityProvidersForNetworkAccessEndpointResponseBody &) = default ;
    ListIdentityProvidersForNetworkAccessEndpointResponseBody& operator=(ListIdentityProvidersForNetworkAccessEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IdentityProvidersForNetworkAccessEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdentityProvidersForNetworkAccessEndpoint& obj) { 
        DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
        DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, IdentityProvidersForNetworkAccessEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      IdentityProvidersForNetworkAccessEndpoint() = default ;
      IdentityProvidersForNetworkAccessEndpoint(const IdentityProvidersForNetworkAccessEndpoint &) = default ;
      IdentityProvidersForNetworkAccessEndpoint(IdentityProvidersForNetworkAccessEndpoint &&) = default ;
      IdentityProvidersForNetworkAccessEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdentityProvidersForNetworkAccessEndpoint() = default ;
      IdentityProvidersForNetworkAccessEndpoint& operator=(const IdentityProvidersForNetworkAccessEndpoint &) = default ;
      IdentityProvidersForNetworkAccessEndpoint& operator=(IdentityProvidersForNetworkAccessEndpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->identityProviderId_ == nullptr
        && this->identityProviderName_ == nullptr && this->instanceId_ == nullptr; };
      // identityProviderId Field Functions 
      bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
      void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
      inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
      inline IdentityProvidersForNetworkAccessEndpoint& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


      // identityProviderName Field Functions 
      bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
      void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
      inline string getIdentityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
      inline IdentityProvidersForNetworkAccessEndpoint& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline IdentityProvidersForNetworkAccessEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // IdP的ID。
      shared_ptr<string> identityProviderId_ {};
      // IdP名称。
      shared_ptr<string> identityProviderName_ {};
      // IDaaS EIAM 实例ID
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->identityProvidersForNetworkAccessEndpoint_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // identityProvidersForNetworkAccessEndpoint Field Functions 
    bool hasIdentityProvidersForNetworkAccessEndpoint() const { return this->identityProvidersForNetworkAccessEndpoint_ != nullptr;};
    void deleteIdentityProvidersForNetworkAccessEndpoint() { this->identityProvidersForNetworkAccessEndpoint_ = nullptr;};
    inline const vector<ListIdentityProvidersForNetworkAccessEndpointResponseBody::IdentityProvidersForNetworkAccessEndpoint> & getIdentityProvidersForNetworkAccessEndpoint() const { DARABONBA_PTR_GET_CONST(identityProvidersForNetworkAccessEndpoint_, vector<ListIdentityProvidersForNetworkAccessEndpointResponseBody::IdentityProvidersForNetworkAccessEndpoint>) };
    inline vector<ListIdentityProvidersForNetworkAccessEndpointResponseBody::IdentityProvidersForNetworkAccessEndpoint> getIdentityProvidersForNetworkAccessEndpoint() { DARABONBA_PTR_GET(identityProvidersForNetworkAccessEndpoint_, vector<ListIdentityProvidersForNetworkAccessEndpointResponseBody::IdentityProvidersForNetworkAccessEndpoint>) };
    inline ListIdentityProvidersForNetworkAccessEndpointResponseBody& setIdentityProvidersForNetworkAccessEndpoint(const vector<ListIdentityProvidersForNetworkAccessEndpointResponseBody::IdentityProvidersForNetworkAccessEndpoint> & identityProvidersForNetworkAccessEndpoint) { DARABONBA_PTR_SET_VALUE(identityProvidersForNetworkAccessEndpoint_, identityProvidersForNetworkAccessEndpoint) };
    inline ListIdentityProvidersForNetworkAccessEndpointResponseBody& setIdentityProvidersForNetworkAccessEndpoint(vector<ListIdentityProvidersForNetworkAccessEndpointResponseBody::IdentityProvidersForNetworkAccessEndpoint> && identityProvidersForNetworkAccessEndpoint) { DARABONBA_PTR_SET_RVALUE(identityProvidersForNetworkAccessEndpoint_, identityProvidersForNetworkAccessEndpoint) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIdentityProvidersForNetworkAccessEndpointResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIdentityProvidersForNetworkAccessEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIdentityProvidersForNetworkAccessEndpointResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListIdentityProvidersForNetworkAccessEndpointResponseBody::IdentityProvidersForNetworkAccessEndpoint>> identityProvidersForNetworkAccessEndpoint_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
