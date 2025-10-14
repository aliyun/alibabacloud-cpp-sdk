// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULECAPACITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULECAPACITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationRuleCapacitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationRuleCapacitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleCapacities, normalizationRuleCapacities_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationRuleCapacitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleCapacities, normalizationRuleCapacities_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListNormalizationRuleCapacitiesResponseBody() = default ;
    ListNormalizationRuleCapacitiesResponseBody(const ListNormalizationRuleCapacitiesResponseBody &) = default ;
    ListNormalizationRuleCapacitiesResponseBody(ListNormalizationRuleCapacitiesResponseBody &&) = default ;
    ListNormalizationRuleCapacitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationRuleCapacitiesResponseBody() = default ;
    ListNormalizationRuleCapacitiesResponseBody& operator=(const ListNormalizationRuleCapacitiesResponseBody &) = default ;
    ListNormalizationRuleCapacitiesResponseBody& operator=(ListNormalizationRuleCapacitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->normalizationRuleCapacities_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->totalPage_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationRuleCapacitiesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationRuleCapacitiesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationRuleCapacities Field Functions 
    bool hasNormalizationRuleCapacities() const { return this->normalizationRuleCapacities_ != nullptr;};
    void deleteNormalizationRuleCapacities() { this->normalizationRuleCapacities_ = nullptr;};
    inline const vector<ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities> & normalizationRuleCapacities() const { DARABONBA_PTR_GET_CONST(normalizationRuleCapacities_, vector<ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities>) };
    inline vector<ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities> normalizationRuleCapacities() { DARABONBA_PTR_GET(normalizationRuleCapacities_, vector<ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities>) };
    inline ListNormalizationRuleCapacitiesResponseBody& setNormalizationRuleCapacities(const vector<ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities> & normalizationRuleCapacities) { DARABONBA_PTR_SET_VALUE(normalizationRuleCapacities_, normalizationRuleCapacities) };
    inline ListNormalizationRuleCapacitiesResponseBody& setNormalizationRuleCapacities(vector<ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities> && normalizationRuleCapacities) { DARABONBA_PTR_SET_RVALUE(normalizationRuleCapacities_, normalizationRuleCapacities) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNormalizationRuleCapacitiesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNormalizationRuleCapacitiesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNormalizationRuleCapacitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNormalizationRuleCapacitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListNormalizationRuleCapacitiesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities>> normalizationRuleCapacities_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
