// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateKnowledgeBaseDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(directoryKind, directoryKind_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parentDirectoryId, parentDirectoryId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(directoryKind, directoryKind_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parentDirectoryId, parentDirectoryId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateKnowledgeBaseDirectoryResponseBody() = default ;
    CreateKnowledgeBaseDirectoryResponseBody(const CreateKnowledgeBaseDirectoryResponseBody &) = default ;
    CreateKnowledgeBaseDirectoryResponseBody(CreateKnowledgeBaseDirectoryResponseBody &&) = default ;
    CreateKnowledgeBaseDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseDirectoryResponseBody() = default ;
    CreateKnowledgeBaseDirectoryResponseBody& operator=(const CreateKnowledgeBaseDirectoryResponseBody &) = default ;
    CreateKnowledgeBaseDirectoryResponseBody& operator=(CreateKnowledgeBaseDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->directoryId_ == nullptr && this->directoryKind_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->message_ == nullptr && this->name_ == nullptr && this->parentDirectoryId_ == nullptr && this->path_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateKnowledgeBaseDirectoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKnowledgeBaseDirectoryResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateKnowledgeBaseDirectoryResponseBody& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // directoryKind Field Functions 
    bool hasDirectoryKind() const { return this->directoryKind_ != nullptr;};
    void deleteDirectoryKind() { this->directoryKind_ = nullptr;};
    inline string getDirectoryKind() const { DARABONBA_PTR_GET_DEFAULT(directoryKind_, "") };
    inline CreateKnowledgeBaseDirectoryResponseBody& setDirectoryKind(string directoryKind) { DARABONBA_PTR_SET_VALUE(directoryKind_, directoryKind) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline CreateKnowledgeBaseDirectoryResponseBody& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline CreateKnowledgeBaseDirectoryResponseBody& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateKnowledgeBaseDirectoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateKnowledgeBaseDirectoryResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentDirectoryId Field Functions 
    bool hasParentDirectoryId() const { return this->parentDirectoryId_ != nullptr;};
    void deleteParentDirectoryId() { this->parentDirectoryId_ = nullptr;};
    inline string getParentDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(parentDirectoryId_, "") };
    inline CreateKnowledgeBaseDirectoryResponseBody& setParentDirectoryId(string parentDirectoryId) { DARABONBA_PTR_SET_VALUE(parentDirectoryId_, parentDirectoryId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateKnowledgeBaseDirectoryResponseBody& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKnowledgeBaseDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The description of the to-do card type.
    shared_ptr<string> description_ {};
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The directory type.
    shared_ptr<string> directoryKind_ {};
    // The creation time.
    shared_ptr<int64_t> gmtCreate_ {};
    // The last modification time.
    shared_ptr<int64_t> gmtModified_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The name.
    shared_ptr<string> name_ {};
    // The directory ID.
    shared_ptr<string> parentDirectoryId_ {};
    // The path of the node.
    shared_ptr<string> path_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
