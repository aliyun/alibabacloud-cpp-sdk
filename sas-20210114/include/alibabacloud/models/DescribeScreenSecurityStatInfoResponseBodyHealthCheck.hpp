// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENSECURITYSTATINFORESPONSEBODYHEALTHCHECK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENSECURITYSTATINFORESPONSEBODYHEALTHCHECK_HPP_
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
  class DescribeScreenSecurityStatInfoResponseBodyHealthCheck : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenSecurityStatInfoResponseBodyHealthCheck& obj) { 
      DARABONBA_PTR_TO_JSON(DateArray, dateArray_);
      DARABONBA_PTR_TO_JSON(HighCount, highCount_);
      DARABONBA_PTR_TO_JSON(HighList, highList_);
      DARABONBA_PTR_TO_JSON(LevelsOn, levelsOn_);
      DARABONBA_PTR_TO_JSON(LowCount, lowCount_);
      DARABONBA_PTR_TO_JSON(LowList, lowList_);
      DARABONBA_PTR_TO_JSON(MediumCount, mediumCount_);
      DARABONBA_PTR_TO_JSON(MediumList, mediumList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(ValueArray, valueArray_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenSecurityStatInfoResponseBodyHealthCheck& obj) { 
      DARABONBA_PTR_FROM_JSON(DateArray, dateArray_);
      DARABONBA_PTR_FROM_JSON(HighCount, highCount_);
      DARABONBA_PTR_FROM_JSON(HighList, highList_);
      DARABONBA_PTR_FROM_JSON(LevelsOn, levelsOn_);
      DARABONBA_PTR_FROM_JSON(LowCount, lowCount_);
      DARABONBA_PTR_FROM_JSON(LowList, lowList_);
      DARABONBA_PTR_FROM_JSON(MediumCount, mediumCount_);
      DARABONBA_PTR_FROM_JSON(MediumList, mediumList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(ValueArray, valueArray_);
    };
    DescribeScreenSecurityStatInfoResponseBodyHealthCheck() = default ;
    DescribeScreenSecurityStatInfoResponseBodyHealthCheck(const DescribeScreenSecurityStatInfoResponseBodyHealthCheck &) = default ;
    DescribeScreenSecurityStatInfoResponseBodyHealthCheck(DescribeScreenSecurityStatInfoResponseBodyHealthCheck &&) = default ;
    DescribeScreenSecurityStatInfoResponseBodyHealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenSecurityStatInfoResponseBodyHealthCheck() = default ;
    DescribeScreenSecurityStatInfoResponseBodyHealthCheck& operator=(const DescribeScreenSecurityStatInfoResponseBodyHealthCheck &) = default ;
    DescribeScreenSecurityStatInfoResponseBodyHealthCheck& operator=(DescribeScreenSecurityStatInfoResponseBodyHealthCheck &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dateArray_ == nullptr
        && return this->highCount_ == nullptr && return this->highList_ == nullptr && return this->levelsOn_ == nullptr && return this->lowCount_ == nullptr && return this->lowList_ == nullptr
        && return this->mediumCount_ == nullptr && return this->mediumList_ == nullptr && return this->totalCount_ == nullptr && return this->valueArray_ == nullptr; };
    // dateArray Field Functions 
    bool hasDateArray() const { return this->dateArray_ != nullptr;};
    void deleteDateArray() { this->dateArray_ = nullptr;};
    inline const vector<string> & dateArray() const { DARABONBA_PTR_GET_CONST(dateArray_, vector<string>) };
    inline vector<string> dateArray() { DARABONBA_PTR_GET(dateArray_, vector<string>) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setDateArray(const vector<string> & dateArray) { DARABONBA_PTR_SET_VALUE(dateArray_, dateArray) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setDateArray(vector<string> && dateArray) { DARABONBA_PTR_SET_RVALUE(dateArray_, dateArray) };


    // highCount Field Functions 
    bool hasHighCount() const { return this->highCount_ != nullptr;};
    void deleteHighCount() { this->highCount_ = nullptr;};
    inline int32_t highCount() const { DARABONBA_PTR_GET_DEFAULT(highCount_, 0) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setHighCount(int32_t highCount) { DARABONBA_PTR_SET_VALUE(highCount_, highCount) };


    // highList Field Functions 
    bool hasHighList() const { return this->highList_ != nullptr;};
    void deleteHighList() { this->highList_ = nullptr;};
    inline const vector<string> & highList() const { DARABONBA_PTR_GET_CONST(highList_, vector<string>) };
    inline vector<string> highList() { DARABONBA_PTR_GET(highList_, vector<string>) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setHighList(const vector<string> & highList) { DARABONBA_PTR_SET_VALUE(highList_, highList) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setHighList(vector<string> && highList) { DARABONBA_PTR_SET_RVALUE(highList_, highList) };


    // levelsOn Field Functions 
    bool hasLevelsOn() const { return this->levelsOn_ != nullptr;};
    void deleteLevelsOn() { this->levelsOn_ = nullptr;};
    inline const vector<string> & levelsOn() const { DARABONBA_PTR_GET_CONST(levelsOn_, vector<string>) };
    inline vector<string> levelsOn() { DARABONBA_PTR_GET(levelsOn_, vector<string>) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setLevelsOn(const vector<string> & levelsOn) { DARABONBA_PTR_SET_VALUE(levelsOn_, levelsOn) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setLevelsOn(vector<string> && levelsOn) { DARABONBA_PTR_SET_RVALUE(levelsOn_, levelsOn) };


    // lowCount Field Functions 
    bool hasLowCount() const { return this->lowCount_ != nullptr;};
    void deleteLowCount() { this->lowCount_ = nullptr;};
    inline int32_t lowCount() const { DARABONBA_PTR_GET_DEFAULT(lowCount_, 0) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setLowCount(int32_t lowCount) { DARABONBA_PTR_SET_VALUE(lowCount_, lowCount) };


    // lowList Field Functions 
    bool hasLowList() const { return this->lowList_ != nullptr;};
    void deleteLowList() { this->lowList_ = nullptr;};
    inline const vector<string> & lowList() const { DARABONBA_PTR_GET_CONST(lowList_, vector<string>) };
    inline vector<string> lowList() { DARABONBA_PTR_GET(lowList_, vector<string>) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setLowList(const vector<string> & lowList) { DARABONBA_PTR_SET_VALUE(lowList_, lowList) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setLowList(vector<string> && lowList) { DARABONBA_PTR_SET_RVALUE(lowList_, lowList) };


    // mediumCount Field Functions 
    bool hasMediumCount() const { return this->mediumCount_ != nullptr;};
    void deleteMediumCount() { this->mediumCount_ = nullptr;};
    inline int32_t mediumCount() const { DARABONBA_PTR_GET_DEFAULT(mediumCount_, 0) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setMediumCount(int32_t mediumCount) { DARABONBA_PTR_SET_VALUE(mediumCount_, mediumCount) };


    // mediumList Field Functions 
    bool hasMediumList() const { return this->mediumList_ != nullptr;};
    void deleteMediumList() { this->mediumList_ = nullptr;};
    inline const vector<string> & mediumList() const { DARABONBA_PTR_GET_CONST(mediumList_, vector<string>) };
    inline vector<string> mediumList() { DARABONBA_PTR_GET(mediumList_, vector<string>) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setMediumList(const vector<string> & mediumList) { DARABONBA_PTR_SET_VALUE(mediumList_, mediumList) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setMediumList(vector<string> && mediumList) { DARABONBA_PTR_SET_RVALUE(mediumList_, mediumList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // valueArray Field Functions 
    bool hasValueArray() const { return this->valueArray_ != nullptr;};
    void deleteValueArray() { this->valueArray_ = nullptr;};
    inline const vector<string> & valueArray() const { DARABONBA_PTR_GET_CONST(valueArray_, vector<string>) };
    inline vector<string> valueArray() { DARABONBA_PTR_GET(valueArray_, vector<string>) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setValueArray(const vector<string> & valueArray) { DARABONBA_PTR_SET_VALUE(valueArray_, valueArray) };
    inline DescribeScreenSecurityStatInfoResponseBodyHealthCheck& setValueArray(vector<string> && valueArray) { DARABONBA_PTR_SET_RVALUE(valueArray_, valueArray) };


  protected:
    std::shared_ptr<vector<string>> dateArray_ = nullptr;
    std::shared_ptr<int32_t> highCount_ = nullptr;
    std::shared_ptr<vector<string>> highList_ = nullptr;
    std::shared_ptr<vector<string>> levelsOn_ = nullptr;
    std::shared_ptr<int32_t> lowCount_ = nullptr;
    std::shared_ptr<vector<string>> lowList_ = nullptr;
    std::shared_ptr<int32_t> mediumCount_ = nullptr;
    std::shared_ptr<vector<string>> mediumList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<string>> valueArray_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
