// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONCATEGORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONCATEGORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNormalizationCategoriesResponseBodyNormalizationCategories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationCategoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationCategoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NormalizationCategories, normalizationCategories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationCategoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NormalizationCategories, normalizationCategories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNormalizationCategoriesResponseBody() = default ;
    ListNormalizationCategoriesResponseBody(const ListNormalizationCategoriesResponseBody &) = default ;
    ListNormalizationCategoriesResponseBody(ListNormalizationCategoriesResponseBody &&) = default ;
    ListNormalizationCategoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationCategoriesResponseBody() = default ;
    ListNormalizationCategoriesResponseBody& operator=(const ListNormalizationCategoriesResponseBody &) = default ;
    ListNormalizationCategoriesResponseBody& operator=(ListNormalizationCategoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->normalizationCategories_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationCategoriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationCategoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationCategories Field Functions 
    bool hasNormalizationCategories() const { return this->normalizationCategories_ != nullptr;};
    void deleteNormalizationCategories() { this->normalizationCategories_ = nullptr;};
    inline const vector<ListNormalizationCategoriesResponseBodyNormalizationCategories> & normalizationCategories() const { DARABONBA_PTR_GET_CONST(normalizationCategories_, vector<ListNormalizationCategoriesResponseBodyNormalizationCategories>) };
    inline vector<ListNormalizationCategoriesResponseBodyNormalizationCategories> normalizationCategories() { DARABONBA_PTR_GET(normalizationCategories_, vector<ListNormalizationCategoriesResponseBodyNormalizationCategories>) };
    inline ListNormalizationCategoriesResponseBody& setNormalizationCategories(const vector<ListNormalizationCategoriesResponseBodyNormalizationCategories> & normalizationCategories) { DARABONBA_PTR_SET_VALUE(normalizationCategories_, normalizationCategories) };
    inline ListNormalizationCategoriesResponseBody& setNormalizationCategories(vector<ListNormalizationCategoriesResponseBodyNormalizationCategories> && normalizationCategories) { DARABONBA_PTR_SET_RVALUE(normalizationCategories_, normalizationCategories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNormalizationCategoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNormalizationCategoriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ListNormalizationCategoriesResponseBodyNormalizationCategories>> normalizationCategories_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
