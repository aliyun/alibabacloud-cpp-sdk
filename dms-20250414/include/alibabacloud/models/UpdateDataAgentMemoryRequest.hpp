// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAAGENTMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAAGENTMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateDataAgentMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataAgentMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(FromId, fromId_);
      DARABONBA_PTR_TO_JSON(MemFrom, memFrom_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataAgentMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(FromId, fromId_);
      DARABONBA_PTR_FROM_JSON(MemFrom, memFrom_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    UpdateDataAgentMemoryRequest() = default ;
    UpdateDataAgentMemoryRequest(const UpdateDataAgentMemoryRequest &) = default ;
    UpdateDataAgentMemoryRequest(UpdateDataAgentMemoryRequest &&) = default ;
    UpdateDataAgentMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataAgentMemoryRequest() = default ;
    UpdateDataAgentMemoryRequest& operator=(const UpdateDataAgentMemoryRequest &) = default ;
    UpdateDataAgentMemoryRequest& operator=(UpdateDataAgentMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->DMSUnit_ == nullptr && this->fromId_ == nullptr && this->memFrom_ == nullptr && this->uuid_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateDataAgentMemoryRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline UpdateDataAgentMemoryRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // fromId Field Functions 
    bool hasFromId() const { return this->fromId_ != nullptr;};
    void deleteFromId() { this->fromId_ = nullptr;};
    inline string getFromId() const { DARABONBA_PTR_GET_DEFAULT(fromId_, "") };
    inline UpdateDataAgentMemoryRequest& setFromId(string fromId) { DARABONBA_PTR_SET_VALUE(fromId_, fromId) };


    // memFrom Field Functions 
    bool hasMemFrom() const { return this->memFrom_ != nullptr;};
    void deleteMemFrom() { this->memFrom_ = nullptr;};
    inline string getMemFrom() const { DARABONBA_PTR_GET_DEFAULT(memFrom_, "") };
    inline UpdateDataAgentMemoryRequest& setMemFrom(string memFrom) { DARABONBA_PTR_SET_VALUE(memFrom_, memFrom) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline UpdateDataAgentMemoryRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The memory content.
    shared_ptr<string> content_ {};
    // The current DMS unit.
    shared_ptr<string> DMSUnit_ {};
    // The source ID.
    // - If MemFrom is set to session, FromId indicates the session ID.
    // - If MemFrom is set to user, FromId indicates the RAM user ID.
    shared_ptr<string> fromId_ {};
    // The memory source. Valid values:
    // 
    // - session: generated from a session.
    // - user: edited by a user.
    shared_ptr<string> memFrom_ {};
    // The memory UUID.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
