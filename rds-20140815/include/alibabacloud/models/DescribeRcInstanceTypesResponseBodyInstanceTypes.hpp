// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPESRESPONSEBODYINSTANCETYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPESRESPONSEBODYINSTANCETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceTypesResponseBodyInstanceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceTypesResponseBodyInstanceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceTypesResponseBodyInstanceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    DescribeRCInstanceTypesResponseBodyInstanceTypes() = default ;
    DescribeRCInstanceTypesResponseBodyInstanceTypes(const DescribeRCInstanceTypesResponseBodyInstanceTypes &) = default ;
    DescribeRCInstanceTypesResponseBodyInstanceTypes(DescribeRCInstanceTypesResponseBodyInstanceTypes &&) = default ;
    DescribeRCInstanceTypesResponseBodyInstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceTypesResponseBodyInstanceTypes() = default ;
    DescribeRCInstanceTypesResponseBodyInstanceTypes& operator=(const DescribeRCInstanceTypesResponseBodyInstanceTypes &) = default ;
    DescribeRCInstanceTypesResponseBodyInstanceTypes& operator=(DescribeRCInstanceTypesResponseBodyInstanceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline const vector<Models::DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType> & instanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, vector<Models::DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType>) };
    inline vector<Models::DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType> instanceType() { DARABONBA_PTR_GET(instanceType_, vector<Models::DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType>) };
    inline DescribeRCInstanceTypesResponseBodyInstanceTypes& setInstanceType(const vector<Models::DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType> & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
    inline DescribeRCInstanceTypesResponseBodyInstanceTypes& setInstanceType(vector<Models::DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType> && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


  protected:
    // The instance types.
    std::shared_ptr<vector<Models::DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType>> instanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
