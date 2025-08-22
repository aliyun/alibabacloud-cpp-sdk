// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALERTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAlertRulesRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetAlertRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertIds, alertIds_);
      DARABONBA_PTR_TO_JSON(AlertNames, alertNames_);
      DARABONBA_PTR_TO_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertIds, alertIds_);
      DARABONBA_PTR_FROM_JSON(AlertNames, alertNames_);
      DARABONBA_PTR_FROM_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetAlertRulesRequest() = default ;
    GetAlertRulesRequest(const GetAlertRulesRequest &) = default ;
    GetAlertRulesRequest(GetAlertRulesRequest &&) = default ;
    GetAlertRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertRulesRequest() = default ;
    GetAlertRulesRequest& operator=(const GetAlertRulesRequest &) = default ;
    GetAlertRulesRequest& operator=(GetAlertRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertIds_ != nullptr
        && this->alertNames_ != nullptr && this->alertStatus_ != nullptr && this->alertType_ != nullptr && this->bizRegionId_ != nullptr && this->clusterId_ != nullptr
        && this->page_ != nullptr && this->productCode_ != nullptr && this->regionId_ != nullptr && this->size_ != nullptr && this->tags_ != nullptr; };
    // alertIds Field Functions 
    bool hasAlertIds() const { return this->alertIds_ != nullptr;};
    void deleteAlertIds() { this->alertIds_ = nullptr;};
    inline string alertIds() const { DARABONBA_PTR_GET_DEFAULT(alertIds_, "") };
    inline GetAlertRulesRequest& setAlertIds(string alertIds) { DARABONBA_PTR_SET_VALUE(alertIds_, alertIds) };


    // alertNames Field Functions 
    bool hasAlertNames() const { return this->alertNames_ != nullptr;};
    void deleteAlertNames() { this->alertNames_ = nullptr;};
    inline string alertNames() const { DARABONBA_PTR_GET_DEFAULT(alertNames_, "") };
    inline GetAlertRulesRequest& setAlertNames(string alertNames) { DARABONBA_PTR_SET_VALUE(alertNames_, alertNames) };


    // alertStatus Field Functions 
    bool hasAlertStatus() const { return this->alertStatus_ != nullptr;};
    void deleteAlertStatus() { this->alertStatus_ = nullptr;};
    inline string alertStatus() const { DARABONBA_PTR_GET_DEFAULT(alertStatus_, "") };
    inline GetAlertRulesRequest& setAlertStatus(string alertStatus) { DARABONBA_PTR_SET_VALUE(alertStatus_, alertStatus) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline GetAlertRulesRequest& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline GetAlertRulesRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetAlertRulesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline GetAlertRulesRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetAlertRulesRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAlertRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetAlertRulesRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetAlertRulesRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetAlertRulesRequestTags>) };
    inline vector<GetAlertRulesRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetAlertRulesRequestTags>) };
    inline GetAlertRulesRequest& setTags(const vector<GetAlertRulesRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetAlertRulesRequest& setTags(vector<GetAlertRulesRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The unique IDs of alert rules.
    // 
    // *   If you do not specify this parameter, the API operation does not filter alert rules based on their IDs.
    // *   If you specify this parameter, the API operation returns only the information of the specified alert rules. Other filter conditions also take effect.
    // 
    // > When you call the GetAlertRules operation, you can specify other request parameters to obtain the AlertIds parameter from the response. Then, you can specify the AlertIds parameter to query the specified alert rules.
    std::shared_ptr<string> alertIds_ = nullptr;
    // The names of alert rules. When you create alert rules of the new version, you cannot specify duplicate names. However, existing alert rules may have duplicate names. Therefore, the **AlertName** parameter does not uniquely identify an alert rule.
    // 
    // *   If you do not specify this parameter, the API operation does not filter alert rules based on their names.
    // *   If you specify this parameter, the API operation returns only the information of the specified alert rules. Other filter conditions also take effect.
    std::shared_ptr<string> alertNames_ = nullptr;
    // The status of the alert rule. Valid values:
    // 
    // *   RUNNING
    // *   STOPPED
    // *   PAUSED
    // 
    // >  The PAUSED state indicates an abnormal and paused alert rule. This may result from excessively large threshold values or deleted associated clusters.
    std::shared_ptr<string> alertStatus_ = nullptr;
    // The type of the alert rule. This parameter is required for the new version of Alert Management. Valid values:
    // 
    // *   APPLICATION_MONITORING_ALERT_RULE: alert rule for Application Monitoring
    // *   BROWSER_MONITORING_ALERT_RULE: alert rule for Browser Monitoring
    // *   PROMETHEUS_MONITORING_ALERT_RULE: alert rule for Managed Service for Prometheus
    std::shared_ptr<string> alertType_ = nullptr;
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // The ID of the monitored cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> page_ = nullptr;
    // You do not need to configure this parameter.
    std::shared_ptr<string> productCode_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of alert rules to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<GetAlertRulesRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
