// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypesInstanceType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceTypesResponseBodyInstanceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBodyInstanceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBodyInstanceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    DescribeInstanceTypesResponseBodyInstanceTypes() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypes(const DescribeInstanceTypesResponseBodyInstanceTypes &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypes(DescribeInstanceTypesResponseBodyInstanceTypes &&) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBodyInstanceTypes() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypes& operator=(const DescribeInstanceTypesResponseBodyInstanceTypes &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypes& operator=(DescribeInstanceTypesResponseBodyInstanceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline const vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceType> & instanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceType>) };
    inline vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceType> instanceType() { DARABONBA_PTR_GET(instanceType_, vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceType>) };
    inline DescribeInstanceTypesResponseBodyInstanceTypes& setInstanceType(const vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceType> & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
    inline DescribeInstanceTypesResponseBodyInstanceTypes& setInstanceType(vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceType> && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceType>> instanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
