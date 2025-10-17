// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSNEWVPDINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSNEWVPDINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterRequestNetworksNewVpdInfoVpdSubnets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestNetworksNewVpdInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestNetworksNewVpdInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CloudLinkCidr, cloudLinkCidr_);
      DARABONBA_PTR_TO_JSON(CloudLinkId, cloudLinkId_);
      DARABONBA_PTR_TO_JSON(MonitorVpcId, monitorVpcId_);
      DARABONBA_PTR_TO_JSON(MonitorVswitchId, monitorVswitchId_);
      DARABONBA_PTR_TO_JSON(VpdCidr, vpdCidr_);
      DARABONBA_PTR_TO_JSON(VpdSubnets, vpdSubnets_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestNetworksNewVpdInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CloudLinkCidr, cloudLinkCidr_);
      DARABONBA_PTR_FROM_JSON(CloudLinkId, cloudLinkId_);
      DARABONBA_PTR_FROM_JSON(MonitorVpcId, monitorVpcId_);
      DARABONBA_PTR_FROM_JSON(MonitorVswitchId, monitorVswitchId_);
      DARABONBA_PTR_FROM_JSON(VpdCidr, vpdCidr_);
      DARABONBA_PTR_FROM_JSON(VpdSubnets, vpdSubnets_);
    };
    CreateClusterRequestNetworksNewVpdInfo() = default ;
    CreateClusterRequestNetworksNewVpdInfo(const CreateClusterRequestNetworksNewVpdInfo &) = default ;
    CreateClusterRequestNetworksNewVpdInfo(CreateClusterRequestNetworksNewVpdInfo &&) = default ;
    CreateClusterRequestNetworksNewVpdInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestNetworksNewVpdInfo() = default ;
    CreateClusterRequestNetworksNewVpdInfo& operator=(const CreateClusterRequestNetworksNewVpdInfo &) = default ;
    CreateClusterRequestNetworksNewVpdInfo& operator=(CreateClusterRequestNetworksNewVpdInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cenId_ == nullptr
        && return this->cloudLinkCidr_ == nullptr && return this->cloudLinkId_ == nullptr && return this->monitorVpcId_ == nullptr && return this->monitorVswitchId_ == nullptr && return this->vpdCidr_ == nullptr
        && return this->vpdSubnets_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateClusterRequestNetworksNewVpdInfo& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cloudLinkCidr Field Functions 
    bool hasCloudLinkCidr() const { return this->cloudLinkCidr_ != nullptr;};
    void deleteCloudLinkCidr() { this->cloudLinkCidr_ = nullptr;};
    inline string cloudLinkCidr() const { DARABONBA_PTR_GET_DEFAULT(cloudLinkCidr_, "") };
    inline CreateClusterRequestNetworksNewVpdInfo& setCloudLinkCidr(string cloudLinkCidr) { DARABONBA_PTR_SET_VALUE(cloudLinkCidr_, cloudLinkCidr) };


    // cloudLinkId Field Functions 
    bool hasCloudLinkId() const { return this->cloudLinkId_ != nullptr;};
    void deleteCloudLinkId() { this->cloudLinkId_ = nullptr;};
    inline string cloudLinkId() const { DARABONBA_PTR_GET_DEFAULT(cloudLinkId_, "") };
    inline CreateClusterRequestNetworksNewVpdInfo& setCloudLinkId(string cloudLinkId) { DARABONBA_PTR_SET_VALUE(cloudLinkId_, cloudLinkId) };


    // monitorVpcId Field Functions 
    bool hasMonitorVpcId() const { return this->monitorVpcId_ != nullptr;};
    void deleteMonitorVpcId() { this->monitorVpcId_ = nullptr;};
    inline string monitorVpcId() const { DARABONBA_PTR_GET_DEFAULT(monitorVpcId_, "") };
    inline CreateClusterRequestNetworksNewVpdInfo& setMonitorVpcId(string monitorVpcId) { DARABONBA_PTR_SET_VALUE(monitorVpcId_, monitorVpcId) };


    // monitorVswitchId Field Functions 
    bool hasMonitorVswitchId() const { return this->monitorVswitchId_ != nullptr;};
    void deleteMonitorVswitchId() { this->monitorVswitchId_ = nullptr;};
    inline string monitorVswitchId() const { DARABONBA_PTR_GET_DEFAULT(monitorVswitchId_, "") };
    inline CreateClusterRequestNetworksNewVpdInfo& setMonitorVswitchId(string monitorVswitchId) { DARABONBA_PTR_SET_VALUE(monitorVswitchId_, monitorVswitchId) };


    // vpdCidr Field Functions 
    bool hasVpdCidr() const { return this->vpdCidr_ != nullptr;};
    void deleteVpdCidr() { this->vpdCidr_ = nullptr;};
    inline string vpdCidr() const { DARABONBA_PTR_GET_DEFAULT(vpdCidr_, "") };
    inline CreateClusterRequestNetworksNewVpdInfo& setVpdCidr(string vpdCidr) { DARABONBA_PTR_SET_VALUE(vpdCidr_, vpdCidr) };


    // vpdSubnets Field Functions 
    bool hasVpdSubnets() const { return this->vpdSubnets_ != nullptr;};
    void deleteVpdSubnets() { this->vpdSubnets_ = nullptr;};
    inline const vector<Models::CreateClusterRequestNetworksNewVpdInfoVpdSubnets> & vpdSubnets() const { DARABONBA_PTR_GET_CONST(vpdSubnets_, vector<Models::CreateClusterRequestNetworksNewVpdInfoVpdSubnets>) };
    inline vector<Models::CreateClusterRequestNetworksNewVpdInfoVpdSubnets> vpdSubnets() { DARABONBA_PTR_GET(vpdSubnets_, vector<Models::CreateClusterRequestNetworksNewVpdInfoVpdSubnets>) };
    inline CreateClusterRequestNetworksNewVpdInfo& setVpdSubnets(const vector<Models::CreateClusterRequestNetworksNewVpdInfoVpdSubnets> & vpdSubnets) { DARABONBA_PTR_SET_VALUE(vpdSubnets_, vpdSubnets) };
    inline CreateClusterRequestNetworksNewVpdInfo& setVpdSubnets(vector<Models::CreateClusterRequestNetworksNewVpdInfoVpdSubnets> && vpdSubnets) { DARABONBA_PTR_SET_RVALUE(vpdSubnets_, vpdSubnets) };


  protected:
    // Cloud Enterprise Network ID
    std::shared_ptr<string> cenId_ = nullptr;
    // Cloud link CIDR
    std::shared_ptr<string> cloudLinkCidr_ = nullptr;
    // Cloud link ID
    std::shared_ptr<string> cloudLinkId_ = nullptr;
    // Virtual Private Cloud (VPC)
    std::shared_ptr<string> monitorVpcId_ = nullptr;
    // VPC switch
    std::shared_ptr<string> monitorVswitchId_ = nullptr;
    // Cluster network segment
    std::shared_ptr<string> vpdCidr_ = nullptr;
    // Cluster subnets
    std::shared_ptr<vector<Models::CreateClusterRequestNetworksNewVpdInfoVpdSubnets>> vpdSubnets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
