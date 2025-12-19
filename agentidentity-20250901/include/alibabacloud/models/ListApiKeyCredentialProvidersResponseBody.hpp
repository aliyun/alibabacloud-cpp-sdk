// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIKEYCREDENTIALPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIKEYCREDENTIALPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAPIKeyCredentialProvidersResponseBodyAPIKeyCredentialProviders.hpp>
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
    virtual bool empty() const override { return this->APIKeyCredentialProviders_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // APIKeyCredentialProviders Field Functions 
    bool hasAPIKeyCredentialProviders() const { return this->APIKeyCredentialProviders_ != nullptr;};
    void deleteAPIKeyCredentialProviders() { this->APIKeyCredentialProviders_ = nullptr;};
    inline const vector<ListAPIKeyCredentialProvidersResponseBodyAPIKeyCredentialProviders> & APIKeyCredentialProviders() const { DARABONBA_PTR_GET_CONST(APIKeyCredentialProviders_, vector<ListAPIKeyCredentialProvidersResponseBodyAPIKeyCredentialProviders>) };
    inline vector<ListAPIKeyCredentialProvidersResponseBodyAPIKeyCredentialProviders> APIKeyCredentialProviders() { DARABONBA_PTR_GET(APIKeyCredentialProviders_, vector<ListAPIKeyCredentialProvidersResponseBodyAPIKeyCredentialProviders>) };
    inline ListAPIKeyCredentialProvidersResponseBody& setAPIKeyCredentialProviders(const vector<ListAPIKeyCredentialProvidersResponseBodyAPIKeyCredentialProviders> & APIKeyCredentialProviders) { DARABONBA_PTR_SET_VALUE(APIKeyCredentialProviders_, APIKeyCredentialProviders) };
    inline ListAPIKeyCredentialProvidersResponseBody& setAPIKeyCredentialProviders(vector<ListAPIKeyCredentialProvidersResponseBodyAPIKeyCredentialProviders> && APIKeyCredentialProviders) { DARABONBA_PTR_SET_RVALUE(APIKeyCredentialProviders_, APIKeyCredentialProviders) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAPIKeyCredentialProvidersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAPIKeyCredentialProvidersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAPIKeyCredentialProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAPIKeyCredentialProvidersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListAPIKeyCredentialProvidersResponseBodyAPIKeyCredentialProviders>> APIKeyCredentialProviders_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
