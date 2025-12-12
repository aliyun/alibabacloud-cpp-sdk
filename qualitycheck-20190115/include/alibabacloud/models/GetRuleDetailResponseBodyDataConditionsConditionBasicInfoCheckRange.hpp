// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOCHECKRANGE_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOCHECKRANGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange& obj) { 
      DARABONBA_PTR_TO_JSON(Absolute, absolute_);
      DARABONBA_PTR_TO_JSON(Anchor, anchor_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange& obj) { 
      DARABONBA_PTR_FROM_JSON(Absolute, absolute_);
      DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange &&) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange& operator=(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange& operator=(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->absolute_ == nullptr
        && return this->anchor_ == nullptr && return this->range_ == nullptr && return this->role_ == nullptr; };
    // absolute Field Functions 
    bool hasAbsolute() const { return this->absolute_ != nullptr;};
    void deleteAbsolute() { this->absolute_ = nullptr;};
    inline bool absolute() const { DARABONBA_PTR_GET_DEFAULT(absolute_, false) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange& setAbsolute(bool absolute) { DARABONBA_PTR_SET_VALUE(absolute_, absolute) };


    // anchor Field Functions 
    bool hasAnchor() const { return this->anchor_ != nullptr;};
    void deleteAnchor() { this->anchor_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor & anchor() const { DARABONBA_PTR_GET_CONST(anchor_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor) };
    inline Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor anchor() { DARABONBA_PTR_GET(anchor_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange& setAnchor(const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor & anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange& setAnchor(Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor && anchor) { DARABONBA_PTR_SET_RVALUE(anchor_, anchor) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange & range() const { DARABONBA_PTR_GET_CONST(range_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange) };
    inline Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange range() { DARABONBA_PTR_GET(range_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange& setRange(const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange& setRange(Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<bool> absolute_ = nullptr;
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor> anchor_ = nullptr;
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeRange> range_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
