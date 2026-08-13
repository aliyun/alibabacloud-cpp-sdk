// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOGGLEPRIMARYOBJECTFAVORITEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TOGGLEPRIMARYOBJECTFAVORITEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class TogglePrimaryObjectFavoriteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TogglePrimaryObjectFavoriteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(objectIds, objectIds_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, TogglePrimaryObjectFavoriteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(objectIds, objectIds_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    TogglePrimaryObjectFavoriteRequest() = default ;
    TogglePrimaryObjectFavoriteRequest(const TogglePrimaryObjectFavoriteRequest &) = default ;
    TogglePrimaryObjectFavoriteRequest(TogglePrimaryObjectFavoriteRequest &&) = default ;
    TogglePrimaryObjectFavoriteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TogglePrimaryObjectFavoriteRequest() = default ;
    TogglePrimaryObjectFavoriteRequest& operator=(const TogglePrimaryObjectFavoriteRequest &) = default ;
    TogglePrimaryObjectFavoriteRequest& operator=(TogglePrimaryObjectFavoriteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->objectIds_ == nullptr && this->objectType_ == nullptr && this->operatingObjectName_ == nullptr && this->tenantId_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline TogglePrimaryObjectFavoriteRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // objectIds Field Functions 
    bool hasObjectIds() const { return this->objectIds_ != nullptr;};
    void deleteObjectIds() { this->objectIds_ = nullptr;};
    inline const vector<string> & getObjectIds() const { DARABONBA_PTR_GET_CONST(objectIds_, vector<string>) };
    inline vector<string> getObjectIds() { DARABONBA_PTR_GET(objectIds_, vector<string>) };
    inline TogglePrimaryObjectFavoriteRequest& setObjectIds(const vector<string> & objectIds) { DARABONBA_PTR_SET_VALUE(objectIds_, objectIds) };
    inline TogglePrimaryObjectFavoriteRequest& setObjectIds(vector<string> && objectIds) { DARABONBA_PTR_SET_RVALUE(objectIds_, objectIds) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline TogglePrimaryObjectFavoriteRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline TogglePrimaryObjectFavoriteRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline TogglePrimaryObjectFavoriteRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 操作：add-关注，remove-取消关注
    // 
    // This parameter is required.
    shared_ptr<string> action_ {};
    // 主对象业务ID列表
    // 
    // This parameter is required.
    shared_ptr<vector<string>> objectIds_ {};
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
