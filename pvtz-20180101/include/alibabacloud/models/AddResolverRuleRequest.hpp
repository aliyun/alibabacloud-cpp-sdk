// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESOLVERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRESOLVERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class AddResolverRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddResolverRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EdgeDnsClusters, edgeDnsClusters_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(ForwardIp, forwardIp_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Vpcs, vpcs_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, AddResolverRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EdgeDnsClusters, edgeDnsClusters_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(ForwardIp, forwardIp_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Vpcs, vpcs_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    AddResolverRuleRequest() = default ;
    AddResolverRuleRequest(const AddResolverRuleRequest &) = default ;
    AddResolverRuleRequest(AddResolverRuleRequest &&) = default ;
    AddResolverRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddResolverRuleRequest() = default ;
    AddResolverRuleRequest& operator=(const AddResolverRuleRequest &) = default ;
    AddResolverRuleRequest& operator=(AddResolverRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vpcs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vpcs& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
        DARABONBA_PTR_TO_JSON(VpcUserId, vpcUserId_);
      };
      friend void from_json(const Darabonba::Json& j, Vpcs& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
        DARABONBA_PTR_FROM_JSON(VpcUserId, vpcUserId_);
      };
      Vpcs() = default ;
      Vpcs(const Vpcs &) = default ;
      Vpcs(Vpcs &&) = default ;
      Vpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vpcs() = default ;
      Vpcs& operator=(const Vpcs &) = default ;
      Vpcs& operator=(Vpcs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->vpcId_ == nullptr && this->vpcType_ == nullptr && this->vpcUserId_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Vpcs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Vpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcType Field Functions 
      bool hasVpcType() const { return this->vpcType_ != nullptr;};
      void deleteVpcType() { this->vpcType_ = nullptr;};
      inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
      inline Vpcs& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


      // vpcUserId Field Functions 
      bool hasVpcUserId() const { return this->vpcUserId_ != nullptr;};
      void deleteVpcUserId() { this->vpcUserId_ = nullptr;};
      inline int64_t getVpcUserId() const { DARABONBA_PTR_GET_DEFAULT(vpcUserId_, 0L) };
      inline Vpcs& setVpcUserId(int64_t vpcUserId) { DARABONBA_PTR_SET_VALUE(vpcUserId_, vpcUserId) };


    protected:
      shared_ptr<string> regionId_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> vpcType_ {};
      shared_ptr<int64_t> vpcUserId_ {};
    };

    class ForwardIp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardIp& obj) { 
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardIp& obj) { 
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
      };
      ForwardIp() = default ;
      ForwardIp(const ForwardIp &) = default ;
      ForwardIp(ForwardIp &&) = default ;
      ForwardIp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForwardIp() = default ;
      ForwardIp& operator=(const ForwardIp &) = default ;
      ForwardIp& operator=(ForwardIp &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ip_ == nullptr
        && this->port_ == nullptr; };
      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline ForwardIp& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline ForwardIp& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      // The IP address of the destination server.
      // 
      // >  The following CIDR blocks are reserved by the system: 100.100.2.136 to 100.100.2.138 and 100.100.2.116 to 100.100.2.118. You cannot specify the IP addresses within these CIDR blocks for the external DNS servers.
      // 
      // This parameter is required.
      shared_ptr<string> ip_ {};
      // The port of the destination server.
      // 
      // This parameter is required.
      shared_ptr<int32_t> port_ {};
    };

    class EdgeDnsClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EdgeDnsClusters& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      };
      friend void from_json(const Darabonba::Json& j, EdgeDnsClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      };
      EdgeDnsClusters() = default ;
      EdgeDnsClusters(const EdgeDnsClusters &) = default ;
      EdgeDnsClusters(EdgeDnsClusters &&) = default ;
      EdgeDnsClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EdgeDnsClusters() = default ;
      EdgeDnsClusters& operator=(const EdgeDnsClusters &) = default ;
      EdgeDnsClusters& operator=(EdgeDnsClusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline EdgeDnsClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    protected:
      shared_ptr<string> clusterId_ {};
    };

    virtual bool empty() const override { return this->edgeDnsClusters_ == nullptr
        && this->endpointId_ == nullptr && this->forwardIp_ == nullptr && this->lang_ == nullptr && this->name_ == nullptr && this->type_ == nullptr
        && this->vpcs_ == nullptr && this->zoneName_ == nullptr; };
    // edgeDnsClusters Field Functions 
    bool hasEdgeDnsClusters() const { return this->edgeDnsClusters_ != nullptr;};
    void deleteEdgeDnsClusters() { this->edgeDnsClusters_ = nullptr;};
    inline const vector<AddResolverRuleRequest::EdgeDnsClusters> & getEdgeDnsClusters() const { DARABONBA_PTR_GET_CONST(edgeDnsClusters_, vector<AddResolverRuleRequest::EdgeDnsClusters>) };
    inline vector<AddResolverRuleRequest::EdgeDnsClusters> getEdgeDnsClusters() { DARABONBA_PTR_GET(edgeDnsClusters_, vector<AddResolverRuleRequest::EdgeDnsClusters>) };
    inline AddResolverRuleRequest& setEdgeDnsClusters(const vector<AddResolverRuleRequest::EdgeDnsClusters> & edgeDnsClusters) { DARABONBA_PTR_SET_VALUE(edgeDnsClusters_, edgeDnsClusters) };
    inline AddResolverRuleRequest& setEdgeDnsClusters(vector<AddResolverRuleRequest::EdgeDnsClusters> && edgeDnsClusters) { DARABONBA_PTR_SET_RVALUE(edgeDnsClusters_, edgeDnsClusters) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline AddResolverRuleRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // forwardIp Field Functions 
    bool hasForwardIp() const { return this->forwardIp_ != nullptr;};
    void deleteForwardIp() { this->forwardIp_ = nullptr;};
    inline const vector<AddResolverRuleRequest::ForwardIp> & getForwardIp() const { DARABONBA_PTR_GET_CONST(forwardIp_, vector<AddResolverRuleRequest::ForwardIp>) };
    inline vector<AddResolverRuleRequest::ForwardIp> getForwardIp() { DARABONBA_PTR_GET(forwardIp_, vector<AddResolverRuleRequest::ForwardIp>) };
    inline AddResolverRuleRequest& setForwardIp(const vector<AddResolverRuleRequest::ForwardIp> & forwardIp) { DARABONBA_PTR_SET_VALUE(forwardIp_, forwardIp) };
    inline AddResolverRuleRequest& setForwardIp(vector<AddResolverRuleRequest::ForwardIp> && forwardIp) { DARABONBA_PTR_SET_RVALUE(forwardIp_, forwardIp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddResolverRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddResolverRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddResolverRuleRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcs Field Functions 
    bool hasVpcs() const { return this->vpcs_ != nullptr;};
    void deleteVpcs() { this->vpcs_ = nullptr;};
    inline const vector<AddResolverRuleRequest::Vpcs> & getVpcs() const { DARABONBA_PTR_GET_CONST(vpcs_, vector<AddResolverRuleRequest::Vpcs>) };
    inline vector<AddResolverRuleRequest::Vpcs> getVpcs() { DARABONBA_PTR_GET(vpcs_, vector<AddResolverRuleRequest::Vpcs>) };
    inline AddResolverRuleRequest& setVpcs(const vector<AddResolverRuleRequest::Vpcs> & vpcs) { DARABONBA_PTR_SET_VALUE(vpcs_, vpcs) };
    inline AddResolverRuleRequest& setVpcs(vector<AddResolverRuleRequest::Vpcs> && vpcs) { DARABONBA_PTR_SET_RVALUE(vpcs_, vpcs) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline AddResolverRuleRequest& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    shared_ptr<vector<AddResolverRuleRequest::EdgeDnsClusters>> edgeDnsClusters_ {};
    // The outbound endpoint ID. The outbound endpoint is used to forward the DNS requests to the specified destination IP addresses.
    shared_ptr<string> endpointId_ {};
    // The IP addresses and ports of the external DNS servers. Enter the IP addresses and ports of the destination servers to which the DNS requests are forwarded. You can enter up to **six** IP addresses and ports. Both private and public IP addresses are supported.
    // 
    // >  If you specify public IP addresses as the IP addresses of the external DNS servers and Elastic Compute Service (ECS) instances in the outbound VPC are not assigned public IP addresses, you need to activate NAT Gateway for the VPC and create and manage SNAT entries on a NAT gateway.
    // 
    // This parameter is required.
    shared_ptr<vector<AddResolverRuleRequest::ForwardIp>> forwardIp_ {};
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    shared_ptr<string> lang_ {};
    // The name of the forwarding rule. You can name the rule based on your business requirements.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The type of the forwarding rule. The parameter value can only be OUTBOUND, which indicates that DNS requests are forwarded to one or more external IP addresses.
    // 
    // >  You cannot change the value of Type after you create the forwarding rule.
    shared_ptr<string> type_ {};
    shared_ptr<vector<AddResolverRuleRequest::Vpcs>> vpcs_ {};
    // The zone for which you want to forward DNS requests.
    // 
    // >  You cannot change the value of ZoneName after you create the forwarding rule.
    // 
    // This parameter is required.
    shared_ptr<string> zoneName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
