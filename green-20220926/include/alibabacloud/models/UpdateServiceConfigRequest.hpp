// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateServiceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileConfig, fileConfig_);
      DARABONBA_PTR_TO_JSON(KeywordFilterLibs, keywordFilterLibs_);
      DARABONBA_PTR_TO_JSON(KeywordHitLibs, keywordHitLibs_);
      DARABONBA_PTR_TO_JSON(ManualMachineConfig, manualMachineConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SceneConfig, sceneConfig_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_TO_JSON(VideoConfig, videoConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileConfig, fileConfig_);
      DARABONBA_PTR_FROM_JSON(KeywordFilterLibs, keywordFilterLibs_);
      DARABONBA_PTR_FROM_JSON(KeywordHitLibs, keywordHitLibs_);
      DARABONBA_PTR_FROM_JSON(ManualMachineConfig, manualMachineConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SceneConfig, sceneConfig_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_FROM_JSON(VideoConfig, videoConfig_);
    };
    UpdateServiceConfigRequest() = default ;
    UpdateServiceConfigRequest(const UpdateServiceConfigRequest &) = default ;
    UpdateServiceConfigRequest(UpdateServiceConfigRequest &&) = default ;
    UpdateServiceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceConfigRequest() = default ;
    UpdateServiceConfigRequest& operator=(const UpdateServiceConfigRequest &) = default ;
    UpdateServiceConfigRequest& operator=(UpdateServiceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileConfig_ == nullptr
        && return this->keywordFilterLibs_ == nullptr && return this->keywordHitLibs_ == nullptr && return this->manualMachineConfig_ == nullptr && return this->regionId_ == nullptr && return this->resourceType_ == nullptr
        && return this->scene_ == nullptr && return this->sceneConfig_ == nullptr && return this->serviceCode_ == nullptr && return this->serviceConfig_ == nullptr && return this->videoConfig_ == nullptr; };
    // fileConfig Field Functions 
    bool hasFileConfig() const { return this->fileConfig_ != nullptr;};
    void deleteFileConfig() { this->fileConfig_ = nullptr;};
    inline string fileConfig() const { DARABONBA_PTR_GET_DEFAULT(fileConfig_, "") };
    inline UpdateServiceConfigRequest& setFileConfig(string fileConfig) { DARABONBA_PTR_SET_VALUE(fileConfig_, fileConfig) };


    // keywordFilterLibs Field Functions 
    bool hasKeywordFilterLibs() const { return this->keywordFilterLibs_ != nullptr;};
    void deleteKeywordFilterLibs() { this->keywordFilterLibs_ = nullptr;};
    inline string keywordFilterLibs() const { DARABONBA_PTR_GET_DEFAULT(keywordFilterLibs_, "") };
    inline UpdateServiceConfigRequest& setKeywordFilterLibs(string keywordFilterLibs) { DARABONBA_PTR_SET_VALUE(keywordFilterLibs_, keywordFilterLibs) };


    // keywordHitLibs Field Functions 
    bool hasKeywordHitLibs() const { return this->keywordHitLibs_ != nullptr;};
    void deleteKeywordHitLibs() { this->keywordHitLibs_ = nullptr;};
    inline string keywordHitLibs() const { DARABONBA_PTR_GET_DEFAULT(keywordHitLibs_, "") };
    inline UpdateServiceConfigRequest& setKeywordHitLibs(string keywordHitLibs) { DARABONBA_PTR_SET_VALUE(keywordHitLibs_, keywordHitLibs) };


    // manualMachineConfig Field Functions 
    bool hasManualMachineConfig() const { return this->manualMachineConfig_ != nullptr;};
    void deleteManualMachineConfig() { this->manualMachineConfig_ = nullptr;};
    inline string manualMachineConfig() const { DARABONBA_PTR_GET_DEFAULT(manualMachineConfig_, "") };
    inline UpdateServiceConfigRequest& setManualMachineConfig(string manualMachineConfig) { DARABONBA_PTR_SET_VALUE(manualMachineConfig_, manualMachineConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateServiceConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UpdateServiceConfigRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline UpdateServiceConfigRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sceneConfig Field Functions 
    bool hasSceneConfig() const { return this->sceneConfig_ != nullptr;};
    void deleteSceneConfig() { this->sceneConfig_ = nullptr;};
    inline string sceneConfig() const { DARABONBA_PTR_GET_DEFAULT(sceneConfig_, "") };
    inline UpdateServiceConfigRequest& setSceneConfig(string sceneConfig) { DARABONBA_PTR_SET_VALUE(sceneConfig_, sceneConfig) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline UpdateServiceConfigRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // serviceConfig Field Functions 
    bool hasServiceConfig() const { return this->serviceConfig_ != nullptr;};
    void deleteServiceConfig() { this->serviceConfig_ = nullptr;};
    inline string serviceConfig() const { DARABONBA_PTR_GET_DEFAULT(serviceConfig_, "") };
    inline UpdateServiceConfigRequest& setServiceConfig(string serviceConfig) { DARABONBA_PTR_SET_VALUE(serviceConfig_, serviceConfig) };


    // videoConfig Field Functions 
    bool hasVideoConfig() const { return this->videoConfig_ != nullptr;};
    void deleteVideoConfig() { this->videoConfig_ = nullptr;};
    inline string videoConfig() const { DARABONBA_PTR_GET_DEFAULT(videoConfig_, "") };
    inline UpdateServiceConfigRequest& setVideoConfig(string videoConfig) { DARABONBA_PTR_SET_VALUE(videoConfig_, videoConfig) };


  protected:
    std::shared_ptr<string> fileConfig_ = nullptr;
    std::shared_ptr<string> keywordFilterLibs_ = nullptr;
    std::shared_ptr<string> keywordHitLibs_ = nullptr;
    std::shared_ptr<string> manualMachineConfig_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<string> sceneConfig_ = nullptr;
    std::shared_ptr<string> serviceCode_ = nullptr;
    std::shared_ptr<string> serviceConfig_ = nullptr;
    std::shared_ptr<string> videoConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
