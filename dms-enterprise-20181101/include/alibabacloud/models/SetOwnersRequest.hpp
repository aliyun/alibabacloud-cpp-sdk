// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETOWNERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETOWNERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SetOwnersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetOwnersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerIds, ownerIds_);
      DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, SetOwnersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIds_);
      DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    SetOwnersRequest() = default ;
    SetOwnersRequest(const SetOwnersRequest &) = default ;
    SetOwnersRequest(SetOwnersRequest &&) = default ;
    SetOwnersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetOwnersRequest() = default ;
    SetOwnersRequest& operator=(const SetOwnersRequest &) = default ;
    SetOwnersRequest& operator=(SetOwnersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerIds_ != nullptr
        && this->ownerType_ != nullptr && this->resourceId_ != nullptr && this->tid_ != nullptr; };
    // ownerIds Field Functions 
    bool hasOwnerIds() const { return this->ownerIds_ != nullptr;};
    void deleteOwnerIds() { this->ownerIds_ = nullptr;};
    inline string ownerIds() const { DARABONBA_PTR_GET_DEFAULT(ownerIds_, "") };
    inline SetOwnersRequest& setOwnerIds(string ownerIds) { DARABONBA_PTR_SET_VALUE(ownerIds_, ownerIds) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string ownerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline SetOwnersRequest& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline SetOwnersRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline SetOwnersRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the user whom you want to specify as an owner. Separate multiple IDs with commas (,). You can call the [GetUser](https://help.aliyun.com/document_detail/147098.html) or [ListUsers](https://help.aliyun.com/document_detail/141938.html) operation to query the ID of the user.
    // 
    // >  The value of the OwnerIds parameter is that of the UserId parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> ownerIds_ = nullptr;
    // The type of the owner. Valid values:
    // 
    // *   INSTANCE: an owner of an instance.
    // *   DATABASE: an owner of a physical database.
    // *   LOGIC_DATABASE: an owner of a logical database.
    // *   TABLE: an owner of a physical table.
    // *   LOGIC_TABLE: an owner of a logical table.
    // 
    // This parameter is required.
    std::shared_ptr<string> ownerType_ = nullptr;
    // The ID of the resource. The ID of the resource varies with the owner type. The owner types and resource IDs have the following mappings:
    // 
    // *   INSTANCE: the ID of an instance. You can call the [ListInstances](https://help.aliyun.com/document_detail/141936.html) operation to query the ID of the instance.
    // *   DATABASE: the ID of a physical database. You can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) operation to query the ID of the physical database.
    // *   LOGIC_DATABASE: the ID of a logical database. You can call the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) operation to query the ID of the logical database.
    // *   TABLE: the ID of a physical table. You can call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to query the ID of the physical table.
    // *   LOGIC_DATABASE: the ID of a logical table. You can call the [ListLogicTables](https://help.aliyun.com/document_detail/141875.html) operation to query the ID of the logical table.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html) topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
