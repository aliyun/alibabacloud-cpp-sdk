// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEASSETATTRIBUTESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEASSETATTRIBUTESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateAssetAttributesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAssetAttributesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAssetAttributesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommandShrink_);
    };
    UpdateAssetAttributesShrinkRequest() = default ;
    UpdateAssetAttributesShrinkRequest(const UpdateAssetAttributesShrinkRequest &) = default ;
    UpdateAssetAttributesShrinkRequest(UpdateAssetAttributesShrinkRequest &&) = default ;
    UpdateAssetAttributesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAssetAttributesShrinkRequest() = default ;
    UpdateAssetAttributesShrinkRequest& operator=(const UpdateAssetAttributesShrinkRequest &) = default ;
    UpdateAssetAttributesShrinkRequest& operator=(UpdateAssetAttributesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->updateCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateAssetAttributesShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpdateAssetAttributesShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // updateCommandShrink Field Functions 
    bool hasUpdateCommandShrink() const { return this->updateCommandShrink_ != nullptr;};
    void deleteUpdateCommandShrink() { this->updateCommandShrink_ = nullptr;};
    inline string getUpdateCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(updateCommandShrink_, "") };
    inline UpdateAssetAttributesShrinkRequest& setUpdateCommandShrink(string updateCommandShrink) { DARABONBA_PTR_SET_VALUE(updateCommandShrink_, updateCommandShrink) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The update command.
    // 
    // This parameter is required.
    shared_ptr<string> updateCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
