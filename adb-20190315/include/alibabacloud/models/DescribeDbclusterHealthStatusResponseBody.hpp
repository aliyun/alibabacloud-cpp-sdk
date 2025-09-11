// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERHEALTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterHealthStatusResponseBodyCS.hpp>
#include <alibabacloud/models/DescribeDBClusterHealthStatusResponseBodyExecutor.hpp>
#include <alibabacloud/models/DescribeDBClusterHealthStatusResponseBodyWorker.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBClusterHealthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CS, CS_);
      DARABONBA_PTR_TO_JSON(Executor, executor_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Worker, worker_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CS, CS_);
      DARABONBA_PTR_FROM_JSON(Executor, executor_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Worker, worker_);
    };
    DescribeDBClusterHealthStatusResponseBody() = default ;
    DescribeDBClusterHealthStatusResponseBody(const DescribeDBClusterHealthStatusResponseBody &) = default ;
    DescribeDBClusterHealthStatusResponseBody(DescribeDBClusterHealthStatusResponseBody &&) = default ;
    DescribeDBClusterHealthStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterHealthStatusResponseBody() = default ;
    DescribeDBClusterHealthStatusResponseBody& operator=(const DescribeDBClusterHealthStatusResponseBody &) = default ;
    DescribeDBClusterHealthStatusResponseBody& operator=(DescribeDBClusterHealthStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CS_ != nullptr
        && this->executor_ != nullptr && this->instanceStatus_ != nullptr && this->requestId_ != nullptr && this->worker_ != nullptr; };
    // CS Field Functions 
    bool hasCS() const { return this->CS_ != nullptr;};
    void deleteCS() { this->CS_ = nullptr;};
    inline const DescribeDBClusterHealthStatusResponseBodyCS & CS() const { DARABONBA_PTR_GET_CONST(CS_, DescribeDBClusterHealthStatusResponseBodyCS) };
    inline DescribeDBClusterHealthStatusResponseBodyCS CS() { DARABONBA_PTR_GET(CS_, DescribeDBClusterHealthStatusResponseBodyCS) };
    inline DescribeDBClusterHealthStatusResponseBody& setCS(const DescribeDBClusterHealthStatusResponseBodyCS & CS) { DARABONBA_PTR_SET_VALUE(CS_, CS) };
    inline DescribeDBClusterHealthStatusResponseBody& setCS(DescribeDBClusterHealthStatusResponseBodyCS && CS) { DARABONBA_PTR_SET_RVALUE(CS_, CS) };


    // executor Field Functions 
    bool hasExecutor() const { return this->executor_ != nullptr;};
    void deleteExecutor() { this->executor_ = nullptr;};
    inline const DescribeDBClusterHealthStatusResponseBodyExecutor & executor() const { DARABONBA_PTR_GET_CONST(executor_, DescribeDBClusterHealthStatusResponseBodyExecutor) };
    inline DescribeDBClusterHealthStatusResponseBodyExecutor executor() { DARABONBA_PTR_GET(executor_, DescribeDBClusterHealthStatusResponseBodyExecutor) };
    inline DescribeDBClusterHealthStatusResponseBody& setExecutor(const DescribeDBClusterHealthStatusResponseBodyExecutor & executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };
    inline DescribeDBClusterHealthStatusResponseBody& setExecutor(DescribeDBClusterHealthStatusResponseBodyExecutor && executor) { DARABONBA_PTR_SET_RVALUE(executor_, executor) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeDBClusterHealthStatusResponseBody& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterHealthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // worker Field Functions 
    bool hasWorker() const { return this->worker_ != nullptr;};
    void deleteWorker() { this->worker_ = nullptr;};
    inline const DescribeDBClusterHealthStatusResponseBodyWorker & worker() const { DARABONBA_PTR_GET_CONST(worker_, DescribeDBClusterHealthStatusResponseBodyWorker) };
    inline DescribeDBClusterHealthStatusResponseBodyWorker worker() { DARABONBA_PTR_GET(worker_, DescribeDBClusterHealthStatusResponseBodyWorker) };
    inline DescribeDBClusterHealthStatusResponseBody& setWorker(const DescribeDBClusterHealthStatusResponseBodyWorker & worker) { DARABONBA_PTR_SET_VALUE(worker_, worker) };
    inline DescribeDBClusterHealthStatusResponseBody& setWorker(DescribeDBClusterHealthStatusResponseBodyWorker && worker) { DARABONBA_PTR_SET_RVALUE(worker_, worker) };


  protected:
    // Health state details of access nodes.
    std::shared_ptr<DescribeDBClusterHealthStatusResponseBodyCS> CS_ = nullptr;
    // Health state details of compute node groups.
    std::shared_ptr<DescribeDBClusterHealthStatusResponseBodyExecutor> executor_ = nullptr;
    // The health state of the cluster. Valid values:
    // 
    // *   **RISK**: risky
    // 
    // *   **NORMAL**: healthy
    // 
    // *   **UNAVAILABLE**: unavailable
    // 
    // > If the health states of access nodes, compute node groups, and storage node groups are all **healthy** and the cluster is detected to be alive, the health state of the cluster is **healthy**. If the preceding three health states include **risky**, the health state of the cluster is **risky**. If the preceding three health states include **unavailable**, the health state of the cluster is **unavailable**.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Health state details of storage node groups.
    std::shared_ptr<DescribeDBClusterHealthStatusResponseBodyWorker> worker_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
