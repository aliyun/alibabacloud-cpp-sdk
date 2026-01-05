// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMetricListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(MetricNames, metricNames_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ProcessInfos, processInfos_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(MetricNames, metricNames_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ProcessInfos, processInfos_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeMetricListRequest() = default ;
    DescribeMetricListRequest(const DescribeMetricListRequest &) = default ;
    DescribeMetricListRequest(DescribeMetricListRequest &&) = default ;
    DescribeMetricListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricListRequest() = default ;
    DescribeMetricListRequest& operator=(const DescribeMetricListRequest &) = default ;
    DescribeMetricListRequest& operator=(DescribeMetricListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProcessInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProcessInfos& obj) { 
        DARABONBA_PTR_TO_JSON(ProcessIds, processIds_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      };
      friend void from_json(const Darabonba::Json& j, ProcessInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(ProcessIds, processIds_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      };
      ProcessInfos() = default ;
      ProcessInfos(const ProcessInfos &) = default ;
      ProcessInfos(ProcessInfos &&) = default ;
      ProcessInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProcessInfos() = default ;
      ProcessInfos& operator=(const ProcessInfos &) = default ;
      ProcessInfos& operator=(ProcessInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->processIds_ == nullptr
        && this->processName_ == nullptr; };
      // processIds Field Functions 
      bool hasProcessIds() const { return this->processIds_ != nullptr;};
      void deleteProcessIds() { this->processIds_ = nullptr;};
      inline const vector<int32_t> & getProcessIds() const { DARABONBA_PTR_GET_CONST(processIds_, vector<int32_t>) };
      inline vector<int32_t> getProcessIds() { DARABONBA_PTR_GET(processIds_, vector<int32_t>) };
      inline ProcessInfos& setProcessIds(const vector<int32_t> & processIds) { DARABONBA_PTR_SET_VALUE(processIds_, processIds) };
      inline ProcessInfos& setProcessIds(vector<int32_t> && processIds) { DARABONBA_PTR_SET_RVALUE(processIds_, processIds) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline ProcessInfos& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    protected:
      shared_ptr<vector<int32_t>> processIds_ {};
      shared_ptr<string> processName_ {};
    };

    virtual bool empty() const override { return this->androidInstanceIds_ == nullptr
        && this->endTime_ == nullptr && this->instanceIds_ == nullptr && this->length_ == nullptr && this->metricNames_ == nullptr && this->nextToken_ == nullptr
        && this->period_ == nullptr && this->processInfos_ == nullptr && this->startTime_ == nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & getAndroidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> getAndroidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline DescribeMetricListRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline DescribeMetricListRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMetricListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeMetricListRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeMetricListRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline string getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
    inline DescribeMetricListRequest& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // metricNames Field Functions 
    bool hasMetricNames() const { return this->metricNames_ != nullptr;};
    void deleteMetricNames() { this->metricNames_ = nullptr;};
    inline const vector<string> & getMetricNames() const { DARABONBA_PTR_GET_CONST(metricNames_, vector<string>) };
    inline vector<string> getMetricNames() { DARABONBA_PTR_GET(metricNames_, vector<string>) };
    inline DescribeMetricListRequest& setMetricNames(const vector<string> & metricNames) { DARABONBA_PTR_SET_VALUE(metricNames_, metricNames) };
    inline DescribeMetricListRequest& setMetricNames(vector<string> && metricNames) { DARABONBA_PTR_SET_RVALUE(metricNames_, metricNames) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMetricListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeMetricListRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // processInfos Field Functions 
    bool hasProcessInfos() const { return this->processInfos_ != nullptr;};
    void deleteProcessInfos() { this->processInfos_ = nullptr;};
    inline const vector<DescribeMetricListRequest::ProcessInfos> & getProcessInfos() const { DARABONBA_PTR_GET_CONST(processInfos_, vector<DescribeMetricListRequest::ProcessInfos>) };
    inline vector<DescribeMetricListRequest::ProcessInfos> getProcessInfos() { DARABONBA_PTR_GET(processInfos_, vector<DescribeMetricListRequest::ProcessInfos>) };
    inline DescribeMetricListRequest& setProcessInfos(const vector<DescribeMetricListRequest::ProcessInfos> & processInfos) { DARABONBA_PTR_SET_VALUE(processInfos_, processInfos) };
    inline DescribeMetricListRequest& setProcessInfos(vector<DescribeMetricListRequest::ProcessInfos> && processInfos) { DARABONBA_PTR_SET_RVALUE(processInfos_, processInfos) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMetricListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<vector<string>> androidInstanceIds_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<string> length_ {};
    // This parameter is required.
    shared_ptr<vector<string>> metricNames_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> period_ {};
    shared_ptr<vector<DescribeMetricListRequest::ProcessInfos>> processInfos_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
