// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULECAPACITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULECAPACITIESRESPONSEBODY_HPP_
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
    class NormalizationRuleCapacities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NormalizationRuleCapacities& obj) { 
        DARABONBA_PTR_TO_JSON(Capacities, capacities_);
        DARABONBA_PTR_TO_JSON(CapacityType, capacityType_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
      };
      friend void from_json(const Darabonba::Json& j, NormalizationRuleCapacities& obj) { 
        DARABONBA_PTR_FROM_JSON(Capacities, capacities_);
        DARABONBA_PTR_FROM_JSON(CapacityType, capacityType_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
      };
      NormalizationRuleCapacities() = default ;
      NormalizationRuleCapacities(const NormalizationRuleCapacities &) = default ;
      NormalizationRuleCapacities(NormalizationRuleCapacities &&) = default ;
      NormalizationRuleCapacities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NormalizationRuleCapacities() = default ;
      NormalizationRuleCapacities& operator=(const NormalizationRuleCapacities &) = default ;
      NormalizationRuleCapacities& operator=(NormalizationRuleCapacities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacities_ == nullptr
        && this->capacityType_ == nullptr && this->normalizationRuleId_ == nullptr; };
      // capacities Field Functions 
      bool hasCapacities() const { return this->capacities_ != nullptr;};
      void deleteCapacities() { this->capacities_ = nullptr;};
      inline const vector<string> & getCapacities() const { DARABONBA_PTR_GET_CONST(capacities_, vector<string>) };
      inline vector<string> getCapacities() { DARABONBA_PTR_GET(capacities_, vector<string>) };
      inline NormalizationRuleCapacities& setCapacities(const vector<string> & capacities) { DARABONBA_PTR_SET_VALUE(capacities_, capacities) };
      inline NormalizationRuleCapacities& setCapacities(vector<string> && capacities) { DARABONBA_PTR_SET_RVALUE(capacities_, capacities) };


      // capacityType Field Functions 
      bool hasCapacityType() const { return this->capacityType_ != nullptr;};
      void deleteCapacityType() { this->capacityType_ = nullptr;};
      inline string getCapacityType() const { DARABONBA_PTR_GET_DEFAULT(capacityType_, "") };
      inline NormalizationRuleCapacities& setCapacityType(string capacityType) { DARABONBA_PTR_SET_VALUE(capacityType_, capacityType) };


      // normalizationRuleId Field Functions 
      bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
      void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
      inline string getNormalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
      inline NormalizationRuleCapacities& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


    protected:
      shared_ptr<vector<string>> capacities_ {};
      shared_ptr<string> capacityType_ {};
      shared_ptr<string> normalizationRuleId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->normalizationRuleCapacities_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationRuleCapacitiesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationRuleCapacitiesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationRuleCapacities Field Functions 
    bool hasNormalizationRuleCapacities() const { return this->normalizationRuleCapacities_ != nullptr;};
    void deleteNormalizationRuleCapacities() { this->normalizationRuleCapacities_ = nullptr;};
    inline const vector<ListNormalizationRuleCapacitiesResponseBody::NormalizationRuleCapacities> & getNormalizationRuleCapacities() const { DARABONBA_PTR_GET_CONST(normalizationRuleCapacities_, vector<ListNormalizationRuleCapacitiesResponseBody::NormalizationRuleCapacities>) };
    inline vector<ListNormalizationRuleCapacitiesResponseBody::NormalizationRuleCapacities> getNormalizationRuleCapacities() { DARABONBA_PTR_GET(normalizationRuleCapacities_, vector<ListNormalizationRuleCapacitiesResponseBody::NormalizationRuleCapacities>) };
    inline ListNormalizationRuleCapacitiesResponseBody& setNormalizationRuleCapacities(const vector<ListNormalizationRuleCapacitiesResponseBody::NormalizationRuleCapacities> & normalizationRuleCapacities) { DARABONBA_PTR_SET_VALUE(normalizationRuleCapacities_, normalizationRuleCapacities) };
    inline ListNormalizationRuleCapacitiesResponseBody& setNormalizationRuleCapacities(vector<ListNormalizationRuleCapacitiesResponseBody::NormalizationRuleCapacities> && normalizationRuleCapacities) { DARABONBA_PTR_SET_RVALUE(normalizationRuleCapacities_, normalizationRuleCapacities) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNormalizationRuleCapacitiesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNormalizationRuleCapacitiesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNormalizationRuleCapacitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNormalizationRuleCapacitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListNormalizationRuleCapacitiesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListNormalizationRuleCapacitiesResponseBody::NormalizationRuleCapacities>> normalizationRuleCapacities_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
