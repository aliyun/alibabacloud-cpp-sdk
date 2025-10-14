// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationRuleVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationRuleVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleVersions, normalizationRuleVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationRuleVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleVersions, normalizationRuleVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNormalizationRuleVersionsResponseBody() = default ;
    ListNormalizationRuleVersionsResponseBody(const ListNormalizationRuleVersionsResponseBody &) = default ;
    ListNormalizationRuleVersionsResponseBody(ListNormalizationRuleVersionsResponseBody &&) = default ;
    ListNormalizationRuleVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationRuleVersionsResponseBody() = default ;
    ListNormalizationRuleVersionsResponseBody& operator=(const ListNormalizationRuleVersionsResponseBody &) = default ;
    ListNormalizationRuleVersionsResponseBody& operator=(ListNormalizationRuleVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->normalizationRuleVersions_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationRuleVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationRuleVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationRuleVersions Field Functions 
    bool hasNormalizationRuleVersions() const { return this->normalizationRuleVersions_ != nullptr;};
    void deleteNormalizationRuleVersions() { this->normalizationRuleVersions_ = nullptr;};
    inline const vector<ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions> & normalizationRuleVersions() const { DARABONBA_PTR_GET_CONST(normalizationRuleVersions_, vector<ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions>) };
    inline vector<ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions> normalizationRuleVersions() { DARABONBA_PTR_GET(normalizationRuleVersions_, vector<ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions>) };
    inline ListNormalizationRuleVersionsResponseBody& setNormalizationRuleVersions(const vector<ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions> & normalizationRuleVersions) { DARABONBA_PTR_SET_VALUE(normalizationRuleVersions_, normalizationRuleVersions) };
    inline ListNormalizationRuleVersionsResponseBody& setNormalizationRuleVersions(vector<ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions> && normalizationRuleVersions) { DARABONBA_PTR_SET_RVALUE(normalizationRuleVersions_, normalizationRuleVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNormalizationRuleVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNormalizationRuleVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions>> normalizationRuleVersions_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
