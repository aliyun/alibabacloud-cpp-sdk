// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListIdentityProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdentityProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviders, identityProviders_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdentityProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviders, identityProviders_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIdentityProvidersResponseBody() = default ;
    ListIdentityProvidersResponseBody(const ListIdentityProvidersResponseBody &) = default ;
    ListIdentityProvidersResponseBody(ListIdentityProvidersResponseBody &&) = default ;
    ListIdentityProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdentityProvidersResponseBody() = default ;
    ListIdentityProvidersResponseBody& operator=(const ListIdentityProvidersResponseBody &) = default ;
    ListIdentityProvidersResponseBody& operator=(ListIdentityProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IdentityProviders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdentityProviders& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedAudience, allowedAudience_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DiscoveryURL, discoveryURL_);
        DARABONBA_PTR_TO_JSON(IdentityProviderArn, identityProviderArn_);
        DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, IdentityProviders& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedAudience, allowedAudience_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DiscoveryURL, discoveryURL_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderArn, identityProviderArn_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      IdentityProviders() = default ;
      IdentityProviders(const IdentityProviders &) = default ;
      IdentityProviders(IdentityProviders &&) = default ;
      IdentityProviders(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdentityProviders() = default ;
      IdentityProviders& operator=(const IdentityProviders &) = default ;
      IdentityProviders& operator=(IdentityProviders &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowedAudience_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->discoveryURL_ == nullptr && this->identityProviderArn_ == nullptr && this->identityProviderName_ == nullptr
        && this->updateTime_ == nullptr; };
      // allowedAudience Field Functions 
      bool hasAllowedAudience() const { return this->allowedAudience_ != nullptr;};
      void deleteAllowedAudience() { this->allowedAudience_ = nullptr;};
      inline const vector<string> & getAllowedAudience() const { DARABONBA_PTR_GET_CONST(allowedAudience_, vector<string>) };
      inline vector<string> getAllowedAudience() { DARABONBA_PTR_GET(allowedAudience_, vector<string>) };
      inline IdentityProviders& setAllowedAudience(const vector<string> & allowedAudience) { DARABONBA_PTR_SET_VALUE(allowedAudience_, allowedAudience) };
      inline IdentityProviders& setAllowedAudience(vector<string> && allowedAudience) { DARABONBA_PTR_SET_RVALUE(allowedAudience_, allowedAudience) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline IdentityProviders& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline IdentityProviders& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // discoveryURL Field Functions 
      bool hasDiscoveryURL() const { return this->discoveryURL_ != nullptr;};
      void deleteDiscoveryURL() { this->discoveryURL_ = nullptr;};
      inline string getDiscoveryURL() const { DARABONBA_PTR_GET_DEFAULT(discoveryURL_, "") };
      inline IdentityProviders& setDiscoveryURL(string discoveryURL) { DARABONBA_PTR_SET_VALUE(discoveryURL_, discoveryURL) };


      // identityProviderArn Field Functions 
      bool hasIdentityProviderArn() const { return this->identityProviderArn_ != nullptr;};
      void deleteIdentityProviderArn() { this->identityProviderArn_ = nullptr;};
      inline string getIdentityProviderArn() const { DARABONBA_PTR_GET_DEFAULT(identityProviderArn_, "") };
      inline IdentityProviders& setIdentityProviderArn(string identityProviderArn) { DARABONBA_PTR_SET_VALUE(identityProviderArn_, identityProviderArn) };


      // identityProviderName Field Functions 
      bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
      void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
      inline string getIdentityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
      inline IdentityProviders& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline IdentityProviders& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<vector<string>> allowedAudience_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> discoveryURL_ {};
      shared_ptr<string> identityProviderArn_ {};
      shared_ptr<string> identityProviderName_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->identityProviders_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // identityProviders Field Functions 
    bool hasIdentityProviders() const { return this->identityProviders_ != nullptr;};
    void deleteIdentityProviders() { this->identityProviders_ = nullptr;};
    inline const vector<ListIdentityProvidersResponseBody::IdentityProviders> & getIdentityProviders() const { DARABONBA_PTR_GET_CONST(identityProviders_, vector<ListIdentityProvidersResponseBody::IdentityProviders>) };
    inline vector<ListIdentityProvidersResponseBody::IdentityProviders> getIdentityProviders() { DARABONBA_PTR_GET(identityProviders_, vector<ListIdentityProvidersResponseBody::IdentityProviders>) };
    inline ListIdentityProvidersResponseBody& setIdentityProviders(const vector<ListIdentityProvidersResponseBody::IdentityProviders> & identityProviders) { DARABONBA_PTR_SET_VALUE(identityProviders_, identityProviders) };
    inline ListIdentityProvidersResponseBody& setIdentityProviders(vector<ListIdentityProvidersResponseBody::IdentityProviders> && identityProviders) { DARABONBA_PTR_SET_RVALUE(identityProviders_, identityProviders) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIdentityProvidersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIdentityProvidersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIdentityProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListIdentityProvidersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListIdentityProvidersResponseBody::IdentityProviders>> identityProviders_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
