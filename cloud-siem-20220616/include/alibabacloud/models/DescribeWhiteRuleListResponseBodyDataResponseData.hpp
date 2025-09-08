// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITERULELISTRESPONSEBODYDATARESPONSEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITERULELISTRESPONSEBODYDATARESPONSEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeWhiteRuleListResponseBodyDataResponseDataExpression.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeWhiteRuleListResponseBodyDataResponseData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteRuleListResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(AlertNameId, alertNameId_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(AlertTypeId, alertTypeId_);
      DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubAliuid, subAliuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteRuleListResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(AlertNameId, alertNameId_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(AlertTypeId, alertTypeId_);
      DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubAliuid, subAliuid_);
    };
    DescribeWhiteRuleListResponseBodyDataResponseData() = default ;
    DescribeWhiteRuleListResponseBodyDataResponseData(const DescribeWhiteRuleListResponseBodyDataResponseData &) = default ;
    DescribeWhiteRuleListResponseBodyDataResponseData(DescribeWhiteRuleListResponseBodyDataResponseData &&) = default ;
    DescribeWhiteRuleListResponseBodyDataResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteRuleListResponseBodyDataResponseData() = default ;
    DescribeWhiteRuleListResponseBodyDataResponseData& operator=(const DescribeWhiteRuleListResponseBodyDataResponseData &) = default ;
    DescribeWhiteRuleListResponseBodyDataResponseData& operator=(DescribeWhiteRuleListResponseBodyDataResponseData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertName_ != nullptr
        && this->alertNameId_ != nullptr && this->alertType_ != nullptr && this->alertTypeId_ != nullptr && this->alertUuid_ != nullptr && this->aliuid_ != nullptr
        && this->expression_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->incidentUuid_ != nullptr
        && this->status_ != nullptr && this->subAliuid_ != nullptr; };
    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // alertNameId Field Functions 
    bool hasAlertNameId() const { return this->alertNameId_ != nullptr;};
    void deleteAlertNameId() { this->alertNameId_ = nullptr;};
    inline string alertNameId() const { DARABONBA_PTR_GET_DEFAULT(alertNameId_, "") };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setAlertNameId(string alertNameId) { DARABONBA_PTR_SET_VALUE(alertNameId_, alertNameId) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // alertTypeId Field Functions 
    bool hasAlertTypeId() const { return this->alertTypeId_ != nullptr;};
    void deleteAlertTypeId() { this->alertTypeId_ = nullptr;};
    inline string alertTypeId() const { DARABONBA_PTR_GET_DEFAULT(alertTypeId_, "") };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setAlertTypeId(string alertTypeId) { DARABONBA_PTR_SET_VALUE(alertTypeId_, alertTypeId) };


    // alertUuid Field Functions 
    bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
    void deleteAlertUuid() { this->alertUuid_ = nullptr;};
    inline string alertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline int64_t aliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline const Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpression & expression() const { DARABONBA_PTR_GET_CONST(expression_, Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpression) };
    inline Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpression expression() { DARABONBA_PTR_GET(expression_, Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpression) };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setExpression(const Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpression & expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setExpression(Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpression && expression) { DARABONBA_PTR_SET_RVALUE(expression_, expression) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subAliuid Field Functions 
    bool hasSubAliuid() const { return this->subAliuid_ != nullptr;};
    void deleteSubAliuid() { this->subAliuid_ = nullptr;};
    inline int64_t subAliuid() const { DARABONBA_PTR_GET_DEFAULT(subAliuid_, 0L) };
    inline DescribeWhiteRuleListResponseBodyDataResponseData& setSubAliuid(int64_t subAliuid) { DARABONBA_PTR_SET_VALUE(subAliuid_, subAliuid) };


  protected:
    // The alert name.
    std::shared_ptr<string> alertName_ = nullptr;
    // The ID of the alert name.
    std::shared_ptr<string> alertNameId_ = nullptr;
    // The alert type.
    std::shared_ptr<string> alertType_ = nullptr;
    // The ID of the alert type.
    std::shared_ptr<string> alertTypeId_ = nullptr;
    // The UUID of the alert.
    std::shared_ptr<string> alertUuid_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to purchase the threat analysis feature.
    std::shared_ptr<int64_t> aliuid_ = nullptr;
    // The conditions in the rule. The value is a JSON array.
    std::shared_ptr<Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpression> expression_ = nullptr;
    // The time when the whitelist rule was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the whitelist rule was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the whitelist rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The UUID of the event.
    std::shared_ptr<string> incidentUuid_ = nullptr;
    // The status of the whitelist rule. Valid values:
    // 
    // *   1: enabled.
    // *   0: disabled.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to create the whitelist rule.
    std::shared_ptr<int64_t> subAliuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
