// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceAttribute, instanceAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceAttribute, instanceAttribute_);
    };
    DescribeInstancesResponseBodyInstances() = default ;
    DescribeInstancesResponseBodyInstances(const DescribeInstancesResponseBodyInstances &) = default ;
    DescribeInstancesResponseBodyInstances(DescribeInstancesResponseBodyInstances &&) = default ;
    DescribeInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstances() = default ;
    DescribeInstancesResponseBodyInstances& operator=(const DescribeInstancesResponseBodyInstances &) = default ;
    DescribeInstancesResponseBodyInstances& operator=(DescribeInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceAttribute_ == nullptr; };
    // instanceAttribute Field Functions 
    bool hasInstanceAttribute() const { return this->instanceAttribute_ != nullptr;};
    void deleteInstanceAttribute() { this->instanceAttribute_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttribute> & instanceAttribute() const { DARABONBA_PTR_GET_CONST(instanceAttribute_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttribute>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttribute> instanceAttribute() { DARABONBA_PTR_GET(instanceAttribute_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttribute>) };
    inline DescribeInstancesResponseBodyInstances& setInstanceAttribute(const vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttribute> & instanceAttribute) { DARABONBA_PTR_SET_VALUE(instanceAttribute_, instanceAttribute) };
    inline DescribeInstancesResponseBodyInstances& setInstanceAttribute(vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttribute> && instanceAttribute) { DARABONBA_PTR_SET_RVALUE(instanceAttribute_, instanceAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttribute>> instanceAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
