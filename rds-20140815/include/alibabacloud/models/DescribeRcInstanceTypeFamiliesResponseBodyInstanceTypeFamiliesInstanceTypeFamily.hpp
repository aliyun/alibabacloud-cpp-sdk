// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPEFAMILIESRESPONSEBODYINSTANCETYPEFAMILIESINSTANCETYPEFAMILY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPEFAMILIESRESPONSEBODYINSTANCETYPEFAMILIESINSTANCETYPEFAMILY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypeFamilyDesc, instanceTypeFamilyDesc_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamilyId, instanceTypeFamilyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamilyDesc, instanceTypeFamilyDesc_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamilyId, instanceTypeFamilyId_);
    };
    DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily() = default ;
    DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily(const DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily &) = default ;
    DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily(DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily &&) = default ;
    DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily() = default ;
    DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily& operator=(const DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily &) = default ;
    DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily& operator=(DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceTypeFamilyDesc_ == nullptr
        && return this->instanceTypeFamilyId_ == nullptr; };
    // instanceTypeFamilyDesc Field Functions 
    bool hasInstanceTypeFamilyDesc() const { return this->instanceTypeFamilyDesc_ != nullptr;};
    void deleteInstanceTypeFamilyDesc() { this->instanceTypeFamilyDesc_ = nullptr;};
    inline string instanceTypeFamilyDesc() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamilyDesc_, "") };
    inline DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily& setInstanceTypeFamilyDesc(string instanceTypeFamilyDesc) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilyDesc_, instanceTypeFamilyDesc) };


    // instanceTypeFamilyId Field Functions 
    bool hasInstanceTypeFamilyId() const { return this->instanceTypeFamilyId_ != nullptr;};
    void deleteInstanceTypeFamilyId() { this->instanceTypeFamilyId_ = nullptr;};
    inline string instanceTypeFamilyId() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamilyId_, "") };
    inline DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily& setInstanceTypeFamilyId(string instanceTypeFamilyId) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilyId_, instanceTypeFamilyId) };


  protected:
    // The description of the instance family.
    std::shared_ptr<string> instanceTypeFamilyDesc_ = nullptr;
    // The ID of the instance family.
    std::shared_ptr<string> instanceTypeFamilyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
