// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISPOSALCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DISPOSALCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DisposalContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisposalContent& obj) { 
      DARABONBA_PTR_TO_JSON(AlertContent, alertContent_);
      DARABONBA_PTR_TO_JSON(AlertContentEn, alertContentEn_);
      DARABONBA_PTR_TO_JSON(AlertIntervalSeconds, alertIntervalSeconds_);
      DARABONBA_PTR_TO_JSON(AlertTitle, alertTitle_);
      DARABONBA_PTR_TO_JSON(AlertTitleEn, alertTitleEn_);
      DARABONBA_PTR_TO_JSON(NacDemotionPolicyIds, nacDemotionPolicyIds_);
      DARABONBA_PTR_TO_JSON(NoticeContent, noticeContent_);
      DARABONBA_PTR_TO_JSON(NoticeContentEn, noticeContentEn_);
      DARABONBA_PTR_TO_JSON(NotifyActions, notifyActions_);
      DARABONBA_PTR_TO_JSON(ProhibitActions, prohibitActions_);
      DARABONBA_PTR_TO_JSON(ProhibitSoftwareIds, prohibitSoftwareIds_);
    };
    friend void from_json(const Darabonba::Json& j, DisposalContent& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertContent, alertContent_);
      DARABONBA_PTR_FROM_JSON(AlertContentEn, alertContentEn_);
      DARABONBA_PTR_FROM_JSON(AlertIntervalSeconds, alertIntervalSeconds_);
      DARABONBA_PTR_FROM_JSON(AlertTitle, alertTitle_);
      DARABONBA_PTR_FROM_JSON(AlertTitleEn, alertTitleEn_);
      DARABONBA_PTR_FROM_JSON(NacDemotionPolicyIds, nacDemotionPolicyIds_);
      DARABONBA_PTR_FROM_JSON(NoticeContent, noticeContent_);
      DARABONBA_PTR_FROM_JSON(NoticeContentEn, noticeContentEn_);
      DARABONBA_PTR_FROM_JSON(NotifyActions, notifyActions_);
      DARABONBA_PTR_FROM_JSON(ProhibitActions, prohibitActions_);
      DARABONBA_PTR_FROM_JSON(ProhibitSoftwareIds, prohibitSoftwareIds_);
    };
    DisposalContent() = default ;
    DisposalContent(const DisposalContent &) = default ;
    DisposalContent(DisposalContent &&) = default ;
    DisposalContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisposalContent() = default ;
    DisposalContent& operator=(const DisposalContent &) = default ;
    DisposalContent& operator=(DisposalContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertContent_ != nullptr
        && this->alertContentEn_ != nullptr && this->alertIntervalSeconds_ != nullptr && this->alertTitle_ != nullptr && this->alertTitleEn_ != nullptr && this->nacDemotionPolicyIds_ != nullptr
        && this->noticeContent_ != nullptr && this->noticeContentEn_ != nullptr && this->notifyActions_ != nullptr && this->prohibitActions_ != nullptr && this->prohibitSoftwareIds_ != nullptr; };
    // alertContent Field Functions 
    bool hasAlertContent() const { return this->alertContent_ != nullptr;};
    void deleteAlertContent() { this->alertContent_ = nullptr;};
    inline string alertContent() const { DARABONBA_PTR_GET_DEFAULT(alertContent_, "") };
    inline DisposalContent& setAlertContent(string alertContent) { DARABONBA_PTR_SET_VALUE(alertContent_, alertContent) };


    // alertContentEn Field Functions 
    bool hasAlertContentEn() const { return this->alertContentEn_ != nullptr;};
    void deleteAlertContentEn() { this->alertContentEn_ = nullptr;};
    inline string alertContentEn() const { DARABONBA_PTR_GET_DEFAULT(alertContentEn_, "") };
    inline DisposalContent& setAlertContentEn(string alertContentEn) { DARABONBA_PTR_SET_VALUE(alertContentEn_, alertContentEn) };


    // alertIntervalSeconds Field Functions 
    bool hasAlertIntervalSeconds() const { return this->alertIntervalSeconds_ != nullptr;};
    void deleteAlertIntervalSeconds() { this->alertIntervalSeconds_ = nullptr;};
    inline int64_t alertIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(alertIntervalSeconds_, 0L) };
    inline DisposalContent& setAlertIntervalSeconds(int64_t alertIntervalSeconds) { DARABONBA_PTR_SET_VALUE(alertIntervalSeconds_, alertIntervalSeconds) };


    // alertTitle Field Functions 
    bool hasAlertTitle() const { return this->alertTitle_ != nullptr;};
    void deleteAlertTitle() { this->alertTitle_ = nullptr;};
    inline string alertTitle() const { DARABONBA_PTR_GET_DEFAULT(alertTitle_, "") };
    inline DisposalContent& setAlertTitle(string alertTitle) { DARABONBA_PTR_SET_VALUE(alertTitle_, alertTitle) };


    // alertTitleEn Field Functions 
    bool hasAlertTitleEn() const { return this->alertTitleEn_ != nullptr;};
    void deleteAlertTitleEn() { this->alertTitleEn_ = nullptr;};
    inline string alertTitleEn() const { DARABONBA_PTR_GET_DEFAULT(alertTitleEn_, "") };
    inline DisposalContent& setAlertTitleEn(string alertTitleEn) { DARABONBA_PTR_SET_VALUE(alertTitleEn_, alertTitleEn) };


    // nacDemotionPolicyIds Field Functions 
    bool hasNacDemotionPolicyIds() const { return this->nacDemotionPolicyIds_ != nullptr;};
    void deleteNacDemotionPolicyIds() { this->nacDemotionPolicyIds_ = nullptr;};
    inline const vector<string> & nacDemotionPolicyIds() const { DARABONBA_PTR_GET_CONST(nacDemotionPolicyIds_, vector<string>) };
    inline vector<string> nacDemotionPolicyIds() { DARABONBA_PTR_GET(nacDemotionPolicyIds_, vector<string>) };
    inline DisposalContent& setNacDemotionPolicyIds(const vector<string> & nacDemotionPolicyIds) { DARABONBA_PTR_SET_VALUE(nacDemotionPolicyIds_, nacDemotionPolicyIds) };
    inline DisposalContent& setNacDemotionPolicyIds(vector<string> && nacDemotionPolicyIds) { DARABONBA_PTR_SET_RVALUE(nacDemotionPolicyIds_, nacDemotionPolicyIds) };


    // noticeContent Field Functions 
    bool hasNoticeContent() const { return this->noticeContent_ != nullptr;};
    void deleteNoticeContent() { this->noticeContent_ = nullptr;};
    inline string noticeContent() const { DARABONBA_PTR_GET_DEFAULT(noticeContent_, "") };
    inline DisposalContent& setNoticeContent(string noticeContent) { DARABONBA_PTR_SET_VALUE(noticeContent_, noticeContent) };


    // noticeContentEn Field Functions 
    bool hasNoticeContentEn() const { return this->noticeContentEn_ != nullptr;};
    void deleteNoticeContentEn() { this->noticeContentEn_ = nullptr;};
    inline string noticeContentEn() const { DARABONBA_PTR_GET_DEFAULT(noticeContentEn_, "") };
    inline DisposalContent& setNoticeContentEn(string noticeContentEn) { DARABONBA_PTR_SET_VALUE(noticeContentEn_, noticeContentEn) };


    // notifyActions Field Functions 
    bool hasNotifyActions() const { return this->notifyActions_ != nullptr;};
    void deleteNotifyActions() { this->notifyActions_ = nullptr;};
    inline const vector<string> & notifyActions() const { DARABONBA_PTR_GET_CONST(notifyActions_, vector<string>) };
    inline vector<string> notifyActions() { DARABONBA_PTR_GET(notifyActions_, vector<string>) };
    inline DisposalContent& setNotifyActions(const vector<string> & notifyActions) { DARABONBA_PTR_SET_VALUE(notifyActions_, notifyActions) };
    inline DisposalContent& setNotifyActions(vector<string> && notifyActions) { DARABONBA_PTR_SET_RVALUE(notifyActions_, notifyActions) };


    // prohibitActions Field Functions 
    bool hasProhibitActions() const { return this->prohibitActions_ != nullptr;};
    void deleteProhibitActions() { this->prohibitActions_ = nullptr;};
    inline const vector<string> & prohibitActions() const { DARABONBA_PTR_GET_CONST(prohibitActions_, vector<string>) };
    inline vector<string> prohibitActions() { DARABONBA_PTR_GET(prohibitActions_, vector<string>) };
    inline DisposalContent& setProhibitActions(const vector<string> & prohibitActions) { DARABONBA_PTR_SET_VALUE(prohibitActions_, prohibitActions) };
    inline DisposalContent& setProhibitActions(vector<string> && prohibitActions) { DARABONBA_PTR_SET_RVALUE(prohibitActions_, prohibitActions) };


    // prohibitSoftwareIds Field Functions 
    bool hasProhibitSoftwareIds() const { return this->prohibitSoftwareIds_ != nullptr;};
    void deleteProhibitSoftwareIds() { this->prohibitSoftwareIds_ = nullptr;};
    inline const vector<string> & prohibitSoftwareIds() const { DARABONBA_PTR_GET_CONST(prohibitSoftwareIds_, vector<string>) };
    inline vector<string> prohibitSoftwareIds() { DARABONBA_PTR_GET(prohibitSoftwareIds_, vector<string>) };
    inline DisposalContent& setProhibitSoftwareIds(const vector<string> & prohibitSoftwareIds) { DARABONBA_PTR_SET_VALUE(prohibitSoftwareIds_, prohibitSoftwareIds) };
    inline DisposalContent& setProhibitSoftwareIds(vector<string> && prohibitSoftwareIds) { DARABONBA_PTR_SET_RVALUE(prohibitSoftwareIds_, prohibitSoftwareIds) };


  protected:
    std::shared_ptr<string> alertContent_ = nullptr;
    std::shared_ptr<string> alertContentEn_ = nullptr;
    std::shared_ptr<int64_t> alertIntervalSeconds_ = nullptr;
    std::shared_ptr<string> alertTitle_ = nullptr;
    std::shared_ptr<string> alertTitleEn_ = nullptr;
    std::shared_ptr<vector<string>> nacDemotionPolicyIds_ = nullptr;
    std::shared_ptr<string> noticeContent_ = nullptr;
    std::shared_ptr<string> noticeContentEn_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> notifyActions_ = nullptr;
    std::shared_ptr<vector<string>> prohibitActions_ = nullptr;
    std::shared_ptr<vector<string>> prohibitSoftwareIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
