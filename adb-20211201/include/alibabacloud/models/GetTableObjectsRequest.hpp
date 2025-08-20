// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEOBJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEOBJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetTableObjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableObjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FilterDescription, filterDescription_);
      DARABONBA_PTR_TO_JSON(FilterOwner, filterOwner_);
      DARABONBA_PTR_TO_JSON(FilterTblName, filterTblName_);
      DARABONBA_PTR_TO_JSON(FilterTblType, filterTblType_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableObjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FilterDescription, filterDescription_);
      DARABONBA_PTR_FROM_JSON(FilterOwner, filterOwner_);
      DARABONBA_PTR_FROM_JSON(FilterTblName, filterTblName_);
      DARABONBA_PTR_FROM_JSON(FilterTblType, filterTblType_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
    };
    GetTableObjectsRequest() = default ;
    GetTableObjectsRequest(const GetTableObjectsRequest &) = default ;
    GetTableObjectsRequest(GetTableObjectsRequest &&) = default ;
    GetTableObjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableObjectsRequest() = default ;
    GetTableObjectsRequest& operator=(const GetTableObjectsRequest &) = default ;
    GetTableObjectsRequest& operator=(GetTableObjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->filterDescription_ != nullptr && this->filterOwner_ != nullptr && this->filterTblName_ != nullptr && this->filterTblType_ != nullptr && this->orderBy_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->schemaName_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetTableObjectsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // filterDescription Field Functions 
    bool hasFilterDescription() const { return this->filterDescription_ != nullptr;};
    void deleteFilterDescription() { this->filterDescription_ = nullptr;};
    inline string filterDescription() const { DARABONBA_PTR_GET_DEFAULT(filterDescription_, "") };
    inline GetTableObjectsRequest& setFilterDescription(string filterDescription) { DARABONBA_PTR_SET_VALUE(filterDescription_, filterDescription) };


    // filterOwner Field Functions 
    bool hasFilterOwner() const { return this->filterOwner_ != nullptr;};
    void deleteFilterOwner() { this->filterOwner_ = nullptr;};
    inline string filterOwner() const { DARABONBA_PTR_GET_DEFAULT(filterOwner_, "") };
    inline GetTableObjectsRequest& setFilterOwner(string filterOwner) { DARABONBA_PTR_SET_VALUE(filterOwner_, filterOwner) };


    // filterTblName Field Functions 
    bool hasFilterTblName() const { return this->filterTblName_ != nullptr;};
    void deleteFilterTblName() { this->filterTblName_ = nullptr;};
    inline string filterTblName() const { DARABONBA_PTR_GET_DEFAULT(filterTblName_, "") };
    inline GetTableObjectsRequest& setFilterTblName(string filterTblName) { DARABONBA_PTR_SET_VALUE(filterTblName_, filterTblName) };


    // filterTblType Field Functions 
    bool hasFilterTblType() const { return this->filterTblType_ != nullptr;};
    void deleteFilterTblType() { this->filterTblType_ = nullptr;};
    inline string filterTblType() const { DARABONBA_PTR_GET_DEFAULT(filterTblType_, "") };
    inline GetTableObjectsRequest& setFilterTblType(string filterTblType) { DARABONBA_PTR_SET_VALUE(filterTblType_, filterTblType) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetTableObjectsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetTableObjectsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetTableObjectsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTableObjectsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetTableObjectsRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The description of the table.
    std::shared_ptr<string> filterDescription_ = nullptr;
    // The owner of the table.
    std::shared_ptr<string> filterOwner_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> filterTblName_ = nullptr;
    // The type of the table.
    // 
    // Valid values:
    // 
    // DIMENSION_TABLE
    // 
    // FACT_TABLE
    // 
    // EXTERNAL_TABLE
    // 
    // Default value: null.
    std::shared_ptr<string> filterTblType_ = nullptr;
    // The order in which the fields to be returned are sorted.
    // 
    // Valid values:
    // 
    // *   Asc
    // *   Desc
    // 
    // Values for fields:
    // 
    // TableName
    // 
    // TableSize
    // 
    // CreateTime
    // 
    // UpdateTime
    // 
    // Default value: {"Type": "Desc","Field": "TableName"};
    std::shared_ptr<string> orderBy_ = nullptr;
    // The number of the page to return. The value is an integer that is greater than 0. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Valid values:
    // 
    // *   30
    // *   50
    // *   100
    // 
    // Default value: 30.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the region in which the cluster resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
