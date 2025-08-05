// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUESTPOLICYBINDINGLISTADVANCEDOPTIONSOSSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUESTPOLICYBINDINGLISTADVANCEDOPTIONSOSSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreArchiveObject, ignoreArchiveObject_);
      DARABONBA_PTR_TO_JSON(InventoryCleanupPolicy, inventoryCleanupPolicy_);
      DARABONBA_PTR_TO_JSON(InventoryId, inventoryId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreArchiveObject, ignoreArchiveObject_);
      DARABONBA_PTR_FROM_JSON(InventoryCleanupPolicy, inventoryCleanupPolicy_);
      DARABONBA_PTR_FROM_JSON(InventoryId, inventoryId_);
    };
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail() = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail(const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail &) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail(CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail &&) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail() = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail& operator=(const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail &) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail& operator=(CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ignoreArchiveObject_ != nullptr
        && this->inventoryCleanupPolicy_ != nullptr && this->inventoryId_ != nullptr; };
    // ignoreArchiveObject Field Functions 
    bool hasIgnoreArchiveObject() const { return this->ignoreArchiveObject_ != nullptr;};
    void deleteIgnoreArchiveObject() { this->ignoreArchiveObject_ = nullptr;};
    inline bool ignoreArchiveObject() const { DARABONBA_PTR_GET_DEFAULT(ignoreArchiveObject_, false) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail& setIgnoreArchiveObject(bool ignoreArchiveObject) { DARABONBA_PTR_SET_VALUE(ignoreArchiveObject_, ignoreArchiveObject) };


    // inventoryCleanupPolicy Field Functions 
    bool hasInventoryCleanupPolicy() const { return this->inventoryCleanupPolicy_ != nullptr;};
    void deleteInventoryCleanupPolicy() { this->inventoryCleanupPolicy_ = nullptr;};
    inline string inventoryCleanupPolicy() const { DARABONBA_PTR_GET_DEFAULT(inventoryCleanupPolicy_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail& setInventoryCleanupPolicy(string inventoryCleanupPolicy) { DARABONBA_PTR_SET_VALUE(inventoryCleanupPolicy_, inventoryCleanupPolicy) };


    // inventoryId Field Functions 
    bool hasInventoryId() const { return this->inventoryId_ != nullptr;};
    void deleteInventoryId() { this->inventoryId_ = nullptr;};
    inline string inventoryId() const { DARABONBA_PTR_GET_DEFAULT(inventoryId_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail& setInventoryId(string inventoryId) { DARABONBA_PTR_SET_VALUE(inventoryId_, inventoryId) };


  protected:
    // Do not prompt for archival type objects in task statistics and failed file lists.
    std::shared_ptr<bool> ignoreArchiveObject_ = nullptr;
    // Specifies whether the system deletes the inventory lists when a backup is completed. This parameter is valid only when OSS inventories are used. Valid values:
    // 
    // *   **NO_CLEANUP**: does not delete inventory lists.
    // *   **DELETE_CURRENT**: deletes the current inventory list.
    // *   **DELETE_CURRENT_AND_PREVIOUS**: deletes all inventory lists.
    std::shared_ptr<string> inventoryCleanupPolicy_ = nullptr;
    // The name of the OSS inventory. If this parameter is not empty, the OSS inventory is used for performance optimization.
    // 
    // *   If you want to back up more than 100 million OSS objects, we recommend that you use inventory lists to accelerate incremental backup. Storage fees for inventory lists are included into your OSS bills.
    // *   A certain amount of time is required for OSS to generate inventory lists. Before inventory lists are generated, OSS objects may fail to be backed up. In this case, you can back up the OSS objects in the next backup cycle.
    std::shared_ptr<string> inventoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
