// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTSKILLRESPONSEBODY_HPP_
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
  class CreateAgentSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillInfo, skillInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillInfo, skillInfo_);
    };
    CreateAgentSkillResponseBody() = default ;
    CreateAgentSkillResponseBody(const CreateAgentSkillResponseBody &) = default ;
    CreateAgentSkillResponseBody(CreateAgentSkillResponseBody &&) = default ;
    CreateAgentSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentSkillResponseBody() = default ;
    CreateAgentSkillResponseBody& operator=(const CreateAgentSkillResponseBody &) = default ;
    CreateAgentSkillResponseBody& operator=(CreateAgentSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SkillInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SkillInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Instruction, instruction_);
        DARABONBA_PTR_TO_JSON(SkillId, skillId_);
        DARABONBA_PTR_TO_JSON(SkillName, skillName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, SkillInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Instruction, instruction_);
        DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
        DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      SkillInfo() = default ;
      SkillInfo(const SkillInfo &) = default ;
      SkillInfo(SkillInfo &&) = default ;
      SkillInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SkillInfo() = default ;
      SkillInfo& operator=(const SkillInfo &) = default ;
      SkillInfo& operator=(SkillInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->instruction_ == nullptr && this->skillId_ == nullptr && this->skillName_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SkillInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instruction Field Functions 
      bool hasInstruction() const { return this->instruction_ != nullptr;};
      void deleteInstruction() { this->instruction_ = nullptr;};
      inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
      inline SkillInfo& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


      // skillId Field Functions 
      bool hasSkillId() const { return this->skillId_ != nullptr;};
      void deleteSkillId() { this->skillId_ = nullptr;};
      inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
      inline SkillInfo& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


      // skillName Field Functions 
      bool hasSkillName() const { return this->skillName_ != nullptr;};
      void deleteSkillName() { this->skillName_ = nullptr;};
      inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
      inline SkillInfo& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SkillInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SkillInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The skill description.
      shared_ptr<string> description_ {};
      // The skill summary.
      shared_ptr<string> instruction_ {};
      // The unique ID of the skill.
      shared_ptr<string> skillId_ {};
      // The skill name.
      shared_ptr<string> skillName_ {};
      // The skill status.
      shared_ptr<string> status_ {};
      // The skill type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->skillInfo_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateAgentSkillResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateAgentSkillResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAgentSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillInfo Field Functions 
    bool hasSkillInfo() const { return this->skillInfo_ != nullptr;};
    void deleteSkillInfo() { this->skillInfo_ = nullptr;};
    inline const vector<CreateAgentSkillResponseBody::SkillInfo> & getSkillInfo() const { DARABONBA_PTR_GET_CONST(skillInfo_, vector<CreateAgentSkillResponseBody::SkillInfo>) };
    inline vector<CreateAgentSkillResponseBody::SkillInfo> getSkillInfo() { DARABONBA_PTR_GET(skillInfo_, vector<CreateAgentSkillResponseBody::SkillInfo>) };
    inline CreateAgentSkillResponseBody& setSkillInfo(const vector<CreateAgentSkillResponseBody::SkillInfo> & skillInfo) { DARABONBA_PTR_SET_VALUE(skillInfo_, skillInfo) };
    inline CreateAgentSkillResponseBody& setSkillInfo(vector<CreateAgentSkillResponseBody::SkillInfo> && skillInfo) { DARABONBA_PTR_SET_RVALUE(skillInfo_, skillInfo) };


  protected:
    // The status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The skill information.
    shared_ptr<vector<CreateAgentSkillResponseBody::SkillInfo>> skillInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
