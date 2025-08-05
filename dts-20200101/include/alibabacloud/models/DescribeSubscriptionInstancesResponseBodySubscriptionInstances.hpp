// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESRESPONSEBODYSUBSCRIPTIONINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESRESPONSEBODYSUBSCRIPTIONINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionInstancesResponseBodySubscriptionInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionInstancesResponseBodySubscriptionInstances& obj) { 
      DARABONBA_PTR_TO_JSON(SubscriptionInstance, subscriptionInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionInstancesResponseBodySubscriptionInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(SubscriptionInstance, subscriptionInstance_);
    };
    DescribeSubscriptionInstancesResponseBodySubscriptionInstances() = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstances(const DescribeSubscriptionInstancesResponseBodySubscriptionInstances &) = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstances(DescribeSubscriptionInstancesResponseBodySubscriptionInstances &&) = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionInstancesResponseBodySubscriptionInstances() = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstances& operator=(const DescribeSubscriptionInstancesResponseBodySubscriptionInstances &) = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstances& operator=(DescribeSubscriptionInstancesResponseBodySubscriptionInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subscriptionInstance_ != nullptr; };
    // subscriptionInstance Field Functions 
    bool hasSubscriptionInstance() const { return this->subscriptionInstance_ != nullptr;};
    void deleteSubscriptionInstance() { this->subscriptionInstance_ = nullptr;};
    inline const vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance> & subscriptionInstance() const { DARABONBA_PTR_GET_CONST(subscriptionInstance_, vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance>) };
    inline vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance> subscriptionInstance() { DARABONBA_PTR_GET(subscriptionInstance_, vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance>) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstances& setSubscriptionInstance(const vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance> & subscriptionInstance) { DARABONBA_PTR_SET_VALUE(subscriptionInstance_, subscriptionInstance) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstances& setSubscriptionInstance(vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance> && subscriptionInstance) { DARABONBA_PTR_SET_RVALUE(subscriptionInstance_, subscriptionInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance>> subscriptionInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
