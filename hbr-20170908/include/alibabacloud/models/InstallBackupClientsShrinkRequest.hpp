// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLBACKUPCLIENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLBACKUPCLIENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class InstallBackupClientsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallBackupClientsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, InstallBackupClientsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
    };
    InstallBackupClientsShrinkRequest() = default ;
    InstallBackupClientsShrinkRequest(const InstallBackupClientsShrinkRequest &) = default ;
    InstallBackupClientsShrinkRequest(InstallBackupClientsShrinkRequest &&) = default ;
    InstallBackupClientsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallBackupClientsShrinkRequest() = default ;
    InstallBackupClientsShrinkRequest& operator=(const InstallBackupClientsShrinkRequest &) = default ;
    InstallBackupClientsShrinkRequest& operator=(InstallBackupClientsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crossAccountRoleName_ != nullptr
        && this->crossAccountType_ != nullptr && this->crossAccountUserId_ != nullptr && this->instanceIdsShrink_ != nullptr; };
    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline InstallBackupClientsShrinkRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline InstallBackupClientsShrinkRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline InstallBackupClientsShrinkRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline InstallBackupClientsShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


  protected:
    // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Specifies whether data is backed up within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
    // 
    // *   SELF_ACCOUNT: Data is backed up within the same Alibaba Cloud account.
    // *   CROSS_ACCOUNT: Data is backed up across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // The IDs of the ECS instances. You can specify up to 20 IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
