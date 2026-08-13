// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOGGLEPRIMARYOBJECTFAVORITESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TOGGLEPRIMARYOBJECTFAVORITESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class TogglePrimaryObjectFavoriteShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TogglePrimaryObjectFavoriteShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(objectIds, objectIdsShrink_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, TogglePrimaryObjectFavoriteShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(objectIds, objectIdsShrink_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    TogglePrimaryObjectFavoriteShrinkRequest() = default ;
    TogglePrimaryObjectFavoriteShrinkRequest(const TogglePrimaryObjectFavoriteShrinkRequest &) = default ;
    TogglePrimaryObjectFavoriteShrinkRequest(TogglePrimaryObjectFavoriteShrinkRequest &&) = default ;
    TogglePrimaryObjectFavoriteShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TogglePrimaryObjectFavoriteShrinkRequest() = default ;
    TogglePrimaryObjectFavoriteShrinkRequest& operator=(const TogglePrimaryObjectFavoriteShrinkRequest &) = default ;
    TogglePrimaryObjectFavoriteShrinkRequest& operator=(TogglePrimaryObjectFavoriteShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->objectIdsShrink_ == nullptr && this->objectType_ == nullptr && this->operatingObjectName_ == nullptr && this->tenantId_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline TogglePrimaryObjectFavoriteShrinkRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // objectIdsShrink Field Functions 
    bool hasObjectIdsShrink() const { return this->objectIdsShrink_ != nullptr;};
    void deleteObjectIdsShrink() { this->objectIdsShrink_ = nullptr;};
    inline string getObjectIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(objectIdsShrink_, "") };
    inline TogglePrimaryObjectFavoriteShrinkRequest& setObjectIdsShrink(string objectIdsShrink) { DARABONBA_PTR_SET_VALUE(objectIdsShrink_, objectIdsShrink) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline TogglePrimaryObjectFavoriteShrinkRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline TogglePrimaryObjectFavoriteShrinkRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline TogglePrimaryObjectFavoriteShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 操作：add-关注，remove-取消关注
    // 
    // This parameter is required.
    shared_ptr<string> action_ {};
    // 主对象业务ID列表
    // 
    // This parameter is required.
    shared_ptr<string> objectIdsShrink_ {};
    // 对象类型（如 customer、project）
    // 
    // This parameter is required.
    shared_ptr<string> objectType_ {};
    // 运营对象名称（如 customer_1）
    // 
    // This parameter is required.
    shared_ptr<string> operatingObjectName_ {};
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
