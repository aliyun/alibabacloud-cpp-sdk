// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEBYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEBYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateImageByInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageByInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCleanUserdata, autoCleanUserdata_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SubInstanceId, subInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageByInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCleanUserdata, autoCleanUserdata_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SubInstanceId, subInstanceId_);
    };
    CreateImageByInstanceRequest() = default ;
    CreateImageByInstanceRequest(const CreateImageByInstanceRequest &) = default ;
    CreateImageByInstanceRequest(CreateImageByInstanceRequest &&) = default ;
    CreateImageByInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageByInstanceRequest() = default ;
    CreateImageByInstanceRequest& operator=(const CreateImageByInstanceRequest &) = default ;
    CreateImageByInstanceRequest& operator=(CreateImageByInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoCleanUserdata_ == nullptr
        && return this->bizType_ == nullptr && return this->description_ == nullptr && return this->diskType_ == nullptr && return this->imageName_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceType_ == nullptr && return this->productType_ == nullptr && return this->subInstanceId_ == nullptr; };
    // autoCleanUserdata Field Functions 
    bool hasAutoCleanUserdata() const { return this->autoCleanUserdata_ != nullptr;};
    void deleteAutoCleanUserdata() { this->autoCleanUserdata_ = nullptr;};
    inline bool autoCleanUserdata() const { DARABONBA_PTR_GET_DEFAULT(autoCleanUserdata_, false) };
    inline CreateImageByInstanceRequest& setAutoCleanUserdata(bool autoCleanUserdata) { DARABONBA_PTR_SET_VALUE(autoCleanUserdata_, autoCleanUserdata) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline CreateImageByInstanceRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateImageByInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreateImageByInstanceRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateImageByInstanceRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateImageByInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateImageByInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline CreateImageByInstanceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // subInstanceId Field Functions 
    bool hasSubInstanceId() const { return this->subInstanceId_ != nullptr;};
    void deleteSubInstanceId() { this->subInstanceId_ = nullptr;};
    inline string subInstanceId() const { DARABONBA_PTR_GET_DEFAULT(subInstanceId_, "") };
    inline CreateImageByInstanceRequest& setSubInstanceId(string subInstanceId) { DARABONBA_PTR_SET_VALUE(subInstanceId_, subInstanceId) };


  protected:
    // This parameter is applicable only to scenarios in which the instance type is Cloud Desktop. Specifies whether to clear private data of users. If this parameter is set to true, the created image clears data in directories other than Administrator and Public in the C:\\Users directory.
    // 
    // Valid values:
    // 
    // *   true: cleanup.
    // *   false: does not clear.
    std::shared_ptr<bool> autoCleanUserdata_ = nullptr;
    // This parameter is not publicly available.
    std::shared_ptr<int32_t> bizType_ = nullptr;
    // The description of the image.
    std::shared_ptr<string> description_ = nullptr;
    // The type of disk data contained in the image. By default, the system disk and data disk of the instance are included.
    // 
    // Valid values:
    // 
    // *   SYSTEM: only system disk.
    // *   ALL: system disk + data disk
    std::shared_ptr<string> diskType_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The ID of the RDS instance. The instance can be a CloudDesktop instance, a workstation instance. To ensure data consistency in the image, we recommend that you shut down the instance before you create an image.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance type.
    // 
    // Valid values:
    // 
    // *   CloudDesktop: Cloud Desktop.
    // *   WuyingServer: Workstation
    std::shared_ptr<string> instanceType_ = nullptr;
    // This parameter is not publicly available.
    std::shared_ptr<string> productType_ = nullptr;
    // The ID of the child instance. This parameter is not used in cloud computing scenarios. Workstation scenarios, you need to specify a persistent session ID to ensure that a specific instance is located.
    std::shared_ptr<string> subInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
