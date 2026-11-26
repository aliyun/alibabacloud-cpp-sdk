// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSOURCEUSAGESUMMARYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSOURCEUSAGESUMMARYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class QuerySourceUsageSummaryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySourceUsageSummaryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(eventType, eventType_);
      DARABONBA_PTR_TO_JSON(knowledgeBaseIds, knowledgeBaseIdsShrink_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(scopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(sourceIds, sourceIdsShrink_);
      DARABONBA_PTR_TO_JSON(sourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySourceUsageSummaryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(eventType, eventType_);
      DARABONBA_PTR_FROM_JSON(knowledgeBaseIds, knowledgeBaseIdsShrink_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(scopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(sourceIds, sourceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(sourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    QuerySourceUsageSummaryShrinkRequest() = default ;
    QuerySourceUsageSummaryShrinkRequest(const QuerySourceUsageSummaryShrinkRequest &) = default ;
    QuerySourceUsageSummaryShrinkRequest(QuerySourceUsageSummaryShrinkRequest &&) = default ;
    QuerySourceUsageSummaryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySourceUsageSummaryShrinkRequest() = default ;
    QuerySourceUsageSummaryShrinkRequest& operator=(const QuerySourceUsageSummaryShrinkRequest &) = default ;
    QuerySourceUsageSummaryShrinkRequest& operator=(QuerySourceUsageSummaryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->endTime_ == nullptr && this->eventType_ == nullptr && this->knowledgeBaseIdsShrink_ == nullptr && this->opsUserCode_ == nullptr
        && this->opsUserId_ == nullptr && this->scopeType_ == nullptr && this->sourceIdsShrink_ == nullptr && this->sourceName_ == nullptr && this->startTime_ == nullptr
        && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline QuerySourceUsageSummaryShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline QuerySourceUsageSummaryShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QuerySourceUsageSummaryShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline QuerySourceUsageSummaryShrinkRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // knowledgeBaseIdsShrink Field Functions 
    bool hasKnowledgeBaseIdsShrink() const { return this->knowledgeBaseIdsShrink_ != nullptr;};
    void deleteKnowledgeBaseIdsShrink() { this->knowledgeBaseIdsShrink_ = nullptr;};
    inline string getKnowledgeBaseIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseIdsShrink_, "") };
    inline QuerySourceUsageSummaryShrinkRequest& setKnowledgeBaseIdsShrink(string knowledgeBaseIdsShrink) { DARABONBA_PTR_SET_VALUE(knowledgeBaseIdsShrink_, knowledgeBaseIdsShrink) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline QuerySourceUsageSummaryShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline QuerySourceUsageSummaryShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline QuerySourceUsageSummaryShrinkRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // sourceIdsShrink Field Functions 
    bool hasSourceIdsShrink() const { return this->sourceIdsShrink_ != nullptr;};
    void deleteSourceIdsShrink() { this->sourceIdsShrink_ = nullptr;};
    inline string getSourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceIdsShrink_, "") };
    inline QuerySourceUsageSummaryShrinkRequest& setSourceIdsShrink(string sourceIdsShrink) { DARABONBA_PTR_SET_VALUE(sourceIdsShrink_, sourceIdsShrink) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline QuerySourceUsageSummaryShrinkRequest& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QuerySourceUsageSummaryShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline QuerySourceUsageSummaryShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The platform application token issued by the console. If specified, the request is executed as the user identified by opsUserId or opsUserCode.
    shared_ptr<string> appToken_ {};
    // The ID of the collaboration group to which the resource belongs, such as cg_101. If specified, a group workspace task is created, and the caller must be a valid group member. If left empty, a personal task is created.
    shared_ptr<string> collaborationGroupId_ {};
    // The actual end timestamp of the live stream, in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The event type.
    shared_ptr<string> eventType_ {};
    // The IDs of the knowledge base folders.
    shared_ptr<string> knowledgeBaseIdsShrink_ {};
    // The proxy user code, which is unique within the tenant. This parameter is used only when the application credential is configured as source_uid.
    shared_ptr<string> opsUserCode_ {};
    // The proxy user ID, which is the WINNEXO platform user ID. This parameter is used only when the application credential is configured as winnexo_uid.
    shared_ptr<string> opsUserId_ {};
    // The role scope type. Valid values:
    // - **ALL_VISIBLE**: All members.
    // - **PART_VISIBLE**: Partial members.
    // 
    // This parameter is required.
    shared_ptr<string> scopeType_ {};
    // The source IDs.
    shared_ptr<string> sourceIdsShrink_ {};
    // The resume channel source.
    shared_ptr<string> sourceName_ {};
    // The start time of the query. The value is a UNIX timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The tenant ID. This is a common parameter. For winnexo-cli, this parameter is explicitly passed by using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
