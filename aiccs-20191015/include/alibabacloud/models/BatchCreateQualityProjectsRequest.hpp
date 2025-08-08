// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEQUALITYPROJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEQUALITYPROJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class BatchCreateQualityProjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateQualityProjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisIds, analysisIds_);
      DARABONBA_PTR_TO_JSON(ChannelTouchType, channelTouchType_);
      DARABONBA_PTR_TO_JSON(CheckFreqType, checkFreqType_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TimeRangeEnd, timeRangeEnd_);
      DARABONBA_PTR_TO_JSON(TimeRangeStart, timeRangeStart_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateQualityProjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisIds, analysisIds_);
      DARABONBA_PTR_FROM_JSON(ChannelTouchType, channelTouchType_);
      DARABONBA_PTR_FROM_JSON(CheckFreqType, checkFreqType_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TimeRangeEnd, timeRangeEnd_);
      DARABONBA_PTR_FROM_JSON(TimeRangeStart, timeRangeStart_);
    };
    BatchCreateQualityProjectsRequest() = default ;
    BatchCreateQualityProjectsRequest(const BatchCreateQualityProjectsRequest &) = default ;
    BatchCreateQualityProjectsRequest(BatchCreateQualityProjectsRequest &&) = default ;
    BatchCreateQualityProjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateQualityProjectsRequest() = default ;
    BatchCreateQualityProjectsRequest& operator=(const BatchCreateQualityProjectsRequest &) = default ;
    BatchCreateQualityProjectsRequest& operator=(BatchCreateQualityProjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysisIds_ != nullptr
        && this->channelTouchType_ != nullptr && this->checkFreqType_ != nullptr && this->instanceList_ != nullptr && this->projectName_ != nullptr && this->timeRangeEnd_ != nullptr
        && this->timeRangeStart_ != nullptr; };
    // analysisIds Field Functions 
    bool hasAnalysisIds() const { return this->analysisIds_ != nullptr;};
    void deleteAnalysisIds() { this->analysisIds_ = nullptr;};
    inline const vector<int64_t> & analysisIds() const { DARABONBA_PTR_GET_CONST(analysisIds_, vector<int64_t>) };
    inline vector<int64_t> analysisIds() { DARABONBA_PTR_GET(analysisIds_, vector<int64_t>) };
    inline BatchCreateQualityProjectsRequest& setAnalysisIds(const vector<int64_t> & analysisIds) { DARABONBA_PTR_SET_VALUE(analysisIds_, analysisIds) };
    inline BatchCreateQualityProjectsRequest& setAnalysisIds(vector<int64_t> && analysisIds) { DARABONBA_PTR_SET_RVALUE(analysisIds_, analysisIds) };


    // channelTouchType Field Functions 
    bool hasChannelTouchType() const { return this->channelTouchType_ != nullptr;};
    void deleteChannelTouchType() { this->channelTouchType_ = nullptr;};
    inline const vector<int32_t> & channelTouchType() const { DARABONBA_PTR_GET_CONST(channelTouchType_, vector<int32_t>) };
    inline vector<int32_t> channelTouchType() { DARABONBA_PTR_GET(channelTouchType_, vector<int32_t>) };
    inline BatchCreateQualityProjectsRequest& setChannelTouchType(const vector<int32_t> & channelTouchType) { DARABONBA_PTR_SET_VALUE(channelTouchType_, channelTouchType) };
    inline BatchCreateQualityProjectsRequest& setChannelTouchType(vector<int32_t> && channelTouchType) { DARABONBA_PTR_SET_RVALUE(channelTouchType_, channelTouchType) };


    // checkFreqType Field Functions 
    bool hasCheckFreqType() const { return this->checkFreqType_ != nullptr;};
    void deleteCheckFreqType() { this->checkFreqType_ = nullptr;};
    inline int32_t checkFreqType() const { DARABONBA_PTR_GET_DEFAULT(checkFreqType_, 0) };
    inline BatchCreateQualityProjectsRequest& setCheckFreqType(int32_t checkFreqType) { DARABONBA_PTR_SET_VALUE(checkFreqType_, checkFreqType) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<string> & instanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<string>) };
    inline vector<string> instanceList() { DARABONBA_PTR_GET(instanceList_, vector<string>) };
    inline BatchCreateQualityProjectsRequest& setInstanceList(const vector<string> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline BatchCreateQualityProjectsRequest& setInstanceList(vector<string> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline BatchCreateQualityProjectsRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // timeRangeEnd Field Functions 
    bool hasTimeRangeEnd() const { return this->timeRangeEnd_ != nullptr;};
    void deleteTimeRangeEnd() { this->timeRangeEnd_ = nullptr;};
    inline string timeRangeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeRangeEnd_, "") };
    inline BatchCreateQualityProjectsRequest& setTimeRangeEnd(string timeRangeEnd) { DARABONBA_PTR_SET_VALUE(timeRangeEnd_, timeRangeEnd) };


    // timeRangeStart Field Functions 
    bool hasTimeRangeStart() const { return this->timeRangeStart_ != nullptr;};
    void deleteTimeRangeStart() { this->timeRangeStart_ = nullptr;};
    inline string timeRangeStart() const { DARABONBA_PTR_GET_DEFAULT(timeRangeStart_, "") };
    inline BatchCreateQualityProjectsRequest& setTimeRangeStart(string timeRangeStart) { DARABONBA_PTR_SET_VALUE(timeRangeStart_, timeRangeStart) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> analysisIds_ = nullptr;
    std::shared_ptr<vector<int32_t>> channelTouchType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> checkFreqType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> timeRangeEnd_ = nullptr;
    std::shared_ptr<string> timeRangeStart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
