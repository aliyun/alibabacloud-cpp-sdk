// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTACTFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTACTFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetContactFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContactFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetContactFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetContactFlowResponseBody() = default ;
    GetContactFlowResponseBody(const GetContactFlowResponseBody &) = default ;
    GetContactFlowResponseBody(GetContactFlowResponseBody &&) = default ;
    GetContactFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContactFlowResponseBody() = default ;
    GetContactFlowResponseBody& operator=(const GetContactFlowResponseBody &) = default ;
    GetContactFlowResponseBody& operator=(GetContactFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Definition, definition_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DraftId, draftId_);
        DARABONBA_PTR_TO_JSON(Editor, editor_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Published, published_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Definition, definition_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DraftId, draftId_);
        DARABONBA_PTR_FROM_JSON(Editor, editor_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Published, published_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
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
      virtual bool empty() const override { return this->contactFlowId_ == nullptr
        && this->createdTime_ == nullptr && this->definition_ == nullptr && this->description_ == nullptr && this->draftId_ == nullptr && this->editor_ == nullptr
        && this->instanceId_ == nullptr && this->name_ == nullptr && this->published_ == nullptr && this->type_ == nullptr && this->updatedTime_ == nullptr; };
      // contactFlowId Field Functions 
      bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
      void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
      inline string getContactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
      inline Data& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Data& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // definition Field Functions 
      bool hasDefinition() const { return this->definition_ != nullptr;};
      void deleteDefinition() { this->definition_ = nullptr;};
      inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
      inline Data& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // draftId Field Functions 
      bool hasDraftId() const { return this->draftId_ != nullptr;};
      void deleteDraftId() { this->draftId_ = nullptr;};
      inline string getDraftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
      inline Data& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


      // editor Field Functions 
      bool hasEditor() const { return this->editor_ != nullptr;};
      void deleteEditor() { this->editor_ = nullptr;};
      inline string getEditor() const { DARABONBA_PTR_GET_DEFAULT(editor_, "") };
      inline Data& setEditor(string editor) { DARABONBA_PTR_SET_VALUE(editor_, editor) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // published Field Functions 
      bool hasPublished() const { return this->published_ != nullptr;};
      void deletePublished() { this->published_ = nullptr;};
      inline bool getPublished() const { DARABONBA_PTR_GET_DEFAULT(published_, false) };
      inline Data& setPublished(bool published) { DARABONBA_PTR_SET_VALUE(published_, published) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
      inline Data& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    protected:
      shared_ptr<string> contactFlowId_ {};
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> definition_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> draftId_ {};
      shared_ptr<string> editor_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> published_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> updatedTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetContactFlowResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetContactFlowResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetContactFlowResponseBody::Data) };
    inline GetContactFlowResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetContactFlowResponseBody::Data) };
    inline GetContactFlowResponseBody& setData(const GetContactFlowResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetContactFlowResponseBody& setData(GetContactFlowResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetContactFlowResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetContactFlowResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContactFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetContactFlowResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
