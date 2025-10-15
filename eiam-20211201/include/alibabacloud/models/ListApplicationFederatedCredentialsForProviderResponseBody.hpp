// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONFEDERATEDCREDENTIALSFORPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONFEDERATEDCREDENTIALSFORPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationFederatedCredentialsForProviderResponseBodyApplicationFederatedCredentials.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationFederatedCredentialsForProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationFederatedCredentialsForProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentials, applicationFederatedCredentials_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationFederatedCredentialsForProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentials, applicationFederatedCredentials_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationFederatedCredentialsForProviderResponseBody() = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody(const ListApplicationFederatedCredentialsForProviderResponseBody &) = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody(ListApplicationFederatedCredentialsForProviderResponseBody &&) = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationFederatedCredentialsForProviderResponseBody() = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody& operator=(const ListApplicationFederatedCredentialsForProviderResponseBody &) = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody& operator=(ListApplicationFederatedCredentialsForProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationFederatedCredentials_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->previousToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // applicationFederatedCredentials Field Functions 
    bool hasApplicationFederatedCredentials() const { return this->applicationFederatedCredentials_ != nullptr;};
    void deleteApplicationFederatedCredentials() { this->applicationFederatedCredentials_ = nullptr;};
    inline const vector<ListApplicationFederatedCredentialsForProviderResponseBodyApplicationFederatedCredentials> & applicationFederatedCredentials() const { DARABONBA_PTR_GET_CONST(applicationFederatedCredentials_, vector<ListApplicationFederatedCredentialsForProviderResponseBodyApplicationFederatedCredentials>) };
    inline vector<ListApplicationFederatedCredentialsForProviderResponseBodyApplicationFederatedCredentials> applicationFederatedCredentials() { DARABONBA_PTR_GET(applicationFederatedCredentials_, vector<ListApplicationFederatedCredentialsForProviderResponseBodyApplicationFederatedCredentials>) };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setApplicationFederatedCredentials(const vector<ListApplicationFederatedCredentialsForProviderResponseBodyApplicationFederatedCredentials> & applicationFederatedCredentials) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentials_, applicationFederatedCredentials) };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setApplicationFederatedCredentials(vector<ListApplicationFederatedCredentialsForProviderResponseBodyApplicationFederatedCredentials> && applicationFederatedCredentials) { DARABONBA_PTR_SET_RVALUE(applicationFederatedCredentials_, applicationFederatedCredentials) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string previousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListApplicationFederatedCredentialsForProviderResponseBodyApplicationFederatedCredentials>> applicationFederatedCredentials_ = nullptr;
    // 分页查询时每页行数。
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    std::shared_ptr<string> nextToken_ = nullptr;
    // 本次调用返回的查询凭证（Token）值，用于上一次翻页查询。
    std::shared_ptr<string> previousToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
