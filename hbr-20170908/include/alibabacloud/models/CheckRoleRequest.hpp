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
        && this->crossAccountRoleName_ == nullptr && this->crossAccountUserId_ == nullptr; };
    // checkRoleType Field Functions 
    bool hasCheckRoleType() const { return this->checkRoleType_ != nullptr;};
    void deleteCheckRoleType() { this->checkRoleType_ = nullptr;};
    inline string getCheckRoleType() const { DARABONBA_PTR_GET_DEFAULT(checkRoleType_, "") };
    inline CheckRoleRequest& setCheckRoleType(string checkRoleType) { DARABONBA_PTR_SET_VALUE(checkRoleType_, checkRoleType) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline CheckRoleRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline CheckRoleRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


  protected:
    // The role type. Valid values:
    // - EcsRole: access permissions for ECS resources
    // - CsgRole: permissions to back up Cloud Storage Gateway resources
    // - NasRole: permissions to back up NAS resources
    // - OssRole: permissions to back up OSS resources
    // - UdmRole: permissions to back up entire ECS instances
    // - VMwareLocalRole: permissions to back up on-premises VMware virtual machines
    // - VMwareCloudRole: permissions to back up cloud-based VMware virtual machines
    // - EcsBackupRole: permissions for ECS backup
    // - OtsRole: permissions to back up OTS resources
    // - CrossAccountRole: permissions for cross-account backup
    shared_ptr<string> checkRoleType_ {};
    // The name of the RAM role created in the source account for cross-account backup managed by the current account.
    shared_ptr<string> crossAccountRoleName_ {};
    // The ID of the source account for cross-account backup managed by the current account.
    shared_ptr<int64_t> crossAccountUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
