// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENSECURITYSTATINFORESPONSEBODYSECURITYEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENSECURITYSTATINFORESPONSEBODYSECURITYEVENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenSecurityStatInfoResponseBodySecurityEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenSecurityStatInfoResponseBodySecurityEvent& obj) { 
      DARABONBA_PTR_TO_JSON(DateArray, dateArray_);
      DARABONBA_PTR_TO_JSON(LevelsOn, levelsOn_);
      DARABONBA_PTR_TO_JSON(RemindCount, remindCount_);
      DARABONBA_PTR_TO_JSON(RemindList, remindList_);
      DARABONBA_PTR_TO_JSON(SeriousCount, seriousCount_);
      DARABONBA_PTR_TO_JSON(SeriousList, seriousList_);
      DARABONBA_PTR_TO_JSON(SuspiciousCount, suspiciousCount_);
      DARABONBA_PTR_TO_JSON(SuspiciousList, suspiciousList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(ValueArray, valueArray_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenSecurityStatInfoResponseBodySecurityEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(DateArray, dateArray_);
      DARABONBA_PTR_FROM_JSON(LevelsOn, levelsOn_);
      DARABONBA_PTR_FROM_JSON(RemindCount, remindCount_);
      DARABONBA_PTR_FROM_JSON(RemindList, remindList_);
      DARABONBA_PTR_FROM_JSON(SeriousCount, seriousCount_);
      DARABONBA_PTR_FROM_JSON(SeriousList, seriousList_);
      DARABONBA_PTR_FROM_JSON(SuspiciousCount, suspiciousCount_);
      DARABONBA_PTR_FROM_JSON(SuspiciousList, suspiciousList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(ValueArray, valueArray_);
    };
    DescribeScreenSecurityStatInfoResponseBodySecurityEvent() = default ;
    DescribeScreenSecurityStatInfoResponseBodySecurityEvent(const DescribeScreenSecurityStatInfoResponseBodySecurityEvent &) = default ;
    DescribeScreenSecurityStatInfoResponseBodySecurityEvent(DescribeScreenSecurityStatInfoResponseBodySecurityEvent &&) = default ;
    DescribeScreenSecurityStatInfoResponseBodySecurityEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenSecurityStatInfoResponseBodySecurityEvent() = default ;
    DescribeScreenSecurityStatInfoResponseBodySecurityEvent& operator=(const DescribeScreenSecurityStatInfoResponseBodySecurityEvent &) = default ;
    DescribeScreenSecurityStatInfoResponseBodySecurityEvent& operator=(DescribeScreenSecurityStatInfoResponseBodySecurityEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dateArray_ == nullptr
        && return this->levelsOn_ == nullptr && return this->remindCount_ == nullptr && return this->remindList_ == nullptr && return this->seriousCount_ == nullptr && return this->seriousList_ == nullptr
        && return this->suspiciousCount_ == nullptr && return this->suspiciousList_ == nullptr && return this->totalCount_ == nullptr && return this->valueArray_ == nullptr; };
    // dateArray Field Functions 
    bool hasDateArray() const { return this->dateArray_ != nullptr;};
    void deleteDateArray() { this->dateArray_ = nullptr;};
    inline const vector<string> & dateArray() const { DARABONBA_PTR_GET_CONST(dateArray_, vector<string>) };
    inline vector<string> dateArray() { DARABONBA_PTR_GET(dateArray_, vector<string>) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setDateArray(const vector<string> & dateArray) { DARABONBA_PTR_SET_VALUE(dateArray_, dateArray) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setDateArray(vector<string> && dateArray) { DARABONBA_PTR_SET_RVALUE(dateArray_, dateArray) };


    // levelsOn Field Functions 
    bool hasLevelsOn() const { return this->levelsOn_ != nullptr;};
    void deleteLevelsOn() { this->levelsOn_ = nullptr;};
    inline const vector<string> & levelsOn() const { DARABONBA_PTR_GET_CONST(levelsOn_, vector<string>) };
    inline vector<string> levelsOn() { DARABONBA_PTR_GET(levelsOn_, vector<string>) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setLevelsOn(const vector<string> & levelsOn) { DARABONBA_PTR_SET_VALUE(levelsOn_, levelsOn) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setLevelsOn(vector<string> && levelsOn) { DARABONBA_PTR_SET_RVALUE(levelsOn_, levelsOn) };


    // remindCount Field Functions 
    bool hasRemindCount() const { return this->remindCount_ != nullptr;};
    void deleteRemindCount() { this->remindCount_ = nullptr;};
    inline int32_t remindCount() const { DARABONBA_PTR_GET_DEFAULT(remindCount_, 0) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setRemindCount(int32_t remindCount) { DARABONBA_PTR_SET_VALUE(remindCount_, remindCount) };


    // remindList Field Functions 
    bool hasRemindList() const { return this->remindList_ != nullptr;};
    void deleteRemindList() { this->remindList_ = nullptr;};
    inline const vector<string> & remindList() const { DARABONBA_PTR_GET_CONST(remindList_, vector<string>) };
    inline vector<string> remindList() { DARABONBA_PTR_GET(remindList_, vector<string>) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setRemindList(const vector<string> & remindList) { DARABONBA_PTR_SET_VALUE(remindList_, remindList) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setRemindList(vector<string> && remindList) { DARABONBA_PTR_SET_RVALUE(remindList_, remindList) };


    // seriousCount Field Functions 
    bool hasSeriousCount() const { return this->seriousCount_ != nullptr;};
    void deleteSeriousCount() { this->seriousCount_ = nullptr;};
    inline int32_t seriousCount() const { DARABONBA_PTR_GET_DEFAULT(seriousCount_, 0) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setSeriousCount(int32_t seriousCount) { DARABONBA_PTR_SET_VALUE(seriousCount_, seriousCount) };


    // seriousList Field Functions 
    bool hasSeriousList() const { return this->seriousList_ != nullptr;};
    void deleteSeriousList() { this->seriousList_ = nullptr;};
    inline const vector<string> & seriousList() const { DARABONBA_PTR_GET_CONST(seriousList_, vector<string>) };
    inline vector<string> seriousList() { DARABONBA_PTR_GET(seriousList_, vector<string>) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setSeriousList(const vector<string> & seriousList) { DARABONBA_PTR_SET_VALUE(seriousList_, seriousList) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setSeriousList(vector<string> && seriousList) { DARABONBA_PTR_SET_RVALUE(seriousList_, seriousList) };


    // suspiciousCount Field Functions 
    bool hasSuspiciousCount() const { return this->suspiciousCount_ != nullptr;};
    void deleteSuspiciousCount() { this->suspiciousCount_ = nullptr;};
    inline int32_t suspiciousCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousCount_, 0) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setSuspiciousCount(int32_t suspiciousCount) { DARABONBA_PTR_SET_VALUE(suspiciousCount_, suspiciousCount) };


    // suspiciousList Field Functions 
    bool hasSuspiciousList() const { return this->suspiciousList_ != nullptr;};
    void deleteSuspiciousList() { this->suspiciousList_ = nullptr;};
    inline const vector<string> & suspiciousList() const { DARABONBA_PTR_GET_CONST(suspiciousList_, vector<string>) };
    inline vector<string> suspiciousList() { DARABONBA_PTR_GET(suspiciousList_, vector<string>) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setSuspiciousList(const vector<string> & suspiciousList) { DARABONBA_PTR_SET_VALUE(suspiciousList_, suspiciousList) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setSuspiciousList(vector<string> && suspiciousList) { DARABONBA_PTR_SET_RVALUE(suspiciousList_, suspiciousList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // valueArray Field Functions 
    bool hasValueArray() const { return this->valueArray_ != nullptr;};
    void deleteValueArray() { this->valueArray_ = nullptr;};
    inline const vector<string> & valueArray() const { DARABONBA_PTR_GET_CONST(valueArray_, vector<string>) };
    inline vector<string> valueArray() { DARABONBA_PTR_GET(valueArray_, vector<string>) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setValueArray(const vector<string> & valueArray) { DARABONBA_PTR_SET_VALUE(valueArray_, valueArray) };
    inline DescribeScreenSecurityStatInfoResponseBodySecurityEvent& setValueArray(vector<string> && valueArray) { DARABONBA_PTR_SET_RVALUE(valueArray_, valueArray) };


  protected:
    std::shared_ptr<vector<string>> dateArray_ = nullptr;
    std::shared_ptr<vector<string>> levelsOn_ = nullptr;
    std::shared_ptr<int32_t> remindCount_ = nullptr;
    std::shared_ptr<vector<string>> remindList_ = nullptr;
    std::shared_ptr<int32_t> seriousCount_ = nullptr;
    std::shared_ptr<vector<string>> seriousList_ = nullptr;
    std::shared_ptr<int32_t> suspiciousCount_ = nullptr;
    std::shared_ptr<vector<string>> suspiciousList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<string>> valueArray_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
