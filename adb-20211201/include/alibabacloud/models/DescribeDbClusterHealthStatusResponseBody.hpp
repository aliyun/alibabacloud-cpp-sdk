// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERHEALTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterHealthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(CS, CS_);
      DARABONBA_PTR_TO_JSON(Executor, executor_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Worker, worker_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
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
    class Worker : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Worker& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveCount, activeCount_);
        DARABONBA_PTR_TO_JSON(ExpectedCount, expectedCount_);
        DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UnavailableCount, unavailableCount_);
      };
      friend void from_json(const Darabonba::Json& j, Worker& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveCount, activeCount_);
        DARABONBA_PTR_FROM_JSON(ExpectedCount, expectedCount_);
        DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UnavailableCount, unavailableCount_);
      };
      Worker() = default ;
      Worker(const Worker &) = default ;
      Worker(Worker &&) = default ;
      Worker(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Worker() = default ;
      Worker& operator=(const Worker &) = default ;
      Worker& operator=(Worker &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeCount_ == nullptr
        && this->expectedCount_ == nullptr && this->riskCount_ == nullptr && this->status_ == nullptr && this->unavailableCount_ == nullptr; };
      // activeCount Field Functions 
      bool hasActiveCount() const { return this->activeCount_ != nullptr;};
      void deleteActiveCount() { this->activeCount_ = nullptr;};
      inline int64_t getActiveCount() const { DARABONBA_PTR_GET_DEFAULT(activeCount_, 0L) };
      inline Worker& setActiveCount(int64_t activeCount) { DARABONBA_PTR_SET_VALUE(activeCount_, activeCount) };


      // expectedCount Field Functions 
      bool hasExpectedCount() const { return this->expectedCount_ != nullptr;};
      void deleteExpectedCount() { this->expectedCount_ = nullptr;};
      inline int64_t getExpectedCount() const { DARABONBA_PTR_GET_DEFAULT(expectedCount_, 0L) };
      inline Worker& setExpectedCount(int64_t expectedCount) { DARABONBA_PTR_SET_VALUE(expectedCount_, expectedCount) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
      inline Worker& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Worker& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // unavailableCount Field Functions 
      bool hasUnavailableCount() const { return this->unavailableCount_ != nullptr;};
      void deleteUnavailableCount() { this->unavailableCount_ = nullptr;};
      inline int64_t getUnavailableCount() const { DARABONBA_PTR_GET_DEFAULT(unavailableCount_, 0L) };
      inline Worker& setUnavailableCount(int64_t unavailableCount) { DARABONBA_PTR_SET_VALUE(unavailableCount_, unavailableCount) };


    protected:
      // The number of healthy storage node groups.
      shared_ptr<int64_t> activeCount_ {};
      // The total number of storage node groups.
      shared_ptr<int64_t> expectedCount_ {};
      // The number of risky storage node groups.
      shared_ptr<int64_t> riskCount_ {};
      // The health state of storage node groups. Valid values:
      // 
      // *   **RISK**
      // *   **NORMAL**
      // *   **UNAVAILABLE**
      shared_ptr<string> status_ {};
      // The number of unavailable storage node groups.
      shared_ptr<int64_t> unavailableCount_ {};
    };

    class Executor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Executor& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveCount, activeCount_);
        DARABONBA_PTR_TO_JSON(ExpectedCount, expectedCount_);
        DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UnavailableCount, unavailableCount_);
      };
      friend void from_json(const Darabonba::Json& j, Executor& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveCount, activeCount_);
        DARABONBA_PTR_FROM_JSON(ExpectedCount, expectedCount_);
        DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UnavailableCount, unavailableCount_);
      };
      Executor() = default ;
      Executor(const Executor &) = default ;
      Executor(Executor &&) = default ;
      Executor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Executor() = default ;
      Executor& operator=(const Executor &) = default ;
      Executor& operator=(Executor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeCount_ == nullptr
        && this->expectedCount_ == nullptr && this->riskCount_ == nullptr && this->status_ == nullptr && this->unavailableCount_ == nullptr; };
      // activeCount Field Functions 
      bool hasActiveCount() const { return this->activeCount_ != nullptr;};
      void deleteActiveCount() { this->activeCount_ = nullptr;};
      inline int64_t getActiveCount() const { DARABONBA_PTR_GET_DEFAULT(activeCount_, 0L) };
      inline Executor& setActiveCount(int64_t activeCount) { DARABONBA_PTR_SET_VALUE(activeCount_, activeCount) };


      // expectedCount Field Functions 
      bool hasExpectedCount() const { return this->expectedCount_ != nullptr;};
      void deleteExpectedCount() { this->expectedCount_ = nullptr;};
      inline int64_t getExpectedCount() const { DARABONBA_PTR_GET_DEFAULT(expectedCount_, 0L) };
      inline Executor& setExpectedCount(int64_t expectedCount) { DARABONBA_PTR_SET_VALUE(expectedCount_, expectedCount) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
      inline Executor& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Executor& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // unavailableCount Field Functions 
      bool hasUnavailableCount() const { return this->unavailableCount_ != nullptr;};
      void deleteUnavailableCount() { this->unavailableCount_ = nullptr;};
      inline int64_t getUnavailableCount() const { DARABONBA_PTR_GET_DEFAULT(unavailableCount_, 0L) };
      inline Executor& setUnavailableCount(int64_t unavailableCount) { DARABONBA_PTR_SET_VALUE(unavailableCount_, unavailableCount) };


    protected:
      // The number of healthy access nodes.
      shared_ptr<int64_t> activeCount_ {};
      // The total number of compute nodes.
      shared_ptr<int64_t> expectedCount_ {};
      // The number of risky nodes.
      shared_ptr<int64_t> riskCount_ {};
      // The health state of compute node groups. Valid values:
      // 
      // *   **RISK**
      // *   **NORMAL**
      // *   **UNAVAILABLE**
      shared_ptr<string> status_ {};
      // The number of unavailable access nodes.
      shared_ptr<int64_t> unavailableCount_ {};
    };

    class CS : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CS& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveCount, activeCount_);
        DARABONBA_PTR_TO_JSON(ExpectedCount, expectedCount_);
        DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UnavailableCount, unavailableCount_);
      };
      friend void from_json(const Darabonba::Json& j, CS& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveCount, activeCount_);
        DARABONBA_PTR_FROM_JSON(ExpectedCount, expectedCount_);
        DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UnavailableCount, unavailableCount_);
      };
      CS() = default ;
      CS(const CS &) = default ;
      CS(CS &&) = default ;
      CS(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CS() = default ;
      CS& operator=(const CS &) = default ;
      CS& operator=(CS &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeCount_ == nullptr
        && this->expectedCount_ == nullptr && this->riskCount_ == nullptr && this->status_ == nullptr && this->unavailableCount_ == nullptr; };
      // activeCount Field Functions 
      bool hasActiveCount() const { return this->activeCount_ != nullptr;};
      void deleteActiveCount() { this->activeCount_ = nullptr;};
      inline int64_t getActiveCount() const { DARABONBA_PTR_GET_DEFAULT(activeCount_, 0L) };
      inline CS& setActiveCount(int64_t activeCount) { DARABONBA_PTR_SET_VALUE(activeCount_, activeCount) };


      // expectedCount Field Functions 
      bool hasExpectedCount() const { return this->expectedCount_ != nullptr;};
      void deleteExpectedCount() { this->expectedCount_ = nullptr;};
      inline int64_t getExpectedCount() const { DARABONBA_PTR_GET_DEFAULT(expectedCount_, 0L) };
      inline CS& setExpectedCount(int64_t expectedCount) { DARABONBA_PTR_SET_VALUE(expectedCount_, expectedCount) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
      inline CS& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CS& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // unavailableCount Field Functions 
      bool hasUnavailableCount() const { return this->unavailableCount_ != nullptr;};
      void deleteUnavailableCount() { this->unavailableCount_ = nullptr;};
      inline int64_t getUnavailableCount() const { DARABONBA_PTR_GET_DEFAULT(unavailableCount_, 0L) };
      inline CS& setUnavailableCount(int64_t unavailableCount) { DARABONBA_PTR_SET_VALUE(unavailableCount_, unavailableCount) };


    protected:
      // The number of healthy access nodes.
      shared_ptr<int64_t> activeCount_ {};
      // The total number of access nodes.
      shared_ptr<int64_t> expectedCount_ {};
      // The number of risky nodes.
      shared_ptr<int64_t> riskCount_ {};
      // The health state of access nodes. Valid values:
      // 
      // *   **RISK**
      // *   **NORMAL**
      // *   **UNAVAILABLE**
      shared_ptr<string> status_ {};
      // The number of unavailable access nodes.
      shared_ptr<int64_t> unavailableCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->CS_ == nullptr && this->executor_ == nullptr && this->instanceStatus_ == nullptr && this->requestId_ == nullptr && this->worker_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeDBClusterHealthStatusResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // CS Field Functions 
    bool hasCS() const { return this->CS_ != nullptr;};
    void deleteCS() { this->CS_ = nullptr;};
    inline const DescribeDBClusterHealthStatusResponseBody::CS & getCS() const { DARABONBA_PTR_GET_CONST(CS_, DescribeDBClusterHealthStatusResponseBody::CS) };
    inline DescribeDBClusterHealthStatusResponseBody::CS getCS() { DARABONBA_PTR_GET(CS_, DescribeDBClusterHealthStatusResponseBody::CS) };
    inline DescribeDBClusterHealthStatusResponseBody& setCS(const DescribeDBClusterHealthStatusResponseBody::CS & cS) { DARABONBA_PTR_SET_VALUE(CS_, cS) };
    inline DescribeDBClusterHealthStatusResponseBody& setCS(DescribeDBClusterHealthStatusResponseBody::CS && cS) { DARABONBA_PTR_SET_RVALUE(CS_, cS) };


    // executor Field Functions 
    bool hasExecutor() const { return this->executor_ != nullptr;};
    void deleteExecutor() { this->executor_ = nullptr;};
    inline const DescribeDBClusterHealthStatusResponseBody::Executor & getExecutor() const { DARABONBA_PTR_GET_CONST(executor_, DescribeDBClusterHealthStatusResponseBody::Executor) };
    inline DescribeDBClusterHealthStatusResponseBody::Executor getExecutor() { DARABONBA_PTR_GET(executor_, DescribeDBClusterHealthStatusResponseBody::Executor) };
    inline DescribeDBClusterHealthStatusResponseBody& setExecutor(const DescribeDBClusterHealthStatusResponseBody::Executor & executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };
    inline DescribeDBClusterHealthStatusResponseBody& setExecutor(DescribeDBClusterHealthStatusResponseBody::Executor && executor) { DARABONBA_PTR_SET_RVALUE(executor_, executor) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeDBClusterHealthStatusResponseBody& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterHealthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // worker Field Functions 
    bool hasWorker() const { return this->worker_ != nullptr;};
    void deleteWorker() { this->worker_ = nullptr;};
    inline const DescribeDBClusterHealthStatusResponseBody::Worker & getWorker() const { DARABONBA_PTR_GET_CONST(worker_, DescribeDBClusterHealthStatusResponseBody::Worker) };
    inline DescribeDBClusterHealthStatusResponseBody::Worker getWorker() { DARABONBA_PTR_GET(worker_, DescribeDBClusterHealthStatusResponseBody::Worker) };
    inline DescribeDBClusterHealthStatusResponseBody& setWorker(const DescribeDBClusterHealthStatusResponseBody::Worker & worker) { DARABONBA_PTR_SET_VALUE(worker_, worker) };
    inline DescribeDBClusterHealthStatusResponseBody& setWorker(DescribeDBClusterHealthStatusResponseBody::Worker && worker) { DARABONBA_PTR_SET_RVALUE(worker_, worker) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    // The access nodes of the queried cluster.
    shared_ptr<DescribeDBClusterHealthStatusResponseBody::CS> CS_ {};
    // The compute node groups of the queried cluster.
    shared_ptr<DescribeDBClusterHealthStatusResponseBody::Executor> executor_ {};
    // The health state of the cluster. Valid values:
    // 
    // *   **RISK**
    // *   **NORMAL**
    // *   **UNAVAILABLE**
    // 
    // >  When the states of the access nodes, compute node groups, and storage node groups of a cluster are all **NORMAL** and a connection to the cluster is established, the state of the cluster is **NORMAL**. When the state of the access nodes, compute node groups, or storage node groups of the cluster is **RISK**, the state of the cluster is **RISK**. When the state of the access nodes, compute node groups, or storage node groups of the cluster is **UNAVAILABLE**, the state of the cluster is **UNAVAILABLE**.
    shared_ptr<string> instanceStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The storage node groups of the queried cluster.
    shared_ptr<DescribeDBClusterHealthStatusResponseBody::Worker> worker_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
