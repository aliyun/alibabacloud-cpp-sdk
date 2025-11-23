// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUTHORITYTEMPLATEITEMSREQUESTITEMS_HPP_
#define ALIBABACLOUD_MODELS_ADDAUTHORITYTEMPLATEITEMSREQUESTITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddAuthorityTemplateItemsRequestItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAuthorityTemplateItemsRequestItems& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PermissionTypes, permissionTypes_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, AddAuthorityTemplateItemsRequestItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PermissionTypes, permissionTypes_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    AddAuthorityTemplateItemsRequestItems() = default ;
    AddAuthorityTemplateItemsRequestItems(const AddAuthorityTemplateItemsRequestItems &) = default ;
    AddAuthorityTemplateItemsRequestItems(AddAuthorityTemplateItemsRequestItems &&) = default ;
    AddAuthorityTemplateItemsRequestItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAuthorityTemplateItemsRequestItems() = default ;
    AddAuthorityTemplateItemsRequestItems& operator=(const AddAuthorityTemplateItemsRequestItems &) = default ;
    AddAuthorityTemplateItemsRequestItems& operator=(AddAuthorityTemplateItemsRequestItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && return this->instanceId_ == nullptr && return this->permissionTypes_ == nullptr && return this->resourceType_ == nullptr && return this->tableName_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline AddAuthorityTemplateItemsRequestItems& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int32_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0) };
    inline AddAuthorityTemplateItemsRequestItems& setInstanceId(int32_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // permissionTypes Field Functions 
    bool hasPermissionTypes() const { return this->permissionTypes_ != nullptr;};
    void deletePermissionTypes() { this->permissionTypes_ = nullptr;};
    inline const vector<string> & permissionTypes() const { DARABONBA_PTR_GET_CONST(permissionTypes_, vector<string>) };
    inline vector<string> permissionTypes() { DARABONBA_PTR_GET(permissionTypes_, vector<string>) };
    inline AddAuthorityTemplateItemsRequestItems& setPermissionTypes(const vector<string> & permissionTypes) { DARABONBA_PTR_SET_VALUE(permissionTypes_, permissionTypes) };
    inline AddAuthorityTemplateItemsRequestItems& setPermissionTypes(vector<string> && permissionTypes) { DARABONBA_PTR_SET_RVALUE(permissionTypes_, permissionTypes) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline AddAuthorityTemplateItemsRequestItems& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline AddAuthorityTemplateItemsRequestItems& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The database ID. Databases are divided into physical databases and logical databases.
    // 
    // *   To query the ID of a physical database, call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
    // *   To query the ID of a logical database, call the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
    // 
    // > This parameter is required if the ResourceType parameter is set to META_DB, LOGIC_DB, META_TABLE, or LOGIC_TABLE.
    std::shared_ptr<int32_t> dbId_ = nullptr;
    // The instance ID. You can call the [ListInstances](https://help.aliyun.com/document_detail/141936.html) or [GetInstance](https://help.aliyun.com/document_detail/141567.html) operation to query the instance ID.
    // 
    // > This parameter is required if the ResourceType parameter is set to INSTANCE.
    std::shared_ptr<int32_t> instanceId_ = nullptr;
    // The permission types.
    std::shared_ptr<vector<string>> permissionTypes_ = nullptr;
    // The type of the resource from which you want to remove tags. Valid values:
    // 
    // *   **INSTANCE**: instance
    // *   **LOGIC_DB**: logical database
    // *   **META_DB**: physical database
    // *   **LOGIC_TABLE**: logical table
    // *   **LOGIC_TABLE**: physical table
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The table name. You can call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to query the name of the table.
    // 
    // > This parameter is required if the ResourceType parameter is set to META_TABLE or LOGIC_TABLE.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
