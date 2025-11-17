// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricListRequestProcessInfos.hpp>
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
    virtual bool empty() const override { return this->androidInstanceIds_ == nullptr
        && return this->endTime_ == nullptr && return this->instanceIds_ == nullptr && return this->length_ == nullptr && return this->metricNames_ == nullptr && return this->nextToken_ == nullptr
        && return this->period_ == nullptr && return this->processInfos_ == nullptr && return this->startTime_ == nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & androidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> androidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline DescribeMetricListRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline DescribeMetricListRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMetricListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeMetricListRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeMetricListRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline string length() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
    inline DescribeMetricListRequest& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // metricNames Field Functions 
    bool hasMetricNames() const { return this->metricNames_ != nullptr;};
    void deleteMetricNames() { this->metricNames_ = nullptr;};
    inline const vector<string> & metricNames() const { DARABONBA_PTR_GET_CONST(metricNames_, vector<string>) };
    inline vector<string> metricNames() { DARABONBA_PTR_GET(metricNames_, vector<string>) };
    inline DescribeMetricListRequest& setMetricNames(const vector<string> & metricNames) { DARABONBA_PTR_SET_VALUE(metricNames_, metricNames) };
    inline DescribeMetricListRequest& setMetricNames(vector<string> && metricNames) { DARABONBA_PTR_SET_RVALUE(metricNames_, metricNames) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMetricListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeMetricListRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // processInfos Field Functions 
    bool hasProcessInfos() const { return this->processInfos_ != nullptr;};
    void deleteProcessInfos() { this->processInfos_ = nullptr;};
    inline const vector<DescribeMetricListRequestProcessInfos> & processInfos() const { DARABONBA_PTR_GET_CONST(processInfos_, vector<DescribeMetricListRequestProcessInfos>) };
    inline vector<DescribeMetricListRequestProcessInfos> processInfos() { DARABONBA_PTR_GET(processInfos_, vector<DescribeMetricListRequestProcessInfos>) };
    inline DescribeMetricListRequest& setProcessInfos(const vector<DescribeMetricListRequestProcessInfos> & processInfos) { DARABONBA_PTR_SET_VALUE(processInfos_, processInfos) };
    inline DescribeMetricListRequest& setProcessInfos(vector<DescribeMetricListRequestProcessInfos> && processInfos) { DARABONBA_PTR_SET_RVALUE(processInfos_, processInfos) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMetricListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<vector<string>> androidInstanceIds_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<string> length_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> metricNames_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<vector<DescribeMetricListRequestProcessInfos>> processInfos_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
