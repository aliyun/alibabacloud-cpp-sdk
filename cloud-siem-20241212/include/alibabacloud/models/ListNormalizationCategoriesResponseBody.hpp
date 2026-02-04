// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONCATEGORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONCATEGORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class NormalizationCategories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NormalizationCategories& obj) { 
        DARABONBA_PTR_TO_JSON(NormalizationCategoryId, normalizationCategoryId_);
        DARABONBA_PTR_TO_JSON(NormalizationCategoryName, normalizationCategoryName_);
      };
      friend void from_json(const Darabonba::Json& j, NormalizationCategories& obj) { 
        DARABONBA_PTR_FROM_JSON(NormalizationCategoryId, normalizationCategoryId_);
        DARABONBA_PTR_FROM_JSON(NormalizationCategoryName, normalizationCategoryName_);
      };
      NormalizationCategories() = default ;
      NormalizationCategories(const NormalizationCategories &) = default ;
      NormalizationCategories(NormalizationCategories &&) = default ;
      NormalizationCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NormalizationCategories() = default ;
      NormalizationCategories& operator=(const NormalizationCategories &) = default ;
      NormalizationCategories& operator=(NormalizationCategories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->normalizationCategoryId_ == nullptr
        && this->normalizationCategoryName_ == nullptr; };
      // normalizationCategoryId Field Functions 
      bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
      void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
      inline string getNormalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
      inline NormalizationCategories& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


      // normalizationCategoryName Field Functions 
      bool hasNormalizationCategoryName() const { return this->normalizationCategoryName_ != nullptr;};
      void deleteNormalizationCategoryName() { this->normalizationCategoryName_ = nullptr;};
      inline string getNormalizationCategoryName() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryName_, "") };
      inline NormalizationCategories& setNormalizationCategoryName(string normalizationCategoryName) { DARABONBA_PTR_SET_VALUE(normalizationCategoryName_, normalizationCategoryName) };


    protected:
      shared_ptr<string> normalizationCategoryId_ {};
      shared_ptr<string> normalizationCategoryName_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->normalizationCategories_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationCategoriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationCategoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationCategories Field Functions 
    bool hasNormalizationCategories() const { return this->normalizationCategories_ != nullptr;};
    void deleteNormalizationCategories() { this->normalizationCategories_ = nullptr;};
    inline const vector<ListNormalizationCategoriesResponseBody::NormalizationCategories> & getNormalizationCategories() const { DARABONBA_PTR_GET_CONST(normalizationCategories_, vector<ListNormalizationCategoriesResponseBody::NormalizationCategories>) };
    inline vector<ListNormalizationCategoriesResponseBody::NormalizationCategories> getNormalizationCategories() { DARABONBA_PTR_GET(normalizationCategories_, vector<ListNormalizationCategoriesResponseBody::NormalizationCategories>) };
    inline ListNormalizationCategoriesResponseBody& setNormalizationCategories(const vector<ListNormalizationCategoriesResponseBody::NormalizationCategories> & normalizationCategories) { DARABONBA_PTR_SET_VALUE(normalizationCategories_, normalizationCategories) };
    inline ListNormalizationCategoriesResponseBody& setNormalizationCategories(vector<ListNormalizationCategoriesResponseBody::NormalizationCategories> && normalizationCategories) { DARABONBA_PTR_SET_RVALUE(normalizationCategories_, normalizationCategories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNormalizationCategoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNormalizationCategoriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListNormalizationCategoriesResponseBody::NormalizationCategories>> normalizationCategories_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
