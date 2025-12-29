// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHVOICEBOXCOMMANDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHVOICEBOXCOMMANDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class PushVoiceBoxCommandsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushVoiceBoxCommandsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Commands, commands_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
    };
    friend void from_json(const Darabonba::Json& j, PushVoiceBoxCommandsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
    };
    PushVoiceBoxCommandsRequest() = default ;
    PushVoiceBoxCommandsRequest(const PushVoiceBoxCommandsRequest &) = default ;
    PushVoiceBoxCommandsRequest(PushVoiceBoxCommandsRequest &&) = default ;
    PushVoiceBoxCommandsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushVoiceBoxCommandsRequest() = default ;
    PushVoiceBoxCommandsRequest& operator=(const PushVoiceBoxCommandsRequest &) = default ;
    PushVoiceBoxCommandsRequest& operator=(PushVoiceBoxCommandsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Commands : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Commands& obj) { 
        DARABONBA_PTR_TO_JSON(CommandDomain, commandDomain_);
        DARABONBA_PTR_TO_JSON(CommandName, commandName_);
        DARABONBA_PTR_TO_JSON(Payload, payload_);
      };
      friend void from_json(const Darabonba::Json& j, Commands& obj) { 
        DARABONBA_PTR_FROM_JSON(CommandDomain, commandDomain_);
        DARABONBA_PTR_FROM_JSON(CommandName, commandName_);
        DARABONBA_PTR_FROM_JSON(Payload, payload_);
      };
      Commands() = default ;
      Commands(const Commands &) = default ;
      Commands(Commands &&) = default ;
      Commands(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Commands() = default ;
      Commands& operator=(const Commands &) = default ;
      Commands& operator=(Commands &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commandDomain_ == nullptr
        && this->commandName_ == nullptr && this->payload_ == nullptr; };
      // commandDomain Field Functions 
      bool hasCommandDomain() const { return this->commandDomain_ != nullptr;};
      void deleteCommandDomain() { this->commandDomain_ = nullptr;};
      inline string getCommandDomain() const { DARABONBA_PTR_GET_DEFAULT(commandDomain_, "") };
      inline Commands& setCommandDomain(string commandDomain) { DARABONBA_PTR_SET_VALUE(commandDomain_, commandDomain) };


      // commandName Field Functions 
      bool hasCommandName() const { return this->commandName_ != nullptr;};
      void deleteCommandName() { this->commandName_ = nullptr;};
      inline string getCommandName() const { DARABONBA_PTR_GET_DEFAULT(commandName_, "") };
      inline Commands& setCommandName(string commandName) { DARABONBA_PTR_SET_VALUE(commandName_, commandName) };


      // payload Field Functions 
      bool hasPayload() const { return this->payload_ != nullptr;};
      void deletePayload() { this->payload_ = nullptr;};
      inline string getPayload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
      inline Commands& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    protected:
      // This parameter is required.
      shared_ptr<string> commandDomain_ {};
      // This parameter is required.
      shared_ptr<string> commandName_ {};
      shared_ptr<string> payload_ {};
    };

    virtual bool empty() const override { return this->commands_ == nullptr
        && this->hotelId_ == nullptr && this->roomNo_ == nullptr; };
    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<PushVoiceBoxCommandsRequest::Commands> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<PushVoiceBoxCommandsRequest::Commands>) };
    inline vector<PushVoiceBoxCommandsRequest::Commands> getCommands() { DARABONBA_PTR_GET(commands_, vector<PushVoiceBoxCommandsRequest::Commands>) };
    inline PushVoiceBoxCommandsRequest& setCommands(const vector<PushVoiceBoxCommandsRequest::Commands> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline PushVoiceBoxCommandsRequest& setCommands(vector<PushVoiceBoxCommandsRequest::Commands> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline PushVoiceBoxCommandsRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline PushVoiceBoxCommandsRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


  protected:
    // This parameter is required.
    shared_ptr<vector<PushVoiceBoxCommandsRequest::Commands>> commands_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> roomNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
