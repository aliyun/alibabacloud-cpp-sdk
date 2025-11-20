// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEBACKUPCLIENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEBACKUPCLIENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpgradeBackupClientsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeBackupClientsRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ClientIds, clientIds_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_ANY_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeBackupClientsRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ClientIds, clientIds_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_ANY_FROM_JSON(InstanceIds, instanceIds_);
    };
    UpgradeBackupClientsRequest() = default ;
    UpgradeBackupClientsRequest(const UpgradeBackupClientsRequest &) = default ;
    UpgradeBackupClientsRequest(UpgradeBackupClientsRequest &&) = default ;
    UpgradeBackupClientsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeBackupClientsRequest() = default ;
    UpgradeBackupClientsRequest& operator=(const UpgradeBackupClientsRequest &) = default ;
    UpgradeBackupClientsRequest& operator=(UpgradeBackupClientsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIds_ == nullptr
        && return this->crossAccountRoleName_ == nullptr && return this->crossAccountType_ == nullptr && return this->crossAccountUserId_ == nullptr && return this->instanceIds_ == nullptr; };
    // clientIds Field Functions 
    bool hasClientIds() const { return this->clientIds_ != nullptr;};
    void deleteClientIds() { this->clientIds_ = nullptr;};
    inline     const Darabonba::Json & clientIds() const { DARABONBA_GET(clientIds_) };
    Darabonba::Json & clientIds() { DARABONBA_GET(clientIds_) };
    inline UpgradeBackupClientsRequest& setClientIds(const Darabonba::Json & clientIds) { DARABONBA_SET_VALUE(clientIds_, clientIds) };
    inline UpgradeBackupClientsRequest& setClientIds(Darabonba::Json & clientIds) { DARABONBA_SET_RVALUE(clientIds_, clientIds) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline UpgradeBackupClientsRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline UpgradeBackupClientsRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline UpgradeBackupClientsRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline     const Darabonba::Json & instanceIds() const { DARABONBA_GET(instanceIds_) };
    Darabonba::Json & instanceIds() { DARABONBA_GET(instanceIds_) };
    inline UpgradeBackupClientsRequest& setInstanceIds(const Darabonba::Json & instanceIds) { DARABONBA_SET_VALUE(instanceIds_, instanceIds) };
    inline UpgradeBackupClientsRequest& setInstanceIds(Darabonba::Json & instanceIds) { DARABONBA_SET_RVALUE(instanceIds_, instanceIds) };


  protected:
    // The IDs of Cloud Backup clients. The total number of Cloud Backup client IDs and ECS instance IDs cannot exceed 100.
    Darabonba::Json clientIds_ = nullptr;
    // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Specifies whether data is backed up within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
    // 
    // *   SELF_ACCOUNT: Data is backed up within the same Alibaba Cloud account.
    // *   CROSS_ACCOUNT: Data is backed up across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // The IDs of Elastic Compute Service (ECS) instances. The total number of ECS instance IDs and Cloud Backup client IDs cannot exceed 100.
    Darabonba::Json instanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
