// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETADATACOMPONENTPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETADATACOMPONENTPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListMetaDataComponentPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaDataComponentPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(categoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(componentType, componentType_);
      DARABONBA_PTR_TO_JSON(dsName, dsName_);
      DARABONBA_PTR_TO_JSON(dsStatus, dsStatus_);
      DARABONBA_PTR_TO_JSON(dsType, dsType_);
      DARABONBA_PTR_TO_JSON(dsTypeList, dsTypeList_);
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(srcComponentId, srcComponentId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaDataComponentPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(componentType, componentType_);
      DARABONBA_PTR_FROM_JSON(dsName, dsName_);
      DARABONBA_PTR_FROM_JSON(dsStatus, dsStatus_);
      DARABONBA_PTR_FROM_JSON(dsType, dsType_);
      DARABONBA_PTR_FROM_JSON(dsTypeList, dsTypeList_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(srcComponentId, srcComponentId_);
    };
    ListMetaDataComponentPageRequest() = default ;
    ListMetaDataComponentPageRequest(const ListMetaDataComponentPageRequest &) = default ;
    ListMetaDataComponentPageRequest(ListMetaDataComponentPageRequest &&) = default ;
    ListMetaDataComponentPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaDataComponentPageRequest() = default ;
    ListMetaDataComponentPageRequest& operator=(const ListMetaDataComponentPageRequest &) = default ;
    ListMetaDataComponentPageRequest& operator=(ListMetaDataComponentPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryType_ == nullptr
        && this->componentType_ == nullptr && this->dsName_ == nullptr && this->dsStatus_ == nullptr && this->dsType_ == nullptr && this->dsTypeList_ == nullptr
        && this->groupBy_ == nullptr && this->needTotalCount_ == nullptr && this->orderBy_ == nullptr && this->orderDirection_ == nullptr && this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr && this->srcComponentId_ == nullptr; };
    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline ListMetaDataComponentPageRequest& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline int32_t getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, 0) };
    inline ListMetaDataComponentPageRequest& setComponentType(int32_t componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // dsName Field Functions 
    bool hasDsName() const { return this->dsName_ != nullptr;};
    void deleteDsName() { this->dsName_ = nullptr;};
    inline string getDsName() const { DARABONBA_PTR_GET_DEFAULT(dsName_, "") };
    inline ListMetaDataComponentPageRequest& setDsName(string dsName) { DARABONBA_PTR_SET_VALUE(dsName_, dsName) };


    // dsStatus Field Functions 
    bool hasDsStatus() const { return this->dsStatus_ != nullptr;};
    void deleteDsStatus() { this->dsStatus_ = nullptr;};
    inline const vector<int32_t> & getDsStatus() const { DARABONBA_PTR_GET_CONST(dsStatus_, vector<int32_t>) };
    inline vector<int32_t> getDsStatus() { DARABONBA_PTR_GET(dsStatus_, vector<int32_t>) };
    inline ListMetaDataComponentPageRequest& setDsStatus(const vector<int32_t> & dsStatus) { DARABONBA_PTR_SET_VALUE(dsStatus_, dsStatus) };
    inline ListMetaDataComponentPageRequest& setDsStatus(vector<int32_t> && dsStatus) { DARABONBA_PTR_SET_RVALUE(dsStatus_, dsStatus) };


    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline ListMetaDataComponentPageRequest& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


    // dsTypeList Field Functions 
    bool hasDsTypeList() const { return this->dsTypeList_ != nullptr;};
    void deleteDsTypeList() { this->dsTypeList_ = nullptr;};
    inline const vector<string> & getDsTypeList() const { DARABONBA_PTR_GET_CONST(dsTypeList_, vector<string>) };
    inline vector<string> getDsTypeList() { DARABONBA_PTR_GET(dsTypeList_, vector<string>) };
    inline ListMetaDataComponentPageRequest& setDsTypeList(const vector<string> & dsTypeList) { DARABONBA_PTR_SET_VALUE(dsTypeList_, dsTypeList) };
    inline ListMetaDataComponentPageRequest& setDsTypeList(vector<string> && dsTypeList) { DARABONBA_PTR_SET_RVALUE(dsTypeList_, dsTypeList) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline ListMetaDataComponentPageRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // needTotalCount Field Functions 
    bool hasNeedTotalCount() const { return this->needTotalCount_ != nullptr;};
    void deleteNeedTotalCount() { this->needTotalCount_ = nullptr;};
    inline string getNeedTotalCount() const { DARABONBA_PTR_GET_DEFAULT(needTotalCount_, "") };
    inline ListMetaDataComponentPageRequest& setNeedTotalCount(string needTotalCount) { DARABONBA_PTR_SET_VALUE(needTotalCount_, needTotalCount) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListMetaDataComponentPageRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListMetaDataComponentPageRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListMetaDataComponentPageRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetaDataComponentPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // srcComponentId Field Functions 
    bool hasSrcComponentId() const { return this->srcComponentId_ != nullptr;};
    void deleteSrcComponentId() { this->srcComponentId_ = nullptr;};
    inline int64_t getSrcComponentId() const { DARABONBA_PTR_GET_DEFAULT(srcComponentId_, 0L) };
    inline ListMetaDataComponentPageRequest& setSrcComponentId(int64_t srcComponentId) { DARABONBA_PTR_SET_VALUE(srcComponentId_, srcComponentId) };


  protected:
    // The category type of the data source. Valid values: DATASET, WORKFLOW, and ENGINE. For scheduling scenarios, this parameter is set to WORKFLOW.
    shared_ptr<string> categoryType_ {};
    // The entry component type. In some operations, this parameter is used as a backward compatible field for version 1.1.0. Valid values:
    // - 0: source
    // - 1: destination
    shared_ptr<int32_t> componentType_ {};
    // The data source name. Exact match and fuzzy match are supported.
    shared_ptr<string> dsName_ {};
    // The connectivity status of the data source. Valid values:
    // - 0: Not tested.
    // - 1: Connected.
    // - 2: Connection failed.
    // - -1: Connectivity test not supported.
    shared_ptr<vector<int32_t>> dsStatus_ {};
    // The data source type, such as Hive or MaxCompute.
    shared_ptr<string> dsType_ {};
    // The list of data source types.
    shared_ptr<vector<string>> dsTypeList_ {};
    // The grouping field (GROUP BY condition). Set this parameter as needed.
    shared_ptr<string> groupBy_ {};
    // Specifies whether to return the total number of records in the paginated result.
    shared_ptr<string> needTotalCount_ {};
    // The sort field. Set this parameter as needed.
    shared_ptr<string> orderBy_ {};
    // The sort direction. Valid values:
    // - ASC: ascending order
    // - DESC: descending order
    shared_ptr<string> orderDirection_ {};
    // The page number, starting from 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The page size, which is the number of records returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The source component ID, which is the primary key of the source data source component.
    shared_ptr<int64_t> srcComponentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
