// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODYTRAFFICCONTROLSTRAFFICCONTROLSPECIALPOLICIESSPECIALPOLICYSPECIALSSPECIAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODYTRAFFICCONTROLSTRAFFICCONTROLSPECIALPOLICIESSPECIALPOLICYSPECIALSSPECIAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial& obj) { 
      DARABONBA_PTR_TO_JSON(SpecialKey, specialKey_);
      DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial& obj) { 
      DARABONBA_PTR_FROM_JSON(SpecialKey, specialKey_);
      DARABONBA_PTR_FROM_JSON(TrafficValue, trafficValue_);
    };
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial() = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial(const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial &) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial(DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial &&) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial() = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial& operator=(const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial &) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial& operator=(DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->specialKey_ == nullptr
        && return this->trafficValue_ == nullptr; };
    // specialKey Field Functions 
    bool hasSpecialKey() const { return this->specialKey_ != nullptr;};
    void deleteSpecialKey() { this->specialKey_ = nullptr;};
    inline string specialKey() const { DARABONBA_PTR_GET_DEFAULT(specialKey_, "") };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial& setSpecialKey(string specialKey) { DARABONBA_PTR_SET_VALUE(specialKey_, specialKey) };


    // trafficValue Field Functions 
    bool hasTrafficValue() const { return this->trafficValue_ != nullptr;};
    void deleteTrafficValue() { this->trafficValue_ = nullptr;};
    inline int32_t trafficValue() const { DARABONBA_PTR_GET_DEFAULT(trafficValue_, 0) };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial& setTrafficValue(int32_t trafficValue) { DARABONBA_PTR_SET_VALUE(trafficValue_, trafficValue) };


  protected:
    // The AppId or user account corresponding to SpecialType.
    std::shared_ptr<string> specialKey_ = nullptr;
    // The throttling value.
    std::shared_ptr<int32_t> trafficValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
