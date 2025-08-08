// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUALITYPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUALITYPROJECTREQUEST_HPP_
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
  class CreateQualityProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQualityProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisIds, analysisIds_);
      DARABONBA_PTR_TO_JSON(ChannelTouchType, channelTouchType_);
      DARABONBA_PTR_TO_JSON(CheckFreqType, checkFreqType_);
      DARABONBA_PTR_TO_JSON(DepList, depList_);
      DARABONBA_PTR_TO_JSON(GroupList, groupList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(ServicerList, servicerList_);
      DARABONBA_PTR_TO_JSON(TimeRangeEnd, timeRangeEnd_);
      DARABONBA_PTR_TO_JSON(TimeRangeStart, timeRangeStart_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQualityProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisIds, analysisIds_);
      DARABONBA_PTR_FROM_JSON(ChannelTouchType, channelTouchType_);
      DARABONBA_PTR_FROM_JSON(CheckFreqType, checkFreqType_);
      DARABONBA_PTR_FROM_JSON(DepList, depList_);
      DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(ServicerList, servicerList_);
      DARABONBA_PTR_FROM_JSON(TimeRangeEnd, timeRangeEnd_);
      DARABONBA_PTR_FROM_JSON(TimeRangeStart, timeRangeStart_);
    };
    CreateQualityProjectRequest() = default ;
    CreateQualityProjectRequest(const CreateQualityProjectRequest &) = default ;
    CreateQualityProjectRequest(CreateQualityProjectRequest &&) = default ;
    CreateQualityProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQualityProjectRequest() = default ;
    CreateQualityProjectRequest& operator=(const CreateQualityProjectRequest &) = default ;
    CreateQualityProjectRequest& operator=(CreateQualityProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysisIds_ != nullptr
        && this->channelTouchType_ != nullptr && this->checkFreqType_ != nullptr && this->depList_ != nullptr && this->groupList_ != nullptr && this->instanceId_ != nullptr
        && this->projectName_ != nullptr && this->scopeType_ != nullptr && this->servicerList_ != nullptr && this->timeRangeEnd_ != nullptr && this->timeRangeStart_ != nullptr; };
    // analysisIds Field Functions 
    bool hasAnalysisIds() const { return this->analysisIds_ != nullptr;};
    void deleteAnalysisIds() { this->analysisIds_ = nullptr;};
    inline const vector<int64_t> & analysisIds() const { DARABONBA_PTR_GET_CONST(analysisIds_, vector<int64_t>) };
    inline vector<int64_t> analysisIds() { DARABONBA_PTR_GET(analysisIds_, vector<int64_t>) };
    inline CreateQualityProjectRequest& setAnalysisIds(const vector<int64_t> & analysisIds) { DARABONBA_PTR_SET_VALUE(analysisIds_, analysisIds) };
    inline CreateQualityProjectRequest& setAnalysisIds(vector<int64_t> && analysisIds) { DARABONBA_PTR_SET_RVALUE(analysisIds_, analysisIds) };


    // channelTouchType Field Functions 
    bool hasChannelTouchType() const { return this->channelTouchType_ != nullptr;};
    void deleteChannelTouchType() { this->channelTouchType_ = nullptr;};
    inline const vector<int32_t> & channelTouchType() const { DARABONBA_PTR_GET_CONST(channelTouchType_, vector<int32_t>) };
    inline vector<int32_t> channelTouchType() { DARABONBA_PTR_GET(channelTouchType_, vector<int32_t>) };
    inline CreateQualityProjectRequest& setChannelTouchType(const vector<int32_t> & channelTouchType) { DARABONBA_PTR_SET_VALUE(channelTouchType_, channelTouchType) };
    inline CreateQualityProjectRequest& setChannelTouchType(vector<int32_t> && channelTouchType) { DARABONBA_PTR_SET_RVALUE(channelTouchType_, channelTouchType) };


    // checkFreqType Field Functions 
    bool hasCheckFreqType() const { return this->checkFreqType_ != nullptr;};
    void deleteCheckFreqType() { this->checkFreqType_ = nullptr;};
    inline int32_t checkFreqType() const { DARABONBA_PTR_GET_DEFAULT(checkFreqType_, 0) };
    inline CreateQualityProjectRequest& setCheckFreqType(int32_t checkFreqType) { DARABONBA_PTR_SET_VALUE(checkFreqType_, checkFreqType) };


    // depList Field Functions 
    bool hasDepList() const { return this->depList_ != nullptr;};
    void deleteDepList() { this->depList_ = nullptr;};
    inline const vector<int64_t> & depList() const { DARABONBA_PTR_GET_CONST(depList_, vector<int64_t>) };
    inline vector<int64_t> depList() { DARABONBA_PTR_GET(depList_, vector<int64_t>) };
    inline CreateQualityProjectRequest& setDepList(const vector<int64_t> & depList) { DARABONBA_PTR_SET_VALUE(depList_, depList) };
    inline CreateQualityProjectRequest& setDepList(vector<int64_t> && depList) { DARABONBA_PTR_SET_RVALUE(depList_, depList) };


    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<int64_t> & groupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<int64_t>) };
    inline vector<int64_t> groupList() { DARABONBA_PTR_GET(groupList_, vector<int64_t>) };
    inline CreateQualityProjectRequest& setGroupList(const vector<int64_t> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline CreateQualityProjectRequest& setGroupList(vector<int64_t> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateQualityProjectRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateQualityProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline int32_t scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, 0) };
    inline CreateQualityProjectRequest& setScopeType(int32_t scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // servicerList Field Functions 
    bool hasServicerList() const { return this->servicerList_ != nullptr;};
    void deleteServicerList() { this->servicerList_ = nullptr;};
    inline const vector<string> & servicerList() const { DARABONBA_PTR_GET_CONST(servicerList_, vector<string>) };
    inline vector<string> servicerList() { DARABONBA_PTR_GET(servicerList_, vector<string>) };
    inline CreateQualityProjectRequest& setServicerList(const vector<string> & servicerList) { DARABONBA_PTR_SET_VALUE(servicerList_, servicerList) };
    inline CreateQualityProjectRequest& setServicerList(vector<string> && servicerList) { DARABONBA_PTR_SET_RVALUE(servicerList_, servicerList) };


    // timeRangeEnd Field Functions 
    bool hasTimeRangeEnd() const { return this->timeRangeEnd_ != nullptr;};
    void deleteTimeRangeEnd() { this->timeRangeEnd_ = nullptr;};
    inline string timeRangeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeRangeEnd_, "") };
    inline CreateQualityProjectRequest& setTimeRangeEnd(string timeRangeEnd) { DARABONBA_PTR_SET_VALUE(timeRangeEnd_, timeRangeEnd) };


    // timeRangeStart Field Functions 
    bool hasTimeRangeStart() const { return this->timeRangeStart_ != nullptr;};
    void deleteTimeRangeStart() { this->timeRangeStart_ = nullptr;};
    inline string timeRangeStart() const { DARABONBA_PTR_GET_DEFAULT(timeRangeStart_, "") };
    inline CreateQualityProjectRequest& setTimeRangeStart(string timeRangeStart) { DARABONBA_PTR_SET_VALUE(timeRangeStart_, timeRangeStart) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> analysisIds_ = nullptr;
    std::shared_ptr<vector<int32_t>> channelTouchType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> checkFreqType_ = nullptr;
    std::shared_ptr<vector<int64_t>> depList_ = nullptr;
    std::shared_ptr<vector<int64_t>> groupList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> scopeType_ = nullptr;
    std::shared_ptr<vector<string>> servicerList_ = nullptr;
    std::shared_ptr<string> timeRangeEnd_ = nullptr;
    std::shared_ptr<string> timeRangeStart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
