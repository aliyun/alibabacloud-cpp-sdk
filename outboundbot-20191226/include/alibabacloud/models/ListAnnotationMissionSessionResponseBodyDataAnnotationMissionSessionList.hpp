// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONSESSIONRESPONSEBODYDATAANNOTATIONMISSIONSESSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONSESSIONRESPONSEBODYDATAANNOTATIONMISSIONSESSIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionChatList, annotationMissionChatList_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
      DARABONBA_PTR_TO_JSON(AnnotationStatus, annotationStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DebugConversation, debugConversation_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionChatList, annotationMissionChatList_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
      DARABONBA_PTR_FROM_JSON(AnnotationStatus, annotationStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DebugConversation, debugConversation_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList() = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList(const ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList &) = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList(ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList &&) = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList() = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& operator=(const ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList &) = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& operator=(ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionChatList_ == nullptr
        && return this->annotationMissionId_ == nullptr && return this->annotationMissionSessionId_ == nullptr && return this->annotationStatus_ == nullptr && return this->createTime_ == nullptr && return this->debugConversation_ == nullptr
        && return this->instanceId_ == nullptr && return this->jobGroupId_ == nullptr && return this->jobId_ == nullptr && return this->modifiedTime_ == nullptr && return this->scriptId_ == nullptr
        && return this->sessionId_ == nullptr && return this->version_ == nullptr; };
    // annotationMissionChatList Field Functions 
    bool hasAnnotationMissionChatList() const { return this->annotationMissionChatList_ != nullptr;};
    void deleteAnnotationMissionChatList() { this->annotationMissionChatList_ = nullptr;};
    inline const vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatList> & annotationMissionChatList() const { DARABONBA_PTR_GET_CONST(annotationMissionChatList_, vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatList>) };
    inline vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatList> annotationMissionChatList() { DARABONBA_PTR_GET(annotationMissionChatList_, vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatList>) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setAnnotationMissionChatList(const vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatList> & annotationMissionChatList) { DARABONBA_PTR_SET_VALUE(annotationMissionChatList_, annotationMissionChatList) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setAnnotationMissionChatList(vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatList> && annotationMissionChatList) { DARABONBA_PTR_SET_RVALUE(annotationMissionChatList_, annotationMissionChatList) };


    // annotationMissionId Field Functions 
    bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
    void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
    inline string annotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


    // annotationMissionSessionId Field Functions 
    bool hasAnnotationMissionSessionId() const { return this->annotationMissionSessionId_ != nullptr;};
    void deleteAnnotationMissionSessionId() { this->annotationMissionSessionId_ = nullptr;};
    inline string annotationMissionSessionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setAnnotationMissionSessionId(string annotationMissionSessionId) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionId_, annotationMissionSessionId) };


    // annotationStatus Field Functions 
    bool hasAnnotationStatus() const { return this->annotationStatus_ != nullptr;};
    void deleteAnnotationStatus() { this->annotationStatus_ = nullptr;};
    inline int32_t annotationStatus() const { DARABONBA_PTR_GET_DEFAULT(annotationStatus_, 0) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setAnnotationStatus(int32_t annotationStatus) { DARABONBA_PTR_SET_VALUE(annotationStatus_, annotationStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // debugConversation Field Functions 
    bool hasDebugConversation() const { return this->debugConversation_ != nullptr;};
    void deleteDebugConversation() { this->debugConversation_ = nullptr;};
    inline bool debugConversation() const { DARABONBA_PTR_GET_DEFAULT(debugConversation_, false) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setDebugConversation(bool debugConversation) { DARABONBA_PTR_SET_VALUE(debugConversation_, debugConversation) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatList>> annotationMissionChatList_ = nullptr;
    std::shared_ptr<string> annotationMissionId_ = nullptr;
    // ID
    std::shared_ptr<string> annotationMissionSessionId_ = nullptr;
    std::shared_ptr<int32_t> annotationStatus_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<bool> debugConversation_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
