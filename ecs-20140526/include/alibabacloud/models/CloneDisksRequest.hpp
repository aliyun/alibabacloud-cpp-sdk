// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEDISKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLONEDISKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CloneDisksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneDisksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(MultiAttach, multiAttach_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SourceDiskId, sourceDiskId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CloneDisksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(MultiAttach, multiAttach_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SourceDiskId, sourceDiskId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CloneDisksRequest() = default ;
    CloneDisksRequest(const CloneDisksRequest &) = default ;
    CloneDisksRequest(CloneDisksRequest &&) = default ;
    CloneDisksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneDisksRequest() = default ;
    CloneDisksRequest& operator=(const CloneDisksRequest &) = default ;
    CloneDisksRequest& operator=(CloneDisksRequest &&) = default ;
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class Arn : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Arn& obj) { 
        DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_TO_JSON(RoleType, roleType_);
        DARABONBA_PTR_TO_JSON(Rolearn, rolearn_);
      };
      friend void from_json(const Darabonba::Json& j, Arn& obj) { 
        DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
        DARABONBA_PTR_FROM_JSON(Rolearn, rolearn_);
      };
      Arn() = default ;
      Arn(const Arn &) = default ;
      Arn(Arn &&) = default ;
      Arn(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Arn() = default ;
      Arn& operator=(const Arn &) = default ;
      Arn& operator=(Arn &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && this->roleType_ == nullptr && this->rolearn_ == nullptr; };
      // assumeRoleFor Field Functions 
      bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
      void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
      inline string getAssumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, "") };
      inline Arn& setAssumeRoleFor(string assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


      // roleType Field Functions 
      bool hasRoleType() const { return this->roleType_ != nullptr;};
      void deleteRoleType() { this->roleType_ = nullptr;};
      inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
      inline Arn& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


      // rolearn Field Functions 
      bool hasRolearn() const { return this->rolearn_ != nullptr;};
      void deleteRolearn() { this->rolearn_ = nullptr;};
      inline string getRolearn() const { DARABONBA_PTR_GET_DEFAULT(rolearn_, "") };
      inline Arn& setRolearn(string rolearn) { DARABONBA_PTR_SET_VALUE(rolearn_, rolearn) };


    protected:
      shared_ptr<string> assumeRoleFor_ {};
      shared_ptr<string> roleType_ {};
      shared_ptr<string> rolearn_ {};
    };

    virtual bool empty() const override { return this->arn_ == nullptr
        && this->burstingEnabled_ == nullptr && this->clientToken_ == nullptr && this->diskCategory_ == nullptr && this->diskName_ == nullptr && this->dryRun_ == nullptr
        && this->encrypted_ == nullptr && this->kmsKeyId_ == nullptr && this->multiAttach_ == nullptr && this->ownerId_ == nullptr && this->performanceLevel_ == nullptr
        && this->provisionedIops_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerId_ == nullptr && this->size_ == nullptr
        && this->sourceDiskId_ == nullptr && this->tag_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline const vector<CloneDisksRequest::Arn> & getArn() const { DARABONBA_PTR_GET_CONST(arn_, vector<CloneDisksRequest::Arn>) };
    inline vector<CloneDisksRequest::Arn> getArn() { DARABONBA_PTR_GET(arn_, vector<CloneDisksRequest::Arn>) };
    inline CloneDisksRequest& setArn(const vector<CloneDisksRequest::Arn> & arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };
    inline CloneDisksRequest& setArn(vector<CloneDisksRequest::Arn> && arn) { DARABONBA_PTR_SET_RVALUE(arn_, arn) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CloneDisksRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CloneDisksRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline CloneDisksRequest& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline CloneDisksRequest& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline CloneDisksRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CloneDisksRequest& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline CloneDisksRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // multiAttach Field Functions 
    bool hasMultiAttach() const { return this->multiAttach_ != nullptr;};
    void deleteMultiAttach() { this->multiAttach_ = nullptr;};
    inline string getMultiAttach() const { DARABONBA_PTR_GET_DEFAULT(multiAttach_, "") };
    inline CloneDisksRequest& setMultiAttach(string multiAttach) { DARABONBA_PTR_SET_VALUE(multiAttach_, multiAttach) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloneDisksRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline CloneDisksRequest& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline CloneDisksRequest& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CloneDisksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CloneDisksRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloneDisksRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CloneDisksRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sourceDiskId Field Functions 
    bool hasSourceDiskId() const { return this->sourceDiskId_ != nullptr;};
    void deleteSourceDiskId() { this->sourceDiskId_ = nullptr;};
    inline string getSourceDiskId() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskId_, "") };
    inline CloneDisksRequest& setSourceDiskId(string sourceDiskId) { DARABONBA_PTR_SET_VALUE(sourceDiskId_, sourceDiskId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CloneDisksRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CloneDisksRequest::Tag>) };
    inline vector<CloneDisksRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CloneDisksRequest::Tag>) };
    inline CloneDisksRequest& setTag(const vector<CloneDisksRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CloneDisksRequest& setTag(vector<CloneDisksRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    shared_ptr<vector<CloneDisksRequest::Arn>> arn_ {};
    shared_ptr<bool> burstingEnabled_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> diskCategory_ {};
    shared_ptr<string> diskName_ {};
    shared_ptr<string> dryRun_ {};
    shared_ptr<bool> encrypted_ {};
    shared_ptr<string> kmsKeyId_ {};
    // This parameter is required.
    shared_ptr<string> multiAttach_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> performanceLevel_ {};
    shared_ptr<int64_t> provisionedIops_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<int32_t> size_ {};
    // This parameter is required.
    shared_ptr<string> sourceDiskId_ {};
    shared_ptr<vector<CloneDisksRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
