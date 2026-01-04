// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICQPSRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICQPSRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeElasticQpsRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticQpsRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticQpsList, elasticQpsList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticQpsRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticQpsList, elasticQpsList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticQpsRecordResponseBody() = default ;
    DescribeElasticQpsRecordResponseBody(const DescribeElasticQpsRecordResponseBody &) = default ;
    DescribeElasticQpsRecordResponseBody(DescribeElasticQpsRecordResponseBody &&) = default ;
    DescribeElasticQpsRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticQpsRecordResponseBody() = default ;
    DescribeElasticQpsRecordResponseBody& operator=(const DescribeElasticQpsRecordResponseBody &) = default ;
    DescribeElasticQpsRecordResponseBody& operator=(DescribeElasticQpsRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ElasticQpsList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElasticQpsList& obj) { 
        DARABONBA_PTR_TO_JSON(Date, date_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(OpsElasticQps, opsElasticQps_);
        DARABONBA_PTR_TO_JSON(OpsQps, opsQps_);
        DARABONBA_PTR_TO_JSON(OriginQps, originQps_);
        DARABONBA_PTR_TO_JSON(Qps, qps_);
        DARABONBA_PTR_TO_JSON(QpsPeak, qpsPeak_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ElasticQpsList& obj) { 
        DARABONBA_PTR_FROM_JSON(Date, date_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(OpsElasticQps, opsElasticQps_);
        DARABONBA_PTR_FROM_JSON(OpsQps, opsQps_);
        DARABONBA_PTR_FROM_JSON(OriginQps, originQps_);
        DARABONBA_PTR_FROM_JSON(Qps, qps_);
        DARABONBA_PTR_FROM_JSON(QpsPeak, qpsPeak_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ElasticQpsList() = default ;
      ElasticQpsList(const ElasticQpsList &) = default ;
      ElasticQpsList(ElasticQpsList &&) = default ;
      ElasticQpsList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElasticQpsList() = default ;
      ElasticQpsList& operator=(const ElasticQpsList &) = default ;
      ElasticQpsList& operator=(ElasticQpsList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->date_ == nullptr
        && this->instanceId_ == nullptr && this->ip_ == nullptr && this->opsElasticQps_ == nullptr && this->opsQps_ == nullptr && this->originQps_ == nullptr
        && this->qps_ == nullptr && this->qpsPeak_ == nullptr && this->status_ == nullptr; };
      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline int64_t getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, 0L) };
      inline ElasticQpsList& setDate(int64_t date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ElasticQpsList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline ElasticQpsList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // opsElasticQps Field Functions 
      bool hasOpsElasticQps() const { return this->opsElasticQps_ != nullptr;};
      void deleteOpsElasticQps() { this->opsElasticQps_ = nullptr;};
      inline int64_t getOpsElasticQps() const { DARABONBA_PTR_GET_DEFAULT(opsElasticQps_, 0L) };
      inline ElasticQpsList& setOpsElasticQps(int64_t opsElasticQps) { DARABONBA_PTR_SET_VALUE(opsElasticQps_, opsElasticQps) };


      // opsQps Field Functions 
      bool hasOpsQps() const { return this->opsQps_ != nullptr;};
      void deleteOpsQps() { this->opsQps_ = nullptr;};
      inline int64_t getOpsQps() const { DARABONBA_PTR_GET_DEFAULT(opsQps_, 0L) };
      inline ElasticQpsList& setOpsQps(int64_t opsQps) { DARABONBA_PTR_SET_VALUE(opsQps_, opsQps) };


      // originQps Field Functions 
      bool hasOriginQps() const { return this->originQps_ != nullptr;};
      void deleteOriginQps() { this->originQps_ = nullptr;};
      inline int64_t getOriginQps() const { DARABONBA_PTR_GET_DEFAULT(originQps_, 0L) };
      inline ElasticQpsList& setOriginQps(int64_t originQps) { DARABONBA_PTR_SET_VALUE(originQps_, originQps) };


      // qps Field Functions 
      bool hasQps() const { return this->qps_ != nullptr;};
      void deleteQps() { this->qps_ = nullptr;};
      inline int64_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
      inline ElasticQpsList& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


      // qpsPeak Field Functions 
      bool hasQpsPeak() const { return this->qpsPeak_ != nullptr;};
      void deleteQpsPeak() { this->qpsPeak_ = nullptr;};
      inline int64_t getQpsPeak() const { DARABONBA_PTR_GET_DEFAULT(qpsPeak_, 0L) };
      inline ElasticQpsList& setQpsPeak(int64_t qpsPeak) { DARABONBA_PTR_SET_VALUE(qpsPeak_, qpsPeak) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline ElasticQpsList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The timestamp. Unit: milliseconds.
      shared_ptr<int64_t> date_ {};
      // The ID of the Anti-DDoS Proxy instance.
      shared_ptr<string> instanceId_ {};
      // The IP address of the Anti-DDoS Proxy instance.
      shared_ptr<string> ip_ {};
      // The burstable QPS value. A value of 0 indicates that the burstable QPS feature is not enabled.
      shared_ptr<int64_t> opsElasticQps_ {};
      // The service QPS (active).
      shared_ptr<int64_t> opsQps_ {};
      // The service QPS (purchased).
      shared_ptr<int64_t> originQps_ {};
      // The daily peak 95th percentile QPS.
      shared_ptr<int64_t> qps_ {};
      // The daily peak traffic.
      shared_ptr<int64_t> qpsPeak_ {};
      // Indicates whether the instance has expired or is released. Valid values:
      // 
      // *   **1**: The instance runs as expected.
      // *   **2**: The instance has expired.
      // *   **4**: The instance is released.
      shared_ptr<int64_t> status_ {};
    };

    virtual bool empty() const override { return this->elasticQpsList_ == nullptr
        && this->requestId_ == nullptr; };
    // elasticQpsList Field Functions 
    bool hasElasticQpsList() const { return this->elasticQpsList_ != nullptr;};
    void deleteElasticQpsList() { this->elasticQpsList_ = nullptr;};
    inline const vector<DescribeElasticQpsRecordResponseBody::ElasticQpsList> & getElasticQpsList() const { DARABONBA_PTR_GET_CONST(elasticQpsList_, vector<DescribeElasticQpsRecordResponseBody::ElasticQpsList>) };
    inline vector<DescribeElasticQpsRecordResponseBody::ElasticQpsList> getElasticQpsList() { DARABONBA_PTR_GET(elasticQpsList_, vector<DescribeElasticQpsRecordResponseBody::ElasticQpsList>) };
    inline DescribeElasticQpsRecordResponseBody& setElasticQpsList(const vector<DescribeElasticQpsRecordResponseBody::ElasticQpsList> & elasticQpsList) { DARABONBA_PTR_SET_VALUE(elasticQpsList_, elasticQpsList) };
    inline DescribeElasticQpsRecordResponseBody& setElasticQpsList(vector<DescribeElasticQpsRecordResponseBody::ElasticQpsList> && elasticQpsList) { DARABONBA_PTR_SET_RVALUE(elasticQpsList_, elasticQpsList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticQpsRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The QPS information about the instance.
    shared_ptr<vector<DescribeElasticQpsRecordResponseBody::ElasticQpsList>> elasticQpsList_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
