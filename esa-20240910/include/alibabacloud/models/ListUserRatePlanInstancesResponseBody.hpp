// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERRATEPLANINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERRATEPLANINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserRatePlanInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserRatePlanInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserRatePlanInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListUserRatePlanInstancesResponseBody() = default ;
    ListUserRatePlanInstancesResponseBody(const ListUserRatePlanInstancesResponseBody &) = default ;
    ListUserRatePlanInstancesResponseBody(ListUserRatePlanInstancesResponseBody &&) = default ;
    ListUserRatePlanInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserRatePlanInstancesResponseBody() = default ;
    ListUserRatePlanInstancesResponseBody& operator=(const ListUserRatePlanInstancesResponseBody &) = default ;
    ListUserRatePlanInstancesResponseBody& operator=(ListUserRatePlanInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceInfo& obj) { 
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
      friend void from_json(const Darabonba::Json& j, InstanceInfo& obj) { 
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
      InstanceInfo() = default ;
      InstanceInfo(const InstanceInfo &) = default ;
      InstanceInfo(InstanceInfo &&) = default ;
      InstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceInfo() = default ;
      InstanceInfo& operator=(const InstanceInfo &) = default ;
      InstanceInfo& operator=(InstanceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sites : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sites& obj) { 
          DARABONBA_PTR_TO_JSON(SiteId, siteId_);
          DARABONBA_PTR_TO_JSON(SiteName, siteName_);
          DARABONBA_PTR_TO_JSON(SiteStatus, siteStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Sites& obj) { 
          DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
          DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
          DARABONBA_PTR_FROM_JSON(SiteStatus, siteStatus_);
        };
        Sites() = default ;
        Sites(const Sites &) = default ;
        Sites(Sites &&) = default ;
        Sites(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sites() = default ;
        Sites& operator=(const Sites &) = default ;
        Sites& operator=(Sites &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->siteId_ == nullptr
        && this->siteName_ == nullptr && this->siteStatus_ == nullptr; };
        // siteId Field Functions 
        bool hasSiteId() const { return this->siteId_ != nullptr;};
        void deleteSiteId() { this->siteId_ = nullptr;};
        inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
        inline Sites& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


        // siteName Field Functions 
        bool hasSiteName() const { return this->siteName_ != nullptr;};
        void deleteSiteName() { this->siteName_ = nullptr;};
        inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
        inline Sites& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


        // siteStatus Field Functions 
        bool hasSiteStatus() const { return this->siteStatus_ != nullptr;};
        void deleteSiteStatus() { this->siteStatus_ = nullptr;};
        inline string getSiteStatus() const { DARABONBA_PTR_GET_DEFAULT(siteStatus_, "") };
        inline Sites& setSiteStatus(string siteStatus) { DARABONBA_PTR_SET_VALUE(siteStatus_, siteStatus) };


      protected:
        // The website ID.
        shared_ptr<int64_t> siteId_ {};
        // The website name.
        shared_ptr<string> siteName_ {};
        // The website status. Valid values:
        // 
        // *   pending: The website is to be configured.
        // *   active: The website is active.
        // *   offline: The website is suspended.
        // *   moved: The website has been added and verified by another Alibaba Cloud account.
        shared_ptr<string> siteStatus_ {};
      };

      virtual bool empty() const override { return this->billingMode_ == nullptr
        && this->botInstanceLevel_ == nullptr && this->botRequest_ == nullptr && this->coverages_ == nullptr && this->createTime_ == nullptr && this->crossborderTraffic_ == nullptr
        && this->ddosBurstableDomesticProtection_ == nullptr && this->ddosBurstableOverseasProtection_ == nullptr && this->ddosInstanceLevel_ == nullptr && this->duration_ == nullptr && this->edgeRoutineRquest_ == nullptr
        && this->edgeWafRequest_ == nullptr && this->expireTime_ == nullptr && this->instanceId_ == nullptr && this->layer4Traffic_ == nullptr && this->layer4TrafficIntl_ == nullptr
        && this->planName_ == nullptr && this->planTraffic_ == nullptr && this->planType_ == nullptr && this->siteQuota_ == nullptr && this->sites_ == nullptr
        && this->smartRoutingRequest_ == nullptr && this->staticRequest_ == nullptr && this->status_ == nullptr && this->subscribeType_ == nullptr; };
      // billingMode Field Functions 
      bool hasBillingMode() const { return this->billingMode_ != nullptr;};
      void deleteBillingMode() { this->billingMode_ = nullptr;};
      inline string getBillingMode() const { DARABONBA_PTR_GET_DEFAULT(billingMode_, "") };
      inline InstanceInfo& setBillingMode(string billingMode) { DARABONBA_PTR_SET_VALUE(billingMode_, billingMode) };


      // botInstanceLevel Field Functions 
      bool hasBotInstanceLevel() const { return this->botInstanceLevel_ != nullptr;};
      void deleteBotInstanceLevel() { this->botInstanceLevel_ = nullptr;};
      inline string getBotInstanceLevel() const { DARABONBA_PTR_GET_DEFAULT(botInstanceLevel_, "") };
      inline InstanceInfo& setBotInstanceLevel(string botInstanceLevel) { DARABONBA_PTR_SET_VALUE(botInstanceLevel_, botInstanceLevel) };


      // botRequest Field Functions 
      bool hasBotRequest() const { return this->botRequest_ != nullptr;};
      void deleteBotRequest() { this->botRequest_ = nullptr;};
      inline string getBotRequest() const { DARABONBA_PTR_GET_DEFAULT(botRequest_, "") };
      inline InstanceInfo& setBotRequest(string botRequest) { DARABONBA_PTR_SET_VALUE(botRequest_, botRequest) };


      // coverages Field Functions 
      bool hasCoverages() const { return this->coverages_ != nullptr;};
      void deleteCoverages() { this->coverages_ = nullptr;};
      inline string getCoverages() const { DARABONBA_PTR_GET_DEFAULT(coverages_, "") };
      inline InstanceInfo& setCoverages(string coverages) { DARABONBA_PTR_SET_VALUE(coverages_, coverages) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline InstanceInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // crossborderTraffic Field Functions 
      bool hasCrossborderTraffic() const { return this->crossborderTraffic_ != nullptr;};
      void deleteCrossborderTraffic() { this->crossborderTraffic_ = nullptr;};
      inline string getCrossborderTraffic() const { DARABONBA_PTR_GET_DEFAULT(crossborderTraffic_, "") };
      inline InstanceInfo& setCrossborderTraffic(string crossborderTraffic) { DARABONBA_PTR_SET_VALUE(crossborderTraffic_, crossborderTraffic) };


      // ddosBurstableDomesticProtection Field Functions 
      bool hasDdosBurstableDomesticProtection() const { return this->ddosBurstableDomesticProtection_ != nullptr;};
      void deleteDdosBurstableDomesticProtection() { this->ddosBurstableDomesticProtection_ = nullptr;};
      inline string getDdosBurstableDomesticProtection() const { DARABONBA_PTR_GET_DEFAULT(ddosBurstableDomesticProtection_, "") };
      inline InstanceInfo& setDdosBurstableDomesticProtection(string ddosBurstableDomesticProtection) { DARABONBA_PTR_SET_VALUE(ddosBurstableDomesticProtection_, ddosBurstableDomesticProtection) };


      // ddosBurstableOverseasProtection Field Functions 
      bool hasDdosBurstableOverseasProtection() const { return this->ddosBurstableOverseasProtection_ != nullptr;};
      void deleteDdosBurstableOverseasProtection() { this->ddosBurstableOverseasProtection_ = nullptr;};
      inline string getDdosBurstableOverseasProtection() const { DARABONBA_PTR_GET_DEFAULT(ddosBurstableOverseasProtection_, "") };
      inline InstanceInfo& setDdosBurstableOverseasProtection(string ddosBurstableOverseasProtection) { DARABONBA_PTR_SET_VALUE(ddosBurstableOverseasProtection_, ddosBurstableOverseasProtection) };


      // ddosInstanceLevel Field Functions 
      bool hasDdosInstanceLevel() const { return this->ddosInstanceLevel_ != nullptr;};
      void deleteDdosInstanceLevel() { this->ddosInstanceLevel_ = nullptr;};
      inline string getDdosInstanceLevel() const { DARABONBA_PTR_GET_DEFAULT(ddosInstanceLevel_, "") };
      inline InstanceInfo& setDdosInstanceLevel(string ddosInstanceLevel) { DARABONBA_PTR_SET_VALUE(ddosInstanceLevel_, ddosInstanceLevel) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline InstanceInfo& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // edgeRoutineRquest Field Functions 
      bool hasEdgeRoutineRquest() const { return this->edgeRoutineRquest_ != nullptr;};
      void deleteEdgeRoutineRquest() { this->edgeRoutineRquest_ = nullptr;};
      inline string getEdgeRoutineRquest() const { DARABONBA_PTR_GET_DEFAULT(edgeRoutineRquest_, "") };
      inline InstanceInfo& setEdgeRoutineRquest(string edgeRoutineRquest) { DARABONBA_PTR_SET_VALUE(edgeRoutineRquest_, edgeRoutineRquest) };


      // edgeWafRequest Field Functions 
      bool hasEdgeWafRequest() const { return this->edgeWafRequest_ != nullptr;};
      void deleteEdgeWafRequest() { this->edgeWafRequest_ = nullptr;};
      inline string getEdgeWafRequest() const { DARABONBA_PTR_GET_DEFAULT(edgeWafRequest_, "") };
      inline InstanceInfo& setEdgeWafRequest(string edgeWafRequest) { DARABONBA_PTR_SET_VALUE(edgeWafRequest_, edgeWafRequest) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline InstanceInfo& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // layer4Traffic Field Functions 
      bool hasLayer4Traffic() const { return this->layer4Traffic_ != nullptr;};
      void deleteLayer4Traffic() { this->layer4Traffic_ = nullptr;};
      inline string getLayer4Traffic() const { DARABONBA_PTR_GET_DEFAULT(layer4Traffic_, "") };
      inline InstanceInfo& setLayer4Traffic(string layer4Traffic) { DARABONBA_PTR_SET_VALUE(layer4Traffic_, layer4Traffic) };


      // layer4TrafficIntl Field Functions 
      bool hasLayer4TrafficIntl() const { return this->layer4TrafficIntl_ != nullptr;};
      void deleteLayer4TrafficIntl() { this->layer4TrafficIntl_ = nullptr;};
      inline string getLayer4TrafficIntl() const { DARABONBA_PTR_GET_DEFAULT(layer4TrafficIntl_, "") };
      inline InstanceInfo& setLayer4TrafficIntl(string layer4TrafficIntl) { DARABONBA_PTR_SET_VALUE(layer4TrafficIntl_, layer4TrafficIntl) };


      // planName Field Functions 
      bool hasPlanName() const { return this->planName_ != nullptr;};
      void deletePlanName() { this->planName_ = nullptr;};
      inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
      inline InstanceInfo& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


      // planTraffic Field Functions 
      bool hasPlanTraffic() const { return this->planTraffic_ != nullptr;};
      void deletePlanTraffic() { this->planTraffic_ = nullptr;};
      inline string getPlanTraffic() const { DARABONBA_PTR_GET_DEFAULT(planTraffic_, "") };
      inline InstanceInfo& setPlanTraffic(string planTraffic) { DARABONBA_PTR_SET_VALUE(planTraffic_, planTraffic) };


      // planType Field Functions 
      bool hasPlanType() const { return this->planType_ != nullptr;};
      void deletePlanType() { this->planType_ = nullptr;};
      inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
      inline InstanceInfo& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


      // siteQuota Field Functions 
      bool hasSiteQuota() const { return this->siteQuota_ != nullptr;};
      void deleteSiteQuota() { this->siteQuota_ = nullptr;};
      inline string getSiteQuota() const { DARABONBA_PTR_GET_DEFAULT(siteQuota_, "") };
      inline InstanceInfo& setSiteQuota(string siteQuota) { DARABONBA_PTR_SET_VALUE(siteQuota_, siteQuota) };


      // sites Field Functions 
      bool hasSites() const { return this->sites_ != nullptr;};
      void deleteSites() { this->sites_ = nullptr;};
      inline const vector<InstanceInfo::Sites> & getSites() const { DARABONBA_PTR_GET_CONST(sites_, vector<InstanceInfo::Sites>) };
      inline vector<InstanceInfo::Sites> getSites() { DARABONBA_PTR_GET(sites_, vector<InstanceInfo::Sites>) };
      inline InstanceInfo& setSites(const vector<InstanceInfo::Sites> & sites) { DARABONBA_PTR_SET_VALUE(sites_, sites) };
      inline InstanceInfo& setSites(vector<InstanceInfo::Sites> && sites) { DARABONBA_PTR_SET_RVALUE(sites_, sites) };


      // smartRoutingRequest Field Functions 
      bool hasSmartRoutingRequest() const { return this->smartRoutingRequest_ != nullptr;};
      void deleteSmartRoutingRequest() { this->smartRoutingRequest_ = nullptr;};
      inline string getSmartRoutingRequest() const { DARABONBA_PTR_GET_DEFAULT(smartRoutingRequest_, "") };
      inline InstanceInfo& setSmartRoutingRequest(string smartRoutingRequest) { DARABONBA_PTR_SET_VALUE(smartRoutingRequest_, smartRoutingRequest) };


      // staticRequest Field Functions 
      bool hasStaticRequest() const { return this->staticRequest_ != nullptr;};
      void deleteStaticRequest() { this->staticRequest_ = nullptr;};
      inline string getStaticRequest() const { DARABONBA_PTR_GET_DEFAULT(staticRequest_, "") };
      inline InstanceInfo& setStaticRequest(string staticRequest) { DARABONBA_PTR_SET_VALUE(staticRequest_, staticRequest) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstanceInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subscribeType Field Functions 
      bool hasSubscribeType() const { return this->subscribeType_ != nullptr;};
      void deleteSubscribeType() { this->subscribeType_ = nullptr;};
      inline string getSubscribeType() const { DARABONBA_PTR_GET_DEFAULT(subscribeType_, "") };
      inline InstanceInfo& setSubscribeType(string subscribeType) { DARABONBA_PTR_SET_VALUE(subscribeType_, subscribeType) };


    protected:
      // The billing method. Valid values:
      // 
      // *   PREPAY: subscription.
      // *   POSTPAY: pay-as-you-go.
      shared_ptr<string> billingMode_ {};
      shared_ptr<string> botInstanceLevel_ {};
      shared_ptr<string> botRequest_ {};
      // The service locations for the websites that can be associated with the plan. Multiple values are separated by commas (,). Valid values:
      // 
      // *   domestic: the Chinese mainland.
      // *   overseas: outside the Chinese mainland.
      // *   global: global.
      shared_ptr<string> coverages_ {};
      // The time when the plan was purchased.
      shared_ptr<string> createTime_ {};
      shared_ptr<string> crossborderTraffic_ {};
      shared_ptr<string> ddosBurstableDomesticProtection_ {};
      shared_ptr<string> ddosBurstableOverseasProtection_ {};
      shared_ptr<string> ddosInstanceLevel_ {};
      // The subscription duration of the plan. Unit: month.
      shared_ptr<int32_t> duration_ {};
      shared_ptr<string> edgeRoutineRquest_ {};
      shared_ptr<string> edgeWafRequest_ {};
      // The time when the plan expires.
      shared_ptr<string> expireTime_ {};
      // The plan ID.
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> layer4Traffic_ {};
      shared_ptr<string> layer4TrafficIntl_ {};
      // The plan name.
      shared_ptr<string> planName_ {};
      shared_ptr<string> planTraffic_ {};
      // The plan type. Valid values:
      // 
      // *   normal
      // *   enterprise
      shared_ptr<string> planType_ {};
      // The maximum number of websites that can be associated with the plan.
      shared_ptr<string> siteQuota_ {};
      // The websites that have been associated with the plan.
      shared_ptr<vector<InstanceInfo::Sites>> sites_ {};
      shared_ptr<string> smartRoutingRequest_ {};
      shared_ptr<string> staticRequest_ {};
      // The plan status. Valid values:
      // 
      // *   online: The plan is in service.
      // *   offline: The plan has expired within an allowable period. In this state, the plan is unavailable.
      // *   disable: The plan is released.
      shared_ptr<string> status_ {};
      shared_ptr<string> subscribeType_ {};
    };

    virtual bool empty() const override { return this->instanceInfo_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // instanceInfo Field Functions 
    bool hasInstanceInfo() const { return this->instanceInfo_ != nullptr;};
    void deleteInstanceInfo() { this->instanceInfo_ = nullptr;};
    inline const vector<ListUserRatePlanInstancesResponseBody::InstanceInfo> & getInstanceInfo() const { DARABONBA_PTR_GET_CONST(instanceInfo_, vector<ListUserRatePlanInstancesResponseBody::InstanceInfo>) };
    inline vector<ListUserRatePlanInstancesResponseBody::InstanceInfo> getInstanceInfo() { DARABONBA_PTR_GET(instanceInfo_, vector<ListUserRatePlanInstancesResponseBody::InstanceInfo>) };
    inline ListUserRatePlanInstancesResponseBody& setInstanceInfo(const vector<ListUserRatePlanInstancesResponseBody::InstanceInfo> & instanceInfo) { DARABONBA_PTR_SET_VALUE(instanceInfo_, instanceInfo) };
    inline ListUserRatePlanInstancesResponseBody& setInstanceInfo(vector<ListUserRatePlanInstancesResponseBody::InstanceInfo> && instanceInfo) { DARABONBA_PTR_SET_RVALUE(instanceInfo_, instanceInfo) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListUserRatePlanInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserRatePlanInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserRatePlanInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserRatePlanInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListUserRatePlanInstancesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The queried plans.
    shared_ptr<vector<ListUserRatePlanInstancesResponseBody::InstanceInfo>> instanceInfo_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
