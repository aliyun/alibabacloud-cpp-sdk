// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGatewayResponseBodyDataElasticPolicy.hpp>
#include <alibabacloud/models/GetGatewayResponseBodyDataLogConfigDetails.hpp>
#include <alibabacloud/models/GetGatewayResponseBodyDataXtraceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Elastic, elastic_);
      DARABONBA_PTR_TO_JSON(ElasticPolicy, elasticPolicy_);
      DARABONBA_PTR_TO_JSON(ElasticReplica, elasticReplica_);
      DARABONBA_PTR_TO_JSON(ElasticType, elasticType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogConfigDetails, logConfigDetails_);
      DARABONBA_PTR_TO_JSON(MseTag, mseTag_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Replica, replica_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(TotalReplica, totalReplica_);
      DARABONBA_PTR_TO_JSON(Vpc, vpc_);
      DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
      DARABONBA_PTR_TO_JSON(Vswitch2, vswitch2_);
      DARABONBA_PTR_TO_JSON(XtraceDetails, xtraceDetails_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Elastic, elastic_);
      DARABONBA_PTR_FROM_JSON(ElasticPolicy, elasticPolicy_);
      DARABONBA_PTR_FROM_JSON(ElasticReplica, elasticReplica_);
      DARABONBA_PTR_FROM_JSON(ElasticType, elasticType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogConfigDetails, logConfigDetails_);
      DARABONBA_PTR_FROM_JSON(MseTag, mseTag_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Replica, replica_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(TotalReplica, totalReplica_);
      DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
      DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
      DARABONBA_PTR_FROM_JSON(Vswitch2, vswitch2_);
      DARABONBA_PTR_FROM_JSON(XtraceDetails, xtraceDetails_);
    };
    GetGatewayResponseBodyData() = default ;
    GetGatewayResponseBodyData(const GetGatewayResponseBodyData &) = default ;
    GetGatewayResponseBodyData(GetGatewayResponseBodyData &&) = default ;
    GetGatewayResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayResponseBodyData() = default ;
    GetGatewayResponseBodyData& operator=(const GetGatewayResponseBodyData &) = default ;
    GetGatewayResponseBodyData& operator=(GetGatewayResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->elastic_ != nullptr && this->elasticPolicy_ != nullptr && this->elasticReplica_ != nullptr && this->elasticType_ != nullptr && this->endDate_ != nullptr
        && this->gatewayUniqueId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->instanceId_ != nullptr
        && this->logConfigDetails_ != nullptr && this->mseTag_ != nullptr && this->name_ != nullptr && this->primaryUser_ != nullptr && this->region_ != nullptr
        && this->replica_ != nullptr && this->resourceGroupId_ != nullptr && this->securityGroup_ != nullptr && this->spec_ != nullptr && this->status_ != nullptr
        && this->statusDesc_ != nullptr && this->totalReplica_ != nullptr && this->vpc_ != nullptr && this->vswitch_ != nullptr && this->vswitch2_ != nullptr
        && this->xtraceDetails_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetGatewayResponseBodyData& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // elastic Field Functions 
    bool hasElastic() const { return this->elastic_ != nullptr;};
    void deleteElastic() { this->elastic_ = nullptr;};
    inline bool elastic() const { DARABONBA_PTR_GET_DEFAULT(elastic_, false) };
    inline GetGatewayResponseBodyData& setElastic(bool elastic) { DARABONBA_PTR_SET_VALUE(elastic_, elastic) };


    // elasticPolicy Field Functions 
    bool hasElasticPolicy() const { return this->elasticPolicy_ != nullptr;};
    void deleteElasticPolicy() { this->elasticPolicy_ = nullptr;};
    inline const Models::GetGatewayResponseBodyDataElasticPolicy & elasticPolicy() const { DARABONBA_PTR_GET_CONST(elasticPolicy_, Models::GetGatewayResponseBodyDataElasticPolicy) };
    inline Models::GetGatewayResponseBodyDataElasticPolicy elasticPolicy() { DARABONBA_PTR_GET(elasticPolicy_, Models::GetGatewayResponseBodyDataElasticPolicy) };
    inline GetGatewayResponseBodyData& setElasticPolicy(const Models::GetGatewayResponseBodyDataElasticPolicy & elasticPolicy) { DARABONBA_PTR_SET_VALUE(elasticPolicy_, elasticPolicy) };
    inline GetGatewayResponseBodyData& setElasticPolicy(Models::GetGatewayResponseBodyDataElasticPolicy && elasticPolicy) { DARABONBA_PTR_SET_RVALUE(elasticPolicy_, elasticPolicy) };


    // elasticReplica Field Functions 
    bool hasElasticReplica() const { return this->elasticReplica_ != nullptr;};
    void deleteElasticReplica() { this->elasticReplica_ = nullptr;};
    inline int32_t elasticReplica() const { DARABONBA_PTR_GET_DEFAULT(elasticReplica_, 0) };
    inline GetGatewayResponseBodyData& setElasticReplica(int32_t elasticReplica) { DARABONBA_PTR_SET_VALUE(elasticReplica_, elasticReplica) };


    // elasticType Field Functions 
    bool hasElasticType() const { return this->elasticType_ != nullptr;};
    void deleteElasticType() { this->elasticType_ = nullptr;};
    inline string elasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
    inline GetGatewayResponseBodyData& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetGatewayResponseBodyData& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetGatewayResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetGatewayResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetGatewayResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetGatewayResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetGatewayResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logConfigDetails Field Functions 
    bool hasLogConfigDetails() const { return this->logConfigDetails_ != nullptr;};
    void deleteLogConfigDetails() { this->logConfigDetails_ = nullptr;};
    inline const Models::GetGatewayResponseBodyDataLogConfigDetails & logConfigDetails() const { DARABONBA_PTR_GET_CONST(logConfigDetails_, Models::GetGatewayResponseBodyDataLogConfigDetails) };
    inline Models::GetGatewayResponseBodyDataLogConfigDetails logConfigDetails() { DARABONBA_PTR_GET(logConfigDetails_, Models::GetGatewayResponseBodyDataLogConfigDetails) };
    inline GetGatewayResponseBodyData& setLogConfigDetails(const Models::GetGatewayResponseBodyDataLogConfigDetails & logConfigDetails) { DARABONBA_PTR_SET_VALUE(logConfigDetails_, logConfigDetails) };
    inline GetGatewayResponseBodyData& setLogConfigDetails(Models::GetGatewayResponseBodyDataLogConfigDetails && logConfigDetails) { DARABONBA_PTR_SET_RVALUE(logConfigDetails_, logConfigDetails) };


    // mseTag Field Functions 
    bool hasMseTag() const { return this->mseTag_ != nullptr;};
    void deleteMseTag() { this->mseTag_ = nullptr;};
    inline string mseTag() const { DARABONBA_PTR_GET_DEFAULT(mseTag_, "") };
    inline GetGatewayResponseBodyData& setMseTag(string mseTag) { DARABONBA_PTR_SET_VALUE(mseTag_, mseTag) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGatewayResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // primaryUser Field Functions 
    bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
    void deletePrimaryUser() { this->primaryUser_ = nullptr;};
    inline string primaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
    inline GetGatewayResponseBodyData& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetGatewayResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline GetGatewayResponseBodyData& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetGatewayResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline string securityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
    inline GetGatewayResponseBodyData& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetGatewayResponseBodyData& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetGatewayResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline GetGatewayResponseBodyData& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // totalReplica Field Functions 
    bool hasTotalReplica() const { return this->totalReplica_ != nullptr;};
    void deleteTotalReplica() { this->totalReplica_ = nullptr;};
    inline int32_t totalReplica() const { DARABONBA_PTR_GET_DEFAULT(totalReplica_, 0) };
    inline GetGatewayResponseBodyData& setTotalReplica(int32_t totalReplica) { DARABONBA_PTR_SET_VALUE(totalReplica_, totalReplica) };


    // vpc Field Functions 
    bool hasVpc() const { return this->vpc_ != nullptr;};
    void deleteVpc() { this->vpc_ = nullptr;};
    inline string vpc() const { DARABONBA_PTR_GET_DEFAULT(vpc_, "") };
    inline GetGatewayResponseBodyData& setVpc(string vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };


    // vswitch Field Functions 
    bool hasVswitch() const { return this->vswitch_ != nullptr;};
    void deleteVswitch() { this->vswitch_ = nullptr;};
    inline string vswitch() const { DARABONBA_PTR_GET_DEFAULT(vswitch_, "") };
    inline GetGatewayResponseBodyData& setVswitch(string vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };


    // vswitch2 Field Functions 
    bool hasVswitch2() const { return this->vswitch2_ != nullptr;};
    void deleteVswitch2() { this->vswitch2_ = nullptr;};
    inline string vswitch2() const { DARABONBA_PTR_GET_DEFAULT(vswitch2_, "") };
    inline GetGatewayResponseBodyData& setVswitch2(string vswitch2) { DARABONBA_PTR_SET_VALUE(vswitch2_, vswitch2) };


    // xtraceDetails Field Functions 
    bool hasXtraceDetails() const { return this->xtraceDetails_ != nullptr;};
    void deleteXtraceDetails() { this->xtraceDetails_ = nullptr;};
    inline const Models::GetGatewayResponseBodyDataXtraceDetails & xtraceDetails() const { DARABONBA_PTR_GET_CONST(xtraceDetails_, Models::GetGatewayResponseBodyDataXtraceDetails) };
    inline Models::GetGatewayResponseBodyDataXtraceDetails xtraceDetails() { DARABONBA_PTR_GET(xtraceDetails_, Models::GetGatewayResponseBodyDataXtraceDetails) };
    inline GetGatewayResponseBodyData& setXtraceDetails(const Models::GetGatewayResponseBodyDataXtraceDetails & xtraceDetails) { DARABONBA_PTR_SET_VALUE(xtraceDetails_, xtraceDetails) };
    inline GetGatewayResponseBodyData& setXtraceDetails(Models::GetGatewayResponseBodyDataXtraceDetails && xtraceDetails) { DARABONBA_PTR_SET_RVALUE(xtraceDetails_, xtraceDetails) };


  protected:
    // The billing method, such as subscription or pay-as-you-go.
    std::shared_ptr<string> chargeType_ = nullptr;
    // Indicates whether auto scale-out is enabled.
    std::shared_ptr<bool> elastic_ = nullptr;
    // The auto scale-out policy.
    std::shared_ptr<Models::GetGatewayResponseBodyDataElasticPolicy> elasticPolicy_ = nullptr;
    // The number of replicas that are automatically scaled out.
    std::shared_ptr<int32_t> elasticReplica_ = nullptr;
    // The type of auto scale-out. Valid value:
    // 
    // *   CronHPA: scale-out by time
    std::shared_ptr<string> elasticType_ = nullptr;
    // The time when the gateway expires.
    std::shared_ptr<string> endDate_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The time when the gateway was created. The time is displayed in GMT. The time is the local time of the region in which the gateway resides.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the gateway was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The log configuration.
    std::shared_ptr<Models::GetGatewayResponseBodyDataLogConfigDetails> logConfigDetails_ = nullptr;
    // The tag of the resource.
    std::shared_ptr<string> mseTag_ = nullptr;
    // The name of the gateway.
    std::shared_ptr<string> name_ = nullptr;
    // The Alibaba Cloud account ID of the user who created the gateway.
    std::shared_ptr<string> primaryUser_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The number of gateway replicas.
    std::shared_ptr<int32_t> replica_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroup_ = nullptr;
    // The specifications of the gateway.
    std::shared_ptr<string> spec_ = nullptr;
    // The status of the gateway. Valid values:
    // 
    // *   0: The gateway is being created.
    // *   1: The gateway fails to be created.
    // *   2: The gateway is running.
    // *   3: The gateway is changing.
    // *   4: The gateway is scaling in.
    // *   6: The gateway is scaling out.
    // *   8: The gateway is being deleted.
    // *   10: The gateway is restarting.
    // *   11: The gateway is being rebuilt.
    // *   12: The gateway is updating.
    // *   13: The gateway fails to be updated.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The description of the status.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // The total number of replicas, including the number of replicas that are automatically scaled out.
    std::shared_ptr<int32_t> totalReplica_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpc_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vswitch_ = nullptr;
    // The ID of the secondary vSwitch.
    std::shared_ptr<string> vswitch2_ = nullptr;
    // The details of Tracing Analysis.
    std::shared_ptr<Models::GetGatewayResponseBodyDataXtraceDetails> xtraceDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
