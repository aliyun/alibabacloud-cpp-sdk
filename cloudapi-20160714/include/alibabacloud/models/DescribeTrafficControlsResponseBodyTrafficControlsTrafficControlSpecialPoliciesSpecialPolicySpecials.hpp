// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODYTRAFFICCONTROLSTRAFFICCONTROLSPECIALPOLICIESSPECIALPOLICYSPECIALS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODYTRAFFICCONTROLSTRAFFICCONTROLSPECIALPOLICIESSPECIALPOLICYSPECIALS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials& obj) { 
      DARABONBA_PTR_TO_JSON(Special, special_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials& obj) { 
      DARABONBA_PTR_FROM_JSON(Special, special_);
    };
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials() = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials(const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials &) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials(DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials &&) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials() = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials& operator=(const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials &) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials& operator=(DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->special_ == nullptr; };
    // special Field Functions 
    bool hasSpecial() const { return this->special_ != nullptr;};
    void deleteSpecial() { this->special_ = nullptr;};
    inline const vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial> & special() const { DARABONBA_PTR_GET_CONST(special_, vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial>) };
    inline vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial> special() { DARABONBA_PTR_GET(special_, vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial>) };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials& setSpecial(const vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial> & special) { DARABONBA_PTR_SET_VALUE(special_, special) };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials& setSpecial(vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial> && special) { DARABONBA_PTR_SET_RVALUE(special_, special) };


  protected:
    std::shared_ptr<vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial>> special_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
