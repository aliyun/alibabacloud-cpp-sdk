// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONNECTKMSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONNECTKMSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ConnectKmsInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConnectKmsInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KMProvider, KMProvider_);
      DARABONBA_PTR_TO_JSON(KmsInstanceId, kmsInstanceId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
    };
    friend void from_json(const Darabonba::Json& j, ConnectKmsInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KMProvider, KMProvider_);
      DARABONBA_PTR_FROM_JSON(KmsInstanceId, kmsInstanceId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
    };
    ConnectKmsInstanceRequest() = default ;
    ConnectKmsInstanceRequest(const ConnectKmsInstanceRequest &) = default ;
    ConnectKmsInstanceRequest(ConnectKmsInstanceRequest &&) = default ;
    ConnectKmsInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConnectKmsInstanceRequest() = default ;
    ConnectKmsInstanceRequest& operator=(const ConnectKmsInstanceRequest &) = default ;
    ConnectKmsInstanceRequest& operator=(ConnectKmsInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->KMProvider_ == nullptr
        && return this->kmsInstanceId_ == nullptr && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr && return this->zoneIds_ == nullptr; };
    // KMProvider Field Functions 
    bool hasKMProvider() const { return this->KMProvider_ != nullptr;};
    void deleteKMProvider() { this->KMProvider_ = nullptr;};
    inline string KMProvider() const { DARABONBA_PTR_GET_DEFAULT(KMProvider_, "") };
    inline ConnectKmsInstanceRequest& setKMProvider(string KMProvider) { DARABONBA_PTR_SET_VALUE(KMProvider_, KMProvider) };


    // kmsInstanceId Field Functions 
    bool hasKmsInstanceId() const { return this->kmsInstanceId_ != nullptr;};
    void deleteKmsInstanceId() { this->kmsInstanceId_ = nullptr;};
    inline string kmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(kmsInstanceId_, "") };
    inline ConnectKmsInstanceRequest& setKmsInstanceId(string kmsInstanceId) { DARABONBA_PTR_SET_VALUE(kmsInstanceId_, kmsInstanceId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string vSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline ConnectKmsInstanceRequest& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ConnectKmsInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline string zoneIds() const { DARABONBA_PTR_GET_DEFAULT(zoneIds_, "") };
    inline ConnectKmsInstanceRequest& setZoneIds(string zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };


  protected:
    // The provider of the KMS instance. Set the value to Aliyun.
    // 
    // This parameter is required.
    std::shared_ptr<string> KMProvider_ = nullptr;
    // The ID of the KMS instance that you want to enable.
    // 
    // This parameter is required.
    std::shared_ptr<string> kmsInstanceId_ = nullptr;
    // The vSwitch in the two zones. The vSwitch must have at least one available IP address.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchIds_ = nullptr;
    // The ID of the virtual private cloud (VPC) that is associated with the KMS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The two zones for the KMS instance. Dual-zone deployment improves service availability and disaster recovery capabilities.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
