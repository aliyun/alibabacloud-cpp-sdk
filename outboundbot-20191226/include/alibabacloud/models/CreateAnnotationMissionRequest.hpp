// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANNOTATIONMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANNOTATIONMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateAnnotationMissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAnnotationMissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionDataSourceType, annotationMissionDataSourceType_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionDebugDataSourceList, annotationMissionDebugDataSourceList_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionDebugDataSourceListJsonString, annotationMissionDebugDataSourceListJsonString_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionName, annotationMissionName_);
      DARABONBA_PTR_TO_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_TO_JSON(ConversationTimeEndFilter, conversationTimeEndFilter_);
      DARABONBA_PTR_TO_JSON(ConversationTimeStartFilter, conversationTimeStartFilter_);
      DARABONBA_PTR_TO_JSON(ExcludeOtherSession, excludeOtherSession_);
      DARABONBA_PTR_TO_JSON(Finished, finished_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SamplingCount, samplingCount_);
      DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_TO_JSON(SamplingType, samplingType_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(SessionEndReasonFilterList, sessionEndReasonFilterList_);
      DARABONBA_PTR_TO_JSON(SessionEndReasonFilterListJsonString, sessionEndReasonFilterListJsonString_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAnnotationMissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionDataSourceType, annotationMissionDataSourceType_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionDebugDataSourceList, annotationMissionDebugDataSourceList_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionDebugDataSourceListJsonString, annotationMissionDebugDataSourceListJsonString_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionName, annotationMissionName_);
      DARABONBA_PTR_FROM_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_FROM_JSON(ConversationTimeEndFilter, conversationTimeEndFilter_);
      DARABONBA_PTR_FROM_JSON(ConversationTimeStartFilter, conversationTimeStartFilter_);
      DARABONBA_PTR_FROM_JSON(ExcludeOtherSession, excludeOtherSession_);
      DARABONBA_PTR_FROM_JSON(Finished, finished_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SamplingCount, samplingCount_);
      DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_FROM_JSON(SamplingType, samplingType_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(SessionEndReasonFilterList, sessionEndReasonFilterList_);
      DARABONBA_PTR_FROM_JSON(SessionEndReasonFilterListJsonString, sessionEndReasonFilterListJsonString_);
    };
    CreateAnnotationMissionRequest() = default ;
    CreateAnnotationMissionRequest(const CreateAnnotationMissionRequest &) = default ;
    CreateAnnotationMissionRequest(CreateAnnotationMissionRequest &&) = default ;
    CreateAnnotationMissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAnnotationMissionRequest() = default ;
    CreateAnnotationMissionRequest& operator=(const CreateAnnotationMissionRequest &) = default ;
    CreateAnnotationMissionRequest& operator=(CreateAnnotationMissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentKey_ == nullptr && this->annotationMissionDataSourceType_ == nullptr && this->annotationMissionDebugDataSourceList_ == nullptr && this->annotationMissionDebugDataSourceListJsonString_ == nullptr && this->annotationMissionName_ == nullptr
        && this->chatbotId_ == nullptr && this->conversationTimeEndFilter_ == nullptr && this->conversationTimeStartFilter_ == nullptr && this->excludeOtherSession_ == nullptr && this->finished_ == nullptr
        && this->instanceId_ == nullptr && this->samplingCount_ == nullptr && this->samplingRate_ == nullptr && this->samplingType_ == nullptr && this->scriptId_ == nullptr
        && this->sessionEndReasonFilterList_ == nullptr && this->sessionEndReasonFilterListJsonString_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline CreateAnnotationMissionRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateAnnotationMissionRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // annotationMissionDataSourceType Field Functions 
    bool hasAnnotationMissionDataSourceType() const { return this->annotationMissionDataSourceType_ != nullptr;};
    void deleteAnnotationMissionDataSourceType() { this->annotationMissionDataSourceType_ = nullptr;};
    inline int32_t getAnnotationMissionDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionDataSourceType_, 0) };
    inline CreateAnnotationMissionRequest& setAnnotationMissionDataSourceType(int32_t annotationMissionDataSourceType) { DARABONBA_PTR_SET_VALUE(annotationMissionDataSourceType_, annotationMissionDataSourceType) };


    // annotationMissionDebugDataSourceList Field Functions 
    bool hasAnnotationMissionDebugDataSourceList() const { return this->annotationMissionDebugDataSourceList_ != nullptr;};
    void deleteAnnotationMissionDebugDataSourceList() { this->annotationMissionDebugDataSourceList_ = nullptr;};
    inline const vector<int32_t> & getAnnotationMissionDebugDataSourceList() const { DARABONBA_PTR_GET_CONST(annotationMissionDebugDataSourceList_, vector<int32_t>) };
    inline vector<int32_t> getAnnotationMissionDebugDataSourceList() { DARABONBA_PTR_GET(annotationMissionDebugDataSourceList_, vector<int32_t>) };
    inline CreateAnnotationMissionRequest& setAnnotationMissionDebugDataSourceList(const vector<int32_t> & annotationMissionDebugDataSourceList) { DARABONBA_PTR_SET_VALUE(annotationMissionDebugDataSourceList_, annotationMissionDebugDataSourceList) };
    inline CreateAnnotationMissionRequest& setAnnotationMissionDebugDataSourceList(vector<int32_t> && annotationMissionDebugDataSourceList) { DARABONBA_PTR_SET_RVALUE(annotationMissionDebugDataSourceList_, annotationMissionDebugDataSourceList) };


    // annotationMissionDebugDataSourceListJsonString Field Functions 
    bool hasAnnotationMissionDebugDataSourceListJsonString() const { return this->annotationMissionDebugDataSourceListJsonString_ != nullptr;};
    void deleteAnnotationMissionDebugDataSourceListJsonString() { this->annotationMissionDebugDataSourceListJsonString_ = nullptr;};
    inline string getAnnotationMissionDebugDataSourceListJsonString() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionDebugDataSourceListJsonString_, "") };
    inline CreateAnnotationMissionRequest& setAnnotationMissionDebugDataSourceListJsonString(string annotationMissionDebugDataSourceListJsonString) { DARABONBA_PTR_SET_VALUE(annotationMissionDebugDataSourceListJsonString_, annotationMissionDebugDataSourceListJsonString) };


    // annotationMissionName Field Functions 
    bool hasAnnotationMissionName() const { return this->annotationMissionName_ != nullptr;};
    void deleteAnnotationMissionName() { this->annotationMissionName_ = nullptr;};
    inline string getAnnotationMissionName() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionName_, "") };
    inline CreateAnnotationMissionRequest& setAnnotationMissionName(string annotationMissionName) { DARABONBA_PTR_SET_VALUE(annotationMissionName_, annotationMissionName) };


    // chatbotId Field Functions 
    bool hasChatbotId() const { return this->chatbotId_ != nullptr;};
    void deleteChatbotId() { this->chatbotId_ = nullptr;};
    inline string getChatbotId() const { DARABONBA_PTR_GET_DEFAULT(chatbotId_, "") };
    inline CreateAnnotationMissionRequest& setChatbotId(string chatbotId) { DARABONBA_PTR_SET_VALUE(chatbotId_, chatbotId) };


    // conversationTimeEndFilter Field Functions 
    bool hasConversationTimeEndFilter() const { return this->conversationTimeEndFilter_ != nullptr;};
    void deleteConversationTimeEndFilter() { this->conversationTimeEndFilter_ = nullptr;};
    inline int64_t getConversationTimeEndFilter() const { DARABONBA_PTR_GET_DEFAULT(conversationTimeEndFilter_, 0L) };
    inline CreateAnnotationMissionRequest& setConversationTimeEndFilter(int64_t conversationTimeEndFilter) { DARABONBA_PTR_SET_VALUE(conversationTimeEndFilter_, conversationTimeEndFilter) };


    // conversationTimeStartFilter Field Functions 
    bool hasConversationTimeStartFilter() const { return this->conversationTimeStartFilter_ != nullptr;};
    void deleteConversationTimeStartFilter() { this->conversationTimeStartFilter_ = nullptr;};
    inline int64_t getConversationTimeStartFilter() const { DARABONBA_PTR_GET_DEFAULT(conversationTimeStartFilter_, 0L) };
    inline CreateAnnotationMissionRequest& setConversationTimeStartFilter(int64_t conversationTimeStartFilter) { DARABONBA_PTR_SET_VALUE(conversationTimeStartFilter_, conversationTimeStartFilter) };


    // excludeOtherSession Field Functions 
    bool hasExcludeOtherSession() const { return this->excludeOtherSession_ != nullptr;};
    void deleteExcludeOtherSession() { this->excludeOtherSession_ = nullptr;};
    inline bool getExcludeOtherSession() const { DARABONBA_PTR_GET_DEFAULT(excludeOtherSession_, false) };
    inline CreateAnnotationMissionRequest& setExcludeOtherSession(bool excludeOtherSession) { DARABONBA_PTR_SET_VALUE(excludeOtherSession_, excludeOtherSession) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline bool getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
    inline CreateAnnotationMissionRequest& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAnnotationMissionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // samplingCount Field Functions 
    bool hasSamplingCount() const { return this->samplingCount_ != nullptr;};
    void deleteSamplingCount() { this->samplingCount_ = nullptr;};
    inline int32_t getSamplingCount() const { DARABONBA_PTR_GET_DEFAULT(samplingCount_, 0) };
    inline CreateAnnotationMissionRequest& setSamplingCount(int32_t samplingCount) { DARABONBA_PTR_SET_VALUE(samplingCount_, samplingCount) };


    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline int32_t getSamplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0) };
    inline CreateAnnotationMissionRequest& setSamplingRate(int32_t samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


    // samplingType Field Functions 
    bool hasSamplingType() const { return this->samplingType_ != nullptr;};
    void deleteSamplingType() { this->samplingType_ = nullptr;};
    inline int32_t getSamplingType() const { DARABONBA_PTR_GET_DEFAULT(samplingType_, 0) };
    inline CreateAnnotationMissionRequest& setSamplingType(int32_t samplingType) { DARABONBA_PTR_SET_VALUE(samplingType_, samplingType) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateAnnotationMissionRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // sessionEndReasonFilterList Field Functions 
    bool hasSessionEndReasonFilterList() const { return this->sessionEndReasonFilterList_ != nullptr;};
    void deleteSessionEndReasonFilterList() { this->sessionEndReasonFilterList_ = nullptr;};
    inline const vector<int32_t> & getSessionEndReasonFilterList() const { DARABONBA_PTR_GET_CONST(sessionEndReasonFilterList_, vector<int32_t>) };
    inline vector<int32_t> getSessionEndReasonFilterList() { DARABONBA_PTR_GET(sessionEndReasonFilterList_, vector<int32_t>) };
    inline CreateAnnotationMissionRequest& setSessionEndReasonFilterList(const vector<int32_t> & sessionEndReasonFilterList) { DARABONBA_PTR_SET_VALUE(sessionEndReasonFilterList_, sessionEndReasonFilterList) };
    inline CreateAnnotationMissionRequest& setSessionEndReasonFilterList(vector<int32_t> && sessionEndReasonFilterList) { DARABONBA_PTR_SET_RVALUE(sessionEndReasonFilterList_, sessionEndReasonFilterList) };


    // sessionEndReasonFilterListJsonString Field Functions 
    bool hasSessionEndReasonFilterListJsonString() const { return this->sessionEndReasonFilterListJsonString_ != nullptr;};
    void deleteSessionEndReasonFilterListJsonString() { this->sessionEndReasonFilterListJsonString_ = nullptr;};
    inline string getSessionEndReasonFilterListJsonString() const { DARABONBA_PTR_GET_DEFAULT(sessionEndReasonFilterListJsonString_, "") };
    inline CreateAnnotationMissionRequest& setSessionEndReasonFilterListJsonString(string sessionEndReasonFilterListJsonString) { DARABONBA_PTR_SET_VALUE(sessionEndReasonFilterListJsonString_, sessionEndReasonFilterListJsonString) };


  protected:
    // The agent ID.
    // 
    // > You can obtain this value from the DescribeInstance operation.
    shared_ptr<string> agentId_ {};
    // The business space key.
    // 
    // > You can obtain this value from the DescribeInstance operation.
    shared_ptr<string> agentKey_ {};
    // The data type of the annotation task.
    // 
    // - 1: outbound call
    shared_ptr<int32_t> annotationMissionDataSourceType_ {};
    // The annotation data source list.
    // 
    // > This parameter has the same function as AnnotationMissionDebugDataSourceListJsonString. Specify either one of them.
    shared_ptr<vector<int32_t>> annotationMissionDebugDataSourceList_ {};
    // The debug data in JSON format.
    // > This parameter has the same function as AnnotationMissionDebugDataSourceList. Specify either one of them. The format is [1], [2], or [1,2]. You can specify multiple filter conditions in the array. The enum values for the filter conditions are as follows.
    // 
    // - 1: outbound call task
    // - 2: test task
    shared_ptr<string> annotationMissionDebugDataSourceListJsonString_ {};
    // The name of the annotation task.
    shared_ptr<string> annotationMissionName_ {};
    // The robot ID.
    // 
    // > You can obtain this value from the DescribeScript operation.
    shared_ptr<string> chatbotId_ {};
    // The end time for the call time filter.
    shared_ptr<int64_t> conversationTimeEndFilter_ {};
    // The start time for the call time filter.
    shared_ptr<int64_t> conversationTimeStartFilter_ {};
    // Specifies whether to exclude call records that have been annotated by other tasks. Default value: false.
    shared_ptr<bool> excludeOtherSession_ {};
    // Specifies whether the business ended normally.
    // 
    // > This parameter takes effect only when SessionEndReasonFilterList is not specified.
    // > - true: normal call records
    // > - false: abnormal call records
    shared_ptr<bool> finished_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The custom sampling quantity.
    // > This parameter takes effect only when SamplingType is set to 3. This parameter is required in that case. Otherwise, the creation fails.
    shared_ptr<int32_t> samplingCount_ {};
    // The sampling ratio.
    // 
    // > This parameter takes effect only when SamplingType is set to 2. This parameter is required in that case. Otherwise, the creation fails.
    shared_ptr<int32_t> samplingRate_ {};
    // The sampling type.
    // 
    // - 1: full
    // - 2: percentage
    // - 3: custom quantity
    shared_ptr<int32_t> samplingType_ {};
    // The outbound call scenario ID.
    shared_ptr<string> scriptId_ {};
    // The call result status filter conditions.
    // 
    // > This parameter has the same function as SessionEndReasonFilterListJsonString. Specify either one of them.
    shared_ptr<vector<int32_t>> sessionEndReasonFilterList_ {};
    // The call result status filter conditions.
    // 
    // > This parameter has the same function as SessionEndReasonFilterList. Specify either one of them. The format is [1], [1,2], etc. You can specify multiple filter conditions in the array. The enum values for the filter conditions are as follows.
    // 
    // **Call record filter enum values**
    // - 1: normal completion
    // - 2: robot hung up after recognition rejection
    // - 3: hung up due to silence timeout
    // - 4: user hung up after recognition rejection
    // - 5: user hung up without reason
    // - 6: transferred to agent by intent match
    // - 7: transferred to agent by recognition rejection
    // - 8: no interaction on user side
    // - 9: system exception interruption
    // - 10: transferred to IVR by intent match
    // - 11: transferred to IVR by recognition rejection
    shared_ptr<string> sessionEndReasonFilterListJsonString_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
