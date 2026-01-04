// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETHDMONITORREGIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETHDMONITORREGIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class SetHdMonitorRegionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetHdMonitorRegionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogProject, logProject_);
      DARABONBA_PTR_TO_JSON(MetricStore, metricStore_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetHdMonitorRegionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogProject, logProject_);
      DARABONBA_PTR_FROM_JSON(MetricStore, metricStore_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetHdMonitorRegionConfigResponseBody() = default ;
    SetHdMonitorRegionConfigResponseBody(const SetHdMonitorRegionConfigResponseBody &) = default ;
    SetHdMonitorRegionConfigResponseBody(SetHdMonitorRegionConfigResponseBody &&) = default ;
    SetHdMonitorRegionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetHdMonitorRegionConfigResponseBody() = default ;
    SetHdMonitorRegionConfigResponseBody& operator=(const SetHdMonitorRegionConfigResponseBody &) = default ;
    SetHdMonitorRegionConfigResponseBody& operator=(SetHdMonitorRegionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logProject_ == nullptr
        && this->metricStore_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr; };
    // logProject Field Functions 
    bool hasLogProject() const { return this->logProject_ != nullptr;};
    void deleteLogProject() { this->logProject_ = nullptr;};
    inline string getLogProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
    inline SetHdMonitorRegionConfigResponseBody& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


    // metricStore Field Functions 
    bool hasMetricStore() const { return this->metricStore_ != nullptr;};
    void deleteMetricStore() { this->metricStore_ = nullptr;};
    inline string getMetricStore() const { DARABONBA_PTR_GET_DEFAULT(metricStore_, "") };
    inline SetHdMonitorRegionConfigResponseBody& setMetricStore(string metricStore) { DARABONBA_PTR_SET_VALUE(metricStore_, metricStore) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetHdMonitorRegionConfigResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetHdMonitorRegionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the Log Service project.
    shared_ptr<string> logProject_ {};
    // The name of the MetricStore in Simple Log Service.
    shared_ptr<string> metricStore_ {};
    // The region ID of the NLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/2399192.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
