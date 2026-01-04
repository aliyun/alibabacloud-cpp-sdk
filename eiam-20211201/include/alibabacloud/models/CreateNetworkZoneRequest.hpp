// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateNetworkZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ipv4Cidrs, ipv4Cidrs_);
      DARABONBA_PTR_TO_JSON(Ipv6Cidrs, ipv6Cidrs_);
      DARABONBA_PTR_TO_JSON(NetworkZoneName, networkZoneName_);
      DARABONBA_PTR_TO_JSON(NetworkZoneType, networkZoneType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ipv4Cidrs, ipv4Cidrs_);
      DARABONBA_PTR_FROM_JSON(Ipv6Cidrs, ipv6Cidrs_);
      DARABONBA_PTR_FROM_JSON(NetworkZoneName, networkZoneName_);
      DARABONBA_PTR_FROM_JSON(NetworkZoneType, networkZoneType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateNetworkZoneRequest() = default ;
    CreateNetworkZoneRequest(const CreateNetworkZoneRequest &) = default ;
    CreateNetworkZoneRequest(CreateNetworkZoneRequest &&) = default ;
    CreateNetworkZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkZoneRequest() = default ;
    CreateNetworkZoneRequest& operator=(const CreateNetworkZoneRequest &) = default ;
    CreateNetworkZoneRequest& operator=(CreateNetworkZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->instanceId_ == nullptr && this->ipv4Cidrs_ == nullptr && this->ipv6Cidrs_ == nullptr && this->networkZoneName_ == nullptr
        && this->networkZoneType_ == nullptr && this->vpcId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateNetworkZoneRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNetworkZoneRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateNetworkZoneRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipv4Cidrs Field Functions 
    bool hasIpv4Cidrs() const { return this->ipv4Cidrs_ != nullptr;};
    void deleteIpv4Cidrs() { this->ipv4Cidrs_ = nullptr;};
    inline const vector<string> & getIpv4Cidrs() const { DARABONBA_PTR_GET_CONST(ipv4Cidrs_, vector<string>) };
    inline vector<string> getIpv4Cidrs() { DARABONBA_PTR_GET(ipv4Cidrs_, vector<string>) };
    inline CreateNetworkZoneRequest& setIpv4Cidrs(const vector<string> & ipv4Cidrs) { DARABONBA_PTR_SET_VALUE(ipv4Cidrs_, ipv4Cidrs) };
    inline CreateNetworkZoneRequest& setIpv4Cidrs(vector<string> && ipv4Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv4Cidrs_, ipv4Cidrs) };


    // ipv6Cidrs Field Functions 
    bool hasIpv6Cidrs() const { return this->ipv6Cidrs_ != nullptr;};
    void deleteIpv6Cidrs() { this->ipv6Cidrs_ = nullptr;};
    inline const vector<string> & getIpv6Cidrs() const { DARABONBA_PTR_GET_CONST(ipv6Cidrs_, vector<string>) };
    inline vector<string> getIpv6Cidrs() { DARABONBA_PTR_GET(ipv6Cidrs_, vector<string>) };
    inline CreateNetworkZoneRequest& setIpv6Cidrs(const vector<string> & ipv6Cidrs) { DARABONBA_PTR_SET_VALUE(ipv6Cidrs_, ipv6Cidrs) };
    inline CreateNetworkZoneRequest& setIpv6Cidrs(vector<string> && ipv6Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv6Cidrs_, ipv6Cidrs) };


    // networkZoneName Field Functions 
    bool hasNetworkZoneName() const { return this->networkZoneName_ != nullptr;};
    void deleteNetworkZoneName() { this->networkZoneName_ = nullptr;};
    inline string getNetworkZoneName() const { DARABONBA_PTR_GET_DEFAULT(networkZoneName_, "") };
    inline CreateNetworkZoneRequest& setNetworkZoneName(string networkZoneName) { DARABONBA_PTR_SET_VALUE(networkZoneName_, networkZoneName) };


    // networkZoneType Field Functions 
    bool hasNetworkZoneType() const { return this->networkZoneType_ != nullptr;};
    void deleteNetworkZoneType() { this->networkZoneType_ = nullptr;};
    inline string getNetworkZoneType() const { DARABONBA_PTR_GET_DEFAULT(networkZoneType_, "") };
    inline CreateNetworkZoneRequest& setNetworkZoneType(string networkZoneType) { DARABONBA_PTR_SET_VALUE(networkZoneType_, networkZoneType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateNetworkZoneRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // 保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。
    shared_ptr<string> clientToken_ {};
    // 网络区域描述
    shared_ptr<string> description_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 网络区域ipv4Cidr
    shared_ptr<vector<string>> ipv4Cidrs_ {};
    // 网络区域ipv6Cidr
    shared_ptr<vector<string>> ipv6Cidrs_ {};
    // 网络区域名称
    // 
    // This parameter is required.
    shared_ptr<string> networkZoneName_ {};
    // 网络区域类型
    // 
    // This parameter is required.
    shared_ptr<string> networkZoneType_ {};
    // 专有网络VpcId
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
