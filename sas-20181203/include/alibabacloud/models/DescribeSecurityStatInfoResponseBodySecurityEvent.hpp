// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYSTATINFORESPONSEBODYSECURITYEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYSTATINFORESPONSEBODYSECURITYEVENT_HPP_
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
  class DescribeSecurityStatInfoResponseBodySecurityEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityStatInfoResponseBodySecurityEvent& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSecurityStatInfoResponseBodySecurityEvent& obj) { 
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
    DescribeSecurityStatInfoResponseBodySecurityEvent() = default ;
    DescribeSecurityStatInfoResponseBodySecurityEvent(const DescribeSecurityStatInfoResponseBodySecurityEvent &) = default ;
    DescribeSecurityStatInfoResponseBodySecurityEvent(DescribeSecurityStatInfoResponseBodySecurityEvent &&) = default ;
    DescribeSecurityStatInfoResponseBodySecurityEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityStatInfoResponseBodySecurityEvent() = default ;
    DescribeSecurityStatInfoResponseBodySecurityEvent& operator=(const DescribeSecurityStatInfoResponseBodySecurityEvent &) = default ;
    DescribeSecurityStatInfoResponseBodySecurityEvent& operator=(DescribeSecurityStatInfoResponseBodySecurityEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dateArray_ != nullptr
        && this->levelsOn_ != nullptr && this->remindCount_ != nullptr && this->remindList_ != nullptr && this->seriousCount_ != nullptr && this->seriousList_ != nullptr
        && this->suspiciousCount_ != nullptr && this->suspiciousList_ != nullptr && this->timeArray_ != nullptr && this->totalCount_ != nullptr && this->valueArray_ != nullptr; };
    // dateArray Field Functions 
    bool hasDateArray() const { return this->dateArray_ != nullptr;};
    void deleteDateArray() { this->dateArray_ = nullptr;};
    inline const vector<string> & dateArray() const { DARABONBA_PTR_GET_CONST(dateArray_, vector<string>) };
    inline vector<string> dateArray() { DARABONBA_PTR_GET(dateArray_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setDateArray(const vector<string> & dateArray) { DARABONBA_PTR_SET_VALUE(dateArray_, dateArray) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setDateArray(vector<string> && dateArray) { DARABONBA_PTR_SET_RVALUE(dateArray_, dateArray) };


    // levelsOn Field Functions 
    bool hasLevelsOn() const { return this->levelsOn_ != nullptr;};
    void deleteLevelsOn() { this->levelsOn_ = nullptr;};
    inline const vector<string> & levelsOn() const { DARABONBA_PTR_GET_CONST(levelsOn_, vector<string>) };
    inline vector<string> levelsOn() { DARABONBA_PTR_GET(levelsOn_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setLevelsOn(const vector<string> & levelsOn) { DARABONBA_PTR_SET_VALUE(levelsOn_, levelsOn) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setLevelsOn(vector<string> && levelsOn) { DARABONBA_PTR_SET_RVALUE(levelsOn_, levelsOn) };


    // remindCount Field Functions 
    bool hasRemindCount() const { return this->remindCount_ != nullptr;};
    void deleteRemindCount() { this->remindCount_ = nullptr;};
    inline int32_t remindCount() const { DARABONBA_PTR_GET_DEFAULT(remindCount_, 0) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setRemindCount(int32_t remindCount) { DARABONBA_PTR_SET_VALUE(remindCount_, remindCount) };


    // remindList Field Functions 
    bool hasRemindList() const { return this->remindList_ != nullptr;};
    void deleteRemindList() { this->remindList_ = nullptr;};
    inline const vector<string> & remindList() const { DARABONBA_PTR_GET_CONST(remindList_, vector<string>) };
    inline vector<string> remindList() { DARABONBA_PTR_GET(remindList_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setRemindList(const vector<string> & remindList) { DARABONBA_PTR_SET_VALUE(remindList_, remindList) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setRemindList(vector<string> && remindList) { DARABONBA_PTR_SET_RVALUE(remindList_, remindList) };


    // seriousCount Field Functions 
    bool hasSeriousCount() const { return this->seriousCount_ != nullptr;};
    void deleteSeriousCount() { this->seriousCount_ = nullptr;};
    inline int32_t seriousCount() const { DARABONBA_PTR_GET_DEFAULT(seriousCount_, 0) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setSeriousCount(int32_t seriousCount) { DARABONBA_PTR_SET_VALUE(seriousCount_, seriousCount) };


    // seriousList Field Functions 
    bool hasSeriousList() const { return this->seriousList_ != nullptr;};
    void deleteSeriousList() { this->seriousList_ = nullptr;};
    inline const vector<string> & seriousList() const { DARABONBA_PTR_GET_CONST(seriousList_, vector<string>) };
    inline vector<string> seriousList() { DARABONBA_PTR_GET(seriousList_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setSeriousList(const vector<string> & seriousList) { DARABONBA_PTR_SET_VALUE(seriousList_, seriousList) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setSeriousList(vector<string> && seriousList) { DARABONBA_PTR_SET_RVALUE(seriousList_, seriousList) };


    // suspiciousCount Field Functions 
    bool hasSuspiciousCount() const { return this->suspiciousCount_ != nullptr;};
    void deleteSuspiciousCount() { this->suspiciousCount_ = nullptr;};
    inline int32_t suspiciousCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousCount_, 0) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setSuspiciousCount(int32_t suspiciousCount) { DARABONBA_PTR_SET_VALUE(suspiciousCount_, suspiciousCount) };


    // suspiciousList Field Functions 
    bool hasSuspiciousList() const { return this->suspiciousList_ != nullptr;};
    void deleteSuspiciousList() { this->suspiciousList_ = nullptr;};
    inline const vector<string> & suspiciousList() const { DARABONBA_PTR_GET_CONST(suspiciousList_, vector<string>) };
    inline vector<string> suspiciousList() { DARABONBA_PTR_GET(suspiciousList_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setSuspiciousList(const vector<string> & suspiciousList) { DARABONBA_PTR_SET_VALUE(suspiciousList_, suspiciousList) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setSuspiciousList(vector<string> && suspiciousList) { DARABONBA_PTR_SET_RVALUE(suspiciousList_, suspiciousList) };


    // timeArray Field Functions 
    bool hasTimeArray() const { return this->timeArray_ != nullptr;};
    void deleteTimeArray() { this->timeArray_ = nullptr;};
    inline const vector<string> & timeArray() const { DARABONBA_PTR_GET_CONST(timeArray_, vector<string>) };
    inline vector<string> timeArray() { DARABONBA_PTR_GET(timeArray_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setTimeArray(const vector<string> & timeArray) { DARABONBA_PTR_SET_VALUE(timeArray_, timeArray) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setTimeArray(vector<string> && timeArray) { DARABONBA_PTR_SET_RVALUE(timeArray_, timeArray) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // valueArray Field Functions 
    bool hasValueArray() const { return this->valueArray_ != nullptr;};
    void deleteValueArray() { this->valueArray_ = nullptr;};
    inline const vector<string> & valueArray() const { DARABONBA_PTR_GET_CONST(valueArray_, vector<string>) };
    inline vector<string> valueArray() { DARABONBA_PTR_GET(valueArray_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setValueArray(const vector<string> & valueArray) { DARABONBA_PTR_SET_VALUE(valueArray_, valueArray) };
    inline DescribeSecurityStatInfoResponseBodySecurityEvent& setValueArray(vector<string> && valueArray) { DARABONBA_PTR_SET_RVALUE(valueArray_, valueArray) };


  protected:
    // The points in time when data of unhandled alerts is collected in the trend chart.
    std::shared_ptr<vector<string>> dateArray_ = nullptr;
    // The risk levels of unhandled alerts.
    std::shared_ptr<vector<string>> levelsOn_ = nullptr;
    // The number of **remind** alerts on the current day.
    std::shared_ptr<int32_t> remindCount_ = nullptr;
    // The numbers of remind alerts at all points in time.
    std::shared_ptr<vector<string>> remindList_ = nullptr;
    // The number of **serious** alerts on the current day.
    std::shared_ptr<int32_t> seriousCount_ = nullptr;
    // The numbers of serious alerts at all points in time.
    std::shared_ptr<vector<string>> seriousList_ = nullptr;
    // The number of **suspicious** alerts on the current day.
    std::shared_ptr<int32_t> suspiciousCount_ = nullptr;
    // The numbers of suspicious alerts at all points in time.
    std::shared_ptr<vector<string>> suspiciousList_ = nullptr;
    // The time periods during which data of the same alert is collected.
    std::shared_ptr<vector<string>> timeArray_ = nullptr;
    // The total number of unhandled alerts on the current day.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The numbers of unhandled alerts at all points in time.
    std::shared_ptr<vector<string>> valueArray_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
