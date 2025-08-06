// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFOLDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFOLDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddFolderRequestOption.hpp>
#include <alibabacloud/models/AddFolderRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddFolderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFolderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, AddFolderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    AddFolderRequest() = default ;
    AddFolderRequest(const AddFolderRequest &) = default ;
    AddFolderRequest(AddFolderRequest &&) = default ;
    AddFolderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFolderRequest() = default ;
    AddFolderRequest& operator=(const AddFolderRequest &) = default ;
    AddFolderRequest& operator=(AddFolderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->option_ != nullptr && this->parentId_ != nullptr && this->spaceId_ != nullptr && this->tenantContext_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddFolderRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const AddFolderRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, AddFolderRequestOption) };
    inline AddFolderRequestOption option() { DARABONBA_PTR_GET(option_, AddFolderRequestOption) };
    inline AddFolderRequest& setOption(const AddFolderRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline AddFolderRequest& setOption(AddFolderRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline AddFolderRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline AddFolderRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AddFolderRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AddFolderRequestTenantContext) };
    inline AddFolderRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, AddFolderRequestTenantContext) };
    inline AddFolderRequest& setTenantContext(const AddFolderRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AddFolderRequest& setTenantContext(AddFolderRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<AddFolderRequestOption> option_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<AddFolderRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
