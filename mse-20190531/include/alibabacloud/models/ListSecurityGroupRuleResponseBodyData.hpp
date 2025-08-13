// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYGROUPRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYGROUPRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListSecurityGroupRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityGroupRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCidrs, authCidrs_);
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
    friend void from_json(const Darabonba::Json& j, ListSecurityGroupRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCidrs, authCidrs_);
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
    ListSecurityGroupRuleResponseBodyData() = default ;
    ListSecurityGroupRuleResponseBodyData(const ListSecurityGroupRuleResponseBodyData &) = default ;
    ListSecurityGroupRuleResponseBodyData(ListSecurityGroupRuleResponseBodyData &&) = default ;
    ListSecurityGroupRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityGroupRuleResponseBodyData() = default ;
    ListSecurityGroupRuleResponseBodyData& operator=(const ListSecurityGroupRuleResponseBodyData &) = default ;
    ListSecurityGroupRuleResponseBodyData& operator=(ListSecurityGroupRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authCidrs_ != nullptr
        && this->description_ != nullptr && this->gatewayId_ != nullptr && this->gatewayUniqueId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->id_ != nullptr && this->ipProtocol_ != nullptr && this->portRange_ != nullptr && this->securityGroupId_ != nullptr; };
    // authCidrs Field Functions 
    bool hasAuthCidrs() const { return this->authCidrs_ != nullptr;};
    void deleteAuthCidrs() { this->authCidrs_ = nullptr;};
    inline const vector<string> & authCidrs() const { DARABONBA_PTR_GET_CONST(authCidrs_, vector<string>) };
    inline vector<string> authCidrs() { DARABONBA_PTR_GET(authCidrs_, vector<string>) };
    inline ListSecurityGroupRuleResponseBodyData& setAuthCidrs(const vector<string> & authCidrs) { DARABONBA_PTR_SET_VALUE(authCidrs_, authCidrs) };
    inline ListSecurityGroupRuleResponseBodyData& setAuthCidrs(vector<string> && authCidrs) { DARABONBA_PTR_SET_RVALUE(authCidrs_, authCidrs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListSecurityGroupRuleResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline ListSecurityGroupRuleResponseBodyData& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ListSecurityGroupRuleResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListSecurityGroupRuleResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListSecurityGroupRuleResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListSecurityGroupRuleResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline ListSecurityGroupRuleResponseBodyData& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline ListSecurityGroupRuleResponseBodyData& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListSecurityGroupRuleResponseBodyData& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    std::shared_ptr<vector<string>> authCidrs_ = nullptr;
    // The rule description.
    std::shared_ptr<string> description_ = nullptr;
    // The gateway ID.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The last modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the security group authorization record.
    std::shared_ptr<string> id_ = nullptr;
    // The protocol type.
    std::shared_ptr<string> ipProtocol_ = nullptr;
    // The port range.
    std::shared_ptr<string> portRange_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
