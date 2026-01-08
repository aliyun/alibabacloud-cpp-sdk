// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONVERSATIONALAUTOMATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONVERSATIONALAUTOMATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetConversationalAutomationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConversationalAutomationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetConversationalAutomationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetConversationalAutomationResponseBody() = default ;
    GetConversationalAutomationResponseBody(const GetConversationalAutomationResponseBody &) = default ;
    GetConversationalAutomationResponseBody(GetConversationalAutomationResponseBody &&) = default ;
    GetConversationalAutomationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConversationalAutomationResponseBody() = default ;
    GetConversationalAutomationResponseBody& operator=(const GetConversationalAutomationResponseBody &) = default ;
    GetConversationalAutomationResponseBody& operator=(GetConversationalAutomationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Commands, commands_);
        DARABONBA_PTR_TO_JSON(EnableWelcomeMessage, enableWelcomeMessage_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(Prompts, prompts_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Commands, commands_);
        DARABONBA_PTR_FROM_JSON(EnableWelcomeMessage, enableWelcomeMessage_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(Prompts, prompts_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Commands : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Commands& obj) { 
          DARABONBA_PTR_TO_JSON(CommandDescription, commandDescription_);
          DARABONBA_PTR_TO_JSON(CommandName, commandName_);
        };
        friend void from_json(const Darabonba::Json& j, Commands& obj) { 
          DARABONBA_PTR_FROM_JSON(CommandDescription, commandDescription_);
          DARABONBA_PTR_FROM_JSON(CommandName, commandName_);
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
        virtual bool empty() const override { return this->commandDescription_ == nullptr
        && this->commandName_ == nullptr; };
        // commandDescription Field Functions 
        bool hasCommandDescription() const { return this->commandDescription_ != nullptr;};
        void deleteCommandDescription() { this->commandDescription_ = nullptr;};
        inline string getCommandDescription() const { DARABONBA_PTR_GET_DEFAULT(commandDescription_, "") };
        inline Commands& setCommandDescription(string commandDescription) { DARABONBA_PTR_SET_VALUE(commandDescription_, commandDescription) };


        // commandName Field Functions 
        bool hasCommandName() const { return this->commandName_ != nullptr;};
        void deleteCommandName() { this->commandName_ = nullptr;};
        inline string getCommandName() const { DARABONBA_PTR_GET_DEFAULT(commandName_, "") };
        inline Commands& setCommandName(string commandName) { DARABONBA_PTR_SET_VALUE(commandName_, commandName) };


      protected:
        // The description of the command.
        shared_ptr<string> commandDescription_ {};
        // The name of the command.
        shared_ptr<string> commandName_ {};
      };

      virtual bool empty() const override { return this->commands_ == nullptr
        && this->enableWelcomeMessage_ == nullptr && this->phoneNumber_ == nullptr && this->prompts_ == nullptr; };
      // commands Field Functions 
      bool hasCommands() const { return this->commands_ != nullptr;};
      void deleteCommands() { this->commands_ = nullptr;};
      inline const vector<Data::Commands> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<Data::Commands>) };
      inline vector<Data::Commands> getCommands() { DARABONBA_PTR_GET(commands_, vector<Data::Commands>) };
      inline Data& setCommands(const vector<Data::Commands> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
      inline Data& setCommands(vector<Data::Commands> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


      // enableWelcomeMessage Field Functions 
      bool hasEnableWelcomeMessage() const { return this->enableWelcomeMessage_ != nullptr;};
      void deleteEnableWelcomeMessage() { this->enableWelcomeMessage_ = nullptr;};
      inline bool getEnableWelcomeMessage() const { DARABONBA_PTR_GET_DEFAULT(enableWelcomeMessage_, false) };
      inline Data& setEnableWelcomeMessage(bool enableWelcomeMessage) { DARABONBA_PTR_SET_VALUE(enableWelcomeMessage_, enableWelcomeMessage) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Data& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // prompts Field Functions 
      bool hasPrompts() const { return this->prompts_ != nullptr;};
      void deletePrompts() { this->prompts_ = nullptr;};
      inline const vector<string> & getPrompts() const { DARABONBA_PTR_GET_CONST(prompts_, vector<string>) };
      inline vector<string> getPrompts() { DARABONBA_PTR_GET(prompts_, vector<string>) };
      inline Data& setPrompts(const vector<string> & prompts) { DARABONBA_PTR_SET_VALUE(prompts_, prompts) };
      inline Data& setPrompts(vector<string> && prompts) { DARABONBA_PTR_SET_RVALUE(prompts_, prompts) };


    protected:
      // The commands.
      shared_ptr<vector<Data::Commands>> commands_ {};
      // Indicates whether the welcoming message is enabled.
      shared_ptr<bool> enableWelcomeMessage_ {};
      // The phone number of the enterprise.
      shared_ptr<string> phoneNumber_ {};
      // The opening remarks.
      shared_ptr<vector<string>> prompts_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetConversationalAutomationResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConversationalAutomationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetConversationalAutomationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetConversationalAutomationResponseBody::Data) };
    inline GetConversationalAutomationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetConversationalAutomationResponseBody::Data) };
    inline GetConversationalAutomationResponseBody& setData(const GetConversationalAutomationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConversationalAutomationResponseBody& setData(GetConversationalAutomationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConversationalAutomationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConversationalAutomationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetConversationalAutomationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   For more information about other response codes, see [Error codes](https://help.aliyun.com/document_detail/196974.html).
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetConversationalAutomationResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
