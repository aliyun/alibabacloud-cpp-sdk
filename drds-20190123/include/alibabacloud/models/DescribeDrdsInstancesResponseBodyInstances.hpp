// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsInstancesResponseBodyInstancesInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    DescribeDrdsInstancesResponseBodyInstances() = default ;
    DescribeDrdsInstancesResponseBodyInstances(const DescribeDrdsInstancesResponseBodyInstances &) = default ;
    DescribeDrdsInstancesResponseBodyInstances(DescribeDrdsInstancesResponseBodyInstances &&) = default ;
    DescribeDrdsInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstancesResponseBodyInstances() = default ;
    DescribeDrdsInstancesResponseBodyInstances& operator=(const DescribeDrdsInstancesResponseBodyInstances &) = default ;
    DescribeDrdsInstancesResponseBodyInstances& operator=(DescribeDrdsInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instance_ != nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstance>) };
    inline vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstance>) };
    inline DescribeDrdsInstancesResponseBodyInstances& setInstance(const vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DescribeDrdsInstancesResponseBodyInstances& setInstance(vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstance>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
