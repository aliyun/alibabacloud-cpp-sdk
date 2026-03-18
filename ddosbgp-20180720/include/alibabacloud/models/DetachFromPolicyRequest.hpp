// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHFROMPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHFROMPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DetachFromPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachFromPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpPortProtocolList, ipPortProtocolList_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(PortVersion, portVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DetachFromPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpPortProtocolList, ipPortProtocolList_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(PortVersion, portVersion_);
    };
    DetachFromPolicyRequest() = default ;
    DetachFromPolicyRequest(const DetachFromPolicyRequest &) = default ;
    DetachFromPolicyRequest(DetachFromPolicyRequest &&) = default ;
    DetachFromPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachFromPolicyRequest() = default ;
    DetachFromPolicyRequest& operator=(const DetachFromPolicyRequest &) = default ;
    DetachFromPolicyRequest& operator=(DetachFromPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpPortProtocolList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpPortProtocolList& obj) { 
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, IpPortProtocolList& obj) { 
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      };
      IpPortProtocolList() = default ;
      IpPortProtocolList(const IpPortProtocolList &) = default ;
      IpPortProtocolList(IpPortProtocolList &&) = default ;
      IpPortProtocolList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpPortProtocolList() = default ;
      IpPortProtocolList& operator=(const IpPortProtocolList &) = default ;
      IpPortProtocolList& operator=(IpPortProtocolList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ip_ == nullptr
        && this->port_ == nullptr && this->portRange_ == nullptr && this->protocol_ == nullptr; };
      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline IpPortProtocolList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline IpPortProtocolList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline IpPortProtocolList& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline IpPortProtocolList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      // The IP address of the protected object.
      // 
      // This parameter is required.
      shared_ptr<string> ip_ {};
      // The port of the protected object.
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> portRange_ {};
      // The protocol type of the protected object. Valid values:
      // 
      // *   **tcp**
      // *   **udp**
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->ipPortProtocolList_ == nullptr
        && this->policyType_ == nullptr && this->portVersion_ == nullptr; };
    // ipPortProtocolList Field Functions 
    bool hasIpPortProtocolList() const { return this->ipPortProtocolList_ != nullptr;};
    void deleteIpPortProtocolList() { this->ipPortProtocolList_ = nullptr;};
    inline const vector<DetachFromPolicyRequest::IpPortProtocolList> & getIpPortProtocolList() const { DARABONBA_PTR_GET_CONST(ipPortProtocolList_, vector<DetachFromPolicyRequest::IpPortProtocolList>) };
    inline vector<DetachFromPolicyRequest::IpPortProtocolList> getIpPortProtocolList() { DARABONBA_PTR_GET(ipPortProtocolList_, vector<DetachFromPolicyRequest::IpPortProtocolList>) };
    inline DetachFromPolicyRequest& setIpPortProtocolList(const vector<DetachFromPolicyRequest::IpPortProtocolList> & ipPortProtocolList) { DARABONBA_PTR_SET_VALUE(ipPortProtocolList_, ipPortProtocolList) };
    inline DetachFromPolicyRequest& setIpPortProtocolList(vector<DetachFromPolicyRequest::IpPortProtocolList> && ipPortProtocolList) { DARABONBA_PTR_SET_RVALUE(ipPortProtocolList_, ipPortProtocolList) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DetachFromPolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // portVersion Field Functions 
    bool hasPortVersion() const { return this->portVersion_ != nullptr;};
    void deletePortVersion() { this->portVersion_ = nullptr;};
    inline string getPortVersion() const { DARABONBA_PTR_GET_DEFAULT(portVersion_, "") };
    inline DetachFromPolicyRequest& setPortVersion(string portVersion) { DARABONBA_PTR_SET_VALUE(portVersion_, portVersion) };


  protected:
    // The protected objects.
    // 
    // This parameter is required.
    shared_ptr<vector<DetachFromPolicyRequest::IpPortProtocolList>> ipPortProtocolList_ {};
    // The type of the policy. Valid values:
    // 
    // *   **default**: the default mitigation policies.
    // *   **l3**: IP-specific mitigation policies.
    // *   **l4**: port-specific mitigation policies.
    // 
    // This parameter is required.
    shared_ptr<string> policyType_ {};
    shared_ptr<string> portVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
