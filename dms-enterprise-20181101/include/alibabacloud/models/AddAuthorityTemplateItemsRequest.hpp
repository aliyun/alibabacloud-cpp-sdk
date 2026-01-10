// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUTHORITYTEMPLATEITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAUTHORITYTEMPLATEITEMSREQUEST_HPP_
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
  class AddAuthorityTemplateItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAuthorityTemplateItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, AddAuthorityTemplateItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    AddAuthorityTemplateItemsRequest() = default ;
    AddAuthorityTemplateItemsRequest(const AddAuthorityTemplateItemsRequest &) = default ;
    AddAuthorityTemplateItemsRequest(AddAuthorityTemplateItemsRequest &&) = default ;
    AddAuthorityTemplateItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAuthorityTemplateItemsRequest() = default ;
    AddAuthorityTemplateItemsRequest& operator=(const AddAuthorityTemplateItemsRequest &) = default ;
    AddAuthorityTemplateItemsRequest& operator=(AddAuthorityTemplateItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PermissionTypes, permissionTypes_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PermissionTypes, permissionTypes_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dbId_ == nullptr
        && this->instanceId_ == nullptr && this->permissionTypes_ == nullptr && this->resourceType_ == nullptr && this->tableName_ == nullptr; };
      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
      inline Items& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int32_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0) };
      inline Items& setInstanceId(int32_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // permissionTypes Field Functions 
      bool hasPermissionTypes() const { return this->permissionTypes_ != nullptr;};
      void deletePermissionTypes() { this->permissionTypes_ = nullptr;};
      inline const vector<string> & getPermissionTypes() const { DARABONBA_PTR_GET_CONST(permissionTypes_, vector<string>) };
      inline vector<string> getPermissionTypes() { DARABONBA_PTR_GET(permissionTypes_, vector<string>) };
      inline Items& setPermissionTypes(const vector<string> & permissionTypes) { DARABONBA_PTR_SET_VALUE(permissionTypes_, permissionTypes) };
      inline Items& setPermissionTypes(vector<string> && permissionTypes) { DARABONBA_PTR_SET_RVALUE(permissionTypes_, permissionTypes) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Items& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Items& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // The database ID. Databases are divided into physical databases and logical databases.
      // 
      // *   To query the ID of a physical database, call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
      // *   To query the ID of a logical database, call the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
      // 
      // > This parameter is required if the ResourceType parameter is set to META_DB, LOGIC_DB, META_TABLE, or LOGIC_TABLE.
      shared_ptr<int32_t> dbId_ {};
      // The instance ID. You can call the [ListInstances](https://help.aliyun.com/document_detail/141936.html) or [GetInstance](https://help.aliyun.com/document_detail/141567.html) operation to query the instance ID.
      // 
      // > This parameter is required if the ResourceType parameter is set to INSTANCE.
      shared_ptr<int32_t> instanceId_ {};
      // The permission types.
      shared_ptr<vector<string>> permissionTypes_ {};
      // The type of the resource from which you want to remove tags. Valid values:
      // 
      // *   **INSTANCE**: instance
      // *   **LOGIC_DB**: logical database
      // *   **META_DB**: physical database
      // *   **LOGIC_TABLE**: logical table
      // *   **LOGIC_TABLE**: physical table
      // 
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
      // The table name. You can call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to query the name of the table.
      // 
      // > This parameter is required if the ResourceType parameter is set to META_TABLE or LOGIC_TABLE.
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->templateId_ == nullptr && this->tid_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<AddAuthorityTemplateItemsRequest::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<AddAuthorityTemplateItemsRequest::Items>) };
    inline vector<AddAuthorityTemplateItemsRequest::Items> getItems() { DARABONBA_PTR_GET(items_, vector<AddAuthorityTemplateItemsRequest::Items>) };
    inline AddAuthorityTemplateItemsRequest& setItems(const vector<AddAuthorityTemplateItemsRequest::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline AddAuthorityTemplateItemsRequest& setItems(vector<AddAuthorityTemplateItemsRequest::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline AddAuthorityTemplateItemsRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline AddAuthorityTemplateItemsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The resources that you want to add to the permission template.
    // 
    // This parameter is required.
    shared_ptr<vector<AddAuthorityTemplateItemsRequest::Items>> items_ {};
    // The ID of the permission template. You can call the [CreateAuthorityTemplate](https://help.aliyun.com/document_detail/600705.html) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> templateId_ {};
    // The ID of the tenant.
    // 
    // > To view the tenant ID, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
