// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICQPSRECORDRESPONSEBODYELASTICQPSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICQPSRECORDRESPONSEBODYELASTICQPSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeElasticQpsRecordResponseBodyElasticQpsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticQpsRecordResponseBodyElasticQpsList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeElasticQpsRecordResponseBodyElasticQpsList& obj) { 
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
    DescribeElasticQpsRecordResponseBodyElasticQpsList() = default ;
    DescribeElasticQpsRecordResponseBodyElasticQpsList(const DescribeElasticQpsRecordResponseBodyElasticQpsList &) = default ;
    DescribeElasticQpsRecordResponseBodyElasticQpsList(DescribeElasticQpsRecordResponseBodyElasticQpsList &&) = default ;
    DescribeElasticQpsRecordResponseBodyElasticQpsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticQpsRecordResponseBodyElasticQpsList() = default ;
    DescribeElasticQpsRecordResponseBodyElasticQpsList& operator=(const DescribeElasticQpsRecordResponseBodyElasticQpsList &) = default ;
    DescribeElasticQpsRecordResponseBodyElasticQpsList& operator=(DescribeElasticQpsRecordResponseBodyElasticQpsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->instanceId_ == nullptr && return this->ip_ == nullptr && return this->opsElasticQps_ == nullptr && return this->opsQps_ == nullptr && return this->originQps_ == nullptr
        && return this->qps_ == nullptr && return this->qpsPeak_ == nullptr && return this->status_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline int64_t date() const { DARABONBA_PTR_GET_DEFAULT(date_, 0L) };
    inline DescribeElasticQpsRecordResponseBodyElasticQpsList& setDate(int64_t date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeElasticQpsRecordResponseBodyElasticQpsList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeElasticQpsRecordResponseBodyElasticQpsList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // opsElasticQps Field Functions 
    bool hasOpsElasticQps() const { return this->opsElasticQps_ != nullptr;};
    void deleteOpsElasticQps() { this->opsElasticQps_ = nullptr;};
    inline int64_t opsElasticQps() const { DARABONBA_PTR_GET_DEFAULT(opsElasticQps_, 0L) };
    inline DescribeElasticQpsRecordResponseBodyElasticQpsList& setOpsElasticQps(int64_t opsElasticQps) { DARABONBA_PTR_SET_VALUE(opsElasticQps_, opsElasticQps) };


    // opsQps Field Functions 
    bool hasOpsQps() const { return this->opsQps_ != nullptr;};
    void deleteOpsQps() { this->opsQps_ = nullptr;};
    inline int64_t opsQps() const { DARABONBA_PTR_GET_DEFAULT(opsQps_, 0L) };
    inline DescribeElasticQpsRecordResponseBodyElasticQpsList& setOpsQps(int64_t opsQps) { DARABONBA_PTR_SET_VALUE(opsQps_, opsQps) };


    // originQps Field Functions 
    bool hasOriginQps() const { return this->originQps_ != nullptr;};
    void deleteOriginQps() { this->originQps_ = nullptr;};
    inline int64_t originQps() const { DARABONBA_PTR_GET_DEFAULT(originQps_, 0L) };
    inline DescribeElasticQpsRecordResponseBodyElasticQpsList& setOriginQps(int64_t originQps) { DARABONBA_PTR_SET_VALUE(originQps_, originQps) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int64_t qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
    inline DescribeElasticQpsRecordResponseBodyElasticQpsList& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // qpsPeak Field Functions 
    bool hasQpsPeak() const { return this->qpsPeak_ != nullptr;};
    void deleteQpsPeak() { this->qpsPeak_ = nullptr;};
    inline int64_t qpsPeak() const { DARABONBA_PTR_GET_DEFAULT(qpsPeak_, 0L) };
    inline DescribeElasticQpsRecordResponseBodyElasticQpsList& setQpsPeak(int64_t qpsPeak) { DARABONBA_PTR_SET_VALUE(qpsPeak_, qpsPeak) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline DescribeElasticQpsRecordResponseBodyElasticQpsList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> date_ = nullptr;
    // The ID of the Anti-DDoS Proxy instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address of the Anti-DDoS Proxy instance.
    std::shared_ptr<string> ip_ = nullptr;
    // The burstable QPS value. A value of 0 indicates that the burstable QPS feature is not enabled.
    std::shared_ptr<int64_t> opsElasticQps_ = nullptr;
    // The service QPS (active).
    std::shared_ptr<int64_t> opsQps_ = nullptr;
    // The service QPS (purchased).
    std::shared_ptr<int64_t> originQps_ = nullptr;
    // The daily peak 95th percentile QPS.
    std::shared_ptr<int64_t> qps_ = nullptr;
    // The daily peak traffic.
    std::shared_ptr<int64_t> qpsPeak_ = nullptr;
    // Indicates whether the instance has expired or is released. Valid values:
    // 
    // *   **1**: The instance runs as expected.
    // *   **2**: The instance has expired.
    // *   **4**: The instance is released.
    std::shared_ptr<int64_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
