// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKOPERATIONLOCKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKOPERATIONLOCKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDisksResponseBodyDisksDiskOperationLocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksResponseBodyDisksDiskOperationLocks& obj) { 
      DARABONBA_PTR_TO_JSON(OperationLock, operationLock_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksResponseBodyDisksDiskOperationLocks& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationLock, operationLock_);
    };
    DescribeDisksResponseBodyDisksDiskOperationLocks() = default ;
    DescribeDisksResponseBodyDisksDiskOperationLocks(const DescribeDisksResponseBodyDisksDiskOperationLocks &) = default ;
    DescribeDisksResponseBodyDisksDiskOperationLocks(DescribeDisksResponseBodyDisksDiskOperationLocks &&) = default ;
    DescribeDisksResponseBodyDisksDiskOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksResponseBodyDisksDiskOperationLocks() = default ;
    DescribeDisksResponseBodyDisksDiskOperationLocks& operator=(const DescribeDisksResponseBodyDisksDiskOperationLocks &) = default ;
    DescribeDisksResponseBodyDisksDiskOperationLocks& operator=(DescribeDisksResponseBodyDisksDiskOperationLocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operationLock_ != nullptr; };
    // operationLock Field Functions 
    bool hasOperationLock() const { return this->operationLock_ != nullptr;};
    void deleteOperationLock() { this->operationLock_ = nullptr;};
    inline const vector<Models::DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock> & operationLock() const { DARABONBA_PTR_GET_CONST(operationLock_, vector<Models::DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock>) };
    inline vector<Models::DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock> operationLock() { DARABONBA_PTR_GET(operationLock_, vector<Models::DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock>) };
    inline DescribeDisksResponseBodyDisksDiskOperationLocks& setOperationLock(const vector<Models::DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock> & operationLock) { DARABONBA_PTR_SET_VALUE(operationLock_, operationLock) };
    inline DescribeDisksResponseBodyDisksDiskOperationLocks& setOperationLock(vector<Models::DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock> && operationLock) { DARABONBA_PTR_SET_RVALUE(operationLock_, operationLock) };


  protected:
    std::shared_ptr<vector<Models::DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock>> operationLock_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
