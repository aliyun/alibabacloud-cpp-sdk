// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMENDPOINTNETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMENDPOINTNETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyCustomEndpointNetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomEndpointNetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnPrefix, connPrefix_);
      DARABONBA_PTR_TO_JSON(CustomEndpointId, customEndpointId_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomEndpointNetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnPrefix, connPrefix_);
      DARABONBA_PTR_FROM_JSON(CustomEndpointId, customEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ModifyCustomEndpointNetRequest() = default ;
    ModifyCustomEndpointNetRequest(const ModifyCustomEndpointNetRequest &) = default ;
    ModifyCustomEndpointNetRequest(ModifyCustomEndpointNetRequest &&) = default ;
    ModifyCustomEndpointNetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomEndpointNetRequest() = default ;
    ModifyCustomEndpointNetRequest& operator=(const ModifyCustomEndpointNetRequest &) = default ;
    ModifyCustomEndpointNetRequest& operator=(ModifyCustomEndpointNetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connPrefix_ == nullptr
        && this->customEndpointId_ == nullptr && this->DBInstanceName_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
    // connPrefix Field Functions 
    bool hasConnPrefix() const { return this->connPrefix_ != nullptr;};
    void deleteConnPrefix() { this->connPrefix_ = nullptr;};
    inline string getConnPrefix() const { DARABONBA_PTR_GET_DEFAULT(connPrefix_, "") };
    inline ModifyCustomEndpointNetRequest& setConnPrefix(string connPrefix) { DARABONBA_PTR_SET_VALUE(connPrefix_, connPrefix) };


    // customEndpointId Field Functions 
    bool hasCustomEndpointId() const { return this->customEndpointId_ != nullptr;};
    void deleteCustomEndpointId() { this->customEndpointId_ = nullptr;};
    inline string getCustomEndpointId() const { DARABONBA_PTR_GET_DEFAULT(customEndpointId_, "") };
    inline ModifyCustomEndpointNetRequest& setCustomEndpointId(string customEndpointId) { DARABONBA_PTR_SET_VALUE(customEndpointId_, customEndpointId) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyCustomEndpointNetRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifyCustomEndpointNetRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCustomEndpointNetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyCustomEndpointNetRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyCustomEndpointNetRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> connPrefix_ {};
    // This parameter is required.
    shared_ptr<string> customEndpointId_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<int32_t> port_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> vSwitchId_ {};
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
