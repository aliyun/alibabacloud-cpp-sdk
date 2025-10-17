// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCESRESERVEDINSTANCEOPERATIONLOCKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCESRESERVEDINSTANCEOPERATIONLOCKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks& obj) { 
      DARABONBA_PTR_TO_JSON(OperationLock, operationLock_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationLock, operationLock_);
    };
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks() = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks(const DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks &) = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks(DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks &&) = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks() = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks& operator=(const DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks &) = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks& operator=(DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationLock_ == nullptr; };
    // operationLock Field Functions 
    bool hasOperationLock() const { return this->operationLock_ != nullptr;};
    void deleteOperationLock() { this->operationLock_ = nullptr;};
    inline const vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock> & operationLock() const { DARABONBA_PTR_GET_CONST(operationLock_, vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock>) };
    inline vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock> operationLock() { DARABONBA_PTR_GET(operationLock_, vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock>) };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks& setOperationLock(const vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock> & operationLock) { DARABONBA_PTR_SET_VALUE(operationLock_, operationLock) };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocks& setOperationLock(vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock> && operationLock) { DARABONBA_PTR_SET_RVALUE(operationLock_, operationLock) };


  protected:
    std::shared_ptr<vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock>> operationLock_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
