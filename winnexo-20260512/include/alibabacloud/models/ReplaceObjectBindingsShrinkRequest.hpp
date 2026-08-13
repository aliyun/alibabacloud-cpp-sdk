// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEOBJECTBINDINGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACEOBJECTBINDINGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ReplaceObjectBindingsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceObjectBindingsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(objectBindings, objectBindingsShrink_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceObjectBindingsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(objectBindings, objectBindingsShrink_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ReplaceObjectBindingsShrinkRequest() = default ;
    ReplaceObjectBindingsShrinkRequest(const ReplaceObjectBindingsShrinkRequest &) = default ;
    ReplaceObjectBindingsShrinkRequest(ReplaceObjectBindingsShrinkRequest &&) = default ;
    ReplaceObjectBindingsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceObjectBindingsShrinkRequest() = default ;
    ReplaceObjectBindingsShrinkRequest& operator=(const ReplaceObjectBindingsShrinkRequest &) = default ;
    ReplaceObjectBindingsShrinkRequest& operator=(ReplaceObjectBindingsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->objectBindingsShrink_ == nullptr
        && this->sourceId_ == nullptr && this->tenantId_ == nullptr; };
    // objectBindingsShrink Field Functions 
    bool hasObjectBindingsShrink() const { return this->objectBindingsShrink_ != nullptr;};
    void deleteObjectBindingsShrink() { this->objectBindingsShrink_ = nullptr;};
    inline string getObjectBindingsShrink() const { DARABONBA_PTR_GET_DEFAULT(objectBindingsShrink_, "") };
    inline ReplaceObjectBindingsShrinkRequest& setObjectBindingsShrink(string objectBindingsShrink) { DARABONBA_PTR_SET_VALUE(objectBindingsShrink_, objectBindingsShrink) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ReplaceObjectBindingsShrinkRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ReplaceObjectBindingsShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 新的对象绑定列表（全量替换；传空列表表示清空所有绑定）
    // 
    // This parameter is required.
    shared_ptr<string> objectBindingsShrink_ {};
    // 数据源 ID（租户内唯一）
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
