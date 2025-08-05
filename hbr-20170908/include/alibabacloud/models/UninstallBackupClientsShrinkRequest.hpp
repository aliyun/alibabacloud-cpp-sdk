// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLBACKUPCLIENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLBACKUPCLIENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UninstallBackupClientsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallBackupClientsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIds, clientIdsShrink_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallBackupClientsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIds, clientIdsShrink_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
    };
    UninstallBackupClientsShrinkRequest() = default ;
    UninstallBackupClientsShrinkRequest(const UninstallBackupClientsShrinkRequest &) = default ;
    UninstallBackupClientsShrinkRequest(UninstallBackupClientsShrinkRequest &&) = default ;
    UninstallBackupClientsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallBackupClientsShrinkRequest() = default ;
    UninstallBackupClientsShrinkRequest& operator=(const UninstallBackupClientsShrinkRequest &) = default ;
    UninstallBackupClientsShrinkRequest& operator=(UninstallBackupClientsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIdsShrink_ != nullptr
        && this->crossAccountRoleName_ != nullptr && this->crossAccountType_ != nullptr && this->crossAccountUserId_ != nullptr && this->instanceIdsShrink_ != nullptr; };
    // clientIdsShrink Field Functions 
    bool hasClientIdsShrink() const { return this->clientIdsShrink_ != nullptr;};
    void deleteClientIdsShrink() { this->clientIdsShrink_ = nullptr;};
    inline string clientIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(clientIdsShrink_, "") };
    inline UninstallBackupClientsShrinkRequest& setClientIdsShrink(string clientIdsShrink) { DARABONBA_PTR_SET_VALUE(clientIdsShrink_, clientIdsShrink) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline UninstallBackupClientsShrinkRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline UninstallBackupClientsShrinkRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline UninstallBackupClientsShrinkRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline UninstallBackupClientsShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


  protected:
    // The IDs of Cloud Backup clients. The sum of the number of Cloud Backup client IDs and the number of ECS instance IDs cannot exceed 20. Otherwise, an error occurs.
    std::shared_ptr<string> clientIdsShrink_ = nullptr;
    // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up and restore data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Specifies whether data is backed up and restored within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
    // 
    // *   SELF_ACCOUNT: Data is backed up and restored within the same Alibaba Cloud account.
    // *   CROSS_ACCOUNT: Data is backed up and restored across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up and restore data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // The IDs of Elastic Compute Service (ECS) instances. You can specify a maximum of 20 ECS instances.
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
