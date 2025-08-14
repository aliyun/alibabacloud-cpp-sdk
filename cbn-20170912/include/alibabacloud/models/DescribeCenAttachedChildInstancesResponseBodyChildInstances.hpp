// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCESRESPONSEBODYCHILDINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCESRESPONSEBODYCHILDINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenAttachedChildInstancesResponseBodyChildInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenAttachedChildInstancesResponseBodyChildInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ChildInstance, childInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenAttachedChildInstancesResponseBodyChildInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildInstance, childInstance_);
    };
    DescribeCenAttachedChildInstancesResponseBodyChildInstances() = default ;
    DescribeCenAttachedChildInstancesResponseBodyChildInstances(const DescribeCenAttachedChildInstancesResponseBodyChildInstances &) = default ;
    DescribeCenAttachedChildInstancesResponseBodyChildInstances(DescribeCenAttachedChildInstancesResponseBodyChildInstances &&) = default ;
    DescribeCenAttachedChildInstancesResponseBodyChildInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenAttachedChildInstancesResponseBodyChildInstances() = default ;
    DescribeCenAttachedChildInstancesResponseBodyChildInstances& operator=(const DescribeCenAttachedChildInstancesResponseBodyChildInstances &) = default ;
    DescribeCenAttachedChildInstancesResponseBodyChildInstances& operator=(DescribeCenAttachedChildInstancesResponseBodyChildInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->childInstance_ != nullptr; };
    // childInstance Field Functions 
    bool hasChildInstance() const { return this->childInstance_ != nullptr;};
    void deleteChildInstance() { this->childInstance_ = nullptr;};
    inline const vector<Models::DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance> & childInstance() const { DARABONBA_PTR_GET_CONST(childInstance_, vector<Models::DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance>) };
    inline vector<Models::DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance> childInstance() { DARABONBA_PTR_GET(childInstance_, vector<Models::DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance>) };
    inline DescribeCenAttachedChildInstancesResponseBodyChildInstances& setChildInstance(const vector<Models::DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance> & childInstance) { DARABONBA_PTR_SET_VALUE(childInstance_, childInstance) };
    inline DescribeCenAttachedChildInstancesResponseBodyChildInstances& setChildInstance(vector<Models::DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance> && childInstance) { DARABONBA_PTR_SET_RVALUE(childInstance_, childInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance>> childInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
