// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPSHRINKREQUESTDATADISKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPSHRINKREQUESTDATADISKCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoProvisioningGroupShrinkRequestDataDiskConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupShrinkRequestDataDiskConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupShrinkRequestDataDiskConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
    };
    CreateAutoProvisioningGroupShrinkRequestDataDiskConfig() = default ;
    CreateAutoProvisioningGroupShrinkRequestDataDiskConfig(const CreateAutoProvisioningGroupShrinkRequestDataDiskConfig &) = default ;
    CreateAutoProvisioningGroupShrinkRequestDataDiskConfig(CreateAutoProvisioningGroupShrinkRequestDataDiskConfig &&) = default ;
    CreateAutoProvisioningGroupShrinkRequestDataDiskConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupShrinkRequestDataDiskConfig() = default ;
    CreateAutoProvisioningGroupShrinkRequestDataDiskConfig& operator=(const CreateAutoProvisioningGroupShrinkRequestDataDiskConfig &) = default ;
    CreateAutoProvisioningGroupShrinkRequestDataDiskConfig& operator=(CreateAutoProvisioningGroupShrinkRequestDataDiskConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskCategory_ == nullptr; };
    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string diskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline CreateAutoProvisioningGroupShrinkRequestDataDiskConfig& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


  protected:
    // The category of data disk N. You can use this parameter to specify multiple disk categories, and the disk categories are prioritized in the order in which they are specified. If a specified disk category is unavailable, the system uses the next available disk category. Valid values:
    // 
    // - cloud_efficiency: ultra disk
    // - cloud_ssd: standard SSD
    // - cloud_essd: ESSD
    // - cloud: basic disk
    std::shared_ptr<string> diskCategory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
