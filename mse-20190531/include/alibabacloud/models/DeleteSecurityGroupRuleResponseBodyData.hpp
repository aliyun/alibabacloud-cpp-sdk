// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYGROUPRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYGROUPRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteSecurityGroupRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityGroupRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityGroupRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    DeleteSecurityGroupRuleResponseBodyData() = default ;
    DeleteSecurityGroupRuleResponseBodyData(const DeleteSecurityGroupRuleResponseBodyData &) = default ;
    DeleteSecurityGroupRuleResponseBodyData(DeleteSecurityGroupRuleResponseBodyData &&) = default ;
    DeleteSecurityGroupRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityGroupRuleResponseBodyData() = default ;
    DeleteSecurityGroupRuleResponseBodyData& operator=(const DeleteSecurityGroupRuleResponseBodyData &) = default ;
    DeleteSecurityGroupRuleResponseBodyData& operator=(DeleteSecurityGroupRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr
        && return this->ipProtocol_ == nullptr && return this->portRange_ == nullptr && return this->securityGroupId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DeleteSecurityGroupRuleResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline DeleteSecurityGroupRuleResponseBodyData& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline DeleteSecurityGroupRuleResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DeleteSecurityGroupRuleResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DeleteSecurityGroupRuleResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteSecurityGroupRuleResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline DeleteSecurityGroupRuleResponseBodyData& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline DeleteSecurityGroupRuleResponseBodyData& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DeleteSecurityGroupRuleResponseBodyData& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The transport layer protocol. The value of this parameter is case-insensitive. Valid values:
    // 
    // *   icmp
    // *   gre
    // *   tcp
    // *   udp
    // *   all: All protocols are supported.
    std::shared_ptr<string> ipProtocol_ = nullptr;
    // The range of ports for the transport layer protocol in the destination security group. Valid values:
    // 
    // *   When the IpProtocol parameter is set to tcp or udp, the port number range is 1 to 65535. The start port number and the end port number are separated by a forward slash (/). Example: 1/200.
    // *   If the IpProtocol parameter is set to icmp, the port number range is -1/-1, which indicates all ports.
    // *   If the IpProtocol parameter is set to gre, the port number range is -1/-1, which indicates all ports.
    // *   If the IpProtocol parameter is set to all, the port number range is -1/-1, which indicates all ports.
    std::shared_ptr<string> portRange_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
