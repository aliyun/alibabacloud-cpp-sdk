// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPEFAMILIESRESPONSEBODYINSTANCETYPEFAMILIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPEFAMILIESRESPONSEBODYINSTANCETYPEFAMILIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
    };
    DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies() = default ;
    DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies(const DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies &) = default ;
    DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies(DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies &&) = default ;
    DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies() = default ;
    DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies& operator=(const DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies &) = default ;
    DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies& operator=(DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceTypeFamily_ == nullptr; };
    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline const vector<Models::DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily> & instanceTypeFamily() const { DARABONBA_PTR_GET_CONST(instanceTypeFamily_, vector<Models::DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily>) };
    inline vector<Models::DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily> instanceTypeFamily() { DARABONBA_PTR_GET(instanceTypeFamily_, vector<Models::DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily>) };
    inline DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies& setInstanceTypeFamily(const vector<Models::DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily> & instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };
    inline DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies& setInstanceTypeFamily(vector<Models::DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily> && instanceTypeFamily) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamily_, instanceTypeFamily) };


  protected:
    // The instance family.
    std::shared_ptr<vector<Models::DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily>> instanceTypeFamily_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
