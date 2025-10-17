// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEOBJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEOBJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetDatabaseObjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseObjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FilterOwner, filterOwner_);
      DARABONBA_PTR_TO_JSON(FilterSchemaName, filterSchemaName_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseObjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FilterOwner, filterOwner_);
      DARABONBA_PTR_FROM_JSON(FilterSchemaName, filterSchemaName_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetDatabaseObjectsRequest() = default ;
    GetDatabaseObjectsRequest(const GetDatabaseObjectsRequest &) = default ;
    GetDatabaseObjectsRequest(GetDatabaseObjectsRequest &&) = default ;
    GetDatabaseObjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseObjectsRequest() = default ;
    GetDatabaseObjectsRequest& operator=(const GetDatabaseObjectsRequest &) = default ;
    GetDatabaseObjectsRequest& operator=(GetDatabaseObjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->filterOwner_ == nullptr && return this->filterSchemaName_ == nullptr && return this->orderBy_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->regionId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetDatabaseObjectsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // filterOwner Field Functions 
    bool hasFilterOwner() const { return this->filterOwner_ != nullptr;};
    void deleteFilterOwner() { this->filterOwner_ = nullptr;};
    inline string filterOwner() const { DARABONBA_PTR_GET_DEFAULT(filterOwner_, "") };
    inline GetDatabaseObjectsRequest& setFilterOwner(string filterOwner) { DARABONBA_PTR_SET_VALUE(filterOwner_, filterOwner) };


    // filterSchemaName Field Functions 
    bool hasFilterSchemaName() const { return this->filterSchemaName_ != nullptr;};
    void deleteFilterSchemaName() { this->filterSchemaName_ = nullptr;};
    inline string filterSchemaName() const { DARABONBA_PTR_GET_DEFAULT(filterSchemaName_, "") };
    inline GetDatabaseObjectsRequest& setFilterSchemaName(string filterSchemaName) { DARABONBA_PTR_SET_VALUE(filterSchemaName_, filterSchemaName) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetDatabaseObjectsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetDatabaseObjectsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetDatabaseObjectsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDatabaseObjectsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The owner of the database.
    std::shared_ptr<string> filterOwner_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> filterSchemaName_ = nullptr;
    // The order in which you want to sort the query results. Valid values:
    // 
    // *   Asc
    // *   Desc
    // 
    // Valid values for Field: DatabaseName, CreateTime, and UpdateTime. -CreateTime; -UpdateTime;
    // 
    // Default value: {"Type": "Desc","Field": "DatabaseName"}.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The page number. Pages start from page 1. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   30
    // *   50
    // *   100
    // 
    // Default value: 30.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
