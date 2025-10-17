// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOCATIONINVOKEINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOCATIONINVOKEINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InvokeInstance, invokeInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InvokeInstance, invokeInstance_);
    };
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances() = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances(const DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances &) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances(DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances &&) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances() = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances& operator=(const DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances &) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances& operator=(DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invokeInstance_ == nullptr; };
    // invokeInstance Field Functions 
    bool hasInvokeInstance() const { return this->invokeInstance_ != nullptr;};
    void deleteInvokeInstance() { this->invokeInstance_ = nullptr;};
    inline const vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance> & invokeInstance() const { DARABONBA_PTR_GET_CONST(invokeInstance_, vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance>) };
    inline vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance> invokeInstance() { DARABONBA_PTR_GET(invokeInstance_, vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance>) };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances& setInvokeInstance(const vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance> & invokeInstance) { DARABONBA_PTR_SET_VALUE(invokeInstance_, invokeInstance) };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances& setInvokeInstance(vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance> && invokeInstance) { DARABONBA_PTR_SET_RVALUE(invokeInstance_, invokeInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance>> invokeInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
