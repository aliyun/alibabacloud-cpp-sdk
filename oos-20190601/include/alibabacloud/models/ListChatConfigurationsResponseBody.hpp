// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATCONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATCONFIGURATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListChatConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChatConfigurations, chatConfigurations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatConfigurations, chatConfigurations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListChatConfigurationsResponseBody() = default ;
    ListChatConfigurationsResponseBody(const ListChatConfigurationsResponseBody &) = default ;
    ListChatConfigurationsResponseBody(ListChatConfigurationsResponseBody &&) = default ;
    ListChatConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatConfigurationsResponseBody() = default ;
    ListChatConfigurationsResponseBody& operator=(const ListChatConfigurationsResponseBody &) = default ;
    ListChatConfigurationsResponseBody& operator=(ListChatConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChatConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChatConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        DARABONBA_PTR_TO_JSON(RamRole, ramRole_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
      };
      friend void from_json(const Darabonba::Json& j, ChatConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(RamRole, ramRole_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
      };
      ChatConfigurations() = default ;
      ChatConfigurations(const ChatConfigurations &) = default ;
      ChatConfigurations(ChatConfigurations &&) = default ;
      ChatConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChatConfigurations() = default ;
      ChatConfigurations& operator=(const ChatConfigurations &) = default ;
      ChatConfigurations& operator=(ChatConfigurations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdDate_ == nullptr
        && this->name_ == nullptr && this->outputs_ == nullptr && this->ramRole_ == nullptr && this->type_ == nullptr && this->updatedDate_ == nullptr; };
      // createdDate Field Functions 
      bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
      void deleteCreatedDate() { this->createdDate_ = nullptr;};
      inline string getCreatedDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
      inline ChatConfigurations& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ChatConfigurations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
      inline ChatConfigurations& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


      // ramRole Field Functions 
      bool hasRamRole() const { return this->ramRole_ != nullptr;};
      void deleteRamRole() { this->ramRole_ = nullptr;};
      inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
      inline ChatConfigurations& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ChatConfigurations& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updatedDate Field Functions 
      bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
      void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
      inline string getUpdatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
      inline ChatConfigurations& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


    protected:
      shared_ptr<string> createdDate_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> outputs_ {};
      shared_ptr<string> ramRole_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> updatedDate_ {};
    };

    virtual bool empty() const override { return this->chatConfigurations_ == nullptr
        && this->requestId_ == nullptr; };
    // chatConfigurations Field Functions 
    bool hasChatConfigurations() const { return this->chatConfigurations_ != nullptr;};
    void deleteChatConfigurations() { this->chatConfigurations_ = nullptr;};
    inline const vector<ListChatConfigurationsResponseBody::ChatConfigurations> & getChatConfigurations() const { DARABONBA_PTR_GET_CONST(chatConfigurations_, vector<ListChatConfigurationsResponseBody::ChatConfigurations>) };
    inline vector<ListChatConfigurationsResponseBody::ChatConfigurations> getChatConfigurations() { DARABONBA_PTR_GET(chatConfigurations_, vector<ListChatConfigurationsResponseBody::ChatConfigurations>) };
    inline ListChatConfigurationsResponseBody& setChatConfigurations(const vector<ListChatConfigurationsResponseBody::ChatConfigurations> & chatConfigurations) { DARABONBA_PTR_SET_VALUE(chatConfigurations_, chatConfigurations) };
    inline ListChatConfigurationsResponseBody& setChatConfigurations(vector<ListChatConfigurationsResponseBody::ChatConfigurations> && chatConfigurations) { DARABONBA_PTR_SET_RVALUE(chatConfigurations_, chatConfigurations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChatConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListChatConfigurationsResponseBody::ChatConfigurations>> chatConfigurations_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
