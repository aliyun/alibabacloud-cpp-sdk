// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITEDELIVERYTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSITEDELIVERYTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetSiteDeliveryTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSiteDeliveryTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_TO_JSON(FieldList, fieldList_);
      DARABONBA_PTR_TO_JSON(FilterRules, filterRules_);
      DARABONBA_PTR_TO_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_TO_JSON(RawRule, rawRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(SinkConfig, sinkConfig_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSiteDeliveryTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_FROM_JSON(FieldList, fieldList_);
      DARABONBA_PTR_FROM_JSON(FilterRules, filterRules_);
      DARABONBA_PTR_FROM_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_FROM_JSON(RawRule, rawRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(SinkConfig, sinkConfig_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    GetSiteDeliveryTaskResponseBody() = default ;
    GetSiteDeliveryTaskResponseBody(const GetSiteDeliveryTaskResponseBody &) = default ;
    GetSiteDeliveryTaskResponseBody(GetSiteDeliveryTaskResponseBody &&) = default ;
    GetSiteDeliveryTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSiteDeliveryTaskResponseBody() = default ;
    GetSiteDeliveryTaskResponseBody& operator=(const GetSiteDeliveryTaskResponseBody &) = default ;
    GetSiteDeliveryTaskResponseBody& operator=(GetSiteDeliveryTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->dataCenter_ == nullptr && this->deliveryType_ == nullptr && this->discardRate_ == nullptr && this->fieldList_ == nullptr && this->filterRules_ == nullptr
        && this->filterVer_ == nullptr && this->rawRule_ == nullptr && this->requestId_ == nullptr && this->sinkConfig_ == nullptr && this->siteId_ == nullptr
        && this->siteName_ == nullptr && this->status_ == nullptr && this->taskName_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GetSiteDeliveryTaskResponseBody& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline GetSiteDeliveryTaskResponseBody& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline GetSiteDeliveryTaskResponseBody& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // discardRate Field Functions 
    bool hasDiscardRate() const { return this->discardRate_ != nullptr;};
    void deleteDiscardRate() { this->discardRate_ = nullptr;};
    inline float getDiscardRate() const { DARABONBA_PTR_GET_DEFAULT(discardRate_, 0.0) };
    inline GetSiteDeliveryTaskResponseBody& setDiscardRate(float discardRate) { DARABONBA_PTR_SET_VALUE(discardRate_, discardRate) };


    // fieldList Field Functions 
    bool hasFieldList() const { return this->fieldList_ != nullptr;};
    void deleteFieldList() { this->fieldList_ = nullptr;};
    inline string getFieldList() const { DARABONBA_PTR_GET_DEFAULT(fieldList_, "") };
    inline GetSiteDeliveryTaskResponseBody& setFieldList(string fieldList) { DARABONBA_PTR_SET_VALUE(fieldList_, fieldList) };


    // filterRules Field Functions 
    bool hasFilterRules() const { return this->filterRules_ != nullptr;};
    void deleteFilterRules() { this->filterRules_ = nullptr;};
    inline string getFilterRules() const { DARABONBA_PTR_GET_DEFAULT(filterRules_, "") };
    inline GetSiteDeliveryTaskResponseBody& setFilterRules(string filterRules) { DARABONBA_PTR_SET_VALUE(filterRules_, filterRules) };


    // filterVer Field Functions 
    bool hasFilterVer() const { return this->filterVer_ != nullptr;};
    void deleteFilterVer() { this->filterVer_ = nullptr;};
    inline string getFilterVer() const { DARABONBA_PTR_GET_DEFAULT(filterVer_, "") };
    inline GetSiteDeliveryTaskResponseBody& setFilterVer(string filterVer) { DARABONBA_PTR_SET_VALUE(filterVer_, filterVer) };


    // rawRule Field Functions 
    bool hasRawRule() const { return this->rawRule_ != nullptr;};
    void deleteRawRule() { this->rawRule_ = nullptr;};
    inline string getRawRule() const { DARABONBA_PTR_GET_DEFAULT(rawRule_, "") };
    inline GetSiteDeliveryTaskResponseBody& setRawRule(string rawRule) { DARABONBA_PTR_SET_VALUE(rawRule_, rawRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSiteDeliveryTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sinkConfig Field Functions 
    bool hasSinkConfig() const { return this->sinkConfig_ != nullptr;};
    void deleteSinkConfig() { this->sinkConfig_ = nullptr;};
    inline     const Darabonba::Json & getSinkConfig() const { DARABONBA_GET(sinkConfig_) };
    Darabonba::Json & getSinkConfig() { DARABONBA_GET(sinkConfig_) };
    inline GetSiteDeliveryTaskResponseBody& setSinkConfig(const Darabonba::Json & sinkConfig) { DARABONBA_SET_VALUE(sinkConfig_, sinkConfig) };
    inline GetSiteDeliveryTaskResponseBody& setSinkConfig(Darabonba::Json && sinkConfig) { DARABONBA_SET_RVALUE(sinkConfig_, sinkConfig) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetSiteDeliveryTaskResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline GetSiteDeliveryTaskResponseBody& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSiteDeliveryTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetSiteDeliveryTaskResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The log category. Valid values:
    // 
    // *   dcdn_log_access_l1 (default): access logs.
    // *   dcdn_log_er: Edge Routine logs.
    // *   dcdn_log_waf: firewall logs.
    // *   dcdn_log_ipa: TCP/UDP proxy logs.
    shared_ptr<string> businessType_ {};
    // The data center. Valid values:
    // 
    // 1.  cn: the Chinese mainland.
    // 2.  sg: outside the Chinese mainland.
    shared_ptr<string> dataCenter_ {};
    // The destination of the delivery. Valid values:
    // 
    // 1.  sls: Alibaba Cloud Simple Log Service (SLS).
    // 2.  http: HTTP server.
    // 3.  aws3: Amazon Simple Storage Service (S3).
    // 4.  oss: Alibaba Cloud Object Storage Service (OSS).
    // 5.  kafka: Kafka.
    // 6.  aws3cmpt: S3-compatible storage service.
    shared_ptr<string> deliveryType_ {};
    // The discard rate.
    shared_ptr<float> discardRate_ {};
    // The log fields.
    shared_ptr<string> fieldList_ {};
    // The filtering rules.
    shared_ptr<string> filterRules_ {};
    shared_ptr<string> filterVer_ {};
    shared_ptr<string> rawRule_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The delivery configuration.
    Darabonba::Json sinkConfig_ {};
    // The website ID.
    shared_ptr<int64_t> siteId_ {};
    // The website name.
    shared_ptr<string> siteName_ {};
    // The status of the delivery task.
    // 
    // *   **online**
    // *   **offline**
    shared_ptr<string> status_ {};
    // The name of the delivery task.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
