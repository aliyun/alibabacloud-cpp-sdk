// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeReservedInstancesResponseBodyReservedInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedInstancesResponseBodyReservedInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ReservedInstance, reservedInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedInstancesResponseBodyReservedInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ReservedInstance, reservedInstance_);
    };
    DescribeReservedInstancesResponseBodyReservedInstances() = default ;
    DescribeReservedInstancesResponseBodyReservedInstances(const DescribeReservedInstancesResponseBodyReservedInstances &) = default ;
    DescribeReservedInstancesResponseBodyReservedInstances(DescribeReservedInstancesResponseBodyReservedInstances &&) = default ;
    DescribeReservedInstancesResponseBodyReservedInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedInstancesResponseBodyReservedInstances() = default ;
    DescribeReservedInstancesResponseBodyReservedInstances& operator=(const DescribeReservedInstancesResponseBodyReservedInstances &) = default ;
    DescribeReservedInstancesResponseBodyReservedInstances& operator=(DescribeReservedInstancesResponseBodyReservedInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reservedInstance_ != nullptr; };
    // reservedInstance Field Functions 
    bool hasReservedInstance() const { return this->reservedInstance_ != nullptr;};
    void deleteReservedInstance() { this->reservedInstance_ = nullptr;};
    inline const vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance> & reservedInstance() const { DARABONBA_PTR_GET_CONST(reservedInstance_, vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance>) };
    inline vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance> reservedInstance() { DARABONBA_PTR_GET(reservedInstance_, vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance>) };
    inline DescribeReservedInstancesResponseBodyReservedInstances& setReservedInstance(const vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance> & reservedInstance) { DARABONBA_PTR_SET_VALUE(reservedInstance_, reservedInstance) };
    inline DescribeReservedInstancesResponseBodyReservedInstances& setReservedInstance(vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance> && reservedInstance) { DARABONBA_PTR_SET_RVALUE(reservedInstance_, reservedInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstance>> reservedInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
