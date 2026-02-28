// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHVCCCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHVCCCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class SwitchVccConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchVccConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchVccConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    SwitchVccConnectionRequest() = default ;
    SwitchVccConnectionRequest(const SwitchVccConnectionRequest &) = default ;
    SwitchVccConnectionRequest(SwitchVccConnectionRequest &&) = default ;
    SwitchVccConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchVccConnectionRequest() = default ;
    SwitchVccConnectionRequest& operator=(const SwitchVccConnectionRequest &) = default ;
    SwitchVccConnectionRequest& operator=(SwitchVccConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cenId_ == nullptr
        && this->connectionType_ == nullptr && this->regionId_ == nullptr && this->vSwitchId_ == nullptr && this->vccId_ == nullptr && this->vpcId_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline SwitchVccConnectionRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // connectionType Field Functions 
    bool hasConnectionType() const { return this->connectionType_ != nullptr;};
    void deleteConnectionType() { this->connectionType_ = nullptr;};
    inline string getConnectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
    inline SwitchVccConnectionRequest& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SwitchVccConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline SwitchVccConnectionRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string getVccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline SwitchVccConnectionRequest& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline SwitchVccConnectionRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // CEN
    shared_ptr<string> cenId_ {};
    // Connection type, CENTR/VPC
    shared_ptr<string> connectionType_ {};
    // Region ID
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // vSwitch ID
    shared_ptr<string> vSwitchId_ {};
    // Cloud Connect Network (CCN) ID
    // 
    // This parameter is required.
    shared_ptr<string> vccId_ {};
    // VPC ID
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
