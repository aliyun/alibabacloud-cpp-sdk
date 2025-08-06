// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFOLDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFOLDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddFolderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFolderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Option, optionShrink_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddFolderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Option, optionShrink_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    AddFolderShrinkRequest() = default ;
    AddFolderShrinkRequest(const AddFolderShrinkRequest &) = default ;
    AddFolderShrinkRequest(AddFolderShrinkRequest &&) = default ;
    AddFolderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFolderShrinkRequest() = default ;
    AddFolderShrinkRequest& operator=(const AddFolderShrinkRequest &) = default ;
    AddFolderShrinkRequest& operator=(AddFolderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->optionShrink_ != nullptr && this->parentId_ != nullptr && this->spaceId_ != nullptr && this->tenantContextShrink_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddFolderShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // optionShrink Field Functions 
    bool hasOptionShrink() const { return this->optionShrink_ != nullptr;};
    void deleteOptionShrink() { this->optionShrink_ = nullptr;};
    inline string optionShrink() const { DARABONBA_PTR_GET_DEFAULT(optionShrink_, "") };
    inline AddFolderShrinkRequest& setOptionShrink(string optionShrink) { DARABONBA_PTR_SET_VALUE(optionShrink_, optionShrink) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline AddFolderShrinkRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline AddFolderShrinkRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline AddFolderShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> optionShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
