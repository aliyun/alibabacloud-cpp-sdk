// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDESKTOPSREQUESTDESKTOPATTACHMENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEDESKTOPSREQUESTDESKTOPATTACHMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateDesktopsRequestDesktopAttachment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDesktopsRequestDesktopAttachment& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_TO_JSON(DataDiskPerLevel, dataDiskPerLevel_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(DefaultLanguage, defaultLanguage_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_TO_JSON(SystemDiskPerLevel, systemDiskPerLevel_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDesktopsRequestDesktopAttachment& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_FROM_JSON(DataDiskPerLevel, dataDiskPerLevel_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(DefaultLanguage, defaultLanguage_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(SystemDiskPerLevel, systemDiskPerLevel_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
    };
    CreateDesktopsRequestDesktopAttachment() = default ;
    CreateDesktopsRequestDesktopAttachment(const CreateDesktopsRequestDesktopAttachment &) = default ;
    CreateDesktopsRequestDesktopAttachment(CreateDesktopsRequestDesktopAttachment &&) = default ;
    CreateDesktopsRequestDesktopAttachment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDesktopsRequestDesktopAttachment() = default ;
    CreateDesktopsRequestDesktopAttachment& operator=(const CreateDesktopsRequestDesktopAttachment &) = default ;
    CreateDesktopsRequestDesktopAttachment& operator=(CreateDesktopsRequestDesktopAttachment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataDiskCategory_ != nullptr
        && this->dataDiskPerLevel_ != nullptr && this->dataDiskSize_ != nullptr && this->defaultLanguage_ != nullptr && this->desktopType_ != nullptr && this->imageId_ != nullptr
        && this->systemDiskCategory_ != nullptr && this->systemDiskPerLevel_ != nullptr && this->systemDiskSize_ != nullptr; };
    // dataDiskCategory Field Functions 
    bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
    void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
    inline string dataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
    inline CreateDesktopsRequestDesktopAttachment& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


    // dataDiskPerLevel Field Functions 
    bool hasDataDiskPerLevel() const { return this->dataDiskPerLevel_ != nullptr;};
    void deleteDataDiskPerLevel() { this->dataDiskPerLevel_ = nullptr;};
    inline string dataDiskPerLevel() const { DARABONBA_PTR_GET_DEFAULT(dataDiskPerLevel_, "") };
    inline CreateDesktopsRequestDesktopAttachment& setDataDiskPerLevel(string dataDiskPerLevel) { DARABONBA_PTR_SET_VALUE(dataDiskPerLevel_, dataDiskPerLevel) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline CreateDesktopsRequestDesktopAttachment& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // defaultLanguage Field Functions 
    bool hasDefaultLanguage() const { return this->defaultLanguage_ != nullptr;};
    void deleteDefaultLanguage() { this->defaultLanguage_ = nullptr;};
    inline string defaultLanguage() const { DARABONBA_PTR_GET_DEFAULT(defaultLanguage_, "") };
    inline CreateDesktopsRequestDesktopAttachment& setDefaultLanguage(string defaultLanguage) { DARABONBA_PTR_SET_VALUE(defaultLanguage_, defaultLanguage) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string desktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline CreateDesktopsRequestDesktopAttachment& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateDesktopsRequestDesktopAttachment& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline CreateDesktopsRequestDesktopAttachment& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskPerLevel Field Functions 
    bool hasSystemDiskPerLevel() const { return this->systemDiskPerLevel_ != nullptr;};
    void deleteSystemDiskPerLevel() { this->systemDiskPerLevel_ = nullptr;};
    inline string systemDiskPerLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerLevel_, "") };
    inline CreateDesktopsRequestDesktopAttachment& setSystemDiskPerLevel(string systemDiskPerLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerLevel_, systemDiskPerLevel) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateDesktopsRequestDesktopAttachment& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


  protected:
    // The category of the data disk. Valid values:
    // 
    // *   cloud_auto: SSD
    // *   cloud_essd: ESSD
    std::shared_ptr<string> dataDiskCategory_ = nullptr;
    // The performance level of the data disk. Valid values:
    // 
    // - PL0 (default)
    // - PL1
    std::shared_ptr<string> dataDiskPerLevel_ = nullptr;
    // The size of the data disk. Unit: GiB.
    std::shared_ptr<int32_t> dataDiskSize_ = nullptr;
    // The default display language:
    // 
    // - zh-CN: Simplified Chinese
    // - zh-HK: Traditional Chinese
    // - en-US: English
    // - ja-JP: Japanese
    std::shared_ptr<string> defaultLanguage_ = nullptr;
    // The desktop type. You can call the [DescribeDesktopTypes](~~DescribeDesktopTypes~~) operation to query the IDs of supported desktop types.
    std::shared_ptr<string> desktopType_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The category of the system disk. Valid values:
    // 
    // *   cloud_auto: SSD
    // *   cloud_essd: ESSD
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    // The performance level of the system disk. Valid values:
    // 
    // - PL0 (default)
    // - PL1
    std::shared_ptr<string> systemDiskPerLevel_ = nullptr;
    // The size of the system disk. Unit: GiB.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
