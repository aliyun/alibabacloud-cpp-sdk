// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEAISRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEAISRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEaisResponseBodyInstancesInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class DescribeEaisResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEaisResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEaisResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    DescribeEaisResponseBodyInstances() = default ;
    DescribeEaisResponseBodyInstances(const DescribeEaisResponseBodyInstances &) = default ;
    DescribeEaisResponseBodyInstances(DescribeEaisResponseBodyInstances &&) = default ;
    DescribeEaisResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEaisResponseBodyInstances() = default ;
    DescribeEaisResponseBodyInstances& operator=(const DescribeEaisResponseBodyInstances &) = default ;
    DescribeEaisResponseBodyInstances& operator=(DescribeEaisResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instance_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::DescribeEaisResponseBodyInstancesInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::DescribeEaisResponseBodyInstancesInstance>) };
    inline vector<Models::DescribeEaisResponseBodyInstancesInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::DescribeEaisResponseBodyInstancesInstance>) };
    inline DescribeEaisResponseBodyInstances& setInstance(const vector<Models::DescribeEaisResponseBodyInstancesInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DescribeEaisResponseBodyInstances& setInstance(vector<Models::DescribeEaisResponseBodyInstancesInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    std::shared_ptr<vector<Models::DescribeEaisResponseBodyInstancesInstance>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
