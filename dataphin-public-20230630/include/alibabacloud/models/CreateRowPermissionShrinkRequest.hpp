// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROWPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROWPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateRowPermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRowPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateRowPermissionCommand, createRowPermissionCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRowPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateRowPermissionCommand, createRowPermissionCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateRowPermissionShrinkRequest() = default ;
    CreateRowPermissionShrinkRequest(const CreateRowPermissionShrinkRequest &) = default ;
    CreateRowPermissionShrinkRequest(CreateRowPermissionShrinkRequest &&) = default ;
    CreateRowPermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRowPermissionShrinkRequest() = default ;
    CreateRowPermissionShrinkRequest& operator=(const CreateRowPermissionShrinkRequest &) = default ;
    CreateRowPermissionShrinkRequest& operator=(CreateRowPermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createRowPermissionCommandShrink_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // createRowPermissionCommandShrink Field Functions 
    bool hasCreateRowPermissionCommandShrink() const { return this->createRowPermissionCommandShrink_ != nullptr;};
    void deleteCreateRowPermissionCommandShrink() { this->createRowPermissionCommandShrink_ = nullptr;};
    inline string createRowPermissionCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(createRowPermissionCommandShrink_, "") };
    inline CreateRowPermissionShrinkRequest& setCreateRowPermissionCommandShrink(string createRowPermissionCommandShrink) { DARABONBA_PTR_SET_VALUE(createRowPermissionCommandShrink_, createRowPermissionCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateRowPermissionShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> createRowPermissionCommandShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
