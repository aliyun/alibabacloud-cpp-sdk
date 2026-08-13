// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULEDTASKUNDERSTANDDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULEDTASKUNDERSTANDDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetScheduledTaskUnderstandDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduledTaskUnderstandDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(segments, segments_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userInput, userInput_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduledTaskUnderstandDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(segments, segments_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userInput, userInput_);
    };
    GetScheduledTaskUnderstandDetailRequest() = default ;
    GetScheduledTaskUnderstandDetailRequest(const GetScheduledTaskUnderstandDetailRequest &) = default ;
    GetScheduledTaskUnderstandDetailRequest(GetScheduledTaskUnderstandDetailRequest &&) = default ;
    GetScheduledTaskUnderstandDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduledTaskUnderstandDetailRequest() = default ;
    GetScheduledTaskUnderstandDetailRequest& operator=(const GetScheduledTaskUnderstandDetailRequest &) = default ;
    GetScheduledTaskUnderstandDetailRequest& operator=(GetScheduledTaskUnderstandDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Segments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Segments& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(objectId, objectId_);
        DARABONBA_PTR_TO_JSON(objectType, objectType_);
        DARABONBA_PTR_TO_JSON(skillCode, skillCode_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Segments& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(objectId, objectId_);
        DARABONBA_PTR_FROM_JSON(objectType, objectType_);
        DARABONBA_PTR_FROM_JSON(skillCode, skillCode_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Segments() = default ;
      Segments(const Segments &) = default ;
      Segments(Segments &&) = default ;
      Segments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Segments() = default ;
      Segments& operator=(const Segments &) = default ;
      Segments& operator=(Segments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->enabled_ == nullptr && this->name_ == nullptr && this->objectId_ == nullptr && this->objectType_ == nullptr && this->skillCode_ == nullptr
        && this->type_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Segments& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline string getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
      inline Segments& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Segments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline Segments& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline Segments& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


      // skillCode Field Functions 
      bool hasSkillCode() const { return this->skillCode_ != nullptr;};
      void deleteSkillCode() { this->skillCode_ = nullptr;};
      inline string getSkillCode() const { DARABONBA_PTR_GET_DEFAULT(skillCode_, "") };
      inline Segments& setSkillCode(string skillCode) { DARABONBA_PTR_SET_VALUE(skillCode_, skillCode) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Segments& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // 文本内容，type=text 时必填
      shared_ptr<string> content_ {};
      // 功能开关，type=web_search 时可选
      shared_ptr<string> enabled_ {};
      // 文件名
      shared_ptr<string> name_ {};
      // 对象 ID，type=mention 时有值
      shared_ptr<string> objectId_ {};
      // 对象类型如 customer，type=mention 时有值
      shared_ptr<string> objectType_ {};
      // 技能编码，type=skill 时有值
      shared_ptr<string> skillCode_ {};
      // 元素类型：text|web_search|mention|skill
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->digitalEmployeeName_ == nullptr && this->segments_ == nullptr && this->tenantId_ == nullptr && this->userInput_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline GetScheduledTaskUnderstandDetailRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline const vector<string> & getDigitalEmployeeName() const { DARABONBA_PTR_GET_CONST(digitalEmployeeName_, vector<string>) };
    inline vector<string> getDigitalEmployeeName() { DARABONBA_PTR_GET(digitalEmployeeName_, vector<string>) };
    inline GetScheduledTaskUnderstandDetailRequest& setDigitalEmployeeName(const vector<string> & digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };
    inline GetScheduledTaskUnderstandDetailRequest& setDigitalEmployeeName(vector<string> && digitalEmployeeName) { DARABONBA_PTR_SET_RVALUE(digitalEmployeeName_, digitalEmployeeName) };


    // segments Field Functions 
    bool hasSegments() const { return this->segments_ != nullptr;};
    void deleteSegments() { this->segments_ = nullptr;};
    inline const vector<GetScheduledTaskUnderstandDetailRequest::Segments> & getSegments() const { DARABONBA_PTR_GET_CONST(segments_, vector<GetScheduledTaskUnderstandDetailRequest::Segments>) };
    inline vector<GetScheduledTaskUnderstandDetailRequest::Segments> getSegments() { DARABONBA_PTR_GET(segments_, vector<GetScheduledTaskUnderstandDetailRequest::Segments>) };
    inline GetScheduledTaskUnderstandDetailRequest& setSegments(const vector<GetScheduledTaskUnderstandDetailRequest::Segments> & segments) { DARABONBA_PTR_SET_VALUE(segments_, segments) };
    inline GetScheduledTaskUnderstandDetailRequest& setSegments(vector<GetScheduledTaskUnderstandDetailRequest::Segments> && segments) { DARABONBA_PTR_SET_RVALUE(segments_, segments) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetScheduledTaskUnderstandDetailRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userInput Field Functions 
    bool hasUserInput() const { return this->userInput_ != nullptr;};
    void deleteUserInput() { this->userInput_ = nullptr;};
    inline string getUserInput() const { DARABONBA_PTR_GET_DEFAULT(userInput_, "") };
    inline GetScheduledTaskUnderstandDetailRequest& setUserInput(string userInput) { DARABONBA_PTR_SET_VALUE(userInput_, userInput) };


  protected:
    // 所属协作群组 ID（如 cg_101）；群任务理解时传入（调用者需为有效群成员），候选技能额外并入群绑定技能
    shared_ptr<string> collaborationGroupId_ {};
    // 数字员工名称列表，用于过滤可用技能；必传（传空列表表示仅用租户 global 技能）
    // 
    // This parameter is required.
    shared_ptr<vector<string>> digitalEmployeeName_ {};
    shared_ptr<vector<GetScheduledTaskUnderstandDetailRequest::Segments>> segments_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 自然语言任务描述
    // 
    // This parameter is required.
    shared_ptr<string> userInput_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
