// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetChatConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChatConfiguration, chatConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatConfiguration, chatConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetChatConfigurationResponseBody() = default ;
    GetChatConfigurationResponseBody(const GetChatConfigurationResponseBody &) = default ;
    GetChatConfigurationResponseBody(GetChatConfigurationResponseBody &&) = default ;
    GetChatConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatConfigurationResponseBody() = default ;
    GetChatConfigurationResponseBody& operator=(const GetChatConfigurationResponseBody &) = default ;
    GetChatConfigurationResponseBody& operator=(GetChatConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChatConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChatConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(Configuration, configuration_);
        DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        DARABONBA_PTR_TO_JSON(RamRole, ramRole_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
      };
      friend void from_json(const Darabonba::Json& j, ChatConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
        DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(RamRole, ramRole_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->configuration_ == nullptr
        && this->createdDate_ == nullptr && this->name_ == nullptr && this->outputs_ == nullptr && this->ramRole_ == nullptr && this->resourceGroupId_ == nullptr
        && this->type_ == nullptr && this->updatedDate_ == nullptr; };
      // configuration Field Functions 
      bool hasConfiguration() const { return this->configuration_ != nullptr;};
      void deleteConfiguration() { this->configuration_ = nullptr;};
      inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
      inline ChatConfiguration& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


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


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
      inline ChatConfiguration& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


      // ramRole Field Functions 
      bool hasRamRole() const { return this->ramRole_ != nullptr;};
      void deleteRamRole() { this->ramRole_ = nullptr;};
      inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
      inline ChatConfiguration& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ChatConfiguration& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ChatConfiguration& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updatedDate Field Functions 
      bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
      void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
      inline string getUpdatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
      inline ChatConfiguration& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


    protected:
      shared_ptr<string> configuration_ {};
      shared_ptr<string> createdDate_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> outputs_ {};
      shared_ptr<string> ramRole_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> updatedDate_ {};
    };

    virtual bool empty() const override { return this->chatConfiguration_ == nullptr
        && this->requestId_ == nullptr; };
    // chatConfiguration Field Functions 
    bool hasChatConfiguration() const { return this->chatConfiguration_ != nullptr;};
    void deleteChatConfiguration() { this->chatConfiguration_ = nullptr;};
    inline const GetChatConfigurationResponseBody::ChatConfiguration & getChatConfiguration() const { DARABONBA_PTR_GET_CONST(chatConfiguration_, GetChatConfigurationResponseBody::ChatConfiguration) };
    inline GetChatConfigurationResponseBody::ChatConfiguration getChatConfiguration() { DARABONBA_PTR_GET(chatConfiguration_, GetChatConfigurationResponseBody::ChatConfiguration) };
    inline GetChatConfigurationResponseBody& setChatConfiguration(const GetChatConfigurationResponseBody::ChatConfiguration & chatConfiguration) { DARABONBA_PTR_SET_VALUE(chatConfiguration_, chatConfiguration) };
    inline GetChatConfigurationResponseBody& setChatConfiguration(GetChatConfigurationResponseBody::ChatConfiguration && chatConfiguration) { DARABONBA_PTR_SET_RVALUE(chatConfiguration_, chatConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetChatConfigurationResponseBody::ChatConfiguration> chatConfiguration_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
