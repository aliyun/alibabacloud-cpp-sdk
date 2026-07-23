// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTABMETRICGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPORTABMETRICGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ReportABMetricGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportABMetricGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseExperimentId, baseExperimentId_);
      DARABONBA_PTR_TO_JSON(DimensionFields, dimensionFields_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExperimentGroupId, experimentGroupId_);
      DARABONBA_PTR_TO_JSON(ExperimentIds, experimentIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TimeStatisticsMethod, timeStatisticsMethod_);
    };
    friend void from_json(const Darabonba::Json& j, ReportABMetricGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseExperimentId, baseExperimentId_);
      DARABONBA_PTR_FROM_JSON(DimensionFields, dimensionFields_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExperimentGroupId, experimentGroupId_);
      DARABONBA_PTR_FROM_JSON(ExperimentIds, experimentIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TimeStatisticsMethod, timeStatisticsMethod_);
    };
    ReportABMetricGroupRequest() = default ;
    ReportABMetricGroupRequest(const ReportABMetricGroupRequest &) = default ;
    ReportABMetricGroupRequest(ReportABMetricGroupRequest &&) = default ;
    ReportABMetricGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportABMetricGroupRequest() = default ;
    ReportABMetricGroupRequest& operator=(const ReportABMetricGroupRequest &) = default ;
    ReportABMetricGroupRequest& operator=(ReportABMetricGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseExperimentId_ == nullptr
        && this->dimensionFields_ == nullptr && this->endDate_ == nullptr && this->experimentGroupId_ == nullptr && this->experimentIds_ == nullptr && this->instanceId_ == nullptr
        && this->reportType_ == nullptr && this->sceneId_ == nullptr && this->startDate_ == nullptr && this->timeStatisticsMethod_ == nullptr; };
    // baseExperimentId Field Functions 
    bool hasBaseExperimentId() const { return this->baseExperimentId_ != nullptr;};
    void deleteBaseExperimentId() { this->baseExperimentId_ = nullptr;};
    inline string getBaseExperimentId() const { DARABONBA_PTR_GET_DEFAULT(baseExperimentId_, "") };
    inline ReportABMetricGroupRequest& setBaseExperimentId(string baseExperimentId) { DARABONBA_PTR_SET_VALUE(baseExperimentId_, baseExperimentId) };


    // dimensionFields Field Functions 
    bool hasDimensionFields() const { return this->dimensionFields_ != nullptr;};
    void deleteDimensionFields() { this->dimensionFields_ = nullptr;};
    inline string getDimensionFields() const { DARABONBA_PTR_GET_DEFAULT(dimensionFields_, "") };
    inline ReportABMetricGroupRequest& setDimensionFields(string dimensionFields) { DARABONBA_PTR_SET_VALUE(dimensionFields_, dimensionFields) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ReportABMetricGroupRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // experimentGroupId Field Functions 
    bool hasExperimentGroupId() const { return this->experimentGroupId_ != nullptr;};
    void deleteExperimentGroupId() { this->experimentGroupId_ = nullptr;};
    inline string getExperimentGroupId() const { DARABONBA_PTR_GET_DEFAULT(experimentGroupId_, "") };
    inline ReportABMetricGroupRequest& setExperimentGroupId(string experimentGroupId) { DARABONBA_PTR_SET_VALUE(experimentGroupId_, experimentGroupId) };


    // experimentIds Field Functions 
    bool hasExperimentIds() const { return this->experimentIds_ != nullptr;};
    void deleteExperimentIds() { this->experimentIds_ = nullptr;};
    inline string getExperimentIds() const { DARABONBA_PTR_GET_DEFAULT(experimentIds_, "") };
    inline ReportABMetricGroupRequest& setExperimentIds(string experimentIds) { DARABONBA_PTR_SET_VALUE(experimentIds_, experimentIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReportABMetricGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline ReportABMetricGroupRequest& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ReportABMetricGroupRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ReportABMetricGroupRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // timeStatisticsMethod Field Functions 
    bool hasTimeStatisticsMethod() const { return this->timeStatisticsMethod_ != nullptr;};
    void deleteTimeStatisticsMethod() { this->timeStatisticsMethod_ = nullptr;};
    inline string getTimeStatisticsMethod() const { DARABONBA_PTR_GET_DEFAULT(timeStatisticsMethod_, "") };
    inline ReportABMetricGroupRequest& setTimeStatisticsMethod(string timeStatisticsMethod) { DARABONBA_PTR_SET_VALUE(timeStatisticsMethod_, timeStatisticsMethod) };


  protected:
    // The ID of the base experiment.
    // 
    // This parameter is required.
    shared_ptr<string> baseExperimentId_ {};
    // The dimension fields.
    shared_ptr<string> dimensionFields_ {};
    // The end date.
    shared_ptr<string> endDate_ {};
    // The ID of the experiment group. You can call the [ListExperimentGroups](https://help.aliyun.com/document_detail/2402573.html) operation to obtain the ID of the experiment group. This parameter is required for offline and real-time reports.
    shared_ptr<string> experimentGroupId_ {};
    // The IDs of the experiments. You can call the [ListExperiments](https://help.aliyun.com/document_detail/2402582.html) operation to obtain the IDs of the experiments.
    // 
    // This parameter is required.
    shared_ptr<string> experimentIds_ {};
    // The instance ID. You can call the [ListInstances](https://help.aliyun.com/document_detail/2411819.html) operation to obtain the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The type of the report.
    // 
    // - Realtime: real-time report.
    // 
    // - Offline: offline report.
    // 
    // - Market: dashboard report.
    // 
    // This parameter is required.
    shared_ptr<string> reportType_ {};
    // The ID of the scene. You can call the [ListScenes](https://help.aliyun.com/document_detail/2402581.html) operation to obtain the scene ID.
    shared_ptr<string> sceneId_ {};
    // The start date.
    shared_ptr<string> startDate_ {};
    // The time statistics method. This parameter is required for real-time reports.
    // 
    // - Hour: The statistics are collected by hour.
    // 
    // - Day: The statistics are accumulated from 00:00 on the current day.
    shared_ptr<string> timeStatisticsMethod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
