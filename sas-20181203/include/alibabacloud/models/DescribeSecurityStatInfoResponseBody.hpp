// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYSTATINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYSTATINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityStatInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityStatInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackEvent, attackEvent_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEvent, securityEvent_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Vulnerability, vulnerability_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityStatInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackEvent, attackEvent_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEvent, securityEvent_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Vulnerability, vulnerability_);
    };
    DescribeSecurityStatInfoResponseBody() = default ;
    DescribeSecurityStatInfoResponseBody(const DescribeSecurityStatInfoResponseBody &) = default ;
    DescribeSecurityStatInfoResponseBody(DescribeSecurityStatInfoResponseBody &&) = default ;
    DescribeSecurityStatInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityStatInfoResponseBody() = default ;
    DescribeSecurityStatInfoResponseBody& operator=(const DescribeSecurityStatInfoResponseBody &) = default ;
    DescribeSecurityStatInfoResponseBody& operator=(DescribeSecurityStatInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vulnerability : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vulnerability& obj) { 
        DARABONBA_PTR_TO_JSON(AsapCount, asapCount_);
        DARABONBA_PTR_TO_JSON(AsapList, asapList_);
        DARABONBA_PTR_TO_JSON(DateArray, dateArray_);
        DARABONBA_PTR_TO_JSON(LaterCount, laterCount_);
        DARABONBA_PTR_TO_JSON(LaterList, laterList_);
        DARABONBA_PTR_TO_JSON(LevelsOn, levelsOn_);
        DARABONBA_PTR_TO_JSON(NntfCount, nntfCount_);
        DARABONBA_PTR_TO_JSON(NntfList, nntfList_);
        DARABONBA_PTR_TO_JSON(TimeArray, timeArray_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(ValueArray, valueArray_);
      };
      friend void from_json(const Darabonba::Json& j, Vulnerability& obj) { 
        DARABONBA_PTR_FROM_JSON(AsapCount, asapCount_);
        DARABONBA_PTR_FROM_JSON(AsapList, asapList_);
        DARABONBA_PTR_FROM_JSON(DateArray, dateArray_);
        DARABONBA_PTR_FROM_JSON(LaterCount, laterCount_);
        DARABONBA_PTR_FROM_JSON(LaterList, laterList_);
        DARABONBA_PTR_FROM_JSON(LevelsOn, levelsOn_);
        DARABONBA_PTR_FROM_JSON(NntfCount, nntfCount_);
        DARABONBA_PTR_FROM_JSON(NntfList, nntfList_);
        DARABONBA_PTR_FROM_JSON(TimeArray, timeArray_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(ValueArray, valueArray_);
      };
      Vulnerability() = default ;
      Vulnerability(const Vulnerability &) = default ;
      Vulnerability(Vulnerability &&) = default ;
      Vulnerability(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vulnerability() = default ;
      Vulnerability& operator=(const Vulnerability &) = default ;
      Vulnerability& operator=(Vulnerability &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asapCount_ == nullptr
        && this->asapList_ == nullptr && this->dateArray_ == nullptr && this->laterCount_ == nullptr && this->laterList_ == nullptr && this->levelsOn_ == nullptr
        && this->nntfCount_ == nullptr && this->nntfList_ == nullptr && this->timeArray_ == nullptr && this->totalCount_ == nullptr && this->valueArray_ == nullptr; };
      // asapCount Field Functions 
      bool hasAsapCount() const { return this->asapCount_ != nullptr;};
      void deleteAsapCount() { this->asapCount_ = nullptr;};
      inline int32_t getAsapCount() const { DARABONBA_PTR_GET_DEFAULT(asapCount_, 0) };
      inline Vulnerability& setAsapCount(int32_t asapCount) { DARABONBA_PTR_SET_VALUE(asapCount_, asapCount) };


      // asapList Field Functions 
      bool hasAsapList() const { return this->asapList_ != nullptr;};
      void deleteAsapList() { this->asapList_ = nullptr;};
      inline const vector<string> & getAsapList() const { DARABONBA_PTR_GET_CONST(asapList_, vector<string>) };
      inline vector<string> getAsapList() { DARABONBA_PTR_GET(asapList_, vector<string>) };
      inline Vulnerability& setAsapList(const vector<string> & asapList) { DARABONBA_PTR_SET_VALUE(asapList_, asapList) };
      inline Vulnerability& setAsapList(vector<string> && asapList) { DARABONBA_PTR_SET_RVALUE(asapList_, asapList) };


      // dateArray Field Functions 
      bool hasDateArray() const { return this->dateArray_ != nullptr;};
      void deleteDateArray() { this->dateArray_ = nullptr;};
      inline const vector<string> & getDateArray() const { DARABONBA_PTR_GET_CONST(dateArray_, vector<string>) };
      inline vector<string> getDateArray() { DARABONBA_PTR_GET(dateArray_, vector<string>) };
      inline Vulnerability& setDateArray(const vector<string> & dateArray) { DARABONBA_PTR_SET_VALUE(dateArray_, dateArray) };
      inline Vulnerability& setDateArray(vector<string> && dateArray) { DARABONBA_PTR_SET_RVALUE(dateArray_, dateArray) };


      // laterCount Field Functions 
      bool hasLaterCount() const { return this->laterCount_ != nullptr;};
      void deleteLaterCount() { this->laterCount_ = nullptr;};
      inline int32_t getLaterCount() const { DARABONBA_PTR_GET_DEFAULT(laterCount_, 0) };
      inline Vulnerability& setLaterCount(int32_t laterCount) { DARABONBA_PTR_SET_VALUE(laterCount_, laterCount) };


      // laterList Field Functions 
      bool hasLaterList() const { return this->laterList_ != nullptr;};
      void deleteLaterList() { this->laterList_ = nullptr;};
      inline const vector<string> & getLaterList() const { DARABONBA_PTR_GET_CONST(laterList_, vector<string>) };
      inline vector<string> getLaterList() { DARABONBA_PTR_GET(laterList_, vector<string>) };
      inline Vulnerability& setLaterList(const vector<string> & laterList) { DARABONBA_PTR_SET_VALUE(laterList_, laterList) };
      inline Vulnerability& setLaterList(vector<string> && laterList) { DARABONBA_PTR_SET_RVALUE(laterList_, laterList) };


      // levelsOn Field Functions 
      bool hasLevelsOn() const { return this->levelsOn_ != nullptr;};
      void deleteLevelsOn() { this->levelsOn_ = nullptr;};
      inline const vector<string> & getLevelsOn() const { DARABONBA_PTR_GET_CONST(levelsOn_, vector<string>) };
      inline vector<string> getLevelsOn() { DARABONBA_PTR_GET(levelsOn_, vector<string>) };
      inline Vulnerability& setLevelsOn(const vector<string> & levelsOn) { DARABONBA_PTR_SET_VALUE(levelsOn_, levelsOn) };
      inline Vulnerability& setLevelsOn(vector<string> && levelsOn) { DARABONBA_PTR_SET_RVALUE(levelsOn_, levelsOn) };


      // nntfCount Field Functions 
      bool hasNntfCount() const { return this->nntfCount_ != nullptr;};
      void deleteNntfCount() { this->nntfCount_ = nullptr;};
      inline int32_t getNntfCount() const { DARABONBA_PTR_GET_DEFAULT(nntfCount_, 0) };
      inline Vulnerability& setNntfCount(int32_t nntfCount) { DARABONBA_PTR_SET_VALUE(nntfCount_, nntfCount) };


      // nntfList Field Functions 
      bool hasNntfList() const { return this->nntfList_ != nullptr;};
      void deleteNntfList() { this->nntfList_ = nullptr;};
      inline const vector<string> & getNntfList() const { DARABONBA_PTR_GET_CONST(nntfList_, vector<string>) };
      inline vector<string> getNntfList() { DARABONBA_PTR_GET(nntfList_, vector<string>) };
      inline Vulnerability& setNntfList(const vector<string> & nntfList) { DARABONBA_PTR_SET_VALUE(nntfList_, nntfList) };
      inline Vulnerability& setNntfList(vector<string> && nntfList) { DARABONBA_PTR_SET_RVALUE(nntfList_, nntfList) };


      // timeArray Field Functions 
      bool hasTimeArray() const { return this->timeArray_ != nullptr;};
      void deleteTimeArray() { this->timeArray_ = nullptr;};
      inline const vector<string> & getTimeArray() const { DARABONBA_PTR_GET_CONST(timeArray_, vector<string>) };
      inline vector<string> getTimeArray() { DARABONBA_PTR_GET(timeArray_, vector<string>) };
      inline Vulnerability& setTimeArray(const vector<string> & timeArray) { DARABONBA_PTR_SET_VALUE(timeArray_, timeArray) };
      inline Vulnerability& setTimeArray(vector<string> && timeArray) { DARABONBA_PTR_SET_RVALUE(timeArray_, timeArray) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Vulnerability& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // valueArray Field Functions 
      bool hasValueArray() const { return this->valueArray_ != nullptr;};
      void deleteValueArray() { this->valueArray_ = nullptr;};
      inline const vector<string> & getValueArray() const { DARABONBA_PTR_GET_CONST(valueArray_, vector<string>) };
      inline vector<string> getValueArray() { DARABONBA_PTR_GET(valueArray_, vector<string>) };
      inline Vulnerability& setValueArray(const vector<string> & valueArray) { DARABONBA_PTR_SET_VALUE(valueArray_, valueArray) };
      inline Vulnerability& setValueArray(vector<string> && valueArray) { DARABONBA_PTR_SET_RVALUE(valueArray_, valueArray) };


    protected:
      // The number of **high-risk** unfixed vulnerabilities on the current day.
      shared_ptr<int32_t> asapCount_ {};
      // The numbers of high-risk unfixed vulnerabilities at all points in time.
      shared_ptr<vector<string>> asapList_ {};
      // The points in time when data of unfixed vulnerabilities is collected in the trend chart.
      shared_ptr<vector<string>> dateArray_ {};
      // The number of **medium-risk** unfixed vulnerabilities on the current day.
      shared_ptr<int32_t> laterCount_ {};
      // The numbers of medium-risk unfixed vulnerabilities at all points in time.
      shared_ptr<vector<string>> laterList_ {};
      // The risk levels of unfixed vulnerabilities.
      shared_ptr<vector<string>> levelsOn_ {};
      // The number of **low-risk** unfixed vulnerabilities on the current day.
      shared_ptr<int32_t> nntfCount_ {};
      // The numbers of low-risk unfixed vulnerabilities at all points in time.
      shared_ptr<vector<string>> nntfList_ {};
      // The time periods during which data of unfixed vulnerabilities is collected.
      shared_ptr<vector<string>> timeArray_ {};
      // The total number of unfixed vulnerabilities on the current day.
      shared_ptr<int32_t> totalCount_ {};
      // The numbers of unfixed vulnerabilities at all points in time.
      shared_ptr<vector<string>> valueArray_ {};
    };

    class SecurityEvent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityEvent& obj) { 
        DARABONBA_PTR_TO_JSON(DateArray, dateArray_);
        DARABONBA_PTR_TO_JSON(LevelsOn, levelsOn_);
        DARABONBA_PTR_TO_JSON(RemindCount, remindCount_);
        DARABONBA_PTR_TO_JSON(RemindList, remindList_);
        DARABONBA_PTR_TO_JSON(SeriousCount, seriousCount_);
        DARABONBA_PTR_TO_JSON(SeriousList, seriousList_);
        DARABONBA_PTR_TO_JSON(SuspiciousCount, suspiciousCount_);
        DARABONBA_PTR_TO_JSON(SuspiciousList, suspiciousList_);
        DARABONBA_PTR_TO_JSON(TimeArray, timeArray_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(ValueArray, valueArray_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityEvent& obj) { 
        DARABONBA_PTR_FROM_JSON(DateArray, dateArray_);
        DARABONBA_PTR_FROM_JSON(LevelsOn, levelsOn_);
        DARABONBA_PTR_FROM_JSON(RemindCount, remindCount_);
        DARABONBA_PTR_FROM_JSON(RemindList, remindList_);
        DARABONBA_PTR_FROM_JSON(SeriousCount, seriousCount_);
        DARABONBA_PTR_FROM_JSON(SeriousList, seriousList_);
        DARABONBA_PTR_FROM_JSON(SuspiciousCount, suspiciousCount_);
        DARABONBA_PTR_FROM_JSON(SuspiciousList, suspiciousList_);
        DARABONBA_PTR_FROM_JSON(TimeArray, timeArray_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(ValueArray, valueArray_);
      };
      SecurityEvent() = default ;
      SecurityEvent(const SecurityEvent &) = default ;
      SecurityEvent(SecurityEvent &&) = default ;
      SecurityEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityEvent() = default ;
      SecurityEvent& operator=(const SecurityEvent &) = default ;
      SecurityEvent& operator=(SecurityEvent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dateArray_ == nullptr
        && this->levelsOn_ == nullptr && this->remindCount_ == nullptr && this->remindList_ == nullptr && this->seriousCount_ == nullptr && this->seriousList_ == nullptr
        && this->suspiciousCount_ == nullptr && this->suspiciousList_ == nullptr && this->timeArray_ == nullptr && this->totalCount_ == nullptr && this->valueArray_ == nullptr; };
      // dateArray Field Functions 
      bool hasDateArray() const { return this->dateArray_ != nullptr;};
      void deleteDateArray() { this->dateArray_ = nullptr;};
      inline const vector<string> & getDateArray() const { DARABONBA_PTR_GET_CONST(dateArray_, vector<string>) };
      inline vector<string> getDateArray() { DARABONBA_PTR_GET(dateArray_, vector<string>) };
      inline SecurityEvent& setDateArray(const vector<string> & dateArray) { DARABONBA_PTR_SET_VALUE(dateArray_, dateArray) };
      inline SecurityEvent& setDateArray(vector<string> && dateArray) { DARABONBA_PTR_SET_RVALUE(dateArray_, dateArray) };


      // levelsOn Field Functions 
      bool hasLevelsOn() const { return this->levelsOn_ != nullptr;};
      void deleteLevelsOn() { this->levelsOn_ = nullptr;};
      inline const vector<string> & getLevelsOn() const { DARABONBA_PTR_GET_CONST(levelsOn_, vector<string>) };
      inline vector<string> getLevelsOn() { DARABONBA_PTR_GET(levelsOn_, vector<string>) };
      inline SecurityEvent& setLevelsOn(const vector<string> & levelsOn) { DARABONBA_PTR_SET_VALUE(levelsOn_, levelsOn) };
      inline SecurityEvent& setLevelsOn(vector<string> && levelsOn) { DARABONBA_PTR_SET_RVALUE(levelsOn_, levelsOn) };


      // remindCount Field Functions 
      bool hasRemindCount() const { return this->remindCount_ != nullptr;};
      void deleteRemindCount() { this->remindCount_ = nullptr;};
      inline int32_t getRemindCount() const { DARABONBA_PTR_GET_DEFAULT(remindCount_, 0) };
      inline SecurityEvent& setRemindCount(int32_t remindCount) { DARABONBA_PTR_SET_VALUE(remindCount_, remindCount) };


      // remindList Field Functions 
      bool hasRemindList() const { return this->remindList_ != nullptr;};
      void deleteRemindList() { this->remindList_ = nullptr;};
      inline const vector<string> & getRemindList() const { DARABONBA_PTR_GET_CONST(remindList_, vector<string>) };
      inline vector<string> getRemindList() { DARABONBA_PTR_GET(remindList_, vector<string>) };
      inline SecurityEvent& setRemindList(const vector<string> & remindList) { DARABONBA_PTR_SET_VALUE(remindList_, remindList) };
      inline SecurityEvent& setRemindList(vector<string> && remindList) { DARABONBA_PTR_SET_RVALUE(remindList_, remindList) };


      // seriousCount Field Functions 
      bool hasSeriousCount() const { return this->seriousCount_ != nullptr;};
      void deleteSeriousCount() { this->seriousCount_ = nullptr;};
      inline int32_t getSeriousCount() const { DARABONBA_PTR_GET_DEFAULT(seriousCount_, 0) };
      inline SecurityEvent& setSeriousCount(int32_t seriousCount) { DARABONBA_PTR_SET_VALUE(seriousCount_, seriousCount) };


      // seriousList Field Functions 
      bool hasSeriousList() const { return this->seriousList_ != nullptr;};
      void deleteSeriousList() { this->seriousList_ = nullptr;};
      inline const vector<string> & getSeriousList() const { DARABONBA_PTR_GET_CONST(seriousList_, vector<string>) };
      inline vector<string> getSeriousList() { DARABONBA_PTR_GET(seriousList_, vector<string>) };
      inline SecurityEvent& setSeriousList(const vector<string> & seriousList) { DARABONBA_PTR_SET_VALUE(seriousList_, seriousList) };
      inline SecurityEvent& setSeriousList(vector<string> && seriousList) { DARABONBA_PTR_SET_RVALUE(seriousList_, seriousList) };


      // suspiciousCount Field Functions 
      bool hasSuspiciousCount() const { return this->suspiciousCount_ != nullptr;};
      void deleteSuspiciousCount() { this->suspiciousCount_ = nullptr;};
      inline int32_t getSuspiciousCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousCount_, 0) };
      inline SecurityEvent& setSuspiciousCount(int32_t suspiciousCount) { DARABONBA_PTR_SET_VALUE(suspiciousCount_, suspiciousCount) };


      // suspiciousList Field Functions 
      bool hasSuspiciousList() const { return this->suspiciousList_ != nullptr;};
      void deleteSuspiciousList() { this->suspiciousList_ = nullptr;};
      inline const vector<string> & getSuspiciousList() const { DARABONBA_PTR_GET_CONST(suspiciousList_, vector<string>) };
      inline vector<string> getSuspiciousList() { DARABONBA_PTR_GET(suspiciousList_, vector<string>) };
      inline SecurityEvent& setSuspiciousList(const vector<string> & suspiciousList) { DARABONBA_PTR_SET_VALUE(suspiciousList_, suspiciousList) };
      inline SecurityEvent& setSuspiciousList(vector<string> && suspiciousList) { DARABONBA_PTR_SET_RVALUE(suspiciousList_, suspiciousList) };


      // timeArray Field Functions 
      bool hasTimeArray() const { return this->timeArray_ != nullptr;};
      void deleteTimeArray() { this->timeArray_ = nullptr;};
      inline const vector<string> & getTimeArray() const { DARABONBA_PTR_GET_CONST(timeArray_, vector<string>) };
      inline vector<string> getTimeArray() { DARABONBA_PTR_GET(timeArray_, vector<string>) };
      inline SecurityEvent& setTimeArray(const vector<string> & timeArray) { DARABONBA_PTR_SET_VALUE(timeArray_, timeArray) };
      inline SecurityEvent& setTimeArray(vector<string> && timeArray) { DARABONBA_PTR_SET_RVALUE(timeArray_, timeArray) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline SecurityEvent& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // valueArray Field Functions 
      bool hasValueArray() const { return this->valueArray_ != nullptr;};
      void deleteValueArray() { this->valueArray_ = nullptr;};
      inline const vector<string> & getValueArray() const { DARABONBA_PTR_GET_CONST(valueArray_, vector<string>) };
      inline vector<string> getValueArray() { DARABONBA_PTR_GET(valueArray_, vector<string>) };
      inline SecurityEvent& setValueArray(const vector<string> & valueArray) { DARABONBA_PTR_SET_VALUE(valueArray_, valueArray) };
      inline SecurityEvent& setValueArray(vector<string> && valueArray) { DARABONBA_PTR_SET_RVALUE(valueArray_, valueArray) };


    protected:
      // The points in time when data of unhandled alerts is collected in the trend chart.
      shared_ptr<vector<string>> dateArray_ {};
      // The risk levels of unhandled alerts.
      shared_ptr<vector<string>> levelsOn_ {};
      // The number of **remind** alerts on the current day.
      shared_ptr<int32_t> remindCount_ {};
      // The numbers of remind alerts at all points in time.
      shared_ptr<vector<string>> remindList_ {};
      // The number of **serious** alerts on the current day.
      shared_ptr<int32_t> seriousCount_ {};
      // The numbers of serious alerts at all points in time.
      shared_ptr<vector<string>> seriousList_ {};
      // The number of **suspicious** alerts on the current day.
      shared_ptr<int32_t> suspiciousCount_ {};
      // The numbers of suspicious alerts at all points in time.
      shared_ptr<vector<string>> suspiciousList_ {};
      // The time periods during which data of the same alert is collected.
      shared_ptr<vector<string>> timeArray_ {};
      // The total number of unhandled alerts on the current day.
      shared_ptr<int32_t> totalCount_ {};
      // The numbers of unhandled alerts at all points in time.
      shared_ptr<vector<string>> valueArray_ {};
    };

    class HealthCheck : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HealthCheck& obj) { 
        DARABONBA_PTR_TO_JSON(DateArray, dateArray_);
        DARABONBA_PTR_TO_JSON(HighCount, highCount_);
        DARABONBA_PTR_TO_JSON(HighList, highList_);
        DARABONBA_PTR_TO_JSON(LevelsOn, levelsOn_);
        DARABONBA_PTR_TO_JSON(LowCount, lowCount_);
        DARABONBA_PTR_TO_JSON(LowList, lowList_);
        DARABONBA_PTR_TO_JSON(MediumCount, mediumCount_);
        DARABONBA_PTR_TO_JSON(MediumList, mediumList_);
        DARABONBA_PTR_TO_JSON(TimeArray, timeArray_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(ValueArray, valueArray_);
      };
      friend void from_json(const Darabonba::Json& j, HealthCheck& obj) { 
        DARABONBA_PTR_FROM_JSON(DateArray, dateArray_);
        DARABONBA_PTR_FROM_JSON(HighCount, highCount_);
        DARABONBA_PTR_FROM_JSON(HighList, highList_);
        DARABONBA_PTR_FROM_JSON(LevelsOn, levelsOn_);
        DARABONBA_PTR_FROM_JSON(LowCount, lowCount_);
        DARABONBA_PTR_FROM_JSON(LowList, lowList_);
        DARABONBA_PTR_FROM_JSON(MediumCount, mediumCount_);
        DARABONBA_PTR_FROM_JSON(MediumList, mediumList_);
        DARABONBA_PTR_FROM_JSON(TimeArray, timeArray_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(ValueArray, valueArray_);
      };
      HealthCheck() = default ;
      HealthCheck(const HealthCheck &) = default ;
      HealthCheck(HealthCheck &&) = default ;
      HealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HealthCheck() = default ;
      HealthCheck& operator=(const HealthCheck &) = default ;
      HealthCheck& operator=(HealthCheck &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dateArray_ == nullptr
        && this->highCount_ == nullptr && this->highList_ == nullptr && this->levelsOn_ == nullptr && this->lowCount_ == nullptr && this->lowList_ == nullptr
        && this->mediumCount_ == nullptr && this->mediumList_ == nullptr && this->timeArray_ == nullptr && this->totalCount_ == nullptr && this->valueArray_ == nullptr; };
      // dateArray Field Functions 
      bool hasDateArray() const { return this->dateArray_ != nullptr;};
      void deleteDateArray() { this->dateArray_ = nullptr;};
      inline const vector<string> & getDateArray() const { DARABONBA_PTR_GET_CONST(dateArray_, vector<string>) };
      inline vector<string> getDateArray() { DARABONBA_PTR_GET(dateArray_, vector<string>) };
      inline HealthCheck& setDateArray(const vector<string> & dateArray) { DARABONBA_PTR_SET_VALUE(dateArray_, dateArray) };
      inline HealthCheck& setDateArray(vector<string> && dateArray) { DARABONBA_PTR_SET_RVALUE(dateArray_, dateArray) };


      // highCount Field Functions 
      bool hasHighCount() const { return this->highCount_ != nullptr;};
      void deleteHighCount() { this->highCount_ = nullptr;};
      inline int32_t getHighCount() const { DARABONBA_PTR_GET_DEFAULT(highCount_, 0) };
      inline HealthCheck& setHighCount(int32_t highCount) { DARABONBA_PTR_SET_VALUE(highCount_, highCount) };


      // highList Field Functions 
      bool hasHighList() const { return this->highList_ != nullptr;};
      void deleteHighList() { this->highList_ = nullptr;};
      inline const vector<string> & getHighList() const { DARABONBA_PTR_GET_CONST(highList_, vector<string>) };
      inline vector<string> getHighList() { DARABONBA_PTR_GET(highList_, vector<string>) };
      inline HealthCheck& setHighList(const vector<string> & highList) { DARABONBA_PTR_SET_VALUE(highList_, highList) };
      inline HealthCheck& setHighList(vector<string> && highList) { DARABONBA_PTR_SET_RVALUE(highList_, highList) };


      // levelsOn Field Functions 
      bool hasLevelsOn() const { return this->levelsOn_ != nullptr;};
      void deleteLevelsOn() { this->levelsOn_ = nullptr;};
      inline const vector<string> & getLevelsOn() const { DARABONBA_PTR_GET_CONST(levelsOn_, vector<string>) };
      inline vector<string> getLevelsOn() { DARABONBA_PTR_GET(levelsOn_, vector<string>) };
      inline HealthCheck& setLevelsOn(const vector<string> & levelsOn) { DARABONBA_PTR_SET_VALUE(levelsOn_, levelsOn) };
      inline HealthCheck& setLevelsOn(vector<string> && levelsOn) { DARABONBA_PTR_SET_RVALUE(levelsOn_, levelsOn) };


      // lowCount Field Functions 
      bool hasLowCount() const { return this->lowCount_ != nullptr;};
      void deleteLowCount() { this->lowCount_ = nullptr;};
      inline int32_t getLowCount() const { DARABONBA_PTR_GET_DEFAULT(lowCount_, 0) };
      inline HealthCheck& setLowCount(int32_t lowCount) { DARABONBA_PTR_SET_VALUE(lowCount_, lowCount) };


      // lowList Field Functions 
      bool hasLowList() const { return this->lowList_ != nullptr;};
      void deleteLowList() { this->lowList_ = nullptr;};
      inline const vector<string> & getLowList() const { DARABONBA_PTR_GET_CONST(lowList_, vector<string>) };
      inline vector<string> getLowList() { DARABONBA_PTR_GET(lowList_, vector<string>) };
      inline HealthCheck& setLowList(const vector<string> & lowList) { DARABONBA_PTR_SET_VALUE(lowList_, lowList) };
      inline HealthCheck& setLowList(vector<string> && lowList) { DARABONBA_PTR_SET_RVALUE(lowList_, lowList) };


      // mediumCount Field Functions 
      bool hasMediumCount() const { return this->mediumCount_ != nullptr;};
      void deleteMediumCount() { this->mediumCount_ = nullptr;};
      inline int32_t getMediumCount() const { DARABONBA_PTR_GET_DEFAULT(mediumCount_, 0) };
      inline HealthCheck& setMediumCount(int32_t mediumCount) { DARABONBA_PTR_SET_VALUE(mediumCount_, mediumCount) };


      // mediumList Field Functions 
      bool hasMediumList() const { return this->mediumList_ != nullptr;};
      void deleteMediumList() { this->mediumList_ = nullptr;};
      inline const vector<string> & getMediumList() const { DARABONBA_PTR_GET_CONST(mediumList_, vector<string>) };
      inline vector<string> getMediumList() { DARABONBA_PTR_GET(mediumList_, vector<string>) };
      inline HealthCheck& setMediumList(const vector<string> & mediumList) { DARABONBA_PTR_SET_VALUE(mediumList_, mediumList) };
      inline HealthCheck& setMediumList(vector<string> && mediumList) { DARABONBA_PTR_SET_RVALUE(mediumList_, mediumList) };


      // timeArray Field Functions 
      bool hasTimeArray() const { return this->timeArray_ != nullptr;};
      void deleteTimeArray() { this->timeArray_ = nullptr;};
      inline const vector<string> & getTimeArray() const { DARABONBA_PTR_GET_CONST(timeArray_, vector<string>) };
      inline vector<string> getTimeArray() { DARABONBA_PTR_GET(timeArray_, vector<string>) };
      inline HealthCheck& setTimeArray(const vector<string> & timeArray) { DARABONBA_PTR_SET_VALUE(timeArray_, timeArray) };
      inline HealthCheck& setTimeArray(vector<string> && timeArray) { DARABONBA_PTR_SET_RVALUE(timeArray_, timeArray) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline HealthCheck& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // valueArray Field Functions 
      bool hasValueArray() const { return this->valueArray_ != nullptr;};
      void deleteValueArray() { this->valueArray_ = nullptr;};
      inline const vector<string> & getValueArray() const { DARABONBA_PTR_GET_CONST(valueArray_, vector<string>) };
      inline vector<string> getValueArray() { DARABONBA_PTR_GET(valueArray_, vector<string>) };
      inline HealthCheck& setValueArray(const vector<string> & valueArray) { DARABONBA_PTR_SET_VALUE(valueArray_, valueArray) };
      inline HealthCheck& setValueArray(vector<string> && valueArray) { DARABONBA_PTR_SET_RVALUE(valueArray_, valueArray) };


    protected:
      // The points in time when data of baseline risk items is collected in the trend chart.
      shared_ptr<vector<string>> dateArray_ {};
      // The number of baseline risk items that have the high-risk level on the current day.
      shared_ptr<int32_t> highCount_ {};
      // The numbers of baseline risk items that have the high-risk level at all points in time.
      shared_ptr<vector<string>> highList_ {};
      // The risk levels of baseline risk items.
      shared_ptr<vector<string>> levelsOn_ {};
      // The number of baseline risk items that have the low-risk level on the current day.
      shared_ptr<int32_t> lowCount_ {};
      // The numbers of baseline risk items that have the low-risk level at all points in time.
      shared_ptr<vector<string>> lowList_ {};
      // The number of baseline risk items that have the medium-risk level on the current day.
      shared_ptr<int32_t> mediumCount_ {};
      // The numbers of baseline risk items that have the medium-risk level at all points in time.
      shared_ptr<vector<string>> mediumList_ {};
      // The time periods during which data of baseline risk items is collected.
      shared_ptr<vector<string>> timeArray_ {};
      // The total number of baseline risk items on the current day.
      shared_ptr<int32_t> totalCount_ {};
      // The total number of baseline risk items at all points in time.
      shared_ptr<vector<string>> valueArray_ {};
    };

    class AttackEvent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackEvent& obj) { 
        DARABONBA_PTR_TO_JSON(DateArray, dateArray_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(ValueArray, valueArray_);
      };
      friend void from_json(const Darabonba::Json& j, AttackEvent& obj) { 
        DARABONBA_PTR_FROM_JSON(DateArray, dateArray_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(ValueArray, valueArray_);
      };
      AttackEvent() = default ;
      AttackEvent(const AttackEvent &) = default ;
      AttackEvent(AttackEvent &&) = default ;
      AttackEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackEvent() = default ;
      AttackEvent& operator=(const AttackEvent &) = default ;
      AttackEvent& operator=(AttackEvent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dateArray_ == nullptr
        && this->totalCount_ == nullptr && this->valueArray_ == nullptr; };
      // dateArray Field Functions 
      bool hasDateArray() const { return this->dateArray_ != nullptr;};
      void deleteDateArray() { this->dateArray_ = nullptr;};
      inline const vector<string> & getDateArray() const { DARABONBA_PTR_GET_CONST(dateArray_, vector<string>) };
      inline vector<string> getDateArray() { DARABONBA_PTR_GET(dateArray_, vector<string>) };
      inline AttackEvent& setDateArray(const vector<string> & dateArray) { DARABONBA_PTR_SET_VALUE(dateArray_, dateArray) };
      inline AttackEvent& setDateArray(vector<string> && dateArray) { DARABONBA_PTR_SET_RVALUE(dateArray_, dateArray) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline AttackEvent& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // valueArray Field Functions 
      bool hasValueArray() const { return this->valueArray_ != nullptr;};
      void deleteValueArray() { this->valueArray_ = nullptr;};
      inline const vector<string> & getValueArray() const { DARABONBA_PTR_GET_CONST(valueArray_, vector<string>) };
      inline vector<string> getValueArray() { DARABONBA_PTR_GET(valueArray_, vector<string>) };
      inline AttackEvent& setValueArray(const vector<string> & valueArray) { DARABONBA_PTR_SET_VALUE(valueArray_, valueArray) };
      inline AttackEvent& setValueArray(vector<string> && valueArray) { DARABONBA_PTR_SET_RVALUE(valueArray_, valueArray) };


    protected:
      // The points in time when the number of attacks is collected in the trend chart.
      shared_ptr<vector<string>> dateArray_ {};
      // The total number of attacks on the current day.
      shared_ptr<int32_t> totalCount_ {};
      // The numbers of attacks at all points in time.
      shared_ptr<vector<string>> valueArray_ {};
    };

    virtual bool empty() const override { return this->attackEvent_ == nullptr
        && this->healthCheck_ == nullptr && this->requestId_ == nullptr && this->securityEvent_ == nullptr && this->success_ == nullptr && this->vulnerability_ == nullptr; };
    // attackEvent Field Functions 
    bool hasAttackEvent() const { return this->attackEvent_ != nullptr;};
    void deleteAttackEvent() { this->attackEvent_ = nullptr;};
    inline const DescribeSecurityStatInfoResponseBody::AttackEvent & getAttackEvent() const { DARABONBA_PTR_GET_CONST(attackEvent_, DescribeSecurityStatInfoResponseBody::AttackEvent) };
    inline DescribeSecurityStatInfoResponseBody::AttackEvent getAttackEvent() { DARABONBA_PTR_GET(attackEvent_, DescribeSecurityStatInfoResponseBody::AttackEvent) };
    inline DescribeSecurityStatInfoResponseBody& setAttackEvent(const DescribeSecurityStatInfoResponseBody::AttackEvent & attackEvent) { DARABONBA_PTR_SET_VALUE(attackEvent_, attackEvent) };
    inline DescribeSecurityStatInfoResponseBody& setAttackEvent(DescribeSecurityStatInfoResponseBody::AttackEvent && attackEvent) { DARABONBA_PTR_SET_RVALUE(attackEvent_, attackEvent) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline const DescribeSecurityStatInfoResponseBody::HealthCheck & getHealthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, DescribeSecurityStatInfoResponseBody::HealthCheck) };
    inline DescribeSecurityStatInfoResponseBody::HealthCheck getHealthCheck() { DARABONBA_PTR_GET(healthCheck_, DescribeSecurityStatInfoResponseBody::HealthCheck) };
    inline DescribeSecurityStatInfoResponseBody& setHealthCheck(const DescribeSecurityStatInfoResponseBody::HealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
    inline DescribeSecurityStatInfoResponseBody& setHealthCheck(DescribeSecurityStatInfoResponseBody::HealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityStatInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEvent Field Functions 
    bool hasSecurityEvent() const { return this->securityEvent_ != nullptr;};
    void deleteSecurityEvent() { this->securityEvent_ = nullptr;};
    inline const DescribeSecurityStatInfoResponseBody::SecurityEvent & getSecurityEvent() const { DARABONBA_PTR_GET_CONST(securityEvent_, DescribeSecurityStatInfoResponseBody::SecurityEvent) };
    inline DescribeSecurityStatInfoResponseBody::SecurityEvent getSecurityEvent() { DARABONBA_PTR_GET(securityEvent_, DescribeSecurityStatInfoResponseBody::SecurityEvent) };
    inline DescribeSecurityStatInfoResponseBody& setSecurityEvent(const DescribeSecurityStatInfoResponseBody::SecurityEvent & securityEvent) { DARABONBA_PTR_SET_VALUE(securityEvent_, securityEvent) };
    inline DescribeSecurityStatInfoResponseBody& setSecurityEvent(DescribeSecurityStatInfoResponseBody::SecurityEvent && securityEvent) { DARABONBA_PTR_SET_RVALUE(securityEvent_, securityEvent) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSecurityStatInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // vulnerability Field Functions 
    bool hasVulnerability() const { return this->vulnerability_ != nullptr;};
    void deleteVulnerability() { this->vulnerability_ = nullptr;};
    inline const DescribeSecurityStatInfoResponseBody::Vulnerability & getVulnerability() const { DARABONBA_PTR_GET_CONST(vulnerability_, DescribeSecurityStatInfoResponseBody::Vulnerability) };
    inline DescribeSecurityStatInfoResponseBody::Vulnerability getVulnerability() { DARABONBA_PTR_GET(vulnerability_, DescribeSecurityStatInfoResponseBody::Vulnerability) };
    inline DescribeSecurityStatInfoResponseBody& setVulnerability(const DescribeSecurityStatInfoResponseBody::Vulnerability & vulnerability) { DARABONBA_PTR_SET_VALUE(vulnerability_, vulnerability) };
    inline DescribeSecurityStatInfoResponseBody& setVulnerability(DescribeSecurityStatInfoResponseBody::Vulnerability && vulnerability) { DARABONBA_PTR_SET_RVALUE(vulnerability_, vulnerability) };


  protected:
    // The detailed statistics of attacks.
    shared_ptr<DescribeSecurityStatInfoResponseBody::AttackEvent> attackEvent_ {};
    // The detailed statistics of baseline risk items.
    shared_ptr<DescribeSecurityStatInfoResponseBody::HealthCheck> healthCheck_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The detailed statistics of unhandled alerts.
    shared_ptr<DescribeSecurityStatInfoResponseBody::SecurityEvent> securityEvent_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The detailed statistics of unfixed vulnerabilities.
    shared_ptr<DescribeSecurityStatInfoResponseBody::Vulnerability> vulnerability_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
