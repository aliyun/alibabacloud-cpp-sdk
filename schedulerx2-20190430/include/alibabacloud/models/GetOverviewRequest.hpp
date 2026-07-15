// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOVERVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_TO_JSON(Operate, operate_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_FROM_JSON(Operate, operate_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetOverviewRequest() = default ;
    GetOverviewRequest(const GetOverviewRequest &) = default ;
    GetOverviewRequest(GetOverviewRequest &&) = default ;
    GetOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOverviewRequest() = default ;
    GetOverviewRequest& operator=(const GetOverviewRequest &) = default ;
    GetOverviewRequest& operator=(GetOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->groupId_ == nullptr && this->metricType_ == nullptr && this->namespace_ == nullptr && this->namespaceSource_ == nullptr && this->operate_ == nullptr
        && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetOverviewRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetOverviewRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline int32_t getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, 0) };
    inline GetOverviewRequest& setMetricType(int32_t metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetOverviewRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string getNamespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline GetOverviewRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // operate Field Functions 
    bool hasOperate() const { return this->operate_ != nullptr;};
    void deleteOperate() { this->operate_ = nullptr;};
    inline string getOperate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
    inline GetOverviewRequest& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetOverviewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetOverviewRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end timestamp of the data, in seconds. Example: 1684166400. If this parameter is not specified, the current time is used by default.
    shared_ptr<int64_t> endTime_ {};
    // The application group ID.
    shared_ptr<string> groupId_ {};
    // The metric type. Valid values:
    // 
    // - 0: basic task information.
    // - 1: task execution information.
    // 
    // This parameter is required.
    shared_ptr<int32_t> metricType_ {};
    // The namespace UID.
    shared_ptr<string> namespace_ {};
    // The source of the namespace. This parameter is required only for special third-party integrations.
    shared_ptr<string> namespaceSource_ {};
    // The operation type. Valid values:
    // 
    // - query: queries interval data.
    // - query_range: queries interval time series data.
    // 
    // This parameter is required.
    shared_ptr<string> operate_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The start timestamp of the data, in seconds. Example: 1684166400.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
