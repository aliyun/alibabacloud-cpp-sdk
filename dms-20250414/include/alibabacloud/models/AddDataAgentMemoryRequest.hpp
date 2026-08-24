// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATAAGENTMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATAAGENTMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AddDataAgentMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataAgentMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(FromId, fromId_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MemFrom, memFrom_);
      DARABONBA_PTR_TO_JSON(SessionUuid, sessionUuid_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataAgentMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(FromId, fromId_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MemFrom, memFrom_);
      DARABONBA_PTR_FROM_JSON(SessionUuid, sessionUuid_);
    };
    AddDataAgentMemoryRequest() = default ;
    AddDataAgentMemoryRequest(const AddDataAgentMemoryRequest &) = default ;
    AddDataAgentMemoryRequest(AddDataAgentMemoryRequest &&) = default ;
    AddDataAgentMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataAgentMemoryRequest() = default ;
    AddDataAgentMemoryRequest& operator=(const AddDataAgentMemoryRequest &) = default ;
    AddDataAgentMemoryRequest& operator=(AddDataAgentMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->DMSUnit_ == nullptr && this->fromId_ == nullptr && this->label_ == nullptr && this->memFrom_ == nullptr && this->sessionUuid_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline AddDataAgentMemoryRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline AddDataAgentMemoryRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // fromId Field Functions 
    bool hasFromId() const { return this->fromId_ != nullptr;};
    void deleteFromId() { this->fromId_ = nullptr;};
    inline string getFromId() const { DARABONBA_PTR_GET_DEFAULT(fromId_, "") };
    inline AddDataAgentMemoryRequest& setFromId(string fromId) { DARABONBA_PTR_SET_VALUE(fromId_, fromId) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline AddDataAgentMemoryRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // memFrom Field Functions 
    bool hasMemFrom() const { return this->memFrom_ != nullptr;};
    void deleteMemFrom() { this->memFrom_ = nullptr;};
    inline string getMemFrom() const { DARABONBA_PTR_GET_DEFAULT(memFrom_, "") };
    inline AddDataAgentMemoryRequest& setMemFrom(string memFrom) { DARABONBA_PTR_SET_VALUE(memFrom_, memFrom) };


    // sessionUuid Field Functions 
    bool hasSessionUuid() const { return this->sessionUuid_ != nullptr;};
    void deleteSessionUuid() { this->sessionUuid_ = nullptr;};
    inline string getSessionUuid() const { DARABONBA_PTR_GET_DEFAULT(sessionUuid_, "") };
    inline AddDataAgentMemoryRequest& setSessionUuid(string sessionUuid) { DARABONBA_PTR_SET_VALUE(sessionUuid_, sessionUuid) };


  protected:
    // The memory content.
    shared_ptr<string> content_ {};
    // The current DMS unit.
    shared_ptr<string> DMSUnit_ {};
    // The source ID.
    // - If MemFrom is set to session, FromId indicates the session ID.
    // - If MemFrom is set to user, FromId indicates the RAM user ID.
    shared_ptr<string> fromId_ {};
    // The memory label. Valid values:
    // - fact_specifications: fact definitions.
    // - task_constraints: node constraints.
    // - execution_config: execution configuration.
    shared_ptr<string> label_ {};
    // The memory source. Valid values:
    // - session: generated from a session.
    // - user: edited by a user.
    shared_ptr<string> memFrom_ {};
    // The session ID.
    // - Note: This parameter is deprecated.
    shared_ptr<string> sessionUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
