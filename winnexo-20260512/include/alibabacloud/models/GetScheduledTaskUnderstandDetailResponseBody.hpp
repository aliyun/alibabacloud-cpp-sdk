// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULEDTASKUNDERSTANDDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULEDTASKUNDERSTANDDETAILRESPONSEBODY_HPP_
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
  class GetScheduledTaskUnderstandDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduledTaskUnderstandDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(relatedObjects, relatedObjects_);
      DARABONBA_PTR_TO_JSON(relatedSemantics, relatedSemantics_);
      DARABONBA_PTR_TO_JSON(relatedSkills, relatedSkills_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(taskUnderstand, taskUnderstand_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduledTaskUnderstandDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(relatedObjects, relatedObjects_);
      DARABONBA_PTR_FROM_JSON(relatedSemantics, relatedSemantics_);
      DARABONBA_PTR_FROM_JSON(relatedSkills, relatedSkills_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(taskUnderstand, taskUnderstand_);
    };
    GetScheduledTaskUnderstandDetailResponseBody() = default ;
    GetScheduledTaskUnderstandDetailResponseBody(const GetScheduledTaskUnderstandDetailResponseBody &) = default ;
    GetScheduledTaskUnderstandDetailResponseBody(GetScheduledTaskUnderstandDetailResponseBody &&) = default ;
    GetScheduledTaskUnderstandDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduledTaskUnderstandDetailResponseBody() = default ;
    GetScheduledTaskUnderstandDetailResponseBody& operator=(const GetScheduledTaskUnderstandDetailResponseBody &) = default ;
    GetScheduledTaskUnderstandDetailResponseBody& operator=(GetScheduledTaskUnderstandDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RelatedSkills : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelatedSkills& obj) { 
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(skillCode, skillCode_);
        DARABONBA_PTR_TO_JSON(sourceIds, sourceIds_);
      };
      friend void from_json(const Darabonba::Json& j, RelatedSkills& obj) { 
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(skillCode, skillCode_);
        DARABONBA_PTR_FROM_JSON(sourceIds, sourceIds_);
      };
      RelatedSkills() = default ;
      RelatedSkills(const RelatedSkills &) = default ;
      RelatedSkills(RelatedSkills &&) = default ;
      RelatedSkills(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RelatedSkills() = default ;
      RelatedSkills& operator=(const RelatedSkills &) = default ;
      RelatedSkills& operator=(RelatedSkills &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->name_ == nullptr && this->skillCode_ == nullptr && this->sourceIds_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline RelatedSkills& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RelatedSkills& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // skillCode Field Functions 
      bool hasSkillCode() const { return this->skillCode_ != nullptr;};
      void deleteSkillCode() { this->skillCode_ = nullptr;};
      inline string getSkillCode() const { DARABONBA_PTR_GET_DEFAULT(skillCode_, "") };
      inline RelatedSkills& setSkillCode(string skillCode) { DARABONBA_PTR_SET_VALUE(skillCode_, skillCode) };


      // sourceIds Field Functions 
      bool hasSourceIds() const { return this->sourceIds_ != nullptr;};
      void deleteSourceIds() { this->sourceIds_ = nullptr;};
      inline const vector<string> & getSourceIds() const { DARABONBA_PTR_GET_CONST(sourceIds_, vector<string>) };
      inline vector<string> getSourceIds() { DARABONBA_PTR_GET(sourceIds_, vector<string>) };
      inline RelatedSkills& setSourceIds(const vector<string> & sourceIds) { DARABONBA_PTR_SET_VALUE(sourceIds_, sourceIds) };
      inline RelatedSkills& setSourceIds(vector<string> && sourceIds) { DARABONBA_PTR_SET_RVALUE(sourceIds_, sourceIds) };


    protected:
      // The display name of the MCP service.
      shared_ptr<string> displayName_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The skill code.
      shared_ptr<string> skillCode_ {};
      // The list of source IDs for related skills.
      shared_ptr<vector<string>> sourceIds_ {};
    };

    class RelatedSemantics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelatedSemantics& obj) { 
        DARABONBA_PTR_TO_JSON(attributes, attributes_);
        DARABONBA_PTR_TO_JSON(entity, entity_);
      };
      friend void from_json(const Darabonba::Json& j, RelatedSemantics& obj) { 
        DARABONBA_PTR_FROM_JSON(attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(entity, entity_);
      };
      RelatedSemantics() = default ;
      RelatedSemantics(const RelatedSemantics &) = default ;
      RelatedSemantics(RelatedSemantics &&) = default ;
      RelatedSemantics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RelatedSemantics() = default ;
      RelatedSemantics& operator=(const RelatedSemantics &) = default ;
      RelatedSemantics& operator=(RelatedSemantics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->entity_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
      inline RelatedSemantics& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


      // entity Field Functions 
      bool hasEntity() const { return this->entity_ != nullptr;};
      void deleteEntity() { this->entity_ = nullptr;};
      inline string getEntity() const { DARABONBA_PTR_GET_DEFAULT(entity_, "") };
      inline RelatedSemantics& setEntity(string entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };


    protected:
      // The information type.
      shared_ptr<string> attributes_ {};
      // The semantic entity name, such as customer or opportunity.
      shared_ptr<string> entity_ {};
    };

    class RelatedObjects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelatedObjects& obj) { 
        DARABONBA_PTR_TO_JSON(mentionType, mentionType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(objectId, objectId_);
        DARABONBA_PTR_TO_JSON(objectType, objectType_);
      };
      friend void from_json(const Darabonba::Json& j, RelatedObjects& obj) { 
        DARABONBA_PTR_FROM_JSON(mentionType, mentionType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(objectId, objectId_);
        DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      };
      RelatedObjects() = default ;
      RelatedObjects(const RelatedObjects &) = default ;
      RelatedObjects(RelatedObjects &&) = default ;
      RelatedObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RelatedObjects() = default ;
      RelatedObjects& operator=(const RelatedObjects &) = default ;
      RelatedObjects& operator=(RelatedObjects &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mentionType_ == nullptr
        && this->name_ == nullptr && this->objectId_ == nullptr && this->objectType_ == nullptr; };
      // mentionType Field Functions 
      bool hasMentionType() const { return this->mentionType_ != nullptr;};
      void deleteMentionType() { this->mentionType_ = nullptr;};
      inline string getMentionType() const { DARABONBA_PTR_GET_DEFAULT(mentionType_, "") };
      inline RelatedObjects& setMentionType(string mentionType) { DARABONBA_PTR_SET_VALUE(mentionType_, mentionType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RelatedObjects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline RelatedObjects& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline RelatedObjects& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    protected:
      // The mention type, such as objects.
      shared_ptr<string> mentionType_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The object ID. Pass the project task ID.
      // 
      // - For internal enterprise applications, this is the taskId obtained by calling the [Create a project task](https://open.dingtalk.com/document/orgapp-server/create-a-project-task) operation.
      // 
      // - For third-party enterprise applications, this is the taskId obtained by calling the [Create a project task](https://open.dingtalk.com/document/isvapp-server/create-a-project-task) operation.
      shared_ptr<string> objectId_ {};
      // The object type, such as customer. This parameter has a value when type is set to mention.
      shared_ptr<string> objectType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->relatedObjects_ == nullptr && this->relatedSemantics_ == nullptr && this->relatedSkills_ == nullptr && this->requestId_ == nullptr
        && this->taskUnderstand_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetScheduledTaskUnderstandDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetScheduledTaskUnderstandDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // relatedObjects Field Functions 
    bool hasRelatedObjects() const { return this->relatedObjects_ != nullptr;};
    void deleteRelatedObjects() { this->relatedObjects_ = nullptr;};
    inline const vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedObjects> & getRelatedObjects() const { DARABONBA_PTR_GET_CONST(relatedObjects_, vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedObjects>) };
    inline vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedObjects> getRelatedObjects() { DARABONBA_PTR_GET(relatedObjects_, vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedObjects>) };
    inline GetScheduledTaskUnderstandDetailResponseBody& setRelatedObjects(const vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedObjects> & relatedObjects) { DARABONBA_PTR_SET_VALUE(relatedObjects_, relatedObjects) };
    inline GetScheduledTaskUnderstandDetailResponseBody& setRelatedObjects(vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedObjects> && relatedObjects) { DARABONBA_PTR_SET_RVALUE(relatedObjects_, relatedObjects) };


    // relatedSemantics Field Functions 
    bool hasRelatedSemantics() const { return this->relatedSemantics_ != nullptr;};
    void deleteRelatedSemantics() { this->relatedSemantics_ = nullptr;};
    inline const vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSemantics> & getRelatedSemantics() const { DARABONBA_PTR_GET_CONST(relatedSemantics_, vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSemantics>) };
    inline vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSemantics> getRelatedSemantics() { DARABONBA_PTR_GET(relatedSemantics_, vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSemantics>) };
    inline GetScheduledTaskUnderstandDetailResponseBody& setRelatedSemantics(const vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSemantics> & relatedSemantics) { DARABONBA_PTR_SET_VALUE(relatedSemantics_, relatedSemantics) };
    inline GetScheduledTaskUnderstandDetailResponseBody& setRelatedSemantics(vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSemantics> && relatedSemantics) { DARABONBA_PTR_SET_RVALUE(relatedSemantics_, relatedSemantics) };


    // relatedSkills Field Functions 
    bool hasRelatedSkills() const { return this->relatedSkills_ != nullptr;};
    void deleteRelatedSkills() { this->relatedSkills_ = nullptr;};
    inline const vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSkills> & getRelatedSkills() const { DARABONBA_PTR_GET_CONST(relatedSkills_, vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSkills>) };
    inline vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSkills> getRelatedSkills() { DARABONBA_PTR_GET(relatedSkills_, vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSkills>) };
    inline GetScheduledTaskUnderstandDetailResponseBody& setRelatedSkills(const vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSkills> & relatedSkills) { DARABONBA_PTR_SET_VALUE(relatedSkills_, relatedSkills) };
    inline GetScheduledTaskUnderstandDetailResponseBody& setRelatedSkills(vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSkills> && relatedSkills) { DARABONBA_PTR_SET_RVALUE(relatedSkills_, relatedSkills) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScheduledTaskUnderstandDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskUnderstand Field Functions 
    bool hasTaskUnderstand() const { return this->taskUnderstand_ != nullptr;};
    void deleteTaskUnderstand() { this->taskUnderstand_ = nullptr;};
    inline string getTaskUnderstand() const { DARABONBA_PTR_GET_DEFAULT(taskUnderstand_, "") };
    inline GetScheduledTaskUnderstandDetailResponseBody& setTaskUnderstand(string taskUnderstand) { DARABONBA_PTR_SET_VALUE(taskUnderstand_, taskUnderstand) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The related objects.
    shared_ptr<vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedObjects>> relatedObjects_ {};
    // The related semantics.
    shared_ptr<vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSemantics>> relatedSemantics_ {};
    // The related skills.
    shared_ptr<vector<GetScheduledTaskUnderstandDetailResponseBody::RelatedSkills>> relatedSkills_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task understanding description polished by the LLM.
    shared_ptr<string> taskUnderstand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
