// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETENANTDIRECTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETENANTDIRECTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateTenantDirectoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTenantDirectoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTenantDirectoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreateTenantDirectoryRequest() = default ;
    CreateTenantDirectoryRequest(const CreateTenantDirectoryRequest &) = default ;
    CreateTenantDirectoryRequest(CreateTenantDirectoryRequest &&) = default ;
    CreateTenantDirectoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTenantDirectoryRequest() = default ;
    CreateTenantDirectoryRequest& operator=(const CreateTenantDirectoryRequest &) = default ;
    CreateTenantDirectoryRequest& operator=(CreateTenantDirectoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->parentId_ == nullptr && this->path_ == nullptr && this->tenantId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTenantDirectoryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTenantDirectoryRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline CreateTenantDirectoryRequest& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateTenantDirectoryRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateTenantDirectoryRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The description of the to-do card type.
    shared_ptr<string> description_ {};
    // The name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The ID of the parent node.
    shared_ptr<int64_t> parentId_ {};
    // The path of the node.
    shared_ptr<string> path_ {};
    // The ID of the effective tenant.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
