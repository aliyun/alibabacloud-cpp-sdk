// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKZONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKZONERESPONSEBODY_HPP_
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
  class GetNetworkZoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkZoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkZone, networkZone_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkZoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkZone, networkZone_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNetworkZoneResponseBody() = default ;
    GetNetworkZoneResponseBody(const GetNetworkZoneResponseBody &) = default ;
    GetNetworkZoneResponseBody(GetNetworkZoneResponseBody &&) = default ;
    GetNetworkZoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkZoneResponseBody() = default ;
    GetNetworkZoneResponseBody& operator=(const GetNetworkZoneResponseBody &) = default ;
    GetNetworkZoneResponseBody& operator=(GetNetworkZoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkZone : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkZone& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Ipv4Cidrs, ipv4Cidrs_);
        DARABONBA_PTR_TO_JSON(Ipv6Cidrs, ipv6Cidrs_);
        DARABONBA_PTR_TO_JSON(NetworkZoneId, networkZoneId_);
        DARABONBA_PTR_TO_JSON(NetworkZoneName, networkZoneName_);
        DARABONBA_PTR_TO_JSON(NetworkZoneType, networkZoneType_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkZone& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Ipv4Cidrs, ipv4Cidrs_);
        DARABONBA_PTR_FROM_JSON(Ipv6Cidrs, ipv6Cidrs_);
        DARABONBA_PTR_FROM_JSON(NetworkZoneId, networkZoneId_);
        DARABONBA_PTR_FROM_JSON(NetworkZoneName, networkZoneName_);
        DARABONBA_PTR_FROM_JSON(NetworkZoneType, networkZoneType_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      NetworkZone() = default ;
      NetworkZone(const NetworkZone &) = default ;
      NetworkZone(NetworkZone &&) = default ;
      NetworkZone(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkZone() = default ;
      NetworkZone& operator=(const NetworkZone &) = default ;
      NetworkZone& operator=(NetworkZone &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->ipv4Cidrs_ == nullptr && this->ipv6Cidrs_ == nullptr && this->networkZoneId_ == nullptr && this->networkZoneName_ == nullptr
        && this->networkZoneType_ == nullptr && this->vpcId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline NetworkZone& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NetworkZone& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ipv4Cidrs Field Functions 
      bool hasIpv4Cidrs() const { return this->ipv4Cidrs_ != nullptr;};
      void deleteIpv4Cidrs() { this->ipv4Cidrs_ = nullptr;};
      inline const vector<string> & getIpv4Cidrs() const { DARABONBA_PTR_GET_CONST(ipv4Cidrs_, vector<string>) };
      inline vector<string> getIpv4Cidrs() { DARABONBA_PTR_GET(ipv4Cidrs_, vector<string>) };
      inline NetworkZone& setIpv4Cidrs(const vector<string> & ipv4Cidrs) { DARABONBA_PTR_SET_VALUE(ipv4Cidrs_, ipv4Cidrs) };
      inline NetworkZone& setIpv4Cidrs(vector<string> && ipv4Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv4Cidrs_, ipv4Cidrs) };


      // ipv6Cidrs Field Functions 
      bool hasIpv6Cidrs() const { return this->ipv6Cidrs_ != nullptr;};
      void deleteIpv6Cidrs() { this->ipv6Cidrs_ = nullptr;};
      inline const vector<string> & getIpv6Cidrs() const { DARABONBA_PTR_GET_CONST(ipv6Cidrs_, vector<string>) };
      inline vector<string> getIpv6Cidrs() { DARABONBA_PTR_GET(ipv6Cidrs_, vector<string>) };
      inline NetworkZone& setIpv6Cidrs(const vector<string> & ipv6Cidrs) { DARABONBA_PTR_SET_VALUE(ipv6Cidrs_, ipv6Cidrs) };
      inline NetworkZone& setIpv6Cidrs(vector<string> && ipv6Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv6Cidrs_, ipv6Cidrs) };


      // networkZoneId Field Functions 
      bool hasNetworkZoneId() const { return this->networkZoneId_ != nullptr;};
      void deleteNetworkZoneId() { this->networkZoneId_ = nullptr;};
      inline string getNetworkZoneId() const { DARABONBA_PTR_GET_DEFAULT(networkZoneId_, "") };
      inline NetworkZone& setNetworkZoneId(string networkZoneId) { DARABONBA_PTR_SET_VALUE(networkZoneId_, networkZoneId) };


      // networkZoneName Field Functions 
      bool hasNetworkZoneName() const { return this->networkZoneName_ != nullptr;};
      void deleteNetworkZoneName() { this->networkZoneName_ = nullptr;};
      inline string getNetworkZoneName() const { DARABONBA_PTR_GET_DEFAULT(networkZoneName_, "") };
      inline NetworkZone& setNetworkZoneName(string networkZoneName) { DARABONBA_PTR_SET_VALUE(networkZoneName_, networkZoneName) };


      // networkZoneType Field Functions 
      bool hasNetworkZoneType() const { return this->networkZoneType_ != nullptr;};
      void deleteNetworkZoneType() { this->networkZoneType_ = nullptr;};
      inline string getNetworkZoneType() const { DARABONBA_PTR_GET_DEFAULT(networkZoneType_, "") };
      inline NetworkZone& setNetworkZoneType(string networkZoneType) { DARABONBA_PTR_SET_VALUE(networkZoneType_, networkZoneType) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NetworkZone& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // IDaaS EIAM 网络区域描述
      shared_ptr<string> description_ {};
      // 实例ID。
      shared_ptr<string> instanceId_ {};
      shared_ptr<vector<string>> ipv4Cidrs_ {};
      shared_ptr<vector<string>> ipv6Cidrs_ {};
      // IDaaS EIAM 网络区域Id
      shared_ptr<string> networkZoneId_ {};
      // IDaaS EIAM 网络区域名称
      shared_ptr<string> networkZoneName_ {};
      // IDaaS EIAM 网络区域类型
      shared_ptr<string> networkZoneType_ {};
      // IDaaS EIAM 专有网络VpcId
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->networkZone_ == nullptr
        && this->requestId_ == nullptr; };
    // networkZone Field Functions 
    bool hasNetworkZone() const { return this->networkZone_ != nullptr;};
    void deleteNetworkZone() { this->networkZone_ = nullptr;};
    inline const GetNetworkZoneResponseBody::NetworkZone & getNetworkZone() const { DARABONBA_PTR_GET_CONST(networkZone_, GetNetworkZoneResponseBody::NetworkZone) };
    inline GetNetworkZoneResponseBody::NetworkZone getNetworkZone() { DARABONBA_PTR_GET(networkZone_, GetNetworkZoneResponseBody::NetworkZone) };
    inline GetNetworkZoneResponseBody& setNetworkZone(const GetNetworkZoneResponseBody::NetworkZone & networkZone) { DARABONBA_PTR_SET_VALUE(networkZone_, networkZone) };
    inline GetNetworkZoneResponseBody& setNetworkZone(GetNetworkZoneResponseBody::NetworkZone && networkZone) { DARABONBA_PTR_SET_RVALUE(networkZone_, networkZone) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNetworkZoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetNetworkZoneResponseBody::NetworkZone> networkZone_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
