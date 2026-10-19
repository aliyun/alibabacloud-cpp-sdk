// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEMORYAUTOEXTRACTIONSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEMORYAUTOEXTRACTIONSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateMemoryAutoExtractionSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMemoryAutoExtractionSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clearExisting, clearExisting_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(ownerType, ownerType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMemoryAutoExtractionSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clearExisting, clearExisting_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ownerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UpdateMemoryAutoExtractionSwitchRequest() = default ;
    UpdateMemoryAutoExtractionSwitchRequest(const UpdateMemoryAutoExtractionSwitchRequest &) = default ;
    UpdateMemoryAutoExtractionSwitchRequest(UpdateMemoryAutoExtractionSwitchRequest &&) = default ;
    UpdateMemoryAutoExtractionSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMemoryAutoExtractionSwitchRequest() = default ;
    UpdateMemoryAutoExtractionSwitchRequest& operator=(const UpdateMemoryAutoExtractionSwitchRequest &) = default ;
    UpdateMemoryAutoExtractionSwitchRequest& operator=(UpdateMemoryAutoExtractionSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clearExisting_ == nullptr
        && this->enabled_ == nullptr && this->groupId_ == nullptr && this->ownerType_ == nullptr && this->tenantId_ == nullptr; };
    // clearExisting Field Functions 
    bool hasClearExisting() const { return this->clearExisting_ != nullptr;};
    void deleteClearExisting() { this->clearExisting_ = nullptr;};
    inline bool getClearExisting() const { DARABONBA_PTR_GET_DEFAULT(clearExisting_, false) };
    inline UpdateMemoryAutoExtractionSwitchRequest& setClearExisting(bool clearExisting) { DARABONBA_PTR_SET_VALUE(clearExisting_, clearExisting) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateMemoryAutoExtractionSwitchRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateMemoryAutoExtractionSwitchRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline UpdateMemoryAutoExtractionSwitchRequest& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateMemoryAutoExtractionSwitchRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 是否同时清空当前记忆范围内的全部自动记忆；开启或关闭时均可使用，不影响手动记忆；不传时为 false
    shared_ptr<bool> clearExisting_ {};
    // 目标开关状态；true 为开启自动记忆拾取，false 为关闭
    // 
    // This parameter is required.
    shared_ptr<bool> enabled_ {};
    // 写作协作空间 ID；ownerType 为 group 时必填，且当前鉴权用户须为该空间的活跃成员；ownerType 为 user 时不传
    shared_ptr<string> groupId_ {};
    // 记忆归属范围；user 为当前鉴权用户的个人记忆，group 为指定写作协作空间的记忆；不传时默认为 user
    shared_ptr<string> ownerType_ {};
    // 租户 ID，查询参数；不传时使用调用方的默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
