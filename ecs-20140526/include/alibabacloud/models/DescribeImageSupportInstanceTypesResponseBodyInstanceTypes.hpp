// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESUPPORTINSTANCETYPESRESPONSEBODYINSTANCETYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESUPPORTINSTANCETYPESRESPONSEBODYINSTANCETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageSupportInstanceTypesResponseBodyInstanceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSupportInstanceTypesResponseBodyInstanceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSupportInstanceTypesResponseBodyInstanceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    DescribeImageSupportInstanceTypesResponseBodyInstanceTypes() = default ;
    DescribeImageSupportInstanceTypesResponseBodyInstanceTypes(const DescribeImageSupportInstanceTypesResponseBodyInstanceTypes &) = default ;
    DescribeImageSupportInstanceTypesResponseBodyInstanceTypes(DescribeImageSupportInstanceTypesResponseBodyInstanceTypes &&) = default ;
    DescribeImageSupportInstanceTypesResponseBodyInstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSupportInstanceTypesResponseBodyInstanceTypes() = default ;
    DescribeImageSupportInstanceTypesResponseBodyInstanceTypes& operator=(const DescribeImageSupportInstanceTypesResponseBodyInstanceTypes &) = default ;
    DescribeImageSupportInstanceTypesResponseBodyInstanceTypes& operator=(DescribeImageSupportInstanceTypesResponseBodyInstanceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline const vector<Models::DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType> & instanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, vector<Models::DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType>) };
    inline vector<Models::DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType> instanceType() { DARABONBA_PTR_GET(instanceType_, vector<Models::DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType>) };
    inline DescribeImageSupportInstanceTypesResponseBodyInstanceTypes& setInstanceType(const vector<Models::DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType> & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
    inline DescribeImageSupportInstanceTypesResponseBodyInstanceTypes& setInstanceType(vector<Models::DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType> && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


  protected:
    std::shared_ptr<vector<Models::DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType>> instanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
