// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ModelPath, modelPath_);
      DARABONBA_PTR_TO_JSON(PanoList, panoList_);
      DARABONBA_PTR_TO_JSON(TextureModelPath, textureModelPath_);
      DARABONBA_PTR_TO_JSON(TexturePanoPath, texturePanoPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelPath, modelPath_);
      DARABONBA_PTR_FROM_JSON(PanoList, panoList_);
      DARABONBA_PTR_FROM_JSON(TextureModelPath, textureModelPath_);
      DARABONBA_PTR_FROM_JSON(TexturePanoPath, texturePanoPath_);
    };
    GetScenePreviewInfoResponseBodyData() = default ;
    GetScenePreviewInfoResponseBodyData(const GetScenePreviewInfoResponseBodyData &) = default ;
    GetScenePreviewInfoResponseBodyData(GetScenePreviewInfoResponseBodyData &&) = default ;
    GetScenePreviewInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewInfoResponseBodyData() = default ;
    GetScenePreviewInfoResponseBodyData& operator=(const GetScenePreviewInfoResponseBodyData &) = default ;
    GetScenePreviewInfoResponseBodyData& operator=(GetScenePreviewInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelPath_ == nullptr
        && return this->panoList_ == nullptr && return this->textureModelPath_ == nullptr && return this->texturePanoPath_ == nullptr; };
    // modelPath Field Functions 
    bool hasModelPath() const { return this->modelPath_ != nullptr;};
    void deleteModelPath() { this->modelPath_ = nullptr;};
    inline string modelPath() const { DARABONBA_PTR_GET_DEFAULT(modelPath_, "") };
    inline GetScenePreviewInfoResponseBodyData& setModelPath(string modelPath) { DARABONBA_PTR_SET_VALUE(modelPath_, modelPath) };


    // panoList Field Functions 
    bool hasPanoList() const { return this->panoList_ != nullptr;};
    void deletePanoList() { this->panoList_ = nullptr;};
    inline string panoList() const { DARABONBA_PTR_GET_DEFAULT(panoList_, "") };
    inline GetScenePreviewInfoResponseBodyData& setPanoList(string panoList) { DARABONBA_PTR_SET_VALUE(panoList_, panoList) };


    // textureModelPath Field Functions 
    bool hasTextureModelPath() const { return this->textureModelPath_ != nullptr;};
    void deleteTextureModelPath() { this->textureModelPath_ = nullptr;};
    inline string textureModelPath() const { DARABONBA_PTR_GET_DEFAULT(textureModelPath_, "") };
    inline GetScenePreviewInfoResponseBodyData& setTextureModelPath(string textureModelPath) { DARABONBA_PTR_SET_VALUE(textureModelPath_, textureModelPath) };


    // texturePanoPath Field Functions 
    bool hasTexturePanoPath() const { return this->texturePanoPath_ != nullptr;};
    void deleteTexturePanoPath() { this->texturePanoPath_ = nullptr;};
    inline string texturePanoPath() const { DARABONBA_PTR_GET_DEFAULT(texturePanoPath_, "") };
    inline GetScenePreviewInfoResponseBodyData& setTexturePanoPath(string texturePanoPath) { DARABONBA_PTR_SET_VALUE(texturePanoPath_, texturePanoPath) };


  protected:
    std::shared_ptr<string> modelPath_ = nullptr;
    std::shared_ptr<string> panoList_ = nullptr;
    std::shared_ptr<string> textureModelPath_ = nullptr;
    std::shared_ptr<string> texturePanoPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
