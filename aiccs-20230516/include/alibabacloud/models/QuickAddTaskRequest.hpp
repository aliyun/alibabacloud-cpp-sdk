// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUICKADDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUICKADDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class QuickAddTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuickAddTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentGroupId, agentGroupId_);
      DARABONBA_PTR_TO_JSON(CallTimeList, callTimeList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReferenceTaskId, referenceTaskId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmsTemplateId, smsTemplateId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, QuickAddTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentGroupId, agentGroupId_);
      DARABONBA_PTR_FROM_JSON(CallTimeList, callTimeList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReferenceTaskId, referenceTaskId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateId, smsTemplateId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    QuickAddTaskRequest() = default ;
    QuickAddTaskRequest(const QuickAddTaskRequest &) = default ;
    QuickAddTaskRequest(QuickAddTaskRequest &&) = default ;
    QuickAddTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuickAddTaskRequest() = default ;
    QuickAddTaskRequest& operator=(const QuickAddTaskRequest &) = default ;
    QuickAddTaskRequest& operator=(QuickAddTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CallTimeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallTimeList& obj) { 
        DARABONBA_PTR_TO_JSON(CallTime, callTime_);
      };
      friend void from_json(const Darabonba::Json& j, CallTimeList& obj) { 
        DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
      };
      CallTimeList() = default ;
      CallTimeList(const CallTimeList &) = default ;
      CallTimeList(CallTimeList &&) = default ;
      CallTimeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallTimeList() = default ;
      CallTimeList& operator=(const CallTimeList &) = default ;
      CallTimeList& operator=(CallTimeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callTime_ == nullptr; };
      // callTime Field Functions 
      bool hasCallTime() const { return this->callTime_ != nullptr;};
      void deleteCallTime() { this->callTime_ = nullptr;};
      inline const vector<string> & getCallTime() const { DARABONBA_PTR_GET_CONST(callTime_, vector<string>) };
      inline vector<string> getCallTime() { DARABONBA_PTR_GET(callTime_, vector<string>) };
      inline CallTimeList& setCallTime(const vector<string> & callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };
      inline CallTimeList& setCallTime(vector<string> && callTime) { DARABONBA_PTR_SET_RVALUE(callTime_, callTime) };


    protected:
      // 外呼时间
      shared_ptr<vector<string>> callTime_ {};
    };

    virtual bool empty() const override { return this->agentGroupId_ == nullptr
        && this->callTimeList_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr && this->referenceTaskId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->smsTemplateId_ == nullptr && this->startTime_ == nullptr && this->templateId_ == nullptr && this->templateType_ == nullptr; };
    // agentGroupId Field Functions 
    bool hasAgentGroupId() const { return this->agentGroupId_ != nullptr;};
    void deleteAgentGroupId() { this->agentGroupId_ = nullptr;};
    inline int64_t getAgentGroupId() const { DARABONBA_PTR_GET_DEFAULT(agentGroupId_, 0L) };
    inline QuickAddTaskRequest& setAgentGroupId(int64_t agentGroupId) { DARABONBA_PTR_SET_VALUE(agentGroupId_, agentGroupId) };


    // callTimeList Field Functions 
    bool hasCallTimeList() const { return this->callTimeList_ != nullptr;};
    void deleteCallTimeList() { this->callTimeList_ = nullptr;};
    inline const vector<QuickAddTaskRequest::CallTimeList> & getCallTimeList() const { DARABONBA_PTR_GET_CONST(callTimeList_, vector<QuickAddTaskRequest::CallTimeList>) };
    inline vector<QuickAddTaskRequest::CallTimeList> getCallTimeList() { DARABONBA_PTR_GET(callTimeList_, vector<QuickAddTaskRequest::CallTimeList>) };
    inline QuickAddTaskRequest& setCallTimeList(const vector<QuickAddTaskRequest::CallTimeList> & callTimeList) { DARABONBA_PTR_SET_VALUE(callTimeList_, callTimeList) };
    inline QuickAddTaskRequest& setCallTimeList(vector<QuickAddTaskRequest::CallTimeList> && callTimeList) { DARABONBA_PTR_SET_RVALUE(callTimeList_, callTimeList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QuickAddTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuickAddTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // referenceTaskId Field Functions 
    bool hasReferenceTaskId() const { return this->referenceTaskId_ != nullptr;};
    void deleteReferenceTaskId() { this->referenceTaskId_ = nullptr;};
    inline int64_t getReferenceTaskId() const { DARABONBA_PTR_GET_DEFAULT(referenceTaskId_, 0L) };
    inline QuickAddTaskRequest& setReferenceTaskId(int64_t referenceTaskId) { DARABONBA_PTR_SET_VALUE(referenceTaskId_, referenceTaskId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QuickAddTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QuickAddTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smsTemplateId Field Functions 
    bool hasSmsTemplateId() const { return this->smsTemplateId_ != nullptr;};
    void deleteSmsTemplateId() { this->smsTemplateId_ = nullptr;};
    inline int64_t getSmsTemplateId() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateId_, 0L) };
    inline QuickAddTaskRequest& setSmsTemplateId(int64_t smsTemplateId) { DARABONBA_PTR_SET_VALUE(smsTemplateId_, smsTemplateId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QuickAddTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline QuickAddTaskRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int64_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0L) };
    inline QuickAddTaskRequest& setTemplateType(int64_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // 坐席组ID
    shared_ptr<int64_t> agentGroupId_ {};
    // 外呼时间
    shared_ptr<vector<QuickAddTaskRequest::CallTimeList>> callTimeList_ {};
    // 任务名称
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 被复制任务ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> referenceTaskId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 短信模板ID
    shared_ptr<int64_t> smsTemplateId_ {};
    // 任务启动日期
    shared_ptr<string> startTime_ {};
    // 话术模板ID,如果不传则使用被复制任务的话术模板
    shared_ptr<int64_t> templateId_ {};
    // 话术模板类型
    shared_ptr<int64_t> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
