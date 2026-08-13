// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEOUTPUTFILETORESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEOUTPUTFILETORESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SaveOutputFileToResourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveOutputFileToResourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(itemIds, itemIdsShrink_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveOutputFileToResourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(itemIds, itemIdsShrink_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    SaveOutputFileToResourceShrinkRequest() = default ;
    SaveOutputFileToResourceShrinkRequest(const SaveOutputFileToResourceShrinkRequest &) = default ;
    SaveOutputFileToResourceShrinkRequest(SaveOutputFileToResourceShrinkRequest &&) = default ;
    SaveOutputFileToResourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveOutputFileToResourceShrinkRequest() = default ;
    SaveOutputFileToResourceShrinkRequest& operator=(const SaveOutputFileToResourceShrinkRequest &) = default ;
    SaveOutputFileToResourceShrinkRequest& operator=(SaveOutputFileToResourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->itemIdsShrink_ == nullptr && this->mode_ == nullptr && this->tenantId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline SaveOutputFileToResourceShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // itemIdsShrink Field Functions 
    bool hasItemIdsShrink() const { return this->itemIdsShrink_ != nullptr;};
    void deleteItemIdsShrink() { this->itemIdsShrink_ = nullptr;};
    inline string getItemIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(itemIdsShrink_, "") };
    inline SaveOutputFileToResourceShrinkRequest& setItemIdsShrink(string itemIdsShrink) { DARABONBA_PTR_SET_VALUE(itemIdsShrink_, itemIdsShrink) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline SaveOutputFileToResourceShrinkRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SaveOutputFileToResourceShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 目标个人目录 ID；不传则自动解析用户默认目录。
    shared_ptr<string> directoryId_ {};
    // itemIds
    // 
    // This parameter is required.
    shared_ptr<string> itemIdsShrink_ {};
    // 保存方式：link=链接（1:1 幂等，编辑产出会同步资源） / copy=复制（不限次，快照）
    shared_ptr<string> mode_ {};
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
