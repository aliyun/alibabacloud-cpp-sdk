// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULESNOTICE_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULESNOTICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertRulesResponseBodyPageBeanAlertRulesNotice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertRulesResponseBodyPageBeanAlertRulesNotice& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NoticeEndTime, noticeEndTime_);
      DARABONBA_PTR_TO_JSON(NoticeStartTime, noticeStartTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertRulesResponseBodyPageBeanAlertRulesNotice& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NoticeEndTime, noticeEndTime_);
      DARABONBA_PTR_FROM_JSON(NoticeStartTime, noticeStartTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    SearchAlertRulesResponseBodyPageBeanAlertRulesNotice() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesNotice(const SearchAlertRulesResponseBodyPageBeanAlertRulesNotice &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesNotice(SearchAlertRulesResponseBodyPageBeanAlertRulesNotice &&) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesNotice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertRulesResponseBodyPageBeanAlertRulesNotice() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesNotice& operator=(const SearchAlertRulesResponseBodyPageBeanAlertRulesNotice &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesNotice& operator=(SearchAlertRulesResponseBodyPageBeanAlertRulesNotice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->noticeEndTime_ != nullptr && this->noticeStartTime_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesNotice& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // noticeEndTime Field Functions 
    bool hasNoticeEndTime() const { return this->noticeEndTime_ != nullptr;};
    void deleteNoticeEndTime() { this->noticeEndTime_ = nullptr;};
    inline int64_t noticeEndTime() const { DARABONBA_PTR_GET_DEFAULT(noticeEndTime_, 0L) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesNotice& setNoticeEndTime(int64_t noticeEndTime) { DARABONBA_PTR_SET_VALUE(noticeEndTime_, noticeEndTime) };


    // noticeStartTime Field Functions 
    bool hasNoticeStartTime() const { return this->noticeStartTime_ != nullptr;};
    void deleteNoticeStartTime() { this->noticeStartTime_ = nullptr;};
    inline int64_t noticeStartTime() const { DARABONBA_PTR_GET_DEFAULT(noticeStartTime_, 0L) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesNotice& setNoticeStartTime(int64_t noticeStartTime) { DARABONBA_PTR_SET_VALUE(noticeStartTime_, noticeStartTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesNotice& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range when the alert rule takes effect within 24 hours per day. This value is a UNIX timestamp. The year, month, and day that are indicated by the timestamp are not displayed in this value. Only the hour, minute, and second are displayed.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The end of the time range when alert notifications are sent based on the alert rule within 24 hours per day. This value is a UNIX timestamp. The year, month, and day that are indicated by the timestamp are not displayed in this value. Only the hour, minute, and second are displayed.
    std::shared_ptr<int64_t> noticeEndTime_ = nullptr;
    // The beginning of the time range when alert notifications are sent based on the alert rule within 24 hours per day. This value is a UNIX timestamp. The year, month, and day that are indicated by the timestamp are not displayed in this value. Only the hour, minute, and second are displayed.
    std::shared_ptr<int64_t> noticeStartTime_ = nullptr;
    // The beginning of the time range when the alert rule takes effect within 24 hours per day. This value is a UNIX timestamp. The year, month, and day that are indicated by the timestamp are not displayed in this value. Only the hour, minute, and second are displayed.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
