// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTCENTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTCENTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryCostCenterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostCenterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterDtoList, costCenterDtoList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostCenterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterDtoList, costCenterDtoList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryCostCenterResponseBody() = default ;
    QueryCostCenterResponseBody(const QueryCostCenterResponseBody &) = default ;
    QueryCostCenterResponseBody(QueryCostCenterResponseBody &&) = default ;
    QueryCostCenterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostCenterResponseBody() = default ;
    QueryCostCenterResponseBody& operator=(const QueryCostCenterResponseBody &) = default ;
    QueryCostCenterResponseBody& operator=(QueryCostCenterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CostCenterDtoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CostCenterDtoList& obj) { 
        DARABONBA_PTR_TO_JSON(CostCenterCode, costCenterCode_);
        DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
        DARABONBA_PTR_TO_JSON(CostCenterName, costCenterName_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
        DARABONBA_PTR_TO_JSON(ParentCostCenterId, parentCostCenterId_);
        DARABONBA_PTR_TO_JSON(PrevCostCenterId, prevCostCenterId_);
      };
      friend void from_json(const Darabonba::Json& j, CostCenterDtoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CostCenterCode, costCenterCode_);
        DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
        DARABONBA_PTR_FROM_JSON(CostCenterName, costCenterName_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
        DARABONBA_PTR_FROM_JSON(ParentCostCenterId, parentCostCenterId_);
        DARABONBA_PTR_FROM_JSON(PrevCostCenterId, prevCostCenterId_);
      };
      CostCenterDtoList() = default ;
      CostCenterDtoList(const CostCenterDtoList &) = default ;
      CostCenterDtoList(CostCenterDtoList &&) = default ;
      CostCenterDtoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CostCenterDtoList() = default ;
      CostCenterDtoList& operator=(const CostCenterDtoList &) = default ;
      CostCenterDtoList& operator=(CostCenterDtoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->costCenterCode_ == nullptr
        && this->costCenterId_ == nullptr && this->costCenterName_ == nullptr && this->level_ == nullptr && this->ownerAccountId_ == nullptr && this->parentCostCenterId_ == nullptr
        && this->prevCostCenterId_ == nullptr; };
      // costCenterCode Field Functions 
      bool hasCostCenterCode() const { return this->costCenterCode_ != nullptr;};
      void deleteCostCenterCode() { this->costCenterCode_ = nullptr;};
      inline string getCostCenterCode() const { DARABONBA_PTR_GET_DEFAULT(costCenterCode_, "") };
      inline CostCenterDtoList& setCostCenterCode(string costCenterCode) { DARABONBA_PTR_SET_VALUE(costCenterCode_, costCenterCode) };


      // costCenterId Field Functions 
      bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
      void deleteCostCenterId() { this->costCenterId_ = nullptr;};
      inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
      inline CostCenterDtoList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


      // costCenterName Field Functions 
      bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
      void deleteCostCenterName() { this->costCenterName_ = nullptr;};
      inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
      inline CostCenterDtoList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
      inline CostCenterDtoList& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // ownerAccountId Field Functions 
      bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
      void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
      inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
      inline CostCenterDtoList& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


      // parentCostCenterId Field Functions 
      bool hasParentCostCenterId() const { return this->parentCostCenterId_ != nullptr;};
      void deleteParentCostCenterId() { this->parentCostCenterId_ = nullptr;};
      inline int64_t getParentCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(parentCostCenterId_, 0L) };
      inline CostCenterDtoList& setParentCostCenterId(int64_t parentCostCenterId) { DARABONBA_PTR_SET_VALUE(parentCostCenterId_, parentCostCenterId) };


      // prevCostCenterId Field Functions 
      bool hasPrevCostCenterId() const { return this->prevCostCenterId_ != nullptr;};
      void deletePrevCostCenterId() { this->prevCostCenterId_ = nullptr;};
      inline int64_t getPrevCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(prevCostCenterId_, 0L) };
      inline CostCenterDtoList& setPrevCostCenterId(int64_t prevCostCenterId) { DARABONBA_PTR_SET_VALUE(prevCostCenterId_, prevCostCenterId) };


    protected:
      shared_ptr<string> costCenterCode_ {};
      shared_ptr<int64_t> costCenterId_ {};
      shared_ptr<string> costCenterName_ {};
      shared_ptr<int32_t> level_ {};
      shared_ptr<int64_t> ownerAccountId_ {};
      shared_ptr<int64_t> parentCostCenterId_ {};
      shared_ptr<int64_t> prevCostCenterId_ {};
    };

    virtual bool empty() const override { return this->costCenterDtoList_ == nullptr
        && this->currentPage_ == nullptr && this->metadata_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // costCenterDtoList Field Functions 
    bool hasCostCenterDtoList() const { return this->costCenterDtoList_ != nullptr;};
    void deleteCostCenterDtoList() { this->costCenterDtoList_ = nullptr;};
    inline const vector<QueryCostCenterResponseBody::CostCenterDtoList> & getCostCenterDtoList() const { DARABONBA_PTR_GET_CONST(costCenterDtoList_, vector<QueryCostCenterResponseBody::CostCenterDtoList>) };
    inline vector<QueryCostCenterResponseBody::CostCenterDtoList> getCostCenterDtoList() { DARABONBA_PTR_GET(costCenterDtoList_, vector<QueryCostCenterResponseBody::CostCenterDtoList>) };
    inline QueryCostCenterResponseBody& setCostCenterDtoList(const vector<QueryCostCenterResponseBody::CostCenterDtoList> & costCenterDtoList) { DARABONBA_PTR_SET_VALUE(costCenterDtoList_, costCenterDtoList) };
    inline QueryCostCenterResponseBody& setCostCenterDtoList(vector<QueryCostCenterResponseBody::CostCenterDtoList> && costCenterDtoList) { DARABONBA_PTR_SET_RVALUE(costCenterDtoList_, costCenterDtoList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryCostCenterResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline QueryCostCenterResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline QueryCostCenterResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryCostCenterResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCostCenterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryCostCenterResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<QueryCostCenterResponseBody::CostCenterDtoList>> costCenterDtoList_ {};
    shared_ptr<int32_t> currentPage_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
