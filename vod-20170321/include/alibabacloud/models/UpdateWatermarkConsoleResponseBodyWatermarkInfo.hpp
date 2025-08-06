// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWATERMARKCONSOLERESPONSEBODYWATERMARKINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWATERMARKCONSOLERESPONSEBODYWATERMARKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateWatermarkConsoleResponseBodyWatermarkInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWatermarkConsoleResponseBodyWatermarkInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ScreenHeight, screenHeight_);
      DARABONBA_PTR_TO_JSON(ScreenWidth, screenWidth_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WatermarkConfig, watermarkConfig_);
      DARABONBA_PTR_TO_JSON(WatermarkId, watermarkId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWatermarkConsoleResponseBodyWatermarkInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ScreenHeight, screenHeight_);
      DARABONBA_PTR_FROM_JSON(ScreenWidth, screenWidth_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WatermarkConfig, watermarkConfig_);
      DARABONBA_PTR_FROM_JSON(WatermarkId, watermarkId_);
    };
    UpdateWatermarkConsoleResponseBodyWatermarkInfo() = default ;
    UpdateWatermarkConsoleResponseBodyWatermarkInfo(const UpdateWatermarkConsoleResponseBodyWatermarkInfo &) = default ;
    UpdateWatermarkConsoleResponseBodyWatermarkInfo(UpdateWatermarkConsoleResponseBodyWatermarkInfo &&) = default ;
    UpdateWatermarkConsoleResponseBodyWatermarkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWatermarkConsoleResponseBodyWatermarkInfo() = default ;
    UpdateWatermarkConsoleResponseBodyWatermarkInfo& operator=(const UpdateWatermarkConsoleResponseBodyWatermarkInfo &) = default ;
    UpdateWatermarkConsoleResponseBodyWatermarkInfo& operator=(UpdateWatermarkConsoleResponseBodyWatermarkInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->fileUrl_ != nullptr && this->isDefault_ != nullptr && this->name_ != nullptr && this->screenHeight_ != nullptr && this->screenWidth_ != nullptr
        && this->type_ != nullptr && this->watermarkConfig_ != nullptr && this->watermarkId_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline UpdateWatermarkConsoleResponseBodyWatermarkInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline UpdateWatermarkConsoleResponseBodyWatermarkInfo& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline string isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
    inline UpdateWatermarkConsoleResponseBodyWatermarkInfo& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateWatermarkConsoleResponseBodyWatermarkInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // screenHeight Field Functions 
    bool hasScreenHeight() const { return this->screenHeight_ != nullptr;};
    void deleteScreenHeight() { this->screenHeight_ = nullptr;};
    inline int32_t screenHeight() const { DARABONBA_PTR_GET_DEFAULT(screenHeight_, 0) };
    inline UpdateWatermarkConsoleResponseBodyWatermarkInfo& setScreenHeight(int32_t screenHeight) { DARABONBA_PTR_SET_VALUE(screenHeight_, screenHeight) };


    // screenWidth Field Functions 
    bool hasScreenWidth() const { return this->screenWidth_ != nullptr;};
    void deleteScreenWidth() { this->screenWidth_ = nullptr;};
    inline int32_t screenWidth() const { DARABONBA_PTR_GET_DEFAULT(screenWidth_, 0) };
    inline UpdateWatermarkConsoleResponseBodyWatermarkInfo& setScreenWidth(int32_t screenWidth) { DARABONBA_PTR_SET_VALUE(screenWidth_, screenWidth) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateWatermarkConsoleResponseBodyWatermarkInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // watermarkConfig Field Functions 
    bool hasWatermarkConfig() const { return this->watermarkConfig_ != nullptr;};
    void deleteWatermarkConfig() { this->watermarkConfig_ = nullptr;};
    inline string watermarkConfig() const { DARABONBA_PTR_GET_DEFAULT(watermarkConfig_, "") };
    inline UpdateWatermarkConsoleResponseBodyWatermarkInfo& setWatermarkConfig(string watermarkConfig) { DARABONBA_PTR_SET_VALUE(watermarkConfig_, watermarkConfig) };


    // watermarkId Field Functions 
    bool hasWatermarkId() const { return this->watermarkId_ != nullptr;};
    void deleteWatermarkId() { this->watermarkId_ = nullptr;};
    inline string watermarkId() const { DARABONBA_PTR_GET_DEFAULT(watermarkId_, "") };
    inline UpdateWatermarkConsoleResponseBodyWatermarkInfo& setWatermarkId(string watermarkId) { DARABONBA_PTR_SET_VALUE(watermarkId_, watermarkId) };


  protected:
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> isDefault_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> screenHeight_ = nullptr;
    std::shared_ptr<int32_t> screenWidth_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> watermarkConfig_ = nullptr;
    std::shared_ptr<string> watermarkId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
