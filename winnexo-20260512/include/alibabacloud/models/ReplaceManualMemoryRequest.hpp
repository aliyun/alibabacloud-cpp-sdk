// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEMANUALMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACEMANUALMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ReplaceManualMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceManualMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(ownerType, ownerType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceManualMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ownerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ReplaceManualMemoryRequest() = default ;
    ReplaceManualMemoryRequest(const ReplaceManualMemoryRequest &) = default ;
    ReplaceManualMemoryRequest(ReplaceManualMemoryRequest &&) = default ;
    ReplaceManualMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceManualMemoryRequest() = default ;
    ReplaceManualMemoryRequest& operator=(const ReplaceManualMemoryRequest &) = default ;
    ReplaceManualMemoryRequest& operator=(ReplaceManualMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->groupId_ == nullptr && this->ownerType_ == nullptr && this->tenantId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ReplaceManualMemoryRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ReplaceManualMemoryRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline ReplaceManualMemoryRequest& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ReplaceManualMemoryRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 手动记忆 profile.md 的完整新内容，将覆盖原内容；传空字符串表示清空，字段必须传入
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
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
