// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYNETWORKCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYNETWORKCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GatewayNetworkConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GatewayNetworkConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(networkMode, networkMode_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(vswitchIds, vswitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, GatewayNetworkConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(networkMode, networkMode_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(vswitchIds, vswitchIds_);
    };
    GatewayNetworkConfiguration() = default ;
    GatewayNetworkConfiguration(const GatewayNetworkConfiguration &) = default ;
    GatewayNetworkConfiguration(GatewayNetworkConfiguration &&) = default ;
    GatewayNetworkConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GatewayNetworkConfiguration() = default ;
    GatewayNetworkConfiguration& operator=(const GatewayNetworkConfiguration &) = default ;
    GatewayNetworkConfiguration& operator=(GatewayNetworkConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkMode_ != nullptr
        && this->vpcId_ != nullptr && this->vswitchIds_ != nullptr; };
    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline string networkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, "") };
    inline GatewayNetworkConfiguration& setNetworkMode(string networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GatewayNetworkConfiguration& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & vswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> vswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline GatewayNetworkConfiguration& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline GatewayNetworkConfiguration& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


  protected:
    std::shared_ptr<string> networkMode_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<vector<string>> vswitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
