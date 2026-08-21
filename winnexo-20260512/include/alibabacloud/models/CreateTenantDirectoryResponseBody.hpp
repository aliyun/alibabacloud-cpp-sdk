// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETENANTDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETENANTDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateTenantDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTenantDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTenantDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    CreateTenantDirectoryResponseBody() = default ;
    CreateTenantDirectoryResponseBody(const CreateTenantDirectoryResponseBody &) = default ;
    CreateTenantDirectoryResponseBody(CreateTenantDirectoryResponseBody &&) = default ;
    CreateTenantDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTenantDirectoryResponseBody() = default ;
    CreateTenantDirectoryResponseBody& operator=(const CreateTenantDirectoryResponseBody &) = default ;
    CreateTenantDirectoryResponseBody& operator=(CreateTenantDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->directoryId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->message_ == nullptr && this->name_ == nullptr && this->operatingObjectName_ == nullptr && this->parentId_ == nullptr && this->path_ == nullptr
        && this->requestId_ == nullptr && this->tenantId_ == nullptr && this->userId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateTenantDirectoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTenantDirectoryResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateTenantDirectoryResponseBody& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline CreateTenantDirectoryResponseBody& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline CreateTenantDirectoryResponseBody& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateTenantDirectoryResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateTenantDirectoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTenantDirectoryResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreateTenantDirectoryResponseBody& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline CreateTenantDirectoryResponseBody& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateTenantDirectoryResponseBody& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTenantDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline CreateTenantDirectoryResponseBody& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline CreateTenantDirectoryResponseBody& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The description of the to-do card type.
    shared_ptr<string> description_ {};
    // The directory ID.
    // 
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
    // The creation time.
    shared_ptr<int64_t> gmtCreate_ {};
    // The last modification time.
    shared_ptr<int64_t> gmtModified_ {};
    // Id of the request
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The name of the digital employee (the operating object name, optional).
    shared_ptr<string> operatingObjectName_ {};
    // The ID of the parent node.
    shared_ptr<int64_t> parentId_ {};
    // The path of the node.
    // 
    // This parameter is required.
    shared_ptr<string> path_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the effective tenant.
    // 
    // This parameter is required.
    shared_ptr<int64_t> tenantId_ {};
    // The user ID of the creator.
    // 
    // This parameter is required.
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
