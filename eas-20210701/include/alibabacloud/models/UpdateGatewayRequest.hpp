// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableInternet, enableInternet_);
      DARABONBA_PTR_TO_JSON(EnableIntranet, enableIntranet_);
      DARABONBA_PTR_TO_JSON(EnableSSLRedirection, enableSSLRedirection_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableInternet, enableInternet_);
      DARABONBA_PTR_FROM_JSON(EnableIntranet, enableIntranet_);
      DARABONBA_PTR_FROM_JSON(EnableSSLRedirection, enableSSLRedirection_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    UpdateGatewayRequest() = default ;
    UpdateGatewayRequest(const UpdateGatewayRequest &) = default ;
    UpdateGatewayRequest(UpdateGatewayRequest &&) = default ;
    UpdateGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRequest() = default ;
    UpdateGatewayRequest& operator=(const UpdateGatewayRequest &) = default ;
    UpdateGatewayRequest& operator=(UpdateGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableInternet_ == nullptr
        && this->enableIntranet_ == nullptr && this->enableSSLRedirection_ == nullptr && this->instanceType_ == nullptr && this->isDefault_ == nullptr && this->name_ == nullptr
        && this->replicas_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
    // enableInternet Field Functions 
    bool hasEnableInternet() const { return this->enableInternet_ != nullptr;};
    void deleteEnableInternet() { this->enableInternet_ = nullptr;};
    inline bool getEnableInternet() const { DARABONBA_PTR_GET_DEFAULT(enableInternet_, false) };
    inline UpdateGatewayRequest& setEnableInternet(bool enableInternet) { DARABONBA_PTR_SET_VALUE(enableInternet_, enableInternet) };


    // enableIntranet Field Functions 
    bool hasEnableIntranet() const { return this->enableIntranet_ != nullptr;};
    void deleteEnableIntranet() { this->enableIntranet_ = nullptr;};
    inline bool getEnableIntranet() const { DARABONBA_PTR_GET_DEFAULT(enableIntranet_, false) };
    inline UpdateGatewayRequest& setEnableIntranet(bool enableIntranet) { DARABONBA_PTR_SET_VALUE(enableIntranet_, enableIntranet) };


    // enableSSLRedirection Field Functions 
    bool hasEnableSSLRedirection() const { return this->enableSSLRedirection_ != nullptr;};
    void deleteEnableSSLRedirection() { this->enableSSLRedirection_ = nullptr;};
    inline bool getEnableSSLRedirection() const { DARABONBA_PTR_GET_DEFAULT(enableSSLRedirection_, false) };
    inline UpdateGatewayRequest& setEnableSSLRedirection(bool enableSSLRedirection) { DARABONBA_PTR_SET_VALUE(enableSSLRedirection_, enableSSLRedirection) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline UpdateGatewayRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline UpdateGatewayRequest& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateGatewayRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline UpdateGatewayRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline UpdateGatewayRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline UpdateGatewayRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UpdateGatewayRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Specifies whether to enable Internet access. Default value: false.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableInternet_ {};
    // Specifies whether to enable private access. Default value: true.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableIntranet_ {};
    // Specifies whether to enable HTTP to HTTPS redirection. Default value: false.
    shared_ptr<bool> enableSSLRedirection_ {};
    // The instance type used by the private gateway. Valid values:
    // 
    // *   2c4g
    // *   4c8g
    // *   8c16g
    // *   16c32g
    shared_ptr<string> instanceType_ {};
    // Specifies whether it is the default private gateway.
    shared_ptr<bool> isDefault_ {};
    // The alias of the private gateway.
    shared_ptr<string> name_ {};
    // The number of nodes in the private gateway.
    shared_ptr<int32_t> replicas_ {};
    shared_ptr<vector<string>> vSwitchIds_ {};
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
