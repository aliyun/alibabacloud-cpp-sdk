// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPEFAMILIESRESPONSEBODYINSTANCETYPEFAMILIESINSTANCETYPEFAMILY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPEFAMILIESRESPONSEBODYINSTANCETYPEFAMILIESINSTANCETYPEFAMILY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily& obj) { 
      DARABONBA_PTR_TO_JSON(Generation, generation_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamilyId, instanceTypeFamilyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily& obj) { 
      DARABONBA_PTR_FROM_JSON(Generation, generation_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamilyId, instanceTypeFamilyId_);
    };
    DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily() = default ;
    DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily(const DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily &) = default ;
    DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily(DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily &&) = default ;
    DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily() = default ;
    DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily& operator=(const DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily &) = default ;
    DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily& operator=(DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generation_ == nullptr
        && return this->instanceTypeFamilyId_ == nullptr; };
    // generation Field Functions 
    bool hasGeneration() const { return this->generation_ != nullptr;};
    void deleteGeneration() { this->generation_ = nullptr;};
    inline string generation() const { DARABONBA_PTR_GET_DEFAULT(generation_, "") };
    inline DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily& setGeneration(string generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


    // instanceTypeFamilyId Field Functions 
    bool hasInstanceTypeFamilyId() const { return this->instanceTypeFamilyId_ != nullptr;};
    void deleteInstanceTypeFamilyId() { this->instanceTypeFamilyId_ = nullptr;};
    inline string instanceTypeFamilyId() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamilyId_, "") };
    inline DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamiliesInstanceTypeFamily& setInstanceTypeFamilyId(string instanceTypeFamilyId) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilyId_, instanceTypeFamilyId) };


  protected:
    // The series of the instance family.
    std::shared_ptr<string> generation_ = nullptr;
    // The ID of the instance family.
    std::shared_ptr<string> instanceTypeFamilyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
