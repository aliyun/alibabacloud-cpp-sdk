// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDISPLAYCONFIGREQUESTDISPLAYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDISPLAYCONFIGREQUESTDISPLAYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyDisplayConfigRequestDisplayConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDisplayConfigRequestDisplayConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Dpi, dpi_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(LockResolution, lockResolution_);
      DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDisplayConfigRequestDisplayConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Dpi, dpi_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(LockResolution, lockResolution_);
      DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
    };
    ModifyDisplayConfigRequestDisplayConfig() = default ;
    ModifyDisplayConfigRequestDisplayConfig(const ModifyDisplayConfigRequestDisplayConfig &) = default ;
    ModifyDisplayConfigRequestDisplayConfig(ModifyDisplayConfigRequestDisplayConfig &&) = default ;
    ModifyDisplayConfigRequestDisplayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDisplayConfigRequestDisplayConfig() = default ;
    ModifyDisplayConfigRequestDisplayConfig& operator=(const ModifyDisplayConfigRequestDisplayConfig &) = default ;
    ModifyDisplayConfigRequestDisplayConfig& operator=(ModifyDisplayConfigRequestDisplayConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dpi_ == nullptr
        && return this->fps_ == nullptr && return this->lockResolution_ == nullptr && return this->resolutionHeight_ == nullptr && return this->resolutionWidth_ == nullptr; };
    // dpi Field Functions 
    bool hasDpi() const { return this->dpi_ != nullptr;};
    void deleteDpi() { this->dpi_ = nullptr;};
    inline int32_t dpi() const { DARABONBA_PTR_GET_DEFAULT(dpi_, 0) };
    inline ModifyDisplayConfigRequestDisplayConfig& setDpi(int32_t dpi) { DARABONBA_PTR_SET_VALUE(dpi_, dpi) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline int32_t fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0) };
    inline ModifyDisplayConfigRequestDisplayConfig& setFps(int32_t fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // lockResolution Field Functions 
    bool hasLockResolution() const { return this->lockResolution_ != nullptr;};
    void deleteLockResolution() { this->lockResolution_ = nullptr;};
    inline string lockResolution() const { DARABONBA_PTR_GET_DEFAULT(lockResolution_, "") };
    inline ModifyDisplayConfigRequestDisplayConfig& setLockResolution(string lockResolution) { DARABONBA_PTR_SET_VALUE(lockResolution_, lockResolution) };


    // resolutionHeight Field Functions 
    bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
    void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
    inline int32_t resolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
    inline ModifyDisplayConfigRequestDisplayConfig& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


    // resolutionWidth Field Functions 
    bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
    void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
    inline int32_t resolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
    inline ModifyDisplayConfigRequestDisplayConfig& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


  protected:
    std::shared_ptr<int32_t> dpi_ = nullptr;
    std::shared_ptr<int32_t> fps_ = nullptr;
    std::shared_ptr<string> lockResolution_ = nullptr;
    std::shared_ptr<int32_t> resolutionHeight_ = nullptr;
    std::shared_ptr<int32_t> resolutionWidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
