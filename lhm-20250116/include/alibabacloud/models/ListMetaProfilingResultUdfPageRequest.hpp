// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETAPROFILINGRESULTUDFPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETAPROFILINGRESULTUDFPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListMetaProfilingResultUdfPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaProfilingResultUdfPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(catalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(componentType, componentType_);
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(funcName, funcName_);
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(isSummary, isSummary_);
      DARABONBA_PTR_TO_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaProfilingResultUdfPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(componentType, componentType_);
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(funcName, funcName_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(isSummary, isSummary_);
      DARABONBA_PTR_FROM_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    ListMetaProfilingResultUdfPageRequest() = default ;
    ListMetaProfilingResultUdfPageRequest(const ListMetaProfilingResultUdfPageRequest &) = default ;
    ListMetaProfilingResultUdfPageRequest(ListMetaProfilingResultUdfPageRequest &&) = default ;
    ListMetaProfilingResultUdfPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaProfilingResultUdfPageRequest() = default ;
    ListMetaProfilingResultUdfPageRequest& operator=(const ListMetaProfilingResultUdfPageRequest &) = default ;
    ListMetaProfilingResultUdfPageRequest& operator=(ListMetaProfilingResultUdfPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->componentType_ == nullptr && this->dbName_ == nullptr && this->funcName_ == nullptr && this->groupBy_ == nullptr && this->isSummary_ == nullptr
        && this->needTotalCount_ == nullptr && this->orderBy_ == nullptr && this->orderDirection_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr
        && this->taskId_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline ListMetaProfilingResultUdfPageRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline int32_t getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, 0) };
    inline ListMetaProfilingResultUdfPageRequest& setComponentType(int32_t componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListMetaProfilingResultUdfPageRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // funcName Field Functions 
    bool hasFuncName() const { return this->funcName_ != nullptr;};
    void deleteFuncName() { this->funcName_ = nullptr;};
    inline string getFuncName() const { DARABONBA_PTR_GET_DEFAULT(funcName_, "") };
    inline ListMetaProfilingResultUdfPageRequest& setFuncName(string funcName) { DARABONBA_PTR_SET_VALUE(funcName_, funcName) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline ListMetaProfilingResultUdfPageRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // isSummary Field Functions 
    bool hasIsSummary() const { return this->isSummary_ != nullptr;};
    void deleteIsSummary() { this->isSummary_ = nullptr;};
    inline bool getIsSummary() const { DARABONBA_PTR_GET_DEFAULT(isSummary_, false) };
    inline ListMetaProfilingResultUdfPageRequest& setIsSummary(bool isSummary) { DARABONBA_PTR_SET_VALUE(isSummary_, isSummary) };


    // needTotalCount Field Functions 
    bool hasNeedTotalCount() const { return this->needTotalCount_ != nullptr;};
    void deleteNeedTotalCount() { this->needTotalCount_ = nullptr;};
    inline bool getNeedTotalCount() const { DARABONBA_PTR_GET_DEFAULT(needTotalCount_, false) };
    inline ListMetaProfilingResultUdfPageRequest& setNeedTotalCount(bool needTotalCount) { DARABONBA_PTR_SET_VALUE(needTotalCount_, needTotalCount) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListMetaProfilingResultUdfPageRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListMetaProfilingResultUdfPageRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListMetaProfilingResultUdfPageRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetaProfilingResultUdfPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ListMetaProfilingResultUdfPageRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> catalogName_ {};
    shared_ptr<int32_t> componentType_ {};
    shared_ptr<string> dbName_ {};
    shared_ptr<string> funcName_ {};
    shared_ptr<string> groupBy_ {};
    shared_ptr<bool> isSummary_ {};
    shared_ptr<bool> needTotalCount_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> orderDirection_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
