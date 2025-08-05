// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGSADVANCEDOPTIONSOSSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGSADVANCEDOPTIONSOSSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreArchiveObject, ignoreArchiveObject_);
      DARABONBA_PTR_TO_JSON(InventoryCleanupPolicy, inventoryCleanupPolicy_);
      DARABONBA_PTR_TO_JSON(InventoryId, inventoryId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreArchiveObject, ignoreArchiveObject_);
      DARABONBA_PTR_FROM_JSON(InventoryCleanupPolicy, inventoryCleanupPolicy_);
      DARABONBA_PTR_FROM_JSON(InventoryId, inventoryId_);
    };
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail(const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail(DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail &&) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail& operator=(const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail& operator=(DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail &&) = default ;
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
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail& setIgnoreArchiveObject(bool ignoreArchiveObject) { DARABONBA_PTR_SET_VALUE(ignoreArchiveObject_, ignoreArchiveObject) };


    // inventoryCleanupPolicy Field Functions 
    bool hasInventoryCleanupPolicy() const { return this->inventoryCleanupPolicy_ != nullptr;};
    void deleteInventoryCleanupPolicy() { this->inventoryCleanupPolicy_ = nullptr;};
    inline string inventoryCleanupPolicy() const { DARABONBA_PTR_GET_DEFAULT(inventoryCleanupPolicy_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail& setInventoryCleanupPolicy(string inventoryCleanupPolicy) { DARABONBA_PTR_SET_VALUE(inventoryCleanupPolicy_, inventoryCleanupPolicy) };


    // inventoryId Field Functions 
    bool hasInventoryId() const { return this->inventoryId_ != nullptr;};
    void deleteInventoryId() { this->inventoryId_ = nullptr;};
    inline string inventoryId() const { DARABONBA_PTR_GET_DEFAULT(inventoryId_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail& setInventoryId(string inventoryId) { DARABONBA_PTR_SET_VALUE(inventoryId_, inventoryId) };


  protected:
    // Do not prompt for archive-type objects in the task statistics and failed file list.
    std::shared_ptr<bool> ignoreArchiveObject_ = nullptr;
    // Whether to delete the inventory file after the backup. This is only effective when using an OSS inventory. Supported values:
    // - **NO_CLEANUP**: Do not delete.
    // - **DELETE_CURRENT**: Delete the current file.
    // - **DELETE_CURRENT_AND_PREVIOUS**: Delete all files.
    std::shared_ptr<string> inventoryCleanupPolicy_ = nullptr;
    // The name of the OSS inventory. If this value is not empty, the OSS inventory will be used for performance optimization.
    // - It is recommended to use an inventory for backing up more than 100 million OSS objects to improve incremental performance. Storage costs for the inventory files are charged separately by the OSS service.
    // - The generation of the OSS inventory file takes time, and the backup may fail before the inventory file is generated. You can wait for the next cycle to execute.
    std::shared_ptr<string> inventoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
