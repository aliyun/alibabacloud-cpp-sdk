// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDETECTIONRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDETECTIONRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDetectionRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDetectionRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertAttCk, alertAttCk_);
      DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_TO_JSON(AlertTacticId, alertTacticId_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(DetectionExpressionType, detectionExpressionType_);
      DARABONBA_PTR_TO_JSON(DetectionRuleId, detectionRuleId_);
      DARABONBA_PTR_TO_JSON(DetectionRuleIds, detectionRuleIdsShrink_);
      DARABONBA_PTR_TO_JSON(DetectionRuleName, detectionRuleName_);
      DARABONBA_PTR_TO_JSON(DetectionRuleStatus, detectionRuleStatus_);
      DARABONBA_PTR_TO_JSON(DetectionRuleType, detectionRuleType_);
      DARABONBA_PTR_TO_JSON(IncidentAggregationType, incidentAggregationType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogCategoryId, logCategoryId_);
      DARABONBA_PTR_TO_JSON(LogSchemaId, logSchemaId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(OrderFieldName, orderFieldName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, ListDetectionRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertAttCk, alertAttCk_);
      DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_FROM_JSON(AlertTacticId, alertTacticId_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(DetectionExpressionType, detectionExpressionType_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleId, detectionRuleId_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleIds, detectionRuleIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleName, detectionRuleName_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleStatus, detectionRuleStatus_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleType, detectionRuleType_);
      DARABONBA_PTR_FROM_JSON(IncidentAggregationType, incidentAggregationType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogCategoryId, logCategoryId_);
      DARABONBA_PTR_FROM_JSON(LogSchemaId, logSchemaId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(OrderFieldName, orderFieldName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    ListDetectionRulesShrinkRequest() = default ;
    ListDetectionRulesShrinkRequest(const ListDetectionRulesShrinkRequest &) = default ;
    ListDetectionRulesShrinkRequest(ListDetectionRulesShrinkRequest &&) = default ;
    ListDetectionRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDetectionRulesShrinkRequest() = default ;
    ListDetectionRulesShrinkRequest& operator=(const ListDetectionRulesShrinkRequest &) = default ;
    ListDetectionRulesShrinkRequest& operator=(ListDetectionRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertAttCk_ == nullptr
        && return this->alertLevel_ == nullptr && return this->alertTacticId_ == nullptr && return this->alertType_ == nullptr && return this->detectionExpressionType_ == nullptr && return this->detectionRuleId_ == nullptr
        && return this->detectionRuleIdsShrink_ == nullptr && return this->detectionRuleName_ == nullptr && return this->detectionRuleStatus_ == nullptr && return this->detectionRuleType_ == nullptr && return this->incidentAggregationType_ == nullptr
        && return this->lang_ == nullptr && return this->logCategoryId_ == nullptr && return this->logSchemaId_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->orderDirection_ == nullptr && return this->orderFieldName_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr
        && return this->roleFor_ == nullptr; };
    // alertAttCk Field Functions 
    bool hasAlertAttCk() const { return this->alertAttCk_ != nullptr;};
    void deleteAlertAttCk() { this->alertAttCk_ = nullptr;};
    inline string alertAttCk() const { DARABONBA_PTR_GET_DEFAULT(alertAttCk_, "") };
    inline ListDetectionRulesShrinkRequest& setAlertAttCk(string alertAttCk) { DARABONBA_PTR_SET_VALUE(alertAttCk_, alertAttCk) };


    // alertLevel Field Functions 
    bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
    void deleteAlertLevel() { this->alertLevel_ = nullptr;};
    inline string alertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, "") };
    inline ListDetectionRulesShrinkRequest& setAlertLevel(string alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


    // alertTacticId Field Functions 
    bool hasAlertTacticId() const { return this->alertTacticId_ != nullptr;};
    void deleteAlertTacticId() { this->alertTacticId_ = nullptr;};
    inline string alertTacticId() const { DARABONBA_PTR_GET_DEFAULT(alertTacticId_, "") };
    inline ListDetectionRulesShrinkRequest& setAlertTacticId(string alertTacticId) { DARABONBA_PTR_SET_VALUE(alertTacticId_, alertTacticId) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline ListDetectionRulesShrinkRequest& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // detectionExpressionType Field Functions 
    bool hasDetectionExpressionType() const { return this->detectionExpressionType_ != nullptr;};
    void deleteDetectionExpressionType() { this->detectionExpressionType_ = nullptr;};
    inline string detectionExpressionType() const { DARABONBA_PTR_GET_DEFAULT(detectionExpressionType_, "") };
    inline ListDetectionRulesShrinkRequest& setDetectionExpressionType(string detectionExpressionType) { DARABONBA_PTR_SET_VALUE(detectionExpressionType_, detectionExpressionType) };


    // detectionRuleId Field Functions 
    bool hasDetectionRuleId() const { return this->detectionRuleId_ != nullptr;};
    void deleteDetectionRuleId() { this->detectionRuleId_ = nullptr;};
    inline string detectionRuleId() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleId_, "") };
    inline ListDetectionRulesShrinkRequest& setDetectionRuleId(string detectionRuleId) { DARABONBA_PTR_SET_VALUE(detectionRuleId_, detectionRuleId) };


    // detectionRuleIdsShrink Field Functions 
    bool hasDetectionRuleIdsShrink() const { return this->detectionRuleIdsShrink_ != nullptr;};
    void deleteDetectionRuleIdsShrink() { this->detectionRuleIdsShrink_ = nullptr;};
    inline string detectionRuleIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleIdsShrink_, "") };
    inline ListDetectionRulesShrinkRequest& setDetectionRuleIdsShrink(string detectionRuleIdsShrink) { DARABONBA_PTR_SET_VALUE(detectionRuleIdsShrink_, detectionRuleIdsShrink) };


    // detectionRuleName Field Functions 
    bool hasDetectionRuleName() const { return this->detectionRuleName_ != nullptr;};
    void deleteDetectionRuleName() { this->detectionRuleName_ = nullptr;};
    inline string detectionRuleName() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleName_, "") };
    inline ListDetectionRulesShrinkRequest& setDetectionRuleName(string detectionRuleName) { DARABONBA_PTR_SET_VALUE(detectionRuleName_, detectionRuleName) };


    // detectionRuleStatus Field Functions 
    bool hasDetectionRuleStatus() const { return this->detectionRuleStatus_ != nullptr;};
    void deleteDetectionRuleStatus() { this->detectionRuleStatus_ = nullptr;};
    inline string detectionRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleStatus_, "") };
    inline ListDetectionRulesShrinkRequest& setDetectionRuleStatus(string detectionRuleStatus) { DARABONBA_PTR_SET_VALUE(detectionRuleStatus_, detectionRuleStatus) };


    // detectionRuleType Field Functions 
    bool hasDetectionRuleType() const { return this->detectionRuleType_ != nullptr;};
    void deleteDetectionRuleType() { this->detectionRuleType_ = nullptr;};
    inline string detectionRuleType() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleType_, "") };
    inline ListDetectionRulesShrinkRequest& setDetectionRuleType(string detectionRuleType) { DARABONBA_PTR_SET_VALUE(detectionRuleType_, detectionRuleType) };


    // incidentAggregationType Field Functions 
    bool hasIncidentAggregationType() const { return this->incidentAggregationType_ != nullptr;};
    void deleteIncidentAggregationType() { this->incidentAggregationType_ = nullptr;};
    inline string incidentAggregationType() const { DARABONBA_PTR_GET_DEFAULT(incidentAggregationType_, "") };
    inline ListDetectionRulesShrinkRequest& setIncidentAggregationType(string incidentAggregationType) { DARABONBA_PTR_SET_VALUE(incidentAggregationType_, incidentAggregationType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDetectionRulesShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logCategoryId Field Functions 
    bool hasLogCategoryId() const { return this->logCategoryId_ != nullptr;};
    void deleteLogCategoryId() { this->logCategoryId_ = nullptr;};
    inline string logCategoryId() const { DARABONBA_PTR_GET_DEFAULT(logCategoryId_, "") };
    inline ListDetectionRulesShrinkRequest& setLogCategoryId(string logCategoryId) { DARABONBA_PTR_SET_VALUE(logCategoryId_, logCategoryId) };


    // logSchemaId Field Functions 
    bool hasLogSchemaId() const { return this->logSchemaId_ != nullptr;};
    void deleteLogSchemaId() { this->logSchemaId_ = nullptr;};
    inline string logSchemaId() const { DARABONBA_PTR_GET_DEFAULT(logSchemaId_, "") };
    inline ListDetectionRulesShrinkRequest& setLogSchemaId(string logSchemaId) { DARABONBA_PTR_SET_VALUE(logSchemaId_, logSchemaId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDetectionRulesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDetectionRulesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string orderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListDetectionRulesShrinkRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // orderFieldName Field Functions 
    bool hasOrderFieldName() const { return this->orderFieldName_ != nullptr;};
    void deleteOrderFieldName() { this->orderFieldName_ = nullptr;};
    inline string orderFieldName() const { DARABONBA_PTR_GET_DEFAULT(orderFieldName_, "") };
    inline ListDetectionRulesShrinkRequest& setOrderFieldName(string orderFieldName) { DARABONBA_PTR_SET_VALUE(orderFieldName_, orderFieldName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDetectionRulesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDetectionRulesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDetectionRulesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListDetectionRulesShrinkRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<string> alertAttCk_ = nullptr;
    std::shared_ptr<string> alertLevel_ = nullptr;
    std::shared_ptr<string> alertTacticId_ = nullptr;
    std::shared_ptr<string> alertType_ = nullptr;
    std::shared_ptr<string> detectionExpressionType_ = nullptr;
    std::shared_ptr<string> detectionRuleId_ = nullptr;
    std::shared_ptr<string> detectionRuleIdsShrink_ = nullptr;
    std::shared_ptr<string> detectionRuleName_ = nullptr;
    std::shared_ptr<string> detectionRuleStatus_ = nullptr;
    std::shared_ptr<string> detectionRuleType_ = nullptr;
    std::shared_ptr<string> incidentAggregationType_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> logCategoryId_ = nullptr;
    std::shared_ptr<string> logSchemaId_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> orderDirection_ = nullptr;
    std::shared_ptr<string> orderFieldName_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
