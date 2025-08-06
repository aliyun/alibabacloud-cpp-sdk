// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWATERMARKRESPONSEBODYWATERMARKINFO_HPP_
#define ALIBABACLOUD_MODELS_GETWATERMARKRESPONSEBODYWATERMARKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetWatermarkResponseBodyWatermarkInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWatermarkResponseBodyWatermarkInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WatermarkConfig, watermarkConfig_);
      DARABONBA_PTR_TO_JSON(WatermarkId, watermarkId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWatermarkResponseBodyWatermarkInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WatermarkConfig, watermarkConfig_);
      DARABONBA_PTR_FROM_JSON(WatermarkId, watermarkId_);
    };
    GetWatermarkResponseBodyWatermarkInfo() = default ;
    GetWatermarkResponseBodyWatermarkInfo(const GetWatermarkResponseBodyWatermarkInfo &) = default ;
    GetWatermarkResponseBodyWatermarkInfo(GetWatermarkResponseBodyWatermarkInfo &&) = default ;
    GetWatermarkResponseBodyWatermarkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWatermarkResponseBodyWatermarkInfo() = default ;
    GetWatermarkResponseBodyWatermarkInfo& operator=(const GetWatermarkResponseBodyWatermarkInfo &) = default ;
    GetWatermarkResponseBodyWatermarkInfo& operator=(GetWatermarkResponseBodyWatermarkInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->creationTime_ != nullptr && this->fileUrl_ != nullptr && this->isDefault_ != nullptr && this->name_ != nullptr && this->type_ != nullptr
        && this->watermarkConfig_ != nullptr && this->watermarkId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetWatermarkResponseBodyWatermarkInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetWatermarkResponseBodyWatermarkInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline GetWatermarkResponseBodyWatermarkInfo& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline string isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
    inline GetWatermarkResponseBodyWatermarkInfo& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWatermarkResponseBodyWatermarkInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetWatermarkResponseBodyWatermarkInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // watermarkConfig Field Functions 
    bool hasWatermarkConfig() const { return this->watermarkConfig_ != nullptr;};
    void deleteWatermarkConfig() { this->watermarkConfig_ = nullptr;};
    inline string watermarkConfig() const { DARABONBA_PTR_GET_DEFAULT(watermarkConfig_, "") };
    inline GetWatermarkResponseBodyWatermarkInfo& setWatermarkConfig(string watermarkConfig) { DARABONBA_PTR_SET_VALUE(watermarkConfig_, watermarkConfig) };


    // watermarkId Field Functions 
    bool hasWatermarkId() const { return this->watermarkId_ != nullptr;};
    void deleteWatermarkId() { this->watermarkId_ = nullptr;};
    inline string watermarkId() const { DARABONBA_PTR_GET_DEFAULT(watermarkId_, "") };
    inline GetWatermarkResponseBodyWatermarkInfo& setWatermarkId(string watermarkId) { DARABONBA_PTR_SET_VALUE(watermarkId_, watermarkId) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The time when the watermark template was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The URL of the watermark file. The URL is an Object Storage Service (OSS) URL or an Alibaba Cloud CDN URL.
    // 
    // >  This parameter is returned only for image watermark templates.
    std::shared_ptr<string> fileUrl_ = nullptr;
    // Indicates whether the watermark template is the default one. Valid values:
    // 
    // *   **Default**
    // *   **NotDefault**
    std::shared_ptr<string> isDefault_ = nullptr;
    // The name of the watermark template.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the watermark template. Valid values:
    // 
    // *   **Image**: image watermark template
    // *   **Text**: text watermark template
    std::shared_ptr<string> type_ = nullptr;
    // The configuration information of the watermark such as the display position and special effects. The value is a JSON string. The configuration parameters for image and text watermarks are different. For more information about the parameter structure, see [WatermarkConfig](~~98618#section-h01-44s-2lr~~).
    std::shared_ptr<string> watermarkConfig_ = nullptr;
    // The ID of the watermark template.
    std::shared_ptr<string> watermarkId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
