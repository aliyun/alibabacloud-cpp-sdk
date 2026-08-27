// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEGROUPOUTPUTFILETOPERSONALRESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEGROUPOUTPUTFILETOPERSONALRESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SaveGroupOutputFileToPersonalResourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveGroupOutputFileToPersonalResourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(itemIds, itemIdsShrink_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveGroupOutputFileToPersonalResourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(itemIds, itemIdsShrink_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    SaveGroupOutputFileToPersonalResourceShrinkRequest() = default ;
    SaveGroupOutputFileToPersonalResourceShrinkRequest(const SaveGroupOutputFileToPersonalResourceShrinkRequest &) = default ;
    SaveGroupOutputFileToPersonalResourceShrinkRequest(SaveGroupOutputFileToPersonalResourceShrinkRequest &&) = default ;
    SaveGroupOutputFileToPersonalResourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveGroupOutputFileToPersonalResourceShrinkRequest() = default ;
    SaveGroupOutputFileToPersonalResourceShrinkRequest& operator=(const SaveGroupOutputFileToPersonalResourceShrinkRequest &) = default ;
    SaveGroupOutputFileToPersonalResourceShrinkRequest& operator=(SaveGroupOutputFileToPersonalResourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->groupId_ == nullptr && this->itemIdsShrink_ == nullptr && this->mode_ == nullptr && this->tenantId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline SaveGroupOutputFileToPersonalResourceShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SaveGroupOutputFileToPersonalResourceShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // itemIdsShrink Field Functions 
    bool hasItemIdsShrink() const { return this->itemIdsShrink_ != nullptr;};
    void deleteItemIdsShrink() { this->itemIdsShrink_ = nullptr;};
    inline string getItemIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(itemIdsShrink_, "") };
    inline SaveGroupOutputFileToPersonalResourceShrinkRequest& setItemIdsShrink(string itemIdsShrink) { DARABONBA_PTR_SET_VALUE(itemIdsShrink_, itemIdsShrink) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline SaveGroupOutputFileToPersonalResourceShrinkRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SaveGroupOutputFileToPersonalResourceShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The enterprise knowledge base directory ID.
    shared_ptr<string> directoryId_ {};
    // The project group ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // itemIds
    // 
    // This parameter is required.
    shared_ptr<string> itemIdsShrink_ {};
    // The save mode. Valid values:
    // - link: creates a link (1:1 idempotent, editing the output synchronizes the resource).
    // - copy: creates a copy (unlimited times, snapshot).
    // 
    // This parameter is required.
    shared_ptr<string> mode_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
