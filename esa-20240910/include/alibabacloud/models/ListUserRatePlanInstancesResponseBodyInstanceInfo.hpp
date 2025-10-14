// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERRATEPLANINSTANCESRESPONSEBODYINSTANCEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERRATEPLANINSTANCESRESPONSEBODYINSTANCEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserRatePlanInstancesResponseBodyInstanceInfoSites.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserRatePlanInstancesResponseBodyInstanceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserRatePlanInstancesResponseBodyInstanceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BillingMode, billingMode_);
      DARABONBA_PTR_TO_JSON(BotInstanceLevel, botInstanceLevel_);
      DARABONBA_PTR_TO_JSON(BotRequest, botRequest_);
      DARABONBA_PTR_TO_JSON(Coverages, coverages_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CrossborderTraffic, crossborderTraffic_);
      DARABONBA_PTR_TO_JSON(DdosBurstableDomesticProtection, ddosBurstableDomesticProtection_);
      DARABONBA_PTR_TO_JSON(DdosBurstableOverseasProtection, ddosBurstableOverseasProtection_);
      DARABONBA_PTR_TO_JSON(DdosInstanceLevel, ddosInstanceLevel_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EdgeRoutineRquest, edgeRoutineRquest_);
      DARABONBA_PTR_TO_JSON(EdgeWafRequest, edgeWafRequest_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Layer4Traffic, layer4Traffic_);
      DARABONBA_PTR_TO_JSON(Layer4TrafficIntl, layer4TrafficIntl_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(PlanTraffic, planTraffic_);
      DARABONBA_PTR_TO_JSON(PlanType, planType_);
      DARABONBA_PTR_TO_JSON(SiteQuota, siteQuota_);
      DARABONBA_PTR_TO_JSON(Sites, sites_);
      DARABONBA_PTR_TO_JSON(SmartRoutingRequest, smartRoutingRequest_);
      DARABONBA_PTR_TO_JSON(StaticRequest, staticRequest_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubscribeType, subscribeType_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserRatePlanInstancesResponseBodyInstanceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingMode, billingMode_);
      DARABONBA_PTR_FROM_JSON(BotInstanceLevel, botInstanceLevel_);
      DARABONBA_PTR_FROM_JSON(BotRequest, botRequest_);
      DARABONBA_PTR_FROM_JSON(Coverages, coverages_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CrossborderTraffic, crossborderTraffic_);
      DARABONBA_PTR_FROM_JSON(DdosBurstableDomesticProtection, ddosBurstableDomesticProtection_);
      DARABONBA_PTR_FROM_JSON(DdosBurstableOverseasProtection, ddosBurstableOverseasProtection_);
      DARABONBA_PTR_FROM_JSON(DdosInstanceLevel, ddosInstanceLevel_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EdgeRoutineRquest, edgeRoutineRquest_);
      DARABONBA_PTR_FROM_JSON(EdgeWafRequest, edgeWafRequest_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Layer4Traffic, layer4Traffic_);
      DARABONBA_PTR_FROM_JSON(Layer4TrafficIntl, layer4TrafficIntl_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(PlanTraffic, planTraffic_);
      DARABONBA_PTR_FROM_JSON(PlanType, planType_);
      DARABONBA_PTR_FROM_JSON(SiteQuota, siteQuota_);
      DARABONBA_PTR_FROM_JSON(Sites, sites_);
      DARABONBA_PTR_FROM_JSON(SmartRoutingRequest, smartRoutingRequest_);
      DARABONBA_PTR_FROM_JSON(StaticRequest, staticRequest_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubscribeType, subscribeType_);
    };
    ListUserRatePlanInstancesResponseBodyInstanceInfo() = default ;
    ListUserRatePlanInstancesResponseBodyInstanceInfo(const ListUserRatePlanInstancesResponseBodyInstanceInfo &) = default ;
    ListUserRatePlanInstancesResponseBodyInstanceInfo(ListUserRatePlanInstancesResponseBodyInstanceInfo &&) = default ;
    ListUserRatePlanInstancesResponseBodyInstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserRatePlanInstancesResponseBodyInstanceInfo() = default ;
    ListUserRatePlanInstancesResponseBodyInstanceInfo& operator=(const ListUserRatePlanInstancesResponseBodyInstanceInfo &) = default ;
    ListUserRatePlanInstancesResponseBodyInstanceInfo& operator=(ListUserRatePlanInstancesResponseBodyInstanceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingMode_ == nullptr
        && return this->botInstanceLevel_ == nullptr && return this->botRequest_ == nullptr && return this->coverages_ == nullptr && return this->createTime_ == nullptr && return this->crossborderTraffic_ == nullptr
        && return this->ddosBurstableDomesticProtection_ == nullptr && return this->ddosBurstableOverseasProtection_ == nullptr && return this->ddosInstanceLevel_ == nullptr && return this->duration_ == nullptr && return this->edgeRoutineRquest_ == nullptr
        && return this->edgeWafRequest_ == nullptr && return this->expireTime_ == nullptr && return this->instanceId_ == nullptr && return this->layer4Traffic_ == nullptr && return this->layer4TrafficIntl_ == nullptr
        && return this->planName_ == nullptr && return this->planTraffic_ == nullptr && return this->planType_ == nullptr && return this->siteQuota_ == nullptr && return this->sites_ == nullptr
        && return this->smartRoutingRequest_ == nullptr && return this->staticRequest_ == nullptr && return this->status_ == nullptr && return this->subscribeType_ == nullptr; };
    // billingMode Field Functions 
    bool hasBillingMode() const { return this->billingMode_ != nullptr;};
    void deleteBillingMode() { this->billingMode_ = nullptr;};
    inline string billingMode() const { DARABONBA_PTR_GET_DEFAULT(billingMode_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setBillingMode(string billingMode) { DARABONBA_PTR_SET_VALUE(billingMode_, billingMode) };


    // botInstanceLevel Field Functions 
    bool hasBotInstanceLevel() const { return this->botInstanceLevel_ != nullptr;};
    void deleteBotInstanceLevel() { this->botInstanceLevel_ = nullptr;};
    inline string botInstanceLevel() const { DARABONBA_PTR_GET_DEFAULT(botInstanceLevel_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setBotInstanceLevel(string botInstanceLevel) { DARABONBA_PTR_SET_VALUE(botInstanceLevel_, botInstanceLevel) };


    // botRequest Field Functions 
    bool hasBotRequest() const { return this->botRequest_ != nullptr;};
    void deleteBotRequest() { this->botRequest_ = nullptr;};
    inline string botRequest() const { DARABONBA_PTR_GET_DEFAULT(botRequest_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setBotRequest(string botRequest) { DARABONBA_PTR_SET_VALUE(botRequest_, botRequest) };


    // coverages Field Functions 
    bool hasCoverages() const { return this->coverages_ != nullptr;};
    void deleteCoverages() { this->coverages_ = nullptr;};
    inline string coverages() const { DARABONBA_PTR_GET_DEFAULT(coverages_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setCoverages(string coverages) { DARABONBA_PTR_SET_VALUE(coverages_, coverages) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossborderTraffic Field Functions 
    bool hasCrossborderTraffic() const { return this->crossborderTraffic_ != nullptr;};
    void deleteCrossborderTraffic() { this->crossborderTraffic_ = nullptr;};
    inline string crossborderTraffic() const { DARABONBA_PTR_GET_DEFAULT(crossborderTraffic_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setCrossborderTraffic(string crossborderTraffic) { DARABONBA_PTR_SET_VALUE(crossborderTraffic_, crossborderTraffic) };


    // ddosBurstableDomesticProtection Field Functions 
    bool hasDdosBurstableDomesticProtection() const { return this->ddosBurstableDomesticProtection_ != nullptr;};
    void deleteDdosBurstableDomesticProtection() { this->ddosBurstableDomesticProtection_ = nullptr;};
    inline string ddosBurstableDomesticProtection() const { DARABONBA_PTR_GET_DEFAULT(ddosBurstableDomesticProtection_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setDdosBurstableDomesticProtection(string ddosBurstableDomesticProtection) { DARABONBA_PTR_SET_VALUE(ddosBurstableDomesticProtection_, ddosBurstableDomesticProtection) };


    // ddosBurstableOverseasProtection Field Functions 
    bool hasDdosBurstableOverseasProtection() const { return this->ddosBurstableOverseasProtection_ != nullptr;};
    void deleteDdosBurstableOverseasProtection() { this->ddosBurstableOverseasProtection_ = nullptr;};
    inline string ddosBurstableOverseasProtection() const { DARABONBA_PTR_GET_DEFAULT(ddosBurstableOverseasProtection_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setDdosBurstableOverseasProtection(string ddosBurstableOverseasProtection) { DARABONBA_PTR_SET_VALUE(ddosBurstableOverseasProtection_, ddosBurstableOverseasProtection) };


    // ddosInstanceLevel Field Functions 
    bool hasDdosInstanceLevel() const { return this->ddosInstanceLevel_ != nullptr;};
    void deleteDdosInstanceLevel() { this->ddosInstanceLevel_ = nullptr;};
    inline string ddosInstanceLevel() const { DARABONBA_PTR_GET_DEFAULT(ddosInstanceLevel_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setDdosInstanceLevel(string ddosInstanceLevel) { DARABONBA_PTR_SET_VALUE(ddosInstanceLevel_, ddosInstanceLevel) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // edgeRoutineRquest Field Functions 
    bool hasEdgeRoutineRquest() const { return this->edgeRoutineRquest_ != nullptr;};
    void deleteEdgeRoutineRquest() { this->edgeRoutineRquest_ = nullptr;};
    inline string edgeRoutineRquest() const { DARABONBA_PTR_GET_DEFAULT(edgeRoutineRquest_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setEdgeRoutineRquest(string edgeRoutineRquest) { DARABONBA_PTR_SET_VALUE(edgeRoutineRquest_, edgeRoutineRquest) };


    // edgeWafRequest Field Functions 
    bool hasEdgeWafRequest() const { return this->edgeWafRequest_ != nullptr;};
    void deleteEdgeWafRequest() { this->edgeWafRequest_ = nullptr;};
    inline string edgeWafRequest() const { DARABONBA_PTR_GET_DEFAULT(edgeWafRequest_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setEdgeWafRequest(string edgeWafRequest) { DARABONBA_PTR_SET_VALUE(edgeWafRequest_, edgeWafRequest) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // layer4Traffic Field Functions 
    bool hasLayer4Traffic() const { return this->layer4Traffic_ != nullptr;};
    void deleteLayer4Traffic() { this->layer4Traffic_ = nullptr;};
    inline string layer4Traffic() const { DARABONBA_PTR_GET_DEFAULT(layer4Traffic_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setLayer4Traffic(string layer4Traffic) { DARABONBA_PTR_SET_VALUE(layer4Traffic_, layer4Traffic) };


    // layer4TrafficIntl Field Functions 
    bool hasLayer4TrafficIntl() const { return this->layer4TrafficIntl_ != nullptr;};
    void deleteLayer4TrafficIntl() { this->layer4TrafficIntl_ = nullptr;};
    inline string layer4TrafficIntl() const { DARABONBA_PTR_GET_DEFAULT(layer4TrafficIntl_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setLayer4TrafficIntl(string layer4TrafficIntl) { DARABONBA_PTR_SET_VALUE(layer4TrafficIntl_, layer4TrafficIntl) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // planTraffic Field Functions 
    bool hasPlanTraffic() const { return this->planTraffic_ != nullptr;};
    void deletePlanTraffic() { this->planTraffic_ = nullptr;};
    inline string planTraffic() const { DARABONBA_PTR_GET_DEFAULT(planTraffic_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setPlanTraffic(string planTraffic) { DARABONBA_PTR_SET_VALUE(planTraffic_, planTraffic) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string planType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


    // siteQuota Field Functions 
    bool hasSiteQuota() const { return this->siteQuota_ != nullptr;};
    void deleteSiteQuota() { this->siteQuota_ = nullptr;};
    inline string siteQuota() const { DARABONBA_PTR_GET_DEFAULT(siteQuota_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setSiteQuota(string siteQuota) { DARABONBA_PTR_SET_VALUE(siteQuota_, siteQuota) };


    // sites Field Functions 
    bool hasSites() const { return this->sites_ != nullptr;};
    void deleteSites() { this->sites_ = nullptr;};
    inline const vector<Models::ListUserRatePlanInstancesResponseBodyInstanceInfoSites> & sites() const { DARABONBA_PTR_GET_CONST(sites_, vector<Models::ListUserRatePlanInstancesResponseBodyInstanceInfoSites>) };
    inline vector<Models::ListUserRatePlanInstancesResponseBodyInstanceInfoSites> sites() { DARABONBA_PTR_GET(sites_, vector<Models::ListUserRatePlanInstancesResponseBodyInstanceInfoSites>) };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setSites(const vector<Models::ListUserRatePlanInstancesResponseBodyInstanceInfoSites> & sites) { DARABONBA_PTR_SET_VALUE(sites_, sites) };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setSites(vector<Models::ListUserRatePlanInstancesResponseBodyInstanceInfoSites> && sites) { DARABONBA_PTR_SET_RVALUE(sites_, sites) };


    // smartRoutingRequest Field Functions 
    bool hasSmartRoutingRequest() const { return this->smartRoutingRequest_ != nullptr;};
    void deleteSmartRoutingRequest() { this->smartRoutingRequest_ = nullptr;};
    inline string smartRoutingRequest() const { DARABONBA_PTR_GET_DEFAULT(smartRoutingRequest_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setSmartRoutingRequest(string smartRoutingRequest) { DARABONBA_PTR_SET_VALUE(smartRoutingRequest_, smartRoutingRequest) };


    // staticRequest Field Functions 
    bool hasStaticRequest() const { return this->staticRequest_ != nullptr;};
    void deleteStaticRequest() { this->staticRequest_ = nullptr;};
    inline string staticRequest() const { DARABONBA_PTR_GET_DEFAULT(staticRequest_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setStaticRequest(string staticRequest) { DARABONBA_PTR_SET_VALUE(staticRequest_, staticRequest) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subscribeType Field Functions 
    bool hasSubscribeType() const { return this->subscribeType_ != nullptr;};
    void deleteSubscribeType() { this->subscribeType_ = nullptr;};
    inline string subscribeType() const { DARABONBA_PTR_GET_DEFAULT(subscribeType_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfo& setSubscribeType(string subscribeType) { DARABONBA_PTR_SET_VALUE(subscribeType_, subscribeType) };


  protected:
    // The billing method. Valid values:
    // 
    // *   PREPAY: subscription.
    // *   POSTPAY: pay-as-you-go.
    std::shared_ptr<string> billingMode_ = nullptr;
    std::shared_ptr<string> botInstanceLevel_ = nullptr;
    std::shared_ptr<string> botRequest_ = nullptr;
    // The service locations for the websites that can be associated with the plan. Multiple values are separated by commas (,). Valid values:
    // 
    // *   domestic: the Chinese mainland.
    // *   overseas: outside the Chinese mainland.
    // *   global: global.
    std::shared_ptr<string> coverages_ = nullptr;
    // The time when the plan was purchased.
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> crossborderTraffic_ = nullptr;
    std::shared_ptr<string> ddosBurstableDomesticProtection_ = nullptr;
    std::shared_ptr<string> ddosBurstableOverseasProtection_ = nullptr;
    std::shared_ptr<string> ddosInstanceLevel_ = nullptr;
    // The subscription duration of the plan. Unit: month.
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> edgeRoutineRquest_ = nullptr;
    std::shared_ptr<string> edgeWafRequest_ = nullptr;
    // The time when the plan expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The plan ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> layer4Traffic_ = nullptr;
    std::shared_ptr<string> layer4TrafficIntl_ = nullptr;
    // The plan name.
    std::shared_ptr<string> planName_ = nullptr;
    std::shared_ptr<string> planTraffic_ = nullptr;
    // The plan type. Valid values:
    // 
    // *   normal
    // *   enterprise
    std::shared_ptr<string> planType_ = nullptr;
    // The maximum number of websites that can be associated with the plan.
    std::shared_ptr<string> siteQuota_ = nullptr;
    // The websites that have been associated with the plan.
    std::shared_ptr<vector<Models::ListUserRatePlanInstancesResponseBodyInstanceInfoSites>> sites_ = nullptr;
    std::shared_ptr<string> smartRoutingRequest_ = nullptr;
    std::shared_ptr<string> staticRequest_ = nullptr;
    // The plan status. Valid values:
    // 
    // *   online: The plan is in service.
    // *   offline: The plan has expired within an allowable period. In this state, the plan is unavailable.
    // *   disable: The plan is released.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subscribeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
