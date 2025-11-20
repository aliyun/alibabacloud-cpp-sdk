// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CheckRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRoleType, checkRoleType_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRoleType, checkRoleType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
    };
    CheckRoleRequest() = default ;
    CheckRoleRequest(const CheckRoleRequest &) = default ;
    CheckRoleRequest(CheckRoleRequest &&) = default ;
    CheckRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckRoleRequest() = default ;
    CheckRoleRequest& operator=(const CheckRoleRequest &) = default ;
    CheckRoleRequest& operator=(CheckRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkRoleType_ == nullptr
        && return this->crossAccountRoleName_ == nullptr && return this->crossAccountUserId_ == nullptr; };
    // checkRoleType Field Functions 
    bool hasCheckRoleType() const { return this->checkRoleType_ != nullptr;};
    void deleteCheckRoleType() { this->checkRoleType_ = nullptr;};
    inline string checkRoleType() const { DARABONBA_PTR_GET_DEFAULT(checkRoleType_, "") };
    inline CheckRoleRequest& setCheckRoleType(string checkRoleType) { DARABONBA_PTR_SET_VALUE(checkRoleType_, checkRoleType) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline CheckRoleRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline CheckRoleRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


  protected:
    // The type of the role. Valid values:
    // 
    // *   EcsRole: a role with the permissions to access Elastic Compute Service (ECS) resources
    // *   CsgRole: a role with the permissions to perform Cloud Storage Gateway (CSG) backup
    // *   NasRole: a role with the permissions to perform NAS backup
    // *   OssRole: a role with the permissions to perform Object Storage Service (OSS) backup
    // *   UdmRole: a role with the permissions to perform ECS instance backup
    // *   VMwareLocalRole: a role with the permissions to back up on-premises VMware virtual machines (VMs)
    // *   VMwareCloudRole: a role with the permissions to back up VMs deployed on Alibaba Cloud VMware Service (ACVS)
    // *   EcsBackupRole: a role with the permissions to perform ECS backup
    // *   OtsRole: a role with the permissions to perform Tablestore backup
    // *   CrossAccountRole: a role with the permissions to perform cross-account backup
    std::shared_ptr<string> checkRoleType_ = nullptr;
    // The name of the Resource Access Management (RAM) role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
