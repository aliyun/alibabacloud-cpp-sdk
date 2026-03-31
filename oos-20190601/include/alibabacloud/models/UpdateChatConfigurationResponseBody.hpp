// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHATCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHATCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateChatConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateChatConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChatConfiguration, chatConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateChatConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatConfiguration, chatConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateChatConfigurationResponseBody() = default ;
    UpdateChatConfigurationResponseBody(const UpdateChatConfigurationResponseBody &) = default ;
    UpdateChatConfigurationResponseBody(UpdateChatConfigurationResponseBody &&) = default ;
    UpdateChatConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateChatConfigurationResponseBody() = default ;
    UpdateChatConfigurationResponseBody& operator=(const UpdateChatConfigurationResponseBody &) = default ;
    UpdateChatConfigurationResponseBody& operator=(UpdateChatConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChatConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChatConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
      };
      friend void from_json(const Darabonba::Json& j, ChatConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
      };
      ChatConfiguration() = default ;
      ChatConfiguration(const ChatConfiguration &) = default ;
      ChatConfiguration(ChatConfiguration &&) = default ;
      ChatConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChatConfiguration() = default ;
      ChatConfiguration& operator=(const ChatConfiguration &) = default ;
      ChatConfiguration& operator=(ChatConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdDate_ == nullptr
        && this->name_ == nullptr && this->updatedDate_ == nullptr; };
      // createdDate Field Functions 
      bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
      void deleteCreatedDate() { this->createdDate_ = nullptr;};
      inline string getCreatedDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
      inline ChatConfiguration& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ChatConfiguration& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // updatedDate Field Functions 
      bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
      void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
      inline string getUpdatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
      inline ChatConfiguration& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


    protected:
      shared_ptr<string> createdDate_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> updatedDate_ {};
    };

    virtual bool empty() const override { return this->chatConfiguration_ == nullptr
        && this->requestId_ == nullptr; };
    // chatConfiguration Field Functions 
    bool hasChatConfiguration() const { return this->chatConfiguration_ != nullptr;};
    void deleteChatConfiguration() { this->chatConfiguration_ = nullptr;};
    inline const UpdateChatConfigurationResponseBody::ChatConfiguration & getChatConfiguration() const { DARABONBA_PTR_GET_CONST(chatConfiguration_, UpdateChatConfigurationResponseBody::ChatConfiguration) };
    inline UpdateChatConfigurationResponseBody::ChatConfiguration getChatConfiguration() { DARABONBA_PTR_GET(chatConfiguration_, UpdateChatConfigurationResponseBody::ChatConfiguration) };
    inline UpdateChatConfigurationResponseBody& setChatConfiguration(const UpdateChatConfigurationResponseBody::ChatConfiguration & chatConfiguration) { DARABONBA_PTR_SET_VALUE(chatConfiguration_, chatConfiguration) };
    inline UpdateChatConfigurationResponseBody& setChatConfiguration(UpdateChatConfigurationResponseBody::ChatConfiguration && chatConfiguration) { DARABONBA_PTR_SET_RVALUE(chatConfiguration_, chatConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateChatConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<UpdateChatConfigurationResponseBody::ChatConfiguration> chatConfiguration_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
