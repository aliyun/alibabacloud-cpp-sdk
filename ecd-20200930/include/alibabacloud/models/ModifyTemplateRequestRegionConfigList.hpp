// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTEMPLATEREQUESTREGIONCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTEMPLATEREQUESTREGIONCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyTemplateRequestRegionConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTemplateRequestRegionConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceType, resourceInstanceType_);
      DARABONBA_PTR_TO_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionEnable, volumeEncryptionEnable_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTemplateRequestRegionConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceType, resourceInstanceType_);
      DARABONBA_PTR_FROM_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnable, volumeEncryptionEnable_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    ModifyTemplateRequestRegionConfigList() = default ;
    ModifyTemplateRequestRegionConfigList(const ModifyTemplateRequestRegionConfigList &) = default ;
    ModifyTemplateRequestRegionConfigList(ModifyTemplateRequestRegionConfigList &&) = default ;
    ModifyTemplateRequestRegionConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTemplateRequestRegionConfigList() = default ;
    ModifyTemplateRequestRegionConfigList& operator=(const ModifyTemplateRequestRegionConfigList &) = default ;
    ModifyTemplateRequestRegionConfigList& operator=(ModifyTemplateRequestRegionConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->officeSiteId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceInstanceType_ == nullptr && return this->snapshotPolicyId_ == nullptr && return this->subnetId_ == nullptr && return this->volumeEncryptionEnable_ == nullptr
        && return this->volumeEncryptionKey_ == nullptr; };
    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ModifyTemplateRequestRegionConfigList& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyTemplateRequestRegionConfigList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceInstanceType Field Functions 
    bool hasResourceInstanceType() const { return this->resourceInstanceType_ != nullptr;};
    void deleteResourceInstanceType() { this->resourceInstanceType_ = nullptr;};
    inline string resourceInstanceType() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceType_, "") };
    inline ModifyTemplateRequestRegionConfigList& setResourceInstanceType(string resourceInstanceType) { DARABONBA_PTR_SET_VALUE(resourceInstanceType_, resourceInstanceType) };


    // snapshotPolicyId Field Functions 
    bool hasSnapshotPolicyId() const { return this->snapshotPolicyId_ != nullptr;};
    void deleteSnapshotPolicyId() { this->snapshotPolicyId_ = nullptr;};
    inline string snapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicyId_, "") };
    inline ModifyTemplateRequestRegionConfigList& setSnapshotPolicyId(string snapshotPolicyId) { DARABONBA_PTR_SET_VALUE(snapshotPolicyId_, snapshotPolicyId) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string subnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline ModifyTemplateRequestRegionConfigList& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


    // volumeEncryptionEnable Field Functions 
    bool hasVolumeEncryptionEnable() const { return this->volumeEncryptionEnable_ != nullptr;};
    void deleteVolumeEncryptionEnable() { this->volumeEncryptionEnable_ = nullptr;};
    inline bool volumeEncryptionEnable() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnable_, false) };
    inline ModifyTemplateRequestRegionConfigList& setVolumeEncryptionEnable(bool volumeEncryptionEnable) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnable_, volumeEncryptionEnable) };


    // volumeEncryptionKey Field Functions 
    bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
    void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
    inline string volumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
    inline ModifyTemplateRequestRegionConfigList& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


  protected:
    std::shared_ptr<string> officeSiteId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceInstanceType_ = nullptr;
    std::shared_ptr<string> snapshotPolicyId_ = nullptr;
    std::shared_ptr<string> subnetId_ = nullptr;
    std::shared_ptr<bool> volumeEncryptionEnable_ = nullptr;
    std::shared_ptr<string> volumeEncryptionKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
