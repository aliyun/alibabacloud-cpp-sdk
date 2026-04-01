// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCINSTANCEKEYPAIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCINSTANCEKEYPAIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCInstanceKeyPairRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCInstanceKeyPairRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(Reboot, reboot_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCInstanceKeyPairRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(Reboot, reboot_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyRCInstanceKeyPairRequest() = default ;
    ModifyRCInstanceKeyPairRequest(const ModifyRCInstanceKeyPairRequest &) = default ;
    ModifyRCInstanceKeyPairRequest(ModifyRCInstanceKeyPairRequest &&) = default ;
    ModifyRCInstanceKeyPairRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCInstanceKeyPairRequest() = default ;
    ModifyRCInstanceKeyPairRequest& operator=(const ModifyRCInstanceKeyPairRequest &) = default ;
    ModifyRCInstanceKeyPairRequest& operator=(ModifyRCInstanceKeyPairRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->keyPairName_ == nullptr && this->reboot_ == nullptr && this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyRCInstanceKeyPairRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline ModifyRCInstanceKeyPairRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // reboot Field Functions 
    bool hasReboot() const { return this->reboot_ != nullptr;};
    void deleteReboot() { this->reboot_ = nullptr;};
    inline bool getReboot() const { DARABONBA_PTR_GET_DEFAULT(reboot_, false) };
    inline ModifyRCInstanceKeyPairRequest& setReboot(bool reboot) { DARABONBA_PTR_SET_VALUE(reboot_, reboot) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCInstanceKeyPairRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The name of the key pair.
    shared_ptr<string> keyPairName_ {};
    // Specifies whether to restart the instance.
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> reboot_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
