// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRELEASEMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRELEASEMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class QueryReleaseMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReleaseMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_TO_JSON(ReleaseEndTime, releaseEndTime_);
      DARABONBA_PTR_TO_JSON(ReleaseStartTime, releaseStartTime_);
      DARABONBA_PTR_TO_JSON(Service, service_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReleaseMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_FROM_JSON(ReleaseEndTime, releaseEndTime_);
      DARABONBA_PTR_FROM_JSON(ReleaseStartTime, releaseStartTime_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
    };
    QueryReleaseMetricRequest() = default ;
    QueryReleaseMetricRequest(const QueryReleaseMetricRequest &) = default ;
    QueryReleaseMetricRequest(QueryReleaseMetricRequest &&) = default ;
    QueryReleaseMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReleaseMetricRequest() = default ;
    QueryReleaseMetricRequest& operator=(const QueryReleaseMetricRequest &) = default ;
    QueryReleaseMetricRequest& operator=(QueryReleaseMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeOrderId_ != nullptr
        && this->createTime_ != nullptr && this->metricType_ != nullptr && this->pid_ != nullptr && this->proxyUserId_ != nullptr && this->releaseEndTime_ != nullptr
        && this->releaseStartTime_ != nullptr && this->service_ != nullptr; };
    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline QueryReleaseMetricRequest& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline QueryReleaseMetricRequest& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline QueryReleaseMetricRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline QueryReleaseMetricRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // proxyUserId Field Functions 
    bool hasProxyUserId() const { return this->proxyUserId_ != nullptr;};
    void deleteProxyUserId() { this->proxyUserId_ = nullptr;};
    inline string proxyUserId() const { DARABONBA_PTR_GET_DEFAULT(proxyUserId_, "") };
    inline QueryReleaseMetricRequest& setProxyUserId(string proxyUserId) { DARABONBA_PTR_SET_VALUE(proxyUserId_, proxyUserId) };


    // releaseEndTime Field Functions 
    bool hasReleaseEndTime() const { return this->releaseEndTime_ != nullptr;};
    void deleteReleaseEndTime() { this->releaseEndTime_ = nullptr;};
    inline int64_t releaseEndTime() const { DARABONBA_PTR_GET_DEFAULT(releaseEndTime_, 0L) };
    inline QueryReleaseMetricRequest& setReleaseEndTime(int64_t releaseEndTime) { DARABONBA_PTR_SET_VALUE(releaseEndTime_, releaseEndTime) };


    // releaseStartTime Field Functions 
    bool hasReleaseStartTime() const { return this->releaseStartTime_ != nullptr;};
    void deleteReleaseStartTime() { this->releaseStartTime_ = nullptr;};
    inline int64_t releaseStartTime() const { DARABONBA_PTR_GET_DEFAULT(releaseStartTime_, 0L) };
    inline QueryReleaseMetricRequest& setReleaseStartTime(int64_t releaseStartTime) { DARABONBA_PTR_SET_VALUE(releaseStartTime_, releaseStartTime) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline QueryReleaseMetricRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    // The ID of the change order.
    // 
    // This parameter is required.
    std::shared_ptr<string> changeOrderId_ = nullptr;
    // The time when the change order was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The type of the metric that you want to query.
    std::shared_ptr<string> metricType_ = nullptr;
    // The ID of the Enterprise Distributed Application Service (EDAS) or Kubernetes application.
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
    // This parameter is not in use.
    std::shared_ptr<string> proxyUserId_ = nullptr;
    // The end time of the version release.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> releaseEndTime_ = nullptr;
    // The start time of the version release.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> releaseStartTime_ = nullptr;
    // The service that you want to query.
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
