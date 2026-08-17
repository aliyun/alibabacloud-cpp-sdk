// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREDITUSAGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREDITUSAGEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeCreditUsageInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreditUsageInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageInfoList, usageInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreditUsageInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageInfoList, usageInfoList_);
    };
    DescribeCreditUsageInfoResponseBody() = default ;
    DescribeCreditUsageInfoResponseBody(const DescribeCreditUsageInfoResponseBody &) = default ;
    DescribeCreditUsageInfoResponseBody(DescribeCreditUsageInfoResponseBody &&) = default ;
    DescribeCreditUsageInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreditUsageInfoResponseBody() = default ;
    DescribeCreditUsageInfoResponseBody& operator=(const DescribeCreditUsageInfoResponseBody &) = default ;
    DescribeCreditUsageInfoResponseBody& operator=(DescribeCreditUsageInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(UsageInfo, usageInfo_);
        DARABONBA_PTR_TO_JSON(UsageInfoKey, usageInfoKey_);
      };
      friend void from_json(const Darabonba::Json& j, UsageInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(UsageInfo, usageInfo_);
        DARABONBA_PTR_FROM_JSON(UsageInfoKey, usageInfoKey_);
      };
      UsageInfoList() = default ;
      UsageInfoList(const UsageInfoList &) = default ;
      UsageInfoList(UsageInfoList &&) = default ;
      UsageInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageInfoList() = default ;
      UsageInfoList& operator=(const UsageInfoList &) = default ;
      UsageInfoList& operator=(UsageInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableAmount, availableAmount_);
          DARABONBA_PTR_TO_JSON(ContactGroupNames, contactGroupNames_);
          DARABONBA_PTR_TO_JSON(CreditTrendList, creditTrendList_);
          DARABONBA_PTR_TO_JSON(CurrentInstanceExpiredTime, currentInstanceExpiredTime_);
          DARABONBA_PTR_TO_JSON(CurrentInstanceId, currentInstanceId_);
          DARABONBA_PTR_TO_JSON(CurrentRemainCredit, currentRemainCredit_);
          DARABONBA_PTR_TO_JSON(CurrentTotalCredit, currentTotalCredit_);
          DARABONBA_PTR_TO_JSON(CurrentUsedCredit, currentUsedCredit_);
          DARABONBA_PTR_TO_JSON(DayUsedCredit, dayUsedCredit_);
          DARABONBA_PTR_TO_JSON(LastTriggeredAt, lastTriggeredAt_);
          DARABONBA_PTR_TO_JSON(PeriodTotalCredit, periodTotalCredit_);
          DARABONBA_PTR_TO_JSON(PeriodUsedCredit, periodUsedCredit_);
          DARABONBA_PTR_TO_JSON(RemainCredit, remainCredit_);
          DARABONBA_PTR_TO_JSON(RemainCreditInfo, remainCreditInfo_);
          DARABONBA_PTR_TO_JSON(TodayUsed, todayUsed_);
          DARABONBA_PTR_TO_JSON(TotalCredit, totalCredit_);
          DARABONBA_PTR_TO_JSON(TotalUsed, totalUsed_);
          DARABONBA_PTR_TO_JSON(TotalUsedCredit, totalUsedCredit_);
          DARABONBA_PTR_TO_JSON(WarnPercent, warnPercent_);
          DARABONBA_PTR_TO_JSON(WeekUsedCredit, weekUsedCredit_);
        };
        friend void from_json(const Darabonba::Json& j, UsageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableAmount, availableAmount_);
          DARABONBA_PTR_FROM_JSON(ContactGroupNames, contactGroupNames_);
          DARABONBA_PTR_FROM_JSON(CreditTrendList, creditTrendList_);
          DARABONBA_PTR_FROM_JSON(CurrentInstanceExpiredTime, currentInstanceExpiredTime_);
          DARABONBA_PTR_FROM_JSON(CurrentInstanceId, currentInstanceId_);
          DARABONBA_PTR_FROM_JSON(CurrentRemainCredit, currentRemainCredit_);
          DARABONBA_PTR_FROM_JSON(CurrentTotalCredit, currentTotalCredit_);
          DARABONBA_PTR_FROM_JSON(CurrentUsedCredit, currentUsedCredit_);
          DARABONBA_PTR_FROM_JSON(DayUsedCredit, dayUsedCredit_);
          DARABONBA_PTR_FROM_JSON(LastTriggeredAt, lastTriggeredAt_);
          DARABONBA_PTR_FROM_JSON(PeriodTotalCredit, periodTotalCredit_);
          DARABONBA_PTR_FROM_JSON(PeriodUsedCredit, periodUsedCredit_);
          DARABONBA_PTR_FROM_JSON(RemainCredit, remainCredit_);
          DARABONBA_PTR_FROM_JSON(RemainCreditInfo, remainCreditInfo_);
          DARABONBA_PTR_FROM_JSON(TodayUsed, todayUsed_);
          DARABONBA_PTR_FROM_JSON(TotalCredit, totalCredit_);
          DARABONBA_PTR_FROM_JSON(TotalUsed, totalUsed_);
          DARABONBA_PTR_FROM_JSON(TotalUsedCredit, totalUsedCredit_);
          DARABONBA_PTR_FROM_JSON(WarnPercent, warnPercent_);
          DARABONBA_PTR_FROM_JSON(WeekUsedCredit, weekUsedCredit_);
        };
        UsageInfo() = default ;
        UsageInfo(const UsageInfo &) = default ;
        UsageInfo(UsageInfo &&) = default ;
        UsageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsageInfo() = default ;
        UsageInfo& operator=(const UsageInfo &) = default ;
        UsageInfo& operator=(UsageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RemainCreditInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RemainCreditInfo& obj) { 
            DARABONBA_PTR_TO_JSON(DeductingAmount, deductingAmount_);
            DARABONBA_PTR_TO_JSON(PendingAmount, pendingAmount_);
          };
          friend void from_json(const Darabonba::Json& j, RemainCreditInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(DeductingAmount, deductingAmount_);
            DARABONBA_PTR_FROM_JSON(PendingAmount, pendingAmount_);
          };
          RemainCreditInfo() = default ;
          RemainCreditInfo(const RemainCreditInfo &) = default ;
          RemainCreditInfo(RemainCreditInfo &&) = default ;
          RemainCreditInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RemainCreditInfo() = default ;
          RemainCreditInfo& operator=(const RemainCreditInfo &) = default ;
          RemainCreditInfo& operator=(RemainCreditInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->deductingAmount_ == nullptr
        && this->pendingAmount_ == nullptr; };
          // deductingAmount Field Functions 
          bool hasDeductingAmount() const { return this->deductingAmount_ != nullptr;};
          void deleteDeductingAmount() { this->deductingAmount_ = nullptr;};
          inline int32_t getDeductingAmount() const { DARABONBA_PTR_GET_DEFAULT(deductingAmount_, 0) };
          inline RemainCreditInfo& setDeductingAmount(int32_t deductingAmount) { DARABONBA_PTR_SET_VALUE(deductingAmount_, deductingAmount) };


          // pendingAmount Field Functions 
          bool hasPendingAmount() const { return this->pendingAmount_ != nullptr;};
          void deletePendingAmount() { this->pendingAmount_ = nullptr;};
          inline int32_t getPendingAmount() const { DARABONBA_PTR_GET_DEFAULT(pendingAmount_, 0) };
          inline RemainCreditInfo& setPendingAmount(int32_t pendingAmount) { DARABONBA_PTR_SET_VALUE(pendingAmount_, pendingAmount) };


        protected:
          shared_ptr<int32_t> deductingAmount_ {};
          shared_ptr<int32_t> pendingAmount_ {};
        };

        class CreditTrendList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CreditTrendList& obj) { 
            DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
            DARABONBA_PTR_TO_JSON(UsedCredit, usedCredit_);
          };
          friend void from_json(const Darabonba::Json& j, CreditTrendList& obj) { 
            DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
            DARABONBA_PTR_FROM_JSON(UsedCredit, usedCredit_);
          };
          CreditTrendList() = default ;
          CreditTrendList(const CreditTrendList &) = default ;
          CreditTrendList(CreditTrendList &&) = default ;
          CreditTrendList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CreditTrendList() = default ;
          CreditTrendList& operator=(const CreditTrendList &) = default ;
          CreditTrendList& operator=(CreditTrendList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->timePoint_ == nullptr
        && this->usedCredit_ == nullptr; };
          // timePoint Field Functions 
          bool hasTimePoint() const { return this->timePoint_ != nullptr;};
          void deleteTimePoint() { this->timePoint_ = nullptr;};
          inline string getTimePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, "") };
          inline CreditTrendList& setTimePoint(string timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


          // usedCredit Field Functions 
          bool hasUsedCredit() const { return this->usedCredit_ != nullptr;};
          void deleteUsedCredit() { this->usedCredit_ = nullptr;};
          inline int64_t getUsedCredit() const { DARABONBA_PTR_GET_DEFAULT(usedCredit_, 0L) };
          inline CreditTrendList& setUsedCredit(int64_t usedCredit) { DARABONBA_PTR_SET_VALUE(usedCredit_, usedCredit) };


        protected:
          // The time point in the format `yyyy-MM-dd HH` (accurate to the hour).
          shared_ptr<string> timePoint_ {};
          // The number of credits consumed in this hour.
          shared_ptr<int64_t> usedCredit_ {};
        };

        virtual bool empty() const override { return this->availableAmount_ == nullptr
        && this->contactGroupNames_ == nullptr && this->creditTrendList_ == nullptr && this->currentInstanceExpiredTime_ == nullptr && this->currentInstanceId_ == nullptr && this->currentRemainCredit_ == nullptr
        && this->currentTotalCredit_ == nullptr && this->currentUsedCredit_ == nullptr && this->dayUsedCredit_ == nullptr && this->lastTriggeredAt_ == nullptr && this->periodTotalCredit_ == nullptr
        && this->periodUsedCredit_ == nullptr && this->remainCredit_ == nullptr && this->remainCreditInfo_ == nullptr && this->todayUsed_ == nullptr && this->totalCredit_ == nullptr
        && this->totalUsed_ == nullptr && this->totalUsedCredit_ == nullptr && this->warnPercent_ == nullptr && this->weekUsedCredit_ == nullptr; };
        // availableAmount Field Functions 
        bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
        void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
        inline int32_t getAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, 0) };
        inline UsageInfo& setAvailableAmount(int32_t availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


        // contactGroupNames Field Functions 
        bool hasContactGroupNames() const { return this->contactGroupNames_ != nullptr;};
        void deleteContactGroupNames() { this->contactGroupNames_ = nullptr;};
        inline const vector<string> & getContactGroupNames() const { DARABONBA_PTR_GET_CONST(contactGroupNames_, vector<string>) };
        inline vector<string> getContactGroupNames() { DARABONBA_PTR_GET(contactGroupNames_, vector<string>) };
        inline UsageInfo& setContactGroupNames(const vector<string> & contactGroupNames) { DARABONBA_PTR_SET_VALUE(contactGroupNames_, contactGroupNames) };
        inline UsageInfo& setContactGroupNames(vector<string> && contactGroupNames) { DARABONBA_PTR_SET_RVALUE(contactGroupNames_, contactGroupNames) };


        // creditTrendList Field Functions 
        bool hasCreditTrendList() const { return this->creditTrendList_ != nullptr;};
        void deleteCreditTrendList() { this->creditTrendList_ = nullptr;};
        inline const vector<UsageInfo::CreditTrendList> & getCreditTrendList() const { DARABONBA_PTR_GET_CONST(creditTrendList_, vector<UsageInfo::CreditTrendList>) };
        inline vector<UsageInfo::CreditTrendList> getCreditTrendList() { DARABONBA_PTR_GET(creditTrendList_, vector<UsageInfo::CreditTrendList>) };
        inline UsageInfo& setCreditTrendList(const vector<UsageInfo::CreditTrendList> & creditTrendList) { DARABONBA_PTR_SET_VALUE(creditTrendList_, creditTrendList) };
        inline UsageInfo& setCreditTrendList(vector<UsageInfo::CreditTrendList> && creditTrendList) { DARABONBA_PTR_SET_RVALUE(creditTrendList_, creditTrendList) };


        // currentInstanceExpiredTime Field Functions 
        bool hasCurrentInstanceExpiredTime() const { return this->currentInstanceExpiredTime_ != nullptr;};
        void deleteCurrentInstanceExpiredTime() { this->currentInstanceExpiredTime_ = nullptr;};
        inline string getCurrentInstanceExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(currentInstanceExpiredTime_, "") };
        inline UsageInfo& setCurrentInstanceExpiredTime(string currentInstanceExpiredTime) { DARABONBA_PTR_SET_VALUE(currentInstanceExpiredTime_, currentInstanceExpiredTime) };


        // currentInstanceId Field Functions 
        bool hasCurrentInstanceId() const { return this->currentInstanceId_ != nullptr;};
        void deleteCurrentInstanceId() { this->currentInstanceId_ = nullptr;};
        inline string getCurrentInstanceId() const { DARABONBA_PTR_GET_DEFAULT(currentInstanceId_, "") };
        inline UsageInfo& setCurrentInstanceId(string currentInstanceId) { DARABONBA_PTR_SET_VALUE(currentInstanceId_, currentInstanceId) };


        // currentRemainCredit Field Functions 
        bool hasCurrentRemainCredit() const { return this->currentRemainCredit_ != nullptr;};
        void deleteCurrentRemainCredit() { this->currentRemainCredit_ = nullptr;};
        inline int64_t getCurrentRemainCredit() const { DARABONBA_PTR_GET_DEFAULT(currentRemainCredit_, 0L) };
        inline UsageInfo& setCurrentRemainCredit(int64_t currentRemainCredit) { DARABONBA_PTR_SET_VALUE(currentRemainCredit_, currentRemainCredit) };


        // currentTotalCredit Field Functions 
        bool hasCurrentTotalCredit() const { return this->currentTotalCredit_ != nullptr;};
        void deleteCurrentTotalCredit() { this->currentTotalCredit_ = nullptr;};
        inline int64_t getCurrentTotalCredit() const { DARABONBA_PTR_GET_DEFAULT(currentTotalCredit_, 0L) };
        inline UsageInfo& setCurrentTotalCredit(int64_t currentTotalCredit) { DARABONBA_PTR_SET_VALUE(currentTotalCredit_, currentTotalCredit) };


        // currentUsedCredit Field Functions 
        bool hasCurrentUsedCredit() const { return this->currentUsedCredit_ != nullptr;};
        void deleteCurrentUsedCredit() { this->currentUsedCredit_ = nullptr;};
        inline int64_t getCurrentUsedCredit() const { DARABONBA_PTR_GET_DEFAULT(currentUsedCredit_, 0L) };
        inline UsageInfo& setCurrentUsedCredit(int64_t currentUsedCredit) { DARABONBA_PTR_SET_VALUE(currentUsedCredit_, currentUsedCredit) };


        // dayUsedCredit Field Functions 
        bool hasDayUsedCredit() const { return this->dayUsedCredit_ != nullptr;};
        void deleteDayUsedCredit() { this->dayUsedCredit_ = nullptr;};
        inline int64_t getDayUsedCredit() const { DARABONBA_PTR_GET_DEFAULT(dayUsedCredit_, 0L) };
        inline UsageInfo& setDayUsedCredit(int64_t dayUsedCredit) { DARABONBA_PTR_SET_VALUE(dayUsedCredit_, dayUsedCredit) };


        // lastTriggeredAt Field Functions 
        bool hasLastTriggeredAt() const { return this->lastTriggeredAt_ != nullptr;};
        void deleteLastTriggeredAt() { this->lastTriggeredAt_ = nullptr;};
        inline string getLastTriggeredAt() const { DARABONBA_PTR_GET_DEFAULT(lastTriggeredAt_, "") };
        inline UsageInfo& setLastTriggeredAt(string lastTriggeredAt) { DARABONBA_PTR_SET_VALUE(lastTriggeredAt_, lastTriggeredAt) };


        // periodTotalCredit Field Functions 
        bool hasPeriodTotalCredit() const { return this->periodTotalCredit_ != nullptr;};
        void deletePeriodTotalCredit() { this->periodTotalCredit_ = nullptr;};
        inline int64_t getPeriodTotalCredit() const { DARABONBA_PTR_GET_DEFAULT(periodTotalCredit_, 0L) };
        inline UsageInfo& setPeriodTotalCredit(int64_t periodTotalCredit) { DARABONBA_PTR_SET_VALUE(periodTotalCredit_, periodTotalCredit) };


        // periodUsedCredit Field Functions 
        bool hasPeriodUsedCredit() const { return this->periodUsedCredit_ != nullptr;};
        void deletePeriodUsedCredit() { this->periodUsedCredit_ = nullptr;};
        inline int64_t getPeriodUsedCredit() const { DARABONBA_PTR_GET_DEFAULT(periodUsedCredit_, 0L) };
        inline UsageInfo& setPeriodUsedCredit(int64_t periodUsedCredit) { DARABONBA_PTR_SET_VALUE(periodUsedCredit_, periodUsedCredit) };


        // remainCredit Field Functions 
        bool hasRemainCredit() const { return this->remainCredit_ != nullptr;};
        void deleteRemainCredit() { this->remainCredit_ = nullptr;};
        inline int64_t getRemainCredit() const { DARABONBA_PTR_GET_DEFAULT(remainCredit_, 0L) };
        inline UsageInfo& setRemainCredit(int64_t remainCredit) { DARABONBA_PTR_SET_VALUE(remainCredit_, remainCredit) };


        // remainCreditInfo Field Functions 
        bool hasRemainCreditInfo() const { return this->remainCreditInfo_ != nullptr;};
        void deleteRemainCreditInfo() { this->remainCreditInfo_ = nullptr;};
        inline const UsageInfo::RemainCreditInfo & getRemainCreditInfo() const { DARABONBA_PTR_GET_CONST(remainCreditInfo_, UsageInfo::RemainCreditInfo) };
        inline UsageInfo::RemainCreditInfo getRemainCreditInfo() { DARABONBA_PTR_GET(remainCreditInfo_, UsageInfo::RemainCreditInfo) };
        inline UsageInfo& setRemainCreditInfo(const UsageInfo::RemainCreditInfo & remainCreditInfo) { DARABONBA_PTR_SET_VALUE(remainCreditInfo_, remainCreditInfo) };
        inline UsageInfo& setRemainCreditInfo(UsageInfo::RemainCreditInfo && remainCreditInfo) { DARABONBA_PTR_SET_RVALUE(remainCreditInfo_, remainCreditInfo) };


        // todayUsed Field Functions 
        bool hasTodayUsed() const { return this->todayUsed_ != nullptr;};
        void deleteTodayUsed() { this->todayUsed_ = nullptr;};
        inline string getTodayUsed() const { DARABONBA_PTR_GET_DEFAULT(todayUsed_, "") };
        inline UsageInfo& setTodayUsed(string todayUsed) { DARABONBA_PTR_SET_VALUE(todayUsed_, todayUsed) };


        // totalCredit Field Functions 
        bool hasTotalCredit() const { return this->totalCredit_ != nullptr;};
        void deleteTotalCredit() { this->totalCredit_ = nullptr;};
        inline int64_t getTotalCredit() const { DARABONBA_PTR_GET_DEFAULT(totalCredit_, 0L) };
        inline UsageInfo& setTotalCredit(int64_t totalCredit) { DARABONBA_PTR_SET_VALUE(totalCredit_, totalCredit) };


        // totalUsed Field Functions 
        bool hasTotalUsed() const { return this->totalUsed_ != nullptr;};
        void deleteTotalUsed() { this->totalUsed_ = nullptr;};
        inline string getTotalUsed() const { DARABONBA_PTR_GET_DEFAULT(totalUsed_, "") };
        inline UsageInfo& setTotalUsed(string totalUsed) { DARABONBA_PTR_SET_VALUE(totalUsed_, totalUsed) };


        // totalUsedCredit Field Functions 
        bool hasTotalUsedCredit() const { return this->totalUsedCredit_ != nullptr;};
        void deleteTotalUsedCredit() { this->totalUsedCredit_ = nullptr;};
        inline int64_t getTotalUsedCredit() const { DARABONBA_PTR_GET_DEFAULT(totalUsedCredit_, 0L) };
        inline UsageInfo& setTotalUsedCredit(int64_t totalUsedCredit) { DARABONBA_PTR_SET_VALUE(totalUsedCredit_, totalUsedCredit) };


        // warnPercent Field Functions 
        bool hasWarnPercent() const { return this->warnPercent_ != nullptr;};
        void deleteWarnPercent() { this->warnPercent_ = nullptr;};
        inline int32_t getWarnPercent() const { DARABONBA_PTR_GET_DEFAULT(warnPercent_, 0) };
        inline UsageInfo& setWarnPercent(int32_t warnPercent) { DARABONBA_PTR_SET_VALUE(warnPercent_, warnPercent) };


        // weekUsedCredit Field Functions 
        bool hasWeekUsedCredit() const { return this->weekUsedCredit_ != nullptr;};
        void deleteWeekUsedCredit() { this->weekUsedCredit_ = nullptr;};
        inline int64_t getWeekUsedCredit() const { DARABONBA_PTR_GET_DEFAULT(weekUsedCredit_, 0L) };
        inline UsageInfo& setWeekUsedCredit(int64_t weekUsedCredit) { DARABONBA_PTR_SET_VALUE(weekUsedCredit_, weekUsedCredit) };


      protected:
        shared_ptr<int32_t> availableAmount_ {};
        shared_ptr<vector<string>> contactGroupNames_ {};
        // The hourly consumption samples of the current credit package.
        shared_ptr<vector<UsageInfo::CreditTrendList>> creditTrendList_ {};
        shared_ptr<string> currentInstanceExpiredTime_ {};
        // The instance ID of the current active credit package.
        shared_ptr<string> currentInstanceId_ {};
        // The remaining credits of the current active credit package.
        shared_ptr<int64_t> currentRemainCredit_ {};
        // The total credits of the current active credit package.
        shared_ptr<int64_t> currentTotalCredit_ {};
        // The used credits of the current active credit package.
        shared_ptr<int64_t> currentUsedCredit_ {};
        // The credit usage in the last 1 day.
        shared_ptr<int64_t> dayUsedCredit_ {};
        shared_ptr<string> lastTriggeredAt_ {};
        // The shared credit quota in the current active period.
        shared_ptr<int64_t> periodTotalCredit_ {};
        // The shared credit usage in the current active period.
        shared_ptr<int64_t> periodUsedCredit_ {};
        // The cumulative remaining credits.
        shared_ptr<int64_t> remainCredit_ {};
        shared_ptr<UsageInfo::RemainCreditInfo> remainCreditInfo_ {};
        // The quota used today.
        shared_ptr<string> todayUsed_ {};
        // The total cumulative credits.
        shared_ptr<int64_t> totalCredit_ {};
        // The cumulative used quota.
        shared_ptr<string> totalUsed_ {};
        // The cumulative credit usage.
        shared_ptr<int64_t> totalUsedCredit_ {};
        // The alert threshold percentage (0–100).
        shared_ptr<int32_t> warnPercent_ {};
        // The credit usage in the last 1 week.
        shared_ptr<int64_t> weekUsedCredit_ {};
      };

      virtual bool empty() const override { return this->usageInfo_ == nullptr
        && this->usageInfoKey_ == nullptr; };
      // usageInfo Field Functions 
      bool hasUsageInfo() const { return this->usageInfo_ != nullptr;};
      void deleteUsageInfo() { this->usageInfo_ = nullptr;};
      inline const UsageInfoList::UsageInfo & getUsageInfo() const { DARABONBA_PTR_GET_CONST(usageInfo_, UsageInfoList::UsageInfo) };
      inline UsageInfoList::UsageInfo getUsageInfo() { DARABONBA_PTR_GET(usageInfo_, UsageInfoList::UsageInfo) };
      inline UsageInfoList& setUsageInfo(const UsageInfoList::UsageInfo & usageInfo) { DARABONBA_PTR_SET_VALUE(usageInfo_, usageInfo) };
      inline UsageInfoList& setUsageInfo(UsageInfoList::UsageInfo && usageInfo) { DARABONBA_PTR_SET_RVALUE(usageInfo_, usageInfo) };


      // usageInfoKey Field Functions 
      bool hasUsageInfoKey() const { return this->usageInfoKey_ != nullptr;};
      void deleteUsageInfoKey() { this->usageInfoKey_ = nullptr;};
      inline string getUsageInfoKey() const { DARABONBA_PTR_GET_DEFAULT(usageInfoKey_, "") };
      inline UsageInfoList& setUsageInfoKey(string usageInfoKey) { DARABONBA_PTR_SET_VALUE(usageInfoKey_, usageInfoKey) };


    protected:
      // The usage data details.
      shared_ptr<UsageInfoList::UsageInfo> usageInfo_ {};
      // The usage primary key. When `UsageType=User`, this is the `aliUid`. When `UsageType=CreditPackage`, this is the credit package instance ID. When `UsageType=Agent`, this is the `AgentId`.
      shared_ptr<string> usageInfoKey_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->usageInfoList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCreditUsageInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageInfoList Field Functions 
    bool hasUsageInfoList() const { return this->usageInfoList_ != nullptr;};
    void deleteUsageInfoList() { this->usageInfoList_ = nullptr;};
    inline const vector<DescribeCreditUsageInfoResponseBody::UsageInfoList> & getUsageInfoList() const { DARABONBA_PTR_GET_CONST(usageInfoList_, vector<DescribeCreditUsageInfoResponseBody::UsageInfoList>) };
    inline vector<DescribeCreditUsageInfoResponseBody::UsageInfoList> getUsageInfoList() { DARABONBA_PTR_GET(usageInfoList_, vector<DescribeCreditUsageInfoResponseBody::UsageInfoList>) };
    inline DescribeCreditUsageInfoResponseBody& setUsageInfoList(const vector<DescribeCreditUsageInfoResponseBody::UsageInfoList> & usageInfoList) { DARABONBA_PTR_SET_VALUE(usageInfoList_, usageInfoList) };
    inline DescribeCreditUsageInfoResponseBody& setUsageInfoList(vector<DescribeCreditUsageInfoResponseBody::UsageInfoList> && usageInfoList) { DARABONBA_PTR_SET_RVALUE(usageInfoList_, usageInfoList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The array of usage data.
    shared_ptr<vector<DescribeCreditUsageInfoResponseBody::UsageInfoList>> usageInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
