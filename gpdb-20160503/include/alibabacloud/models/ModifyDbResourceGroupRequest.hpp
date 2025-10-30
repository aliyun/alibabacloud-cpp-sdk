// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyDBResourceGroupRequestResourceGroupItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyDBResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupItems, resourceGroupItems_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupItems, resourceGroupItems_);
    };
    ModifyDBResourceGroupRequest() = default ;
    ModifyDBResourceGroupRequest(const ModifyDBResourceGroupRequest &) = default ;
    ModifyDBResourceGroupRequest(ModifyDBResourceGroupRequest &&) = default ;
    ModifyDBResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBResourceGroupRequest() = default ;
    ModifyDBResourceGroupRequest& operator=(const ModifyDBResourceGroupRequest &) = default ;
    ModifyDBResourceGroupRequest& operator=(ModifyDBResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->ownerId_ == nullptr && return this->resourceGroupItems_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBResourceGroupRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBResourceGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupItems Field Functions 
    bool hasResourceGroupItems() const { return this->resourceGroupItems_ != nullptr;};
    void deleteResourceGroupItems() { this->resourceGroupItems_ = nullptr;};
    inline const vector<ModifyDBResourceGroupRequestResourceGroupItems> & resourceGroupItems() const { DARABONBA_PTR_GET_CONST(resourceGroupItems_, vector<ModifyDBResourceGroupRequestResourceGroupItems>) };
    inline vector<ModifyDBResourceGroupRequestResourceGroupItems> resourceGroupItems() { DARABONBA_PTR_GET(resourceGroupItems_, vector<ModifyDBResourceGroupRequestResourceGroupItems>) };
    inline ModifyDBResourceGroupRequest& setResourceGroupItems(const vector<ModifyDBResourceGroupRequestResourceGroupItems> & resourceGroupItems) { DARABONBA_PTR_SET_VALUE(resourceGroupItems_, resourceGroupItems) };
    inline ModifyDBResourceGroupRequest& setResourceGroupItems(vector<ModifyDBResourceGroupRequestResourceGroupItems> && resourceGroupItems) { DARABONBA_PTR_SET_RVALUE(resourceGroupItems_, resourceGroupItems) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The information about the resource group.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ModifyDBResourceGroupRequestResourceGroupItems>> resourceGroupItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
