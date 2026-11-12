// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateDiskRequest() = default ;
    CreateDiskRequest(const CreateDiskRequest &) = default ;
    CreateDiskRequest(CreateDiskRequest &&) = default ;
    CreateDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiskRequest() = default ;
    CreateDiskRequest& operator=(const CreateDiskRequest &) = default ;
    CreateDiskRequest& operator=(CreateDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N for the instance. Valid values of N: **1** to **20**.
      // 
      // - The key cannot start with `aliyun`, `acs:`, `http://`, or `https://`.
      // - The key can be up to 64 characters in length.
      // - The key cannot be an empty string.
      shared_ptr<string> key_ {};
      // The value of tag N for the topic. **Key** and **Value** must be both specified or both left empty. If both are specified, the system filters topics that match the tag. If neither is specified, the system queries all topics.
      // 
      // - Valid values of N: 1 to 20.
      // - The value can be an empty string.
      // - The value can be up to 128 characters in length, and cannot start with `aliyun` or `acs:`, or contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->category_ == nullptr
        && this->diskName_ == nullptr && this->encrypted_ == nullptr && this->ensRegionId_ == nullptr && this->instanceBillingCycle_ == nullptr && this->instanceChargeType_ == nullptr
        && this->KMSKeyId_ == nullptr && this->size_ == nullptr && this->snapshotId_ == nullptr && this->tag_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateDiskRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline CreateDiskRequest& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CreateDiskRequest& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateDiskRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceBillingCycle Field Functions 
    bool hasInstanceBillingCycle() const { return this->instanceBillingCycle_ != nullptr;};
    void deleteInstanceBillingCycle() { this->instanceBillingCycle_ = nullptr;};
    inline string getInstanceBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(instanceBillingCycle_, "") };
    inline CreateDiskRequest& setInstanceBillingCycle(string instanceBillingCycle) { DARABONBA_PTR_SET_VALUE(instanceBillingCycle_, instanceBillingCycle) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateDiskRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline CreateDiskRequest& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline CreateDiskRequest& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateDiskRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDiskRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDiskRequest::Tag>) };
    inline vector<CreateDiskRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateDiskRequest::Tag>) };
    inline CreateDiskRequest& setTag(const vector<CreateDiskRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDiskRequest& setTag(vector<CreateDiskRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The category of the cloud disk. Valid values:
    // 
    // - cloud_efficiency: ultra disk
    // - cloud_ssd: all-flash disk
    // 
    // This parameter is required.
    shared_ptr<string> category_ {};
    // The name of the cloud disk.
    shared_ptr<string> diskName_ {};
    // Specifies whether to encrypt the cloud disk. Valid values:
    // 
    // - **true**: yes
    // 
    // - **false** (default): no
    shared_ptr<bool> encrypted_ {};
    // The edge zone ID.
    // 
    // This parameter is required.
    shared_ptr<string> ensRegionId_ {};
    // The billing cycle of the instance. Valid values: Hour, Day, and Month.
    shared_ptr<string> instanceBillingCycle_ {};
    // The billing method of the instance. Only **PostPaid** (pay-as-you-go) is supported.
    // 
    // This parameter is required.
    shared_ptr<string> instanceChargeType_ {};
    // The ID of the Key Management Service (KMS) key used for the cloud disk.
    // 
    // > If **Encrypted** is set to **true** and **KMSKeyId** is left empty, the default service key is used.
    shared_ptr<string> KMSKeyId_ {};
    // The size of the cloud disk. Unit: GiB.
    shared_ptr<string> size_ {};
    // The ID of the snapshot used to create the cloud disk.
    // 
    // The **SnapshotId** and **Size** parameters are subject to the following limits:
    // 
    // - If snapshot size of the snapshot specified by **SnapshotId** is greater than the value of **Size**, snapshot size of the created cloud disk is equal to snapshot size of the snapshot.
    // 
    // - If snapshot size of the snapshot specified by **SnapshotId** is less than the value of **Size**, snapshot size of the created cloud disk is equal to the value of **Size**.
    shared_ptr<string> snapshotId_ {};
    // The list of tags. You can add up to 20 tags in a single call.
    shared_ptr<vector<CreateDiskRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
