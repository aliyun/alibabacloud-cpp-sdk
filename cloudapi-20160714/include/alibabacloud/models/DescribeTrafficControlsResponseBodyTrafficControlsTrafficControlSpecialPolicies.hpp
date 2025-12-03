// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODYTRAFFICCONTROLSTRAFFICCONTROLSPECIALPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODYTRAFFICCONTROLSTRAFFICCONTROLSPECIALPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(SpecialPolicy, specialPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(SpecialPolicy, specialPolicy_);
    };
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies() = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies(const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies &) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies(DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies &&) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies() = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies& operator=(const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies &) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies& operator=(DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->specialPolicy_ == nullptr; };
    // specialPolicy Field Functions 
    bool hasSpecialPolicy() const { return this->specialPolicy_ != nullptr;};
    void deleteSpecialPolicy() { this->specialPolicy_ = nullptr;};
    inline const vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy> & specialPolicy() const { DARABONBA_PTR_GET_CONST(specialPolicy_, vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy>) };
    inline vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy> specialPolicy() { DARABONBA_PTR_GET(specialPolicy_, vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy>) };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies& setSpecialPolicy(const vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy> & specialPolicy) { DARABONBA_PTR_SET_VALUE(specialPolicy_, specialPolicy) };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies& setSpecialPolicy(vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy> && specialPolicy) { DARABONBA_PTR_SET_RVALUE(specialPolicy_, specialPolicy) };


  protected:
    std::shared_ptr<vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy>> specialPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
