// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAILRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAILRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo.hpp>
#include <alibabacloud/models/GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo.hpp>
#include <alibabacloud/models/GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo.hpp>
#include <alibabacloud/models/GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnInfo, columnInfo_);
      DARABONBA_PTR_TO_JSON(DatabaseInfo, databaseInfo_);
      DARABONBA_PTR_TO_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_TO_JSON(TableInfo, tableInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnInfo, columnInfo_);
      DARABONBA_PTR_FROM_JSON(DatabaseInfo, databaseInfo_);
      DARABONBA_PTR_FROM_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_FROM_JSON(TableInfo, tableInfo_);
    };
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources &&) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources& operator=(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources& operator=(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnInfo_ != nullptr
        && this->databaseInfo_ != nullptr && this->instanceInfo_ != nullptr && this->tableInfo_ != nullptr; };
    // columnInfo Field Functions 
    bool hasColumnInfo() const { return this->columnInfo_ != nullptr;};
    void deleteColumnInfo() { this->columnInfo_ = nullptr;};
    inline const Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo & columnInfo() const { DARABONBA_PTR_GET_CONST(columnInfo_, Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo) };
    inline Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo columnInfo() { DARABONBA_PTR_GET(columnInfo_, Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources& setColumnInfo(const Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo & columnInfo) { DARABONBA_PTR_SET_VALUE(columnInfo_, columnInfo) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources& setColumnInfo(Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo && columnInfo) { DARABONBA_PTR_SET_RVALUE(columnInfo_, columnInfo) };


    // databaseInfo Field Functions 
    bool hasDatabaseInfo() const { return this->databaseInfo_ != nullptr;};
    void deleteDatabaseInfo() { this->databaseInfo_ = nullptr;};
    inline const Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo & databaseInfo() const { DARABONBA_PTR_GET_CONST(databaseInfo_, Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo) };
    inline Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo databaseInfo() { DARABONBA_PTR_GET(databaseInfo_, Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources& setDatabaseInfo(const Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo & databaseInfo) { DARABONBA_PTR_SET_VALUE(databaseInfo_, databaseInfo) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources& setDatabaseInfo(Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo && databaseInfo) { DARABONBA_PTR_SET_RVALUE(databaseInfo_, databaseInfo) };


    // instanceInfo Field Functions 
    bool hasInstanceInfo() const { return this->instanceInfo_ != nullptr;};
    void deleteInstanceInfo() { this->instanceInfo_ = nullptr;};
    inline const Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo & instanceInfo() const { DARABONBA_PTR_GET_CONST(instanceInfo_, Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo) };
    inline Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo instanceInfo() { DARABONBA_PTR_GET(instanceInfo_, Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources& setInstanceInfo(const Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo & instanceInfo) { DARABONBA_PTR_SET_VALUE(instanceInfo_, instanceInfo) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources& setInstanceInfo(Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo && instanceInfo) { DARABONBA_PTR_SET_RVALUE(instanceInfo_, instanceInfo) };


    // tableInfo Field Functions 
    bool hasTableInfo() const { return this->tableInfo_ != nullptr;};
    void deleteTableInfo() { this->tableInfo_ = nullptr;};
    inline const Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo & tableInfo() const { DARABONBA_PTR_GET_CONST(tableInfo_, Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo) };
    inline Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo tableInfo() { DARABONBA_PTR_GET(tableInfo_, Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources& setTableInfo(const Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo & tableInfo) { DARABONBA_PTR_SET_VALUE(tableInfo_, tableInfo) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources& setTableInfo(Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo && tableInfo) { DARABONBA_PTR_SET_RVALUE(tableInfo_, tableInfo) };


  protected:
    // The information about the column.
    std::shared_ptr<Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo> columnInfo_ = nullptr;
    // The information about the database.
    std::shared_ptr<Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo> databaseInfo_ = nullptr;
    // The information about the instance.
    std::shared_ptr<Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo> instanceInfo_ = nullptr;
    // The information about the table.
    std::shared_ptr<Models::GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo> tableInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
