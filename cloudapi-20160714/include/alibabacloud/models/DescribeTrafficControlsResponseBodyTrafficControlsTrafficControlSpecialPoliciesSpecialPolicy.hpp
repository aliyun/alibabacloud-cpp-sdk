// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODYTRAFFICCONTROLSTRAFFICCONTROLSPECIALPOLICIESSPECIALPOLICY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODYTRAFFICCONTROLSTRAFFICCONTROLSPECIALPOLICIESSPECIALPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(SpecialType, specialType_);
      DARABONBA_PTR_TO_JSON(Specials, specials_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(SpecialType, specialType_);
      DARABONBA_PTR_FROM_JSON(Specials, specials_);
    };
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy() = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy(const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy &) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy(DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy &&) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy() = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy& operator=(const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy &) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy& operator=(DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->specialType_ == nullptr
        && return this->specials_ == nullptr; };
    // specialType Field Functions 
    bool hasSpecialType() const { return this->specialType_ != nullptr;};
    void deleteSpecialType() { this->specialType_ = nullptr;};
    inline string specialType() const { DARABONBA_PTR_GET_DEFAULT(specialType_, "") };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy& setSpecialType(string specialType) { DARABONBA_PTR_SET_VALUE(specialType_, specialType) };


    // specials Field Functions 
    bool hasSpecials() const { return this->specials_ != nullptr;};
    void deleteSpecials() { this->specials_ = nullptr;};
    inline const Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials & specials() const { DARABONBA_PTR_GET_CONST(specials_, Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials) };
    inline Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials specials() { DARABONBA_PTR_GET(specials_, Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials) };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy& setSpecials(const Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials & specials) { DARABONBA_PTR_SET_VALUE(specials_, specials) };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy& setSpecials(Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials && specials) { DARABONBA_PTR_SET_RVALUE(specials_, specials) };


  protected:
    // The type of the special throttling policy. Valid values:
    // 
    // *   **APP**
    // *   **USER**
    std::shared_ptr<string> specialType_ = nullptr;
    // The returned information about a special throttling policy. It is an array consisting of Special data.
    std::shared_ptr<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials> specials_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
