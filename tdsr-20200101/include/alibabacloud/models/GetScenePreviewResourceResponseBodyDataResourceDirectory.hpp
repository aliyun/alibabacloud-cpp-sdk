// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWRESOURCERESPONSEBODYDATARESOURCEDIRECTORY_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWRESOURCERESPONSEBODYDATARESOURCEDIRECTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewResourceResponseBodyDataResourceDirectory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewResourceResponseBodyDataResourceDirectory& obj) { 
      DARABONBA_PTR_TO_JSON(HotspotTagConfig, hotspotTagConfig_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(OrthomapConfig, orthomapConfig_);
      DARABONBA_PTR_TO_JSON(RootPath, rootPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewResourceResponseBodyDataResourceDirectory& obj) { 
      DARABONBA_PTR_FROM_JSON(HotspotTagConfig, hotspotTagConfig_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(OrthomapConfig, orthomapConfig_);
      DARABONBA_PTR_FROM_JSON(RootPath, rootPath_);
    };
    GetScenePreviewResourceResponseBodyDataResourceDirectory() = default ;
    GetScenePreviewResourceResponseBodyDataResourceDirectory(const GetScenePreviewResourceResponseBodyDataResourceDirectory &) = default ;
    GetScenePreviewResourceResponseBodyDataResourceDirectory(GetScenePreviewResourceResponseBodyDataResourceDirectory &&) = default ;
    GetScenePreviewResourceResponseBodyDataResourceDirectory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewResourceResponseBodyDataResourceDirectory() = default ;
    GetScenePreviewResourceResponseBodyDataResourceDirectory& operator=(const GetScenePreviewResourceResponseBodyDataResourceDirectory &) = default ;
    GetScenePreviewResourceResponseBodyDataResourceDirectory& operator=(GetScenePreviewResourceResponseBodyDataResourceDirectory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotspotTagConfig_ == nullptr
        && return this->modelConfig_ == nullptr && return this->orthomapConfig_ == nullptr && return this->rootPath_ == nullptr; };
    // hotspotTagConfig Field Functions 
    bool hasHotspotTagConfig() const { return this->hotspotTagConfig_ != nullptr;};
    void deleteHotspotTagConfig() { this->hotspotTagConfig_ = nullptr;};
    inline string hotspotTagConfig() const { DARABONBA_PTR_GET_DEFAULT(hotspotTagConfig_, "") };
    inline GetScenePreviewResourceResponseBodyDataResourceDirectory& setHotspotTagConfig(string hotspotTagConfig) { DARABONBA_PTR_SET_VALUE(hotspotTagConfig_, hotspotTagConfig) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline string modelConfig() const { DARABONBA_PTR_GET_DEFAULT(modelConfig_, "") };
    inline GetScenePreviewResourceResponseBodyDataResourceDirectory& setModelConfig(string modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };


    // orthomapConfig Field Functions 
    bool hasOrthomapConfig() const { return this->orthomapConfig_ != nullptr;};
    void deleteOrthomapConfig() { this->orthomapConfig_ = nullptr;};
    inline string orthomapConfig() const { DARABONBA_PTR_GET_DEFAULT(orthomapConfig_, "") };
    inline GetScenePreviewResourceResponseBodyDataResourceDirectory& setOrthomapConfig(string orthomapConfig) { DARABONBA_PTR_SET_VALUE(orthomapConfig_, orthomapConfig) };


    // rootPath Field Functions 
    bool hasRootPath() const { return this->rootPath_ != nullptr;};
    void deleteRootPath() { this->rootPath_ = nullptr;};
    inline string rootPath() const { DARABONBA_PTR_GET_DEFAULT(rootPath_, "") };
    inline GetScenePreviewResourceResponseBodyDataResourceDirectory& setRootPath(string rootPath) { DARABONBA_PTR_SET_VALUE(rootPath_, rootPath) };


  protected:
    std::shared_ptr<string> hotspotTagConfig_ = nullptr;
    std::shared_ptr<string> modelConfig_ = nullptr;
    std::shared_ptr<string> orthomapConfig_ = nullptr;
    std::shared_ptr<string> rootPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
