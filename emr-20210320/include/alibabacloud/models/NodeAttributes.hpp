// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_NODEATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class NodeAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskEncrypted, dataDiskEncrypted_);
      DARABONBA_PTR_TO_JSON(DataDiskKMSKeyId, dataDiskKMSKeyId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(MasterRootPassword, masterRootPassword_);
      DARABONBA_PTR_TO_JSON(RamRole, ramRole_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SystemDiskEncrypted, systemDiskEncrypted_);
      DARABONBA_PTR_TO_JSON(SystemDiskKMSKeyId, systemDiskKMSKeyId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, NodeAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskEncrypted, dataDiskEncrypted_);
      DARABONBA_PTR_FROM_JSON(DataDiskKMSKeyId, dataDiskKMSKeyId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(MasterRootPassword, masterRootPassword_);
      DARABONBA_PTR_FROM_JSON(RamRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskEncrypted, systemDiskEncrypted_);
      DARABONBA_PTR_FROM_JSON(SystemDiskKMSKeyId, systemDiskKMSKeyId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    NodeAttributes() = default ;
    NodeAttributes(const NodeAttributes &) = default ;
    NodeAttributes(NodeAttributes &&) = default ;
    NodeAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeAttributes() = default ;
    NodeAttributes& operator=(const NodeAttributes &) = default ;
    NodeAttributes& operator=(NodeAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDiskEncrypted_ == nullptr
        && return this->dataDiskKMSKeyId_ == nullptr && return this->keyPairName_ == nullptr && return this->masterRootPassword_ == nullptr && return this->ramRole_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->systemDiskEncrypted_ == nullptr && return this->systemDiskKMSKeyId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // dataDiskEncrypted Field Functions 
    bool hasDataDiskEncrypted() const { return this->dataDiskEncrypted_ != nullptr;};
    void deleteDataDiskEncrypted() { this->dataDiskEncrypted_ = nullptr;};
    inline bool dataDiskEncrypted() const { DARABONBA_PTR_GET_DEFAULT(dataDiskEncrypted_, false) };
    inline NodeAttributes& setDataDiskEncrypted(bool dataDiskEncrypted) { DARABONBA_PTR_SET_VALUE(dataDiskEncrypted_, dataDiskEncrypted) };


    // dataDiskKMSKeyId Field Functions 
    bool hasDataDiskKMSKeyId() const { return this->dataDiskKMSKeyId_ != nullptr;};
    void deleteDataDiskKMSKeyId() { this->dataDiskKMSKeyId_ = nullptr;};
    inline string dataDiskKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(dataDiskKMSKeyId_, "") };
    inline NodeAttributes& setDataDiskKMSKeyId(string dataDiskKMSKeyId) { DARABONBA_PTR_SET_VALUE(dataDiskKMSKeyId_, dataDiskKMSKeyId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline NodeAttributes& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // masterRootPassword Field Functions 
    bool hasMasterRootPassword() const { return this->masterRootPassword_ != nullptr;};
    void deleteMasterRootPassword() { this->masterRootPassword_ = nullptr;};
    inline string masterRootPassword() const { DARABONBA_PTR_GET_DEFAULT(masterRootPassword_, "") };
    inline NodeAttributes& setMasterRootPassword(string masterRootPassword) { DARABONBA_PTR_SET_VALUE(masterRootPassword_, masterRootPassword) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string ramRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline NodeAttributes& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline NodeAttributes& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // systemDiskEncrypted Field Functions 
    bool hasSystemDiskEncrypted() const { return this->systemDiskEncrypted_ != nullptr;};
    void deleteSystemDiskEncrypted() { this->systemDiskEncrypted_ = nullptr;};
    inline bool systemDiskEncrypted() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncrypted_, false) };
    inline NodeAttributes& setSystemDiskEncrypted(bool systemDiskEncrypted) { DARABONBA_PTR_SET_VALUE(systemDiskEncrypted_, systemDiskEncrypted) };


    // systemDiskKMSKeyId Field Functions 
    bool hasSystemDiskKMSKeyId() const { return this->systemDiskKMSKeyId_ != nullptr;};
    void deleteSystemDiskKMSKeyId() { this->systemDiskKMSKeyId_ = nullptr;};
    inline string systemDiskKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskKMSKeyId_, "") };
    inline NodeAttributes& setSystemDiskKMSKeyId(string systemDiskKMSKeyId) { DARABONBA_PTR_SET_VALUE(systemDiskKMSKeyId_, systemDiskKMSKeyId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline NodeAttributes& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline NodeAttributes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // 是否启用云盘加密。取值范围：
    // - true：启用加密。
    // - false：不加密。
    // 
    // 默认值：false，不加密
    std::shared_ptr<bool> dataDiskEncrypted_ = nullptr;
    // KMS加密秘钥ID。
    std::shared_ptr<string> dataDiskKMSKeyId_ = nullptr;
    // ECS ssh登录秘钥。
    std::shared_ptr<string> keyPairName_ = nullptr;
    // MASTER节点root密码。
    std::shared_ptr<string> masterRootPassword_ = nullptr;
    // ECS访问资源绑定的角色。
    std::shared_ptr<string> ramRole_ = nullptr;
    // 安全组ID。EMR只支持普通安全组，不支持企业安全组。
    // 
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // 是否启用云盘加密。取值范围：
    // - true：启用加密。
    // - false：不加密。
    // 
    // 默认值：false，不加密
    std::shared_ptr<bool> systemDiskEncrypted_ = nullptr;
    // KMS加密秘钥ID。
    std::shared_ptr<string> systemDiskKMSKeyId_ = nullptr;
    // 专有网络ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // 可用区ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
