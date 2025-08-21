// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECRESPONSEBODYINSTANCESPECS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECRESPONSEBODYINSTANCESPECS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceSpecResponseBodyInstanceSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSpecResponseBodyInstanceSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSpecResponseBodyInstanceSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
    };
    DescribeInstanceSpecResponseBodyInstanceSpecs() = default ;
    DescribeInstanceSpecResponseBodyInstanceSpecs(const DescribeInstanceSpecResponseBodyInstanceSpecs &) = default ;
    DescribeInstanceSpecResponseBodyInstanceSpecs(DescribeInstanceSpecResponseBodyInstanceSpecs &&) = default ;
    DescribeInstanceSpecResponseBodyInstanceSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSpecResponseBodyInstanceSpecs() = default ;
    DescribeInstanceSpecResponseBodyInstanceSpecs& operator=(const DescribeInstanceSpecResponseBodyInstanceSpecs &) = default ;
    DescribeInstanceSpecResponseBodyInstanceSpecs& operator=(DescribeInstanceSpecResponseBodyInstanceSpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceSpec_ != nullptr; };
    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline const vector<Models::DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec> & instanceSpec() const { DARABONBA_PTR_GET_CONST(instanceSpec_, vector<Models::DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec>) };
    inline vector<Models::DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec> instanceSpec() { DARABONBA_PTR_GET(instanceSpec_, vector<Models::DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec>) };
    inline DescribeInstanceSpecResponseBodyInstanceSpecs& setInstanceSpec(const vector<Models::DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec> & instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };
    inline DescribeInstanceSpecResponseBodyInstanceSpecs& setInstanceSpec(vector<Models::DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec> && instanceSpec) { DARABONBA_PTR_SET_RVALUE(instanceSpec_, instanceSpec) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceSpecResponseBodyInstanceSpecsInstanceSpec>> instanceSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
