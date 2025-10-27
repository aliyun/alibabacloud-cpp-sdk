// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYSTATINFORESPONSEBODYATTACKEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYSTATINFORESPONSEBODYATTACKEVENT_HPP_
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
  class DescribeSecurityStatInfoResponseBodyAttackEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityStatInfoResponseBodyAttackEvent& obj) { 
      DARABONBA_PTR_TO_JSON(DateArray, dateArray_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(ValueArray, valueArray_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityStatInfoResponseBodyAttackEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(DateArray, dateArray_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(ValueArray, valueArray_);
    };
    DescribeSecurityStatInfoResponseBodyAttackEvent() = default ;
    DescribeSecurityStatInfoResponseBodyAttackEvent(const DescribeSecurityStatInfoResponseBodyAttackEvent &) = default ;
    DescribeSecurityStatInfoResponseBodyAttackEvent(DescribeSecurityStatInfoResponseBodyAttackEvent &&) = default ;
    DescribeSecurityStatInfoResponseBodyAttackEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityStatInfoResponseBodyAttackEvent() = default ;
    DescribeSecurityStatInfoResponseBodyAttackEvent& operator=(const DescribeSecurityStatInfoResponseBodyAttackEvent &) = default ;
    DescribeSecurityStatInfoResponseBodyAttackEvent& operator=(DescribeSecurityStatInfoResponseBodyAttackEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dateArray_ == nullptr
        && return this->totalCount_ == nullptr && return this->valueArray_ == nullptr; };
    // dateArray Field Functions 
    bool hasDateArray() const { return this->dateArray_ != nullptr;};
    void deleteDateArray() { this->dateArray_ = nullptr;};
    inline const vector<string> & dateArray() const { DARABONBA_PTR_GET_CONST(dateArray_, vector<string>) };
    inline vector<string> dateArray() { DARABONBA_PTR_GET(dateArray_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodyAttackEvent& setDateArray(const vector<string> & dateArray) { DARABONBA_PTR_SET_VALUE(dateArray_, dateArray) };
    inline DescribeSecurityStatInfoResponseBodyAttackEvent& setDateArray(vector<string> && dateArray) { DARABONBA_PTR_SET_RVALUE(dateArray_, dateArray) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSecurityStatInfoResponseBodyAttackEvent& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // valueArray Field Functions 
    bool hasValueArray() const { return this->valueArray_ != nullptr;};
    void deleteValueArray() { this->valueArray_ = nullptr;};
    inline const vector<string> & valueArray() const { DARABONBA_PTR_GET_CONST(valueArray_, vector<string>) };
    inline vector<string> valueArray() { DARABONBA_PTR_GET(valueArray_, vector<string>) };
    inline DescribeSecurityStatInfoResponseBodyAttackEvent& setValueArray(const vector<string> & valueArray) { DARABONBA_PTR_SET_VALUE(valueArray_, valueArray) };
    inline DescribeSecurityStatInfoResponseBodyAttackEvent& setValueArray(vector<string> && valueArray) { DARABONBA_PTR_SET_RVALUE(valueArray_, valueArray) };


  protected:
    // The points in time when the number of attacks is collected in the trend chart.
    std::shared_ptr<vector<string>> dateArray_ = nullptr;
    // The total number of attacks on the current day.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The numbers of attacks at all points in time.
    std::shared_ptr<vector<string>> valueArray_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
