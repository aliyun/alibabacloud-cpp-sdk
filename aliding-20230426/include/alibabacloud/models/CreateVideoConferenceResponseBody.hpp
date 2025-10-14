// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIDEOCONFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIDEOCONFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateVideoConferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVideoConferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(conferencePassword, conferencePassword_);
      DARABONBA_PTR_TO_JSON(externalLinkUrl, externalLinkUrl_);
      DARABONBA_PTR_TO_JSON(hostPassword, hostPassword_);
      DARABONBA_PTR_TO_JSON(phoneNumbers, phoneNumbers_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(roomCode, roomCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVideoConferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(conferencePassword, conferencePassword_);
      DARABONBA_PTR_FROM_JSON(externalLinkUrl, externalLinkUrl_);
      DARABONBA_PTR_FROM_JSON(hostPassword, hostPassword_);
      DARABONBA_PTR_FROM_JSON(phoneNumbers, phoneNumbers_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(roomCode, roomCode_);
    };
    CreateVideoConferenceResponseBody() = default ;
    CreateVideoConferenceResponseBody(const CreateVideoConferenceResponseBody &) = default ;
    CreateVideoConferenceResponseBody(CreateVideoConferenceResponseBody &&) = default ;
    CreateVideoConferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVideoConferenceResponseBody() = default ;
    CreateVideoConferenceResponseBody& operator=(const CreateVideoConferenceResponseBody &) = default ;
    CreateVideoConferenceResponseBody& operator=(CreateVideoConferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conferenceId_ == nullptr
        && return this->conferencePassword_ == nullptr && return this->externalLinkUrl_ == nullptr && return this->hostPassword_ == nullptr && return this->phoneNumbers_ == nullptr && return this->requestId_ == nullptr
        && return this->roomCode_ == nullptr; };
    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline CreateVideoConferenceResponseBody& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // conferencePassword Field Functions 
    bool hasConferencePassword() const { return this->conferencePassword_ != nullptr;};
    void deleteConferencePassword() { this->conferencePassword_ = nullptr;};
    inline string conferencePassword() const { DARABONBA_PTR_GET_DEFAULT(conferencePassword_, "") };
    inline CreateVideoConferenceResponseBody& setConferencePassword(string conferencePassword) { DARABONBA_PTR_SET_VALUE(conferencePassword_, conferencePassword) };


    // externalLinkUrl Field Functions 
    bool hasExternalLinkUrl() const { return this->externalLinkUrl_ != nullptr;};
    void deleteExternalLinkUrl() { this->externalLinkUrl_ = nullptr;};
    inline string externalLinkUrl() const { DARABONBA_PTR_GET_DEFAULT(externalLinkUrl_, "") };
    inline CreateVideoConferenceResponseBody& setExternalLinkUrl(string externalLinkUrl) { DARABONBA_PTR_SET_VALUE(externalLinkUrl_, externalLinkUrl) };


    // hostPassword Field Functions 
    bool hasHostPassword() const { return this->hostPassword_ != nullptr;};
    void deleteHostPassword() { this->hostPassword_ = nullptr;};
    inline string hostPassword() const { DARABONBA_PTR_GET_DEFAULT(hostPassword_, "") };
    inline CreateVideoConferenceResponseBody& setHostPassword(string hostPassword) { DARABONBA_PTR_SET_VALUE(hostPassword_, hostPassword) };


    // phoneNumbers Field Functions 
    bool hasPhoneNumbers() const { return this->phoneNumbers_ != nullptr;};
    void deletePhoneNumbers() { this->phoneNumbers_ = nullptr;};
    inline const vector<string> & phoneNumbers() const { DARABONBA_PTR_GET_CONST(phoneNumbers_, vector<string>) };
    inline vector<string> phoneNumbers() { DARABONBA_PTR_GET(phoneNumbers_, vector<string>) };
    inline CreateVideoConferenceResponseBody& setPhoneNumbers(const vector<string> & phoneNumbers) { DARABONBA_PTR_SET_VALUE(phoneNumbers_, phoneNumbers) };
    inline CreateVideoConferenceResponseBody& setPhoneNumbers(vector<string> && phoneNumbers) { DARABONBA_PTR_SET_RVALUE(phoneNumbers_, phoneNumbers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVideoConferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roomCode Field Functions 
    bool hasRoomCode() const { return this->roomCode_ != nullptr;};
    void deleteRoomCode() { this->roomCode_ = nullptr;};
    inline string roomCode() const { DARABONBA_PTR_GET_DEFAULT(roomCode_, "") };
    inline CreateVideoConferenceResponseBody& setRoomCode(string roomCode) { DARABONBA_PTR_SET_VALUE(roomCode_, roomCode) };


  protected:
    std::shared_ptr<string> conferenceId_ = nullptr;
    std::shared_ptr<string> conferencePassword_ = nullptr;
    std::shared_ptr<string> externalLinkUrl_ = nullptr;
    std::shared_ptr<string> hostPassword_ = nullptr;
    std::shared_ptr<vector<string>> phoneNumbers_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> roomCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
