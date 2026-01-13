// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyDBResourceGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBResourceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupItems, resourceGroupItemsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBResourceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupItems, resourceGroupItemsShrink_);
    };
    ModifyDBResourceGroupShrinkRequest() = default ;
    ModifyDBResourceGroupShrinkRequest(const ModifyDBResourceGroupShrinkRequest &) = default ;
    ModifyDBResourceGroupShrinkRequest(ModifyDBResourceGroupShrinkRequest &&) = default ;
    ModifyDBResourceGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBResourceGroupShrinkRequest() = default ;
    ModifyDBResourceGroupShrinkRequest& operator=(const ModifyDBResourceGroupShrinkRequest &) = default ;
    ModifyDBResourceGroupShrinkRequest& operator=(ModifyDBResourceGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->ownerId_ == nullptr && this->resourceGroupItemsShrink_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBResourceGroupShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupItemsShrink Field Functions 
    bool hasResourceGroupItemsShrink() const { return this->resourceGroupItemsShrink_ != nullptr;};
    void deleteResourceGroupItemsShrink() { this->resourceGroupItemsShrink_ = nullptr;};
    inline string getResourceGroupItemsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupItemsShrink_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setResourceGroupItemsShrink(string resourceGroupItemsShrink) { DARABONBA_PTR_SET_VALUE(resourceGroupItemsShrink_, resourceGroupItemsShrink) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The information about the resource group.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupItemsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
