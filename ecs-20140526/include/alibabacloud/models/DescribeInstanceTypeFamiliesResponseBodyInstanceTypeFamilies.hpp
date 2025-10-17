// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPEFAMILIESRESPONSEBODYINSTANCETYPEFAMILIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPEFAMILIESRESPONSEBODYINSTANCETYPEFAMILIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
    };
    DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies() = default ;
    DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies(const DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies &) = default ;
    DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies(DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies &&) = default ;
    DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies() = default ;
    DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies& operator=(const DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies &) = default ;
    DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies& operator=(DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceTypeFamily_ == nullptr; };
    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline const vector<Models::DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily> & instanceTypeFamily() const { DARABONBA_PTR_GET_CONST(instanceTypeFamily_, vector<Models::DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily>) };
    inline vector<Models::DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily> instanceTypeFamily() { DARABONBA_PTR_GET(instanceTypeFamily_, vector<Models::DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily>) };
    inline DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies& setInstanceTypeFamily(const vector<Models::DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily> & instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };
    inline DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies& setInstanceTypeFamily(vector<Models::DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily> && instanceTypeFamily) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamily_, instanceTypeFamily) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily>> instanceTypeFamily_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
