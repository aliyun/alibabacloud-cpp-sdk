// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateKnowledgeBaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateKnowledgeBaseResponseBody() = default ;
    CreateKnowledgeBaseResponseBody(const CreateKnowledgeBaseResponseBody &) = default ;
    CreateKnowledgeBaseResponseBody(CreateKnowledgeBaseResponseBody &&) = default ;
    CreateKnowledgeBaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseResponseBody() = default ;
    CreateKnowledgeBaseResponseBody& operator=(const CreateKnowledgeBaseResponseBody &) = default ;
    CreateKnowledgeBaseResponseBody& operator=(CreateKnowledgeBaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessRole, accessRole_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessRole, accessRole_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->accessRole_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->knowledgeBaseId_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // accessRole Field Functions 
      bool hasAccessRole() const { return this->accessRole_ != nullptr;};
      void deleteAccessRole() { this->accessRole_ = nullptr;};
      inline string getAccessRole() const { DARABONBA_PTR_GET_DEFAULT(accessRole_, "") };
      inline Data& setAccessRole(string accessRole) { DARABONBA_PTR_SET_VALUE(accessRole_, accessRole) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // knowledgeBaseId Field Functions 
      bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
      void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
      inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
      inline Data& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Data& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The access role of the current caller for the knowledge base. Upon successful creation, the value is OWNER, which indicates the owner.
      shared_ptr<string> accessRole_ {};
      // The creation time of the knowledge base. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The description of the knowledge base. This field may not be returned if it is not set.
      shared_ptr<string> description_ {};
      // The stable knowledge base ID generated by the server. You can use this ID to read the knowledge base, register sources, and create build tasks.
      shared_ptr<string> knowledgeBaseId_ {};
      // The last modification time of the knowledge base. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> modifyTime_ {};
      // The name of the knowledge base.
      shared_ptr<string> name_ {};
      // The DataWorks user ID of the knowledge base owner, which is determined by the server based on the caller identity.
      shared_ptr<string> owner_ {};
      // The status of the knowledge base. Upon successful creation, the value is ACTIVE, which indicates that the knowledge base is available for normal use.
      shared_ptr<string> status_ {};
      // The type of the knowledge base. A value of PERSONAL indicates a personal knowledge base, and a value of ENTERPRISE indicates an enterprise knowledge base.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateKnowledgeBaseResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateKnowledgeBaseResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateKnowledgeBaseResponseBody::Data) };
    inline CreateKnowledgeBaseResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateKnowledgeBaseResponseBody::Data) };
    inline CreateKnowledgeBaseResponseBody& setData(const CreateKnowledgeBaseResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateKnowledgeBaseResponseBody& setData(CreateKnowledgeBaseResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateKnowledgeBaseResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKnowledgeBaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateKnowledgeBaseResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code returned when the request fails. This field is not returned when the request is successful.
    shared_ptr<string> code_ {};
    // The knowledge base information returned upon successful creation.
    shared_ptr<CreateKnowledgeBaseResponseBody::Data> data_ {};
    // The error message returned when the request fails. This field is not returned when the request is successful.
    shared_ptr<string> message_ {};
    // The unique ID of the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
