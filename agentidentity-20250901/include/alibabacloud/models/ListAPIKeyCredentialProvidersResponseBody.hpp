// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIKEYCREDENTIALPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIKEYCREDENTIALPROVIDERSRESPONSEBODY_HPP_
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
  class ListAPIKeyCredentialProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAPIKeyCredentialProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(APIKeyCredentialProviders, APIKeyCredentialProviders_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAPIKeyCredentialProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(APIKeyCredentialProviders, APIKeyCredentialProviders_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAPIKeyCredentialProvidersResponseBody() = default ;
    ListAPIKeyCredentialProvidersResponseBody(const ListAPIKeyCredentialProvidersResponseBody &) = default ;
    ListAPIKeyCredentialProvidersResponseBody(ListAPIKeyCredentialProvidersResponseBody &&) = default ;
    ListAPIKeyCredentialProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAPIKeyCredentialProvidersResponseBody() = default ;
    ListAPIKeyCredentialProvidersResponseBody& operator=(const ListAPIKeyCredentialProvidersResponseBody &) = default ;
    ListAPIKeyCredentialProvidersResponseBody& operator=(ListAPIKeyCredentialProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class APIKeyCredentialProviders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const APIKeyCredentialProviders& obj) { 
        DARABONBA_PTR_TO_JSON(APIKeyCredentialProviderName, APIKeyCredentialProviderName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CredentialProviderArn, credentialProviderArn_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(TokenVaultName, tokenVaultName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, APIKeyCredentialProviders& obj) { 
        DARABONBA_PTR_FROM_JSON(APIKeyCredentialProviderName, APIKeyCredentialProviderName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CredentialProviderArn, credentialProviderArn_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(TokenVaultName, tokenVaultName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      APIKeyCredentialProviders() = default ;
      APIKeyCredentialProviders(const APIKeyCredentialProviders &) = default ;
      APIKeyCredentialProviders(APIKeyCredentialProviders &&) = default ;
      APIKeyCredentialProviders(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~APIKeyCredentialProviders() = default ;
      APIKeyCredentialProviders& operator=(const APIKeyCredentialProviders &) = default ;
      APIKeyCredentialProviders& operator=(APIKeyCredentialProviders &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->APIKeyCredentialProviderName_ == nullptr
        && this->createTime_ == nullptr && this->credentialProviderArn_ == nullptr && this->description_ == nullptr && this->tokenVaultName_ == nullptr && this->updateTime_ == nullptr; };
      // APIKeyCredentialProviderName Field Functions 
      bool hasAPIKeyCredentialProviderName() const { return this->APIKeyCredentialProviderName_ != nullptr;};
      void deleteAPIKeyCredentialProviderName() { this->APIKeyCredentialProviderName_ = nullptr;};
      inline string getAPIKeyCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(APIKeyCredentialProviderName_, "") };
      inline APIKeyCredentialProviders& setAPIKeyCredentialProviderName(string APIKeyCredentialProviderName) { DARABONBA_PTR_SET_VALUE(APIKeyCredentialProviderName_, APIKeyCredentialProviderName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline APIKeyCredentialProviders& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // credentialProviderArn Field Functions 
      bool hasCredentialProviderArn() const { return this->credentialProviderArn_ != nullptr;};
      void deleteCredentialProviderArn() { this->credentialProviderArn_ = nullptr;};
      inline string getCredentialProviderArn() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderArn_, "") };
      inline APIKeyCredentialProviders& setCredentialProviderArn(string credentialProviderArn) { DARABONBA_PTR_SET_VALUE(credentialProviderArn_, credentialProviderArn) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline APIKeyCredentialProviders& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // tokenVaultName Field Functions 
      bool hasTokenVaultName() const { return this->tokenVaultName_ != nullptr;};
      void deleteTokenVaultName() { this->tokenVaultName_ = nullptr;};
      inline string getTokenVaultName() const { DARABONBA_PTR_GET_DEFAULT(tokenVaultName_, "") };
      inline APIKeyCredentialProviders& setTokenVaultName(string tokenVaultName) { DARABONBA_PTR_SET_VALUE(tokenVaultName_, tokenVaultName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline APIKeyCredentialProviders& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> APIKeyCredentialProviderName_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> credentialProviderArn_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> tokenVaultName_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->APIKeyCredentialProviders_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // APIKeyCredentialProviders Field Functions 
    bool hasAPIKeyCredentialProviders() const { return this->APIKeyCredentialProviders_ != nullptr;};
    void deleteAPIKeyCredentialProviders() { this->APIKeyCredentialProviders_ = nullptr;};
    inline const vector<ListAPIKeyCredentialProvidersResponseBody::APIKeyCredentialProviders> & getAPIKeyCredentialProviders() const { DARABONBA_PTR_GET_CONST(APIKeyCredentialProviders_, vector<ListAPIKeyCredentialProvidersResponseBody::APIKeyCredentialProviders>) };
    inline vector<ListAPIKeyCredentialProvidersResponseBody::APIKeyCredentialProviders> getAPIKeyCredentialProviders() { DARABONBA_PTR_GET(APIKeyCredentialProviders_, vector<ListAPIKeyCredentialProvidersResponseBody::APIKeyCredentialProviders>) };
    inline ListAPIKeyCredentialProvidersResponseBody& setAPIKeyCredentialProviders(const vector<ListAPIKeyCredentialProvidersResponseBody::APIKeyCredentialProviders> & aPIKeyCredentialProviders) { DARABONBA_PTR_SET_VALUE(APIKeyCredentialProviders_, aPIKeyCredentialProviders) };
    inline ListAPIKeyCredentialProvidersResponseBody& setAPIKeyCredentialProviders(vector<ListAPIKeyCredentialProvidersResponseBody::APIKeyCredentialProviders> && aPIKeyCredentialProviders) { DARABONBA_PTR_SET_RVALUE(APIKeyCredentialProviders_, aPIKeyCredentialProviders) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAPIKeyCredentialProvidersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAPIKeyCredentialProvidersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAPIKeyCredentialProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAPIKeyCredentialProvidersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListAPIKeyCredentialProvidersResponseBody::APIKeyCredentialProviders>> APIKeyCredentialProviders_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
