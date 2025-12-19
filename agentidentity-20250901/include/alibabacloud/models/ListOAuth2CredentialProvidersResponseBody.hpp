// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOAUTH2CREDENTIALPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOAUTH2CREDENTIALPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListOAuth2CredentialProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOAuth2CredentialProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OAuth2CredentialProviders, OAuth2CredentialProviders_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOAuth2CredentialProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OAuth2CredentialProviders, OAuth2CredentialProviders_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOAuth2CredentialProvidersResponseBody() = default ;
    ListOAuth2CredentialProvidersResponseBody(const ListOAuth2CredentialProvidersResponseBody &) = default ;
    ListOAuth2CredentialProvidersResponseBody(ListOAuth2CredentialProvidersResponseBody &&) = default ;
    ListOAuth2CredentialProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOAuth2CredentialProvidersResponseBody() = default ;
    ListOAuth2CredentialProvidersResponseBody& operator=(const ListOAuth2CredentialProvidersResponseBody &) = default ;
    ListOAuth2CredentialProvidersResponseBody& operator=(ListOAuth2CredentialProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->OAuth2CredentialProviders_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOAuth2CredentialProvidersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOAuth2CredentialProvidersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // OAuth2CredentialProviders Field Functions 
    bool hasOAuth2CredentialProviders() const { return this->OAuth2CredentialProviders_ != nullptr;};
    void deleteOAuth2CredentialProviders() { this->OAuth2CredentialProviders_ = nullptr;};
    inline const vector<ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders> & OAuth2CredentialProviders() const { DARABONBA_PTR_GET_CONST(OAuth2CredentialProviders_, vector<ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders>) };
    inline vector<ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders> OAuth2CredentialProviders() { DARABONBA_PTR_GET(OAuth2CredentialProviders_, vector<ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders>) };
    inline ListOAuth2CredentialProvidersResponseBody& setOAuth2CredentialProviders(const vector<ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders> & OAuth2CredentialProviders) { DARABONBA_PTR_SET_VALUE(OAuth2CredentialProviders_, OAuth2CredentialProviders) };
    inline ListOAuth2CredentialProvidersResponseBody& setOAuth2CredentialProviders(vector<ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders> && OAuth2CredentialProviders) { DARABONBA_PTR_SET_RVALUE(OAuth2CredentialProviders_, OAuth2CredentialProviders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOAuth2CredentialProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOAuth2CredentialProvidersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ListOAuth2CredentialProvidersResponseBodyOAuth2CredentialProviders>> OAuth2CredentialProviders_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
