// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENSECURITYSTATINFORESPONSEBODYATTACKEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENSECURITYSTATINFORESPONSEBODYATTACKEVENT_HPP_
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
  class DescribeScreenSecurityStatInfoResponseBodyAttackEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenSecurityStatInfoResponseBodyAttackEvent& obj) { 
      DARABONBA_PTR_TO_JSON(DateArray, dateArray_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(ValueArray, valueArray_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenSecurityStatInfoResponseBodyAttackEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(DateArray, dateArray_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(ValueArray, valueArray_);
    };
    DescribeScreenSecurityStatInfoResponseBodyAttackEvent() = default ;
    DescribeScreenSecurityStatInfoResponseBodyAttackEvent(const DescribeScreenSecurityStatInfoResponseBodyAttackEvent &) = default ;
    DescribeScreenSecurityStatInfoResponseBodyAttackEvent(DescribeScreenSecurityStatInfoResponseBodyAttackEvent &&) = default ;
    DescribeScreenSecurityStatInfoResponseBodyAttackEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenSecurityStatInfoResponseBodyAttackEvent() = default ;
    DescribeScreenSecurityStatInfoResponseBodyAttackEvent& operator=(const DescribeScreenSecurityStatInfoResponseBodyAttackEvent &) = default ;
    DescribeScreenSecurityStatInfoResponseBodyAttackEvent& operator=(DescribeScreenSecurityStatInfoResponseBodyAttackEvent &&) = default ;
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
    inline DescribeScreenSecurityStatInfoResponseBodyAttackEvent& setDateArray(const vector<string> & dateArray) { DARABONBA_PTR_SET_VALUE(dateArray_, dateArray) };
    inline DescribeScreenSecurityStatInfoResponseBodyAttackEvent& setDateArray(vector<string> && dateArray) { DARABONBA_PTR_SET_RVALUE(dateArray_, dateArray) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScreenSecurityStatInfoResponseBodyAttackEvent& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // valueArray Field Functions 
    bool hasValueArray() const { return this->valueArray_ != nullptr;};
    void deleteValueArray() { this->valueArray_ = nullptr;};
    inline const vector<string> & valueArray() const { DARABONBA_PTR_GET_CONST(valueArray_, vector<string>) };
    inline vector<string> valueArray() { DARABONBA_PTR_GET(valueArray_, vector<string>) };
    inline DescribeScreenSecurityStatInfoResponseBodyAttackEvent& setValueArray(const vector<string> & valueArray) { DARABONBA_PTR_SET_VALUE(valueArray_, valueArray) };
    inline DescribeScreenSecurityStatInfoResponseBodyAttackEvent& setValueArray(vector<string> && valueArray) { DARABONBA_PTR_SET_RVALUE(valueArray_, valueArray) };


  protected:
    std::shared_ptr<vector<string>> dateArray_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<string>> valueArray_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
