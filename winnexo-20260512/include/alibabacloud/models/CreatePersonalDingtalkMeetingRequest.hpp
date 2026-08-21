// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERSONALDINGTALKMEETINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERSONALDINGTALKMEETINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreatePersonalDingtalkMeetingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePersonalDingtalkMeetingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notes, notes_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(roomCode, roomCode_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePersonalDingtalkMeetingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notes, notes_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(roomCode, roomCode_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreatePersonalDingtalkMeetingRequest() = default ;
    CreatePersonalDingtalkMeetingRequest(const CreatePersonalDingtalkMeetingRequest &) = default ;
    CreatePersonalDingtalkMeetingRequest(CreatePersonalDingtalkMeetingRequest &&) = default ;
    CreatePersonalDingtalkMeetingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePersonalDingtalkMeetingRequest() = default ;
    CreatePersonalDingtalkMeetingRequest& operator=(const CreatePersonalDingtalkMeetingRequest &) = default ;
    CreatePersonalDingtalkMeetingRequest& operator=(CreatePersonalDingtalkMeetingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialId_ == nullptr
        && this->description_ == nullptr && this->directoryId_ == nullptr && this->name_ == nullptr && this->notes_ == nullptr && this->operatingObjectName_ == nullptr
        && this->roomCode_ == nullptr && this->tenantId_ == nullptr; };
    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline CreatePersonalDingtalkMeetingRequest& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePersonalDingtalkMeetingRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreatePersonalDingtalkMeetingRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePersonalDingtalkMeetingRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline CreatePersonalDingtalkMeetingRequest& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreatePersonalDingtalkMeetingRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // roomCode Field Functions 
    bool hasRoomCode() const { return this->roomCode_ != nullptr;};
    void deleteRoomCode() { this->roomCode_ = nullptr;};
    inline string getRoomCode() const { DARABONBA_PTR_GET_DEFAULT(roomCode_, "") };
    inline CreatePersonalDingtalkMeetingRequest& setRoomCode(string roomCode) { DARABONBA_PTR_SET_VALUE(roomCode_, roomCode) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreatePersonalDingtalkMeetingRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The credential ID.
    shared_ptr<string> credentialId_ {};
    // The pipeline description.
    shared_ptr<string> description_ {};
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The image name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The meeting notes content (optional). The notes are used for auxiliary analysis.
    shared_ptr<string> notes_ {};
    // The name of the digital employee (operating object name, optional).
    shared_ptr<string> operatingObjectName_ {};
    // The meeting code.
    // 
    // This parameter is required.
    shared_ptr<string> roomCode_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
