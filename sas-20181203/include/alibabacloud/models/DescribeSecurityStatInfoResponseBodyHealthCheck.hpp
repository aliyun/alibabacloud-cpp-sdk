// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYSTATINFORESPONSEBODYHEALTHCHECK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYSTATINFORESPONSEBODYHEALTHCHECK_HPP_
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
  class DescribeSecurityStatInfoResponseBodyHealthCheck : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityStatInfoResponseBodyHealthCheck& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSecurityStatInfoResponseBodyHealthCheck& obj) { 
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
    DescribeSecurityStatInfoResponseBodyHealthCheck() = default ;
    DescribeSecurityStatInfoResponseBodyHealthCheck(const DescribeSecurityStatInfoResponseBodyHealthCheck &) = default ;
    DescribeSecurityStatInfoResponseBodyHealthCheck(DescribeSecurityStatInfoResponseBodyHealthCheck &&) = default ;
    DescribeSecurityStatInfoResponseBodyHealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityStatInfoResponseBodyHealthCheck() = default ;
    DescribeSecurityStatInfoResponseBodyHealthCheck& operator=(const DescribeSecurityStatInfoResponseBodyHealthCheck &) = default ;
    DescribeSecurityStatInfoResponseBodyHealthCheck& operator=(DescribeSecurityStatInfoResponseBodyHealthCheck &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dateArray_ != nullptr
        && this->highCount_ != nullptr && this->highList_ != nullptr && this->levelsOn_ != nullptr && this->lowCount_ != nullptr && this->lowList_ != nullptr
        && this->mediumCount_ != nullptr && this->mediumList_ != nullptr && this->timeArray_ != nullptr && this->totalCount_ != nullptr && this->valueArray_ != nullptr; };
    // dateArray Field Functions 
    bool hasDateArray() const { return this->dateArray_ != nullptr;};
    void deleteDateArray() { this->dateArray_ = nullptr;};
    inline const vector<string> & dateArray() const { DARABONBA_PTR_GET_CONST(dateArray_, vector<string>) };
    inline vector<string> dateArray() { DARABONBA_PTR_GET(dateArray_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setDateArray(const vector<string> & dateArray) { DARABONBA_PTR_SET_VALUE(dateArray_, dateArray) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setDateArray(vector<string> && dateArray) { DARABONBA_PTR_SET_RVALUE(dateArray_, dateArray) };


    // highCount Field Functions 
    bool hasHighCount() const { return this->highCount_ != nullptr;};
    void deleteHighCount() { this->highCount_ = nullptr;};
    inline int32_t highCount() const { DARABONBA_PTR_GET_DEFAULT(highCount_, 0) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setHighCount(int32_t highCount) { DARABONBA_PTR_SET_VALUE(highCount_, highCount) };


    // highList Field Functions 
    bool hasHighList() const { return this->highList_ != nullptr;};
    void deleteHighList() { this->highList_ = nullptr;};
    inline const vector<string> & highList() const { DARABONBA_PTR_GET_CONST(highList_, vector<string>) };
    inline vector<string> highList() { DARABONBA_PTR_GET(highList_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setHighList(const vector<string> & highList) { DARABONBA_PTR_SET_VALUE(highList_, highList) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setHighList(vector<string> && highList) { DARABONBA_PTR_SET_RVALUE(highList_, highList) };


    // levelsOn Field Functions 
    bool hasLevelsOn() const { return this->levelsOn_ != nullptr;};
    void deleteLevelsOn() { this->levelsOn_ = nullptr;};
    inline const vector<string> & levelsOn() const { DARABONBA_PTR_GET_CONST(levelsOn_, vector<string>) };
    inline vector<string> levelsOn() { DARABONBA_PTR_GET(levelsOn_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setLevelsOn(const vector<string> & levelsOn) { DARABONBA_PTR_SET_VALUE(levelsOn_, levelsOn) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setLevelsOn(vector<string> && levelsOn) { DARABONBA_PTR_SET_RVALUE(levelsOn_, levelsOn) };


    // lowCount Field Functions 
    bool hasLowCount() const { return this->lowCount_ != nullptr;};
    void deleteLowCount() { this->lowCount_ = nullptr;};
    inline int32_t lowCount() const { DARABONBA_PTR_GET_DEFAULT(lowCount_, 0) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setLowCount(int32_t lowCount) { DARABONBA_PTR_SET_VALUE(lowCount_, lowCount) };


    // lowList Field Functions 
    bool hasLowList() const { return this->lowList_ != nullptr;};
    void deleteLowList() { this->lowList_ = nullptr;};
    inline const vector<string> & lowList() const { DARABONBA_PTR_GET_CONST(lowList_, vector<string>) };
    inline vector<string> lowList() { DARABONBA_PTR_GET(lowList_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setLowList(const vector<string> & lowList) { DARABONBA_PTR_SET_VALUE(lowList_, lowList) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setLowList(vector<string> && lowList) { DARABONBA_PTR_SET_RVALUE(lowList_, lowList) };


    // mediumCount Field Functions 
    bool hasMediumCount() const { return this->mediumCount_ != nullptr;};
    void deleteMediumCount() { this->mediumCount_ = nullptr;};
    inline int32_t mediumCount() const { DARABONBA_PTR_GET_DEFAULT(mediumCount_, 0) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setMediumCount(int32_t mediumCount) { DARABONBA_PTR_SET_VALUE(mediumCount_, mediumCount) };


    // mediumList Field Functions 
    bool hasMediumList() const { return this->mediumList_ != nullptr;};
    void deleteMediumList() { this->mediumList_ = nullptr;};
    inline const vector<string> & mediumList() const { DARABONBA_PTR_GET_CONST(mediumList_, vector<string>) };
    inline vector<string> mediumList() { DARABONBA_PTR_GET(mediumList_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setMediumList(const vector<string> & mediumList) { DARABONBA_PTR_SET_VALUE(mediumList_, mediumList) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setMediumList(vector<string> && mediumList) { DARABONBA_PTR_SET_RVALUE(mediumList_, mediumList) };


    // timeArray Field Functions 
    bool hasTimeArray() const { return this->timeArray_ != nullptr;};
    void deleteTimeArray() { this->timeArray_ = nullptr;};
    inline const vector<string> & timeArray() const { DARABONBA_PTR_GET_CONST(timeArray_, vector<string>) };
    inline vector<string> timeArray() { DARABONBA_PTR_GET(timeArray_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setTimeArray(const vector<string> & timeArray) { DARABONBA_PTR_SET_VALUE(timeArray_, timeArray) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setTimeArray(vector<string> && timeArray) { DARABONBA_PTR_SET_RVALUE(timeArray_, timeArray) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // valueArray Field Functions 
    bool hasValueArray() const { return this->valueArray_ != nullptr;};
    void deleteValueArray() { this->valueArray_ = nullptr;};
    inline const vector<string> & valueArray() const { DARABONBA_PTR_GET_CONST(valueArray_, vector<string>) };
    inline vector<string> valueArray() { DARABONBA_PTR_GET(valueArray_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setValueArray(const vector<string> & valueArray) { DARABONBA_PTR_SET_VALUE(valueArray_, valueArray) };
    inline DescribeSecurityStatInfoResponseBodyHealthCheck& setValueArray(vector<string> && valueArray) { DARABONBA_PTR_SET_RVALUE(valueArray_, valueArray) };


  protected:
    // The points in time when data of baseline risk items is collected in the trend chart.
    std::shared_ptr<vector<string>> dateArray_ = nullptr;
    // The number of baseline risk items that have the high-risk level on the current day.
    std::shared_ptr<int32_t> highCount_ = nullptr;
    // The numbers of baseline risk items that have the high-risk level at all points in time.
    std::shared_ptr<vector<string>> highList_ = nullptr;
    // The risk levels of baseline risk items.
    std::shared_ptr<vector<string>> levelsOn_ = nullptr;
    // The number of baseline risk items that have the low-risk level on the current day.
    std::shared_ptr<int32_t> lowCount_ = nullptr;
    // The numbers of baseline risk items that have the low-risk level at all points in time.
    std::shared_ptr<vector<string>> lowList_ = nullptr;
    // The number of baseline risk items that have the medium-risk level on the current day.
    std::shared_ptr<int32_t> mediumCount_ = nullptr;
    // The numbers of baseline risk items that have the medium-risk level at all points in time.
    std::shared_ptr<vector<string>> mediumList_ = nullptr;
    // The time periods during which data of baseline risk items is collected.
    std::shared_ptr<vector<string>> timeArray_ = nullptr;
    // The total number of baseline risk items on the current day.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The total number of baseline risk items at all points in time.
    std::shared_ptr<vector<string>> valueArray_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
