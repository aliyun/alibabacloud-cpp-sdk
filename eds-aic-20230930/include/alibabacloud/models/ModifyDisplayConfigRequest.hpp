// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDISPLAYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDISPLAYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyDisplayConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDisplayConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_TO_JSON(DisplayConfig, displayConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDisplayConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_FROM_JSON(DisplayConfig, displayConfig_);
    };
    ModifyDisplayConfigRequest() = default ;
    ModifyDisplayConfigRequest(const ModifyDisplayConfigRequest &) = default ;
    ModifyDisplayConfigRequest(ModifyDisplayConfigRequest &&) = default ;
    ModifyDisplayConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDisplayConfigRequest() = default ;
    ModifyDisplayConfigRequest& operator=(const ModifyDisplayConfigRequest &) = default ;
    ModifyDisplayConfigRequest& operator=(ModifyDisplayConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DisplayConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DisplayConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Dpi, dpi_);
        DARABONBA_PTR_TO_JSON(Fps, fps_);
        DARABONBA_PTR_TO_JSON(LockResolution, lockResolution_);
        DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
        DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
      };
      friend void from_json(const Darabonba::Json& j, DisplayConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Dpi, dpi_);
        DARABONBA_PTR_FROM_JSON(Fps, fps_);
        DARABONBA_PTR_FROM_JSON(LockResolution, lockResolution_);
        DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
        DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
      };
      DisplayConfig() = default ;
      DisplayConfig(const DisplayConfig &) = default ;
      DisplayConfig(DisplayConfig &&) = default ;
      DisplayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DisplayConfig() = default ;
      DisplayConfig& operator=(const DisplayConfig &) = default ;
      DisplayConfig& operator=(DisplayConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dpi_ == nullptr
        && this->fps_ == nullptr && this->lockResolution_ == nullptr && this->resolutionHeight_ == nullptr && this->resolutionWidth_ == nullptr; };
      // dpi Field Functions 
      bool hasDpi() const { return this->dpi_ != nullptr;};
      void deleteDpi() { this->dpi_ = nullptr;};
      inline int32_t getDpi() const { DARABONBA_PTR_GET_DEFAULT(dpi_, 0) };
      inline DisplayConfig& setDpi(int32_t dpi) { DARABONBA_PTR_SET_VALUE(dpi_, dpi) };


      // fps Field Functions 
      bool hasFps() const { return this->fps_ != nullptr;};
      void deleteFps() { this->fps_ = nullptr;};
      inline int32_t getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0) };
      inline DisplayConfig& setFps(int32_t fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


      // lockResolution Field Functions 
      bool hasLockResolution() const { return this->lockResolution_ != nullptr;};
      void deleteLockResolution() { this->lockResolution_ = nullptr;};
      inline string getLockResolution() const { DARABONBA_PTR_GET_DEFAULT(lockResolution_, "") };
      inline DisplayConfig& setLockResolution(string lockResolution) { DARABONBA_PTR_SET_VALUE(lockResolution_, lockResolution) };


      // resolutionHeight Field Functions 
      bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
      void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
      inline int32_t getResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
      inline DisplayConfig& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


      // resolutionWidth Field Functions 
      bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
      void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
      inline int32_t getResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
      inline DisplayConfig& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    protected:
      shared_ptr<int32_t> dpi_ {};
      shared_ptr<int32_t> fps_ {};
      shared_ptr<string> lockResolution_ {};
      shared_ptr<int32_t> resolutionHeight_ {};
      shared_ptr<int32_t> resolutionWidth_ {};
    };

    virtual bool empty() const override { return this->androidInstanceIds_ == nullptr
        && this->displayConfig_ == nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & getAndroidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> getAndroidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline ModifyDisplayConfigRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline ModifyDisplayConfigRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


    // displayConfig Field Functions 
    bool hasDisplayConfig() const { return this->displayConfig_ != nullptr;};
    void deleteDisplayConfig() { this->displayConfig_ = nullptr;};
    inline const ModifyDisplayConfigRequest::DisplayConfig & getDisplayConfig() const { DARABONBA_PTR_GET_CONST(displayConfig_, ModifyDisplayConfigRequest::DisplayConfig) };
    inline ModifyDisplayConfigRequest::DisplayConfig getDisplayConfig() { DARABONBA_PTR_GET(displayConfig_, ModifyDisplayConfigRequest::DisplayConfig) };
    inline ModifyDisplayConfigRequest& setDisplayConfig(const ModifyDisplayConfigRequest::DisplayConfig & displayConfig) { DARABONBA_PTR_SET_VALUE(displayConfig_, displayConfig) };
    inline ModifyDisplayConfigRequest& setDisplayConfig(ModifyDisplayConfigRequest::DisplayConfig && displayConfig) { DARABONBA_PTR_SET_RVALUE(displayConfig_, displayConfig) };


  protected:
    shared_ptr<vector<string>> androidInstanceIds_ {};
    shared_ptr<ModifyDisplayConfigRequest::DisplayConfig> displayConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
