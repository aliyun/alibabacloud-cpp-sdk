// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTOPERATIONLOCKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTOPERATIONLOCKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocksOperationLock.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks& obj) { 
      DARABONBA_PTR_TO_JSON(OperationLock, operationLock_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationLock, operationLock_);
    };
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks &&) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks& operator=(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks& operator=(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationLock_ == nullptr; };
    // operationLock Field Functions 
    bool hasOperationLock() const { return this->operationLock_ != nullptr;};
    void deleteOperationLock() { this->operationLock_ = nullptr;};
    inline const vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocksOperationLock> & operationLock() const { DARABONBA_PTR_GET_CONST(operationLock_, vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocksOperationLock>) };
    inline vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocksOperationLock> operationLock() { DARABONBA_PTR_GET(operationLock_, vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocksOperationLock>) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks& setOperationLock(const vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocksOperationLock> & operationLock) { DARABONBA_PTR_SET_VALUE(operationLock_, operationLock) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks& setOperationLock(vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocksOperationLock> && operationLock) { DARABONBA_PTR_SET_RVALUE(operationLock_, operationLock) };


  protected:
    std::shared_ptr<vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocksOperationLock>> operationLock_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
