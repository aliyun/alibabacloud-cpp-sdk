// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOCHECKRANGEANCHOR_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOCHECKRANGEANCHOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor& obj) { 
      DARABONBA_PTR_TO_JSON(AnchorCid, anchorCid_);
      DARABONBA_PTR_TO_JSON(HitTime, hitTime_);
      DARABONBA_PTR_TO_JSON(Location, location_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor& obj) { 
      DARABONBA_PTR_FROM_JSON(AnchorCid, anchorCid_);
      DARABONBA_PTR_FROM_JSON(HitTime, hitTime_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
    };
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor &&) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor& operator=(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor& operator=(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anchorCid_ == nullptr
        && return this->hitTime_ == nullptr && return this->location_ == nullptr; };
    // anchorCid Field Functions 
    bool hasAnchorCid() const { return this->anchorCid_ != nullptr;};
    void deleteAnchorCid() { this->anchorCid_ = nullptr;};
    inline string anchorCid() const { DARABONBA_PTR_GET_DEFAULT(anchorCid_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor& setAnchorCid(string anchorCid) { DARABONBA_PTR_SET_VALUE(anchorCid_, anchorCid) };


    // hitTime Field Functions 
    bool hasHitTime() const { return this->hitTime_ != nullptr;};
    void deleteHitTime() { this->hitTime_ = nullptr;};
    inline int32_t hitTime() const { DARABONBA_PTR_GET_DEFAULT(hitTime_, 0) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor& setHitTime(int32_t hitTime) { DARABONBA_PTR_SET_VALUE(hitTime_, hitTime) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRangeAnchor& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


  protected:
    std::shared_ptr<string> anchorCid_ = nullptr;
    std::shared_ptr<int32_t> hitTime_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
