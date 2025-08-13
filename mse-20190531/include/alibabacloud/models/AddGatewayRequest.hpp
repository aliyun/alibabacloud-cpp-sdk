// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddGatewayRequestTag.hpp>
#include <alibabacloud/models/AddGatewayRequestZoneInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClbNetworkType, clbNetworkType_);
      DARABONBA_PTR_TO_JSON(EnableHardwareAcceleration, enableHardwareAcceleration_);
      DARABONBA_PTR_TO_JSON(EnableSls, enableSls_);
      DARABONBA_PTR_TO_JSON(EnableXtrace, enableXtrace_);
      DARABONBA_PTR_TO_JSON(EnterpriseSecurityGroup, enterpriseSecurityGroup_);
      DARABONBA_PTR_TO_JSON(InternetSlbSpec, internetSlbSpec_);
      DARABONBA_PTR_TO_JSON(ManagedEntryNetworkType, managedEntryNetworkType_);
      DARABONBA_PTR_TO_JSON(MserVersion, mserVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NlbNetworkType, nlbNetworkType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Replica, replica_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SlbSpec, slbSpec_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchId2, vSwitchId2_);
      DARABONBA_PTR_TO_JSON(Vpc, vpc_);
      DARABONBA_PTR_TO_JSON(XtraceRatio, xtraceRatio_);
      DARABONBA_PTR_TO_JSON(ZoneInfo, zoneInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClbNetworkType, clbNetworkType_);
      DARABONBA_PTR_FROM_JSON(EnableHardwareAcceleration, enableHardwareAcceleration_);
      DARABONBA_PTR_FROM_JSON(EnableSls, enableSls_);
      DARABONBA_PTR_FROM_JSON(EnableXtrace, enableXtrace_);
      DARABONBA_PTR_FROM_JSON(EnterpriseSecurityGroup, enterpriseSecurityGroup_);
      DARABONBA_PTR_FROM_JSON(InternetSlbSpec, internetSlbSpec_);
      DARABONBA_PTR_FROM_JSON(ManagedEntryNetworkType, managedEntryNetworkType_);
      DARABONBA_PTR_FROM_JSON(MserVersion, mserVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NlbNetworkType, nlbNetworkType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Replica, replica_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SlbSpec, slbSpec_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId2, vSwitchId2_);
      DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
      DARABONBA_PTR_FROM_JSON(XtraceRatio, xtraceRatio_);
      DARABONBA_PTR_FROM_JSON(ZoneInfo, zoneInfo_);
    };
    AddGatewayRequest() = default ;
    AddGatewayRequest(const AddGatewayRequest &) = default ;
    AddGatewayRequest(AddGatewayRequest &&) = default ;
    AddGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayRequest() = default ;
    AddGatewayRequest& operator=(const AddGatewayRequest &) = default ;
    AddGatewayRequest& operator=(AddGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->chargeType_ != nullptr && this->clbNetworkType_ != nullptr && this->enableHardwareAcceleration_ != nullptr && this->enableSls_ != nullptr && this->enableXtrace_ != nullptr
        && this->enterpriseSecurityGroup_ != nullptr && this->internetSlbSpec_ != nullptr && this->managedEntryNetworkType_ != nullptr && this->mserVersion_ != nullptr && this->name_ != nullptr
        && this->nlbNetworkType_ != nullptr && this->region_ != nullptr && this->replica_ != nullptr && this->requestPars_ != nullptr && this->resourceGroupId_ != nullptr
        && this->slbSpec_ != nullptr && this->spec_ != nullptr && this->tag_ != nullptr && this->vSwitchId_ != nullptr && this->vSwitchId2_ != nullptr
        && this->vpc_ != nullptr && this->xtraceRatio_ != nullptr && this->zoneInfo_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddGatewayRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline AddGatewayRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clbNetworkType Field Functions 
    bool hasClbNetworkType() const { return this->clbNetworkType_ != nullptr;};
    void deleteClbNetworkType() { this->clbNetworkType_ = nullptr;};
    inline string clbNetworkType() const { DARABONBA_PTR_GET_DEFAULT(clbNetworkType_, "") };
    inline AddGatewayRequest& setClbNetworkType(string clbNetworkType) { DARABONBA_PTR_SET_VALUE(clbNetworkType_, clbNetworkType) };


    // enableHardwareAcceleration Field Functions 
    bool hasEnableHardwareAcceleration() const { return this->enableHardwareAcceleration_ != nullptr;};
    void deleteEnableHardwareAcceleration() { this->enableHardwareAcceleration_ = nullptr;};
    inline bool enableHardwareAcceleration() const { DARABONBA_PTR_GET_DEFAULT(enableHardwareAcceleration_, false) };
    inline AddGatewayRequest& setEnableHardwareAcceleration(bool enableHardwareAcceleration) { DARABONBA_PTR_SET_VALUE(enableHardwareAcceleration_, enableHardwareAcceleration) };


    // enableSls Field Functions 
    bool hasEnableSls() const { return this->enableSls_ != nullptr;};
    void deleteEnableSls() { this->enableSls_ = nullptr;};
    inline bool enableSls() const { DARABONBA_PTR_GET_DEFAULT(enableSls_, false) };
    inline AddGatewayRequest& setEnableSls(bool enableSls) { DARABONBA_PTR_SET_VALUE(enableSls_, enableSls) };


    // enableXtrace Field Functions 
    bool hasEnableXtrace() const { return this->enableXtrace_ != nullptr;};
    void deleteEnableXtrace() { this->enableXtrace_ = nullptr;};
    inline bool enableXtrace() const { DARABONBA_PTR_GET_DEFAULT(enableXtrace_, false) };
    inline AddGatewayRequest& setEnableXtrace(bool enableXtrace) { DARABONBA_PTR_SET_VALUE(enableXtrace_, enableXtrace) };


    // enterpriseSecurityGroup Field Functions 
    bool hasEnterpriseSecurityGroup() const { return this->enterpriseSecurityGroup_ != nullptr;};
    void deleteEnterpriseSecurityGroup() { this->enterpriseSecurityGroup_ = nullptr;};
    inline bool enterpriseSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(enterpriseSecurityGroup_, false) };
    inline AddGatewayRequest& setEnterpriseSecurityGroup(bool enterpriseSecurityGroup) { DARABONBA_PTR_SET_VALUE(enterpriseSecurityGroup_, enterpriseSecurityGroup) };


    // internetSlbSpec Field Functions 
    bool hasInternetSlbSpec() const { return this->internetSlbSpec_ != nullptr;};
    void deleteInternetSlbSpec() { this->internetSlbSpec_ = nullptr;};
    inline string internetSlbSpec() const { DARABONBA_PTR_GET_DEFAULT(internetSlbSpec_, "") };
    inline AddGatewayRequest& setInternetSlbSpec(string internetSlbSpec) { DARABONBA_PTR_SET_VALUE(internetSlbSpec_, internetSlbSpec) };


    // managedEntryNetworkType Field Functions 
    bool hasManagedEntryNetworkType() const { return this->managedEntryNetworkType_ != nullptr;};
    void deleteManagedEntryNetworkType() { this->managedEntryNetworkType_ = nullptr;};
    inline string managedEntryNetworkType() const { DARABONBA_PTR_GET_DEFAULT(managedEntryNetworkType_, "") };
    inline AddGatewayRequest& setManagedEntryNetworkType(string managedEntryNetworkType) { DARABONBA_PTR_SET_VALUE(managedEntryNetworkType_, managedEntryNetworkType) };


    // mserVersion Field Functions 
    bool hasMserVersion() const { return this->mserVersion_ != nullptr;};
    void deleteMserVersion() { this->mserVersion_ = nullptr;};
    inline string mserVersion() const { DARABONBA_PTR_GET_DEFAULT(mserVersion_, "") };
    inline AddGatewayRequest& setMserVersion(string mserVersion) { DARABONBA_PTR_SET_VALUE(mserVersion_, mserVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddGatewayRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nlbNetworkType Field Functions 
    bool hasNlbNetworkType() const { return this->nlbNetworkType_ != nullptr;};
    void deleteNlbNetworkType() { this->nlbNetworkType_ = nullptr;};
    inline string nlbNetworkType() const { DARABONBA_PTR_GET_DEFAULT(nlbNetworkType_, "") };
    inline AddGatewayRequest& setNlbNetworkType(string nlbNetworkType) { DARABONBA_PTR_SET_VALUE(nlbNetworkType_, nlbNetworkType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline AddGatewayRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline AddGatewayRequest& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline AddGatewayRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AddGatewayRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slbSpec Field Functions 
    bool hasSlbSpec() const { return this->slbSpec_ != nullptr;};
    void deleteSlbSpec() { this->slbSpec_ = nullptr;};
    inline string slbSpec() const { DARABONBA_PTR_GET_DEFAULT(slbSpec_, "") };
    inline AddGatewayRequest& setSlbSpec(string slbSpec) { DARABONBA_PTR_SET_VALUE(slbSpec_, slbSpec) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline AddGatewayRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<AddGatewayRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<AddGatewayRequestTag>) };
    inline vector<AddGatewayRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<AddGatewayRequestTag>) };
    inline AddGatewayRequest& setTag(const vector<AddGatewayRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline AddGatewayRequest& setTag(vector<AddGatewayRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline AddGatewayRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchId2 Field Functions 
    bool hasVSwitchId2() const { return this->vSwitchId2_ != nullptr;};
    void deleteVSwitchId2() { this->vSwitchId2_ = nullptr;};
    inline string vSwitchId2() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId2_, "") };
    inline AddGatewayRequest& setVSwitchId2(string vSwitchId2) { DARABONBA_PTR_SET_VALUE(vSwitchId2_, vSwitchId2) };


    // vpc Field Functions 
    bool hasVpc() const { return this->vpc_ != nullptr;};
    void deleteVpc() { this->vpc_ = nullptr;};
    inline string vpc() const { DARABONBA_PTR_GET_DEFAULT(vpc_, "") };
    inline AddGatewayRequest& setVpc(string vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };


    // xtraceRatio Field Functions 
    bool hasXtraceRatio() const { return this->xtraceRatio_ != nullptr;};
    void deleteXtraceRatio() { this->xtraceRatio_ = nullptr;};
    inline string xtraceRatio() const { DARABONBA_PTR_GET_DEFAULT(xtraceRatio_, "") };
    inline AddGatewayRequest& setXtraceRatio(string xtraceRatio) { DARABONBA_PTR_SET_VALUE(xtraceRatio_, xtraceRatio) };


    // zoneInfo Field Functions 
    bool hasZoneInfo() const { return this->zoneInfo_ != nullptr;};
    void deleteZoneInfo() { this->zoneInfo_ = nullptr;};
    inline const vector<AddGatewayRequestZoneInfo> & zoneInfo() const { DARABONBA_PTR_GET_CONST(zoneInfo_, vector<AddGatewayRequestZoneInfo>) };
    inline vector<AddGatewayRequestZoneInfo> zoneInfo() { DARABONBA_PTR_GET(zoneInfo_, vector<AddGatewayRequestZoneInfo>) };
    inline AddGatewayRequest& setZoneInfo(const vector<AddGatewayRequestZoneInfo> & zoneInfo) { DARABONBA_PTR_SET_VALUE(zoneInfo_, zoneInfo) };
    inline AddGatewayRequest& setZoneInfo(vector<AddGatewayRequestZoneInfo> && zoneInfo) { DARABONBA_PTR_SET_RVALUE(zoneInfo_, zoneInfo) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The billing method you specify when you purchase an ordinary instance.
    // 
    // Valid values:
    // 
    // *   PREPAY: subscription
    // *   POSTPAY: pay-as-you-go
    std::shared_ptr<string> chargeType_ = nullptr;
    // The network type of the purchased Classic Load Balancer (CLB) instance that is billed based on LCUs.
    // 
    // *   pubnet: Internet
    // *   privatenet: private network
    // *   privatepubnet: Internet and private network
    std::shared_ptr<string> clbNetworkType_ = nullptr;
    // Specifies whether to activate Tracing Analysis.
    std::shared_ptr<bool> enableHardwareAcceleration_ = nullptr;
    // The tag of the gateway.
    std::shared_ptr<bool> enableSls_ = nullptr;
    // The sampling rate of Tracing Analysis. Valid values: [1,100].
    std::shared_ptr<bool> enableXtrace_ = nullptr;
    // Specifies whether to enable hardware acceleration.
    std::shared_ptr<bool> enterpriseSecurityGroup_ = nullptr;
    // The specifications of the Internet-facing Server Load Balancer (SLB) instance. Valid values:
    // 
    // *   slb.s1.small
    // *   slb.s2.smal
    // *   slb.s2.medium
    // *   slb.s3.small
    // *   slb.s3.medium
    // *   slb.s3.large
    std::shared_ptr<string> internetSlbSpec_ = nullptr;
    std::shared_ptr<string> managedEntryNetworkType_ = nullptr;
    // The MSE instance type. Valid values:
    // 
    // *   mse_pro: ordinary instance
    // *   mse_serverless: serverless instance
    std::shared_ptr<string> mserVersion_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> name_ = nullptr;
    // The network type of the Network Load Balancer (NLB) instance you specify when you purchase a serverless instance.
    // 
    // *   pubnet: Internet
    // *   privatenet: private network
    // *   privatepubnet: Internet and private network
    std::shared_ptr<string> nlbNetworkType_ = nullptr;
    // The specifications of the internal-facing Server Load Balancer (SLB) instance. Valid values:
    // 
    // *   slb.s1.small
    // *   slb.s2.small
    // *   slb.s2.medium
    // *   slb.s3.small
    // *   slb.s3.medium
    // *   slb.s3.large
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // The number of nodes you specify when you purchase an ordinary instance.
    std::shared_ptr<int32_t> replica_ = nullptr;
    // The extended field.
    std::shared_ptr<string> requestPars_ = nullptr;
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The specifications of the internal-facing Server Load Balancer (SLB) instance. Valid values:
    // 
    // *   slb.s1.small
    // *   slb.s2.small
    // *   slb.s2.medium
    // *   slb.s3.small
    // *   slb.s3.medium
    // *   slb.s3.large
    std::shared_ptr<string> slbSpec_ = nullptr;
    // The node specifications you specify when you purchase an ordinary instance. Valid values:
    // 
    // *   MSE_GTW_16_32_200_c(16C32G)
    // *   MSE_GTW_2_4_200_c(2C4G)
    // *   MSE_GTW_4_8_200_c(4C8G)
    // *   MSE_GTW_8_16_200_c(8C16G)
    std::shared_ptr<string> spec_ = nullptr;
    // The tag object.
    std::shared_ptr<vector<AddGatewayRequestTag>> tag_ = nullptr;
    // The ID of the primary vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // Specifies whether to use an advanced security group.
    std::shared_ptr<string> vSwitchId2_ = nullptr;
    // The ID of the primary vSwitch.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpc_ = nullptr;
    // Specifies whether to activate Log Service.
    std::shared_ptr<string> xtraceRatio_ = nullptr;
    // The details of the zone.
    std::shared_ptr<vector<AddGatewayRequestZoneInfo>> zoneInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
