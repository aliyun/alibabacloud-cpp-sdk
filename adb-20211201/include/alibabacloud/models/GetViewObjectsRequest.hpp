// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIEWOBJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVIEWOBJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetViewObjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetViewObjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FilterOwner, filterOwner_);
      DARABONBA_PTR_TO_JSON(FilterViewName, filterViewName_);
      DARABONBA_PTR_TO_JSON(FilterViewType, filterViewType_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(ShowMvBaseTable, showMvBaseTable_);
    };
    friend void from_json(const Darabonba::Json& j, GetViewObjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FilterOwner, filterOwner_);
      DARABONBA_PTR_FROM_JSON(FilterViewName, filterViewName_);
      DARABONBA_PTR_FROM_JSON(FilterViewType, filterViewType_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(ShowMvBaseTable, showMvBaseTable_);
    };
    GetViewObjectsRequest() = default ;
    GetViewObjectsRequest(const GetViewObjectsRequest &) = default ;
    GetViewObjectsRequest(GetViewObjectsRequest &&) = default ;
    GetViewObjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetViewObjectsRequest() = default ;
    GetViewObjectsRequest& operator=(const GetViewObjectsRequest &) = default ;
    GetViewObjectsRequest& operator=(GetViewObjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->filterOwner_ != nullptr && this->filterViewName_ != nullptr && this->filterViewType_ != nullptr && this->orderBy_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->schemaName_ != nullptr && this->showMvBaseTable_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetViewObjectsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // filterOwner Field Functions 
    bool hasFilterOwner() const { return this->filterOwner_ != nullptr;};
    void deleteFilterOwner() { this->filterOwner_ = nullptr;};
    inline string filterOwner() const { DARABONBA_PTR_GET_DEFAULT(filterOwner_, "") };
    inline GetViewObjectsRequest& setFilterOwner(string filterOwner) { DARABONBA_PTR_SET_VALUE(filterOwner_, filterOwner) };


    // filterViewName Field Functions 
    bool hasFilterViewName() const { return this->filterViewName_ != nullptr;};
    void deleteFilterViewName() { this->filterViewName_ = nullptr;};
    inline string filterViewName() const { DARABONBA_PTR_GET_DEFAULT(filterViewName_, "") };
    inline GetViewObjectsRequest& setFilterViewName(string filterViewName) { DARABONBA_PTR_SET_VALUE(filterViewName_, filterViewName) };


    // filterViewType Field Functions 
    bool hasFilterViewType() const { return this->filterViewType_ != nullptr;};
    void deleteFilterViewType() { this->filterViewType_ = nullptr;};
    inline string filterViewType() const { DARABONBA_PTR_GET_DEFAULT(filterViewType_, "") };
    inline GetViewObjectsRequest& setFilterViewType(string filterViewType) { DARABONBA_PTR_SET_VALUE(filterViewType_, filterViewType) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetViewObjectsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetViewObjectsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetViewObjectsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetViewObjectsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetViewObjectsRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // showMvBaseTable Field Functions 
    bool hasShowMvBaseTable() const { return this->showMvBaseTable_ != nullptr;};
    void deleteShowMvBaseTable() { this->showMvBaseTable_ = nullptr;};
    inline bool showMvBaseTable() const { DARABONBA_PTR_GET_DEFAULT(showMvBaseTable_, false) };
    inline GetViewObjectsRequest& setShowMvBaseTable(bool showMvBaseTable) { DARABONBA_PTR_SET_VALUE(showMvBaseTable_, showMvBaseTable) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The owner of the view.
    std::shared_ptr<string> filterOwner_ = nullptr;
    // The name of the view.
    std::shared_ptr<string> filterViewName_ = nullptr;
    // The type of the view.
    // 
    // Valid values:
    // 
    // \\-VIRTUAL_VIEW
    // 
    // \\-MATERIALIZED_VIEW
    // 
    // Default value: null.
    std::shared_ptr<string> filterViewType_ = nullptr;
    // The order in which you want to sort the query results. Valid values for Type:
    // 
    // *   Asc
    // *   Desc
    // 
    // Valid values for Field: -ViewName
    // 
    // \\-CreateTime
    // 
    // \\-UpdateTime
    // 
    // Default value: {"Type": "Desc","Field": "ViewName"}.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<bool> showMvBaseTable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
