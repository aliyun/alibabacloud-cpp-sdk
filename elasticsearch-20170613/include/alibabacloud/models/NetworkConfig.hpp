// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NETWORKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_NETWORKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WhiteIpGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class NetworkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NetworkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(lbReplica, lbReplica_);
      DARABONBA_PTR_TO_JSON(loadBalanceConfig, loadBalanceConfig_);
      DARABONBA_PTR_TO_JSON(loadBalanceType, loadBalanceType_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(vsArea, vsArea_);
      DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(whiteIpGroupList, whiteIpGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, NetworkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(lbReplica, lbReplica_);
      DARABONBA_PTR_FROM_JSON(loadBalanceConfig, loadBalanceConfig_);
      DARABONBA_PTR_FROM_JSON(loadBalanceType, loadBalanceType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(vsArea, vsArea_);
      DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(whiteIpGroupList, whiteIpGroupList_);
    };
    NetworkConfig() = default ;
    NetworkConfig(const NetworkConfig &) = default ;
    NetworkConfig(NetworkConfig &&) = default ;
    NetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NetworkConfig() = default ;
    NetworkConfig& operator=(const NetworkConfig &) = default ;
    NetworkConfig& operator=(NetworkConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoadBalanceConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalanceConfig& obj) { 
        DARABONBA_PTR_TO_JSON(vsArea, vsArea_);
        DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalanceConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(vsArea, vsArea_);
        DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
      };
      LoadBalanceConfig() = default ;
      LoadBalanceConfig(const LoadBalanceConfig &) = default ;
      LoadBalanceConfig(LoadBalanceConfig &&) = default ;
      LoadBalanceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalanceConfig() = default ;
      LoadBalanceConfig& operator=(const LoadBalanceConfig &) = default ;
      LoadBalanceConfig& operator=(LoadBalanceConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vsArea_ == nullptr
        && this->vswitchId_ == nullptr; };
      // vsArea Field Functions 
      bool hasVsArea() const { return this->vsArea_ != nullptr;};
      void deleteVsArea() { this->vsArea_ = nullptr;};
      inline string getVsArea() const { DARABONBA_PTR_GET_DEFAULT(vsArea_, "") };
      inline LoadBalanceConfig& setVsArea(string vsArea) { DARABONBA_PTR_SET_VALUE(vsArea_, vsArea) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline LoadBalanceConfig& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    protected:
      shared_ptr<string> vsArea_ {};
      shared_ptr<string> vswitchId_ {};
    };

    virtual bool empty() const override { return this->lbReplica_ == nullptr
        && this->loadBalanceConfig_ == nullptr && this->loadBalanceType_ == nullptr && this->type_ == nullptr && this->vpcId_ == nullptr && this->vsArea_ == nullptr
        && this->vswitchId_ == nullptr && this->whiteIpGroupList_ == nullptr; };
    // lbReplica Field Functions 
    bool hasLbReplica() const { return this->lbReplica_ != nullptr;};
    void deleteLbReplica() { this->lbReplica_ = nullptr;};
    inline int32_t getLbReplica() const { DARABONBA_PTR_GET_DEFAULT(lbReplica_, 0) };
    inline NetworkConfig& setLbReplica(int32_t lbReplica) { DARABONBA_PTR_SET_VALUE(lbReplica_, lbReplica) };


    // loadBalanceConfig Field Functions 
    bool hasLoadBalanceConfig() const { return this->loadBalanceConfig_ != nullptr;};
    void deleteLoadBalanceConfig() { this->loadBalanceConfig_ = nullptr;};
    inline const vector<NetworkConfig::LoadBalanceConfig> & getLoadBalanceConfig() const { DARABONBA_PTR_GET_CONST(loadBalanceConfig_, vector<NetworkConfig::LoadBalanceConfig>) };
    inline vector<NetworkConfig::LoadBalanceConfig> getLoadBalanceConfig() { DARABONBA_PTR_GET(loadBalanceConfig_, vector<NetworkConfig::LoadBalanceConfig>) };
    inline NetworkConfig& setLoadBalanceConfig(const vector<NetworkConfig::LoadBalanceConfig> & loadBalanceConfig) { DARABONBA_PTR_SET_VALUE(loadBalanceConfig_, loadBalanceConfig) };
    inline NetworkConfig& setLoadBalanceConfig(vector<NetworkConfig::LoadBalanceConfig> && loadBalanceConfig) { DARABONBA_PTR_SET_RVALUE(loadBalanceConfig_, loadBalanceConfig) };


    // loadBalanceType Field Functions 
    bool hasLoadBalanceType() const { return this->loadBalanceType_ != nullptr;};
    void deleteLoadBalanceType() { this->loadBalanceType_ = nullptr;};
    inline string getLoadBalanceType() const { DARABONBA_PTR_GET_DEFAULT(loadBalanceType_, "") };
    inline NetworkConfig& setLoadBalanceType(string loadBalanceType) { DARABONBA_PTR_SET_VALUE(loadBalanceType_, loadBalanceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline NetworkConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline NetworkConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vsArea Field Functions 
    bool hasVsArea() const { return this->vsArea_ != nullptr;};
    void deleteVsArea() { this->vsArea_ = nullptr;};
    inline string getVsArea() const { DARABONBA_PTR_GET_DEFAULT(vsArea_, "") };
    inline NetworkConfig& setVsArea(string vsArea) { DARABONBA_PTR_SET_VALUE(vsArea_, vsArea) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline NetworkConfig& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // whiteIpGroupList Field Functions 
    bool hasWhiteIpGroupList() const { return this->whiteIpGroupList_ != nullptr;};
    void deleteWhiteIpGroupList() { this->whiteIpGroupList_ = nullptr;};
    inline const vector<WhiteIpGroup> & getWhiteIpGroupList() const { DARABONBA_PTR_GET_CONST(whiteIpGroupList_, vector<WhiteIpGroup>) };
    inline vector<WhiteIpGroup> getWhiteIpGroupList() { DARABONBA_PTR_GET(whiteIpGroupList_, vector<WhiteIpGroup>) };
    inline NetworkConfig& setWhiteIpGroupList(const vector<WhiteIpGroup> & whiteIpGroupList) { DARABONBA_PTR_SET_VALUE(whiteIpGroupList_, whiteIpGroupList) };
    inline NetworkConfig& setWhiteIpGroupList(vector<WhiteIpGroup> && whiteIpGroupList) { DARABONBA_PTR_SET_RVALUE(whiteIpGroupList_, whiteIpGroupList) };


  protected:
    shared_ptr<int32_t> lbReplica_ {};
    shared_ptr<vector<NetworkConfig::LoadBalanceConfig>> loadBalanceConfig_ {};
    shared_ptr<string> loadBalanceType_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> vpcId_ {};
    shared_ptr<string> vsArea_ {};
    shared_ptr<string> vswitchId_ {};
    shared_ptr<vector<WhiteIpGroup>> whiteIpGroupList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
