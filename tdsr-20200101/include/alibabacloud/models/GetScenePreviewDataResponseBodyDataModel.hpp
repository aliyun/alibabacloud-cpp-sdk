// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATAMODEL_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATAMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetScenePreviewDataResponseBodyDataModelPanoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewDataResponseBodyDataModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewDataResponseBodyDataModel& obj) { 
      DARABONBA_PTR_TO_JSON(ModelPath, modelPath_);
      DARABONBA_PTR_TO_JSON(PanoList, panoList_);
      DARABONBA_PTR_TO_JSON(TextureModelPath, textureModelPath_);
      DARABONBA_PTR_TO_JSON(TexturePanoPath, texturePanoPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewDataResponseBodyDataModel& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelPath, modelPath_);
      DARABONBA_PTR_FROM_JSON(PanoList, panoList_);
      DARABONBA_PTR_FROM_JSON(TextureModelPath, textureModelPath_);
      DARABONBA_PTR_FROM_JSON(TexturePanoPath, texturePanoPath_);
    };
    GetScenePreviewDataResponseBodyDataModel() = default ;
    GetScenePreviewDataResponseBodyDataModel(const GetScenePreviewDataResponseBodyDataModel &) = default ;
    GetScenePreviewDataResponseBodyDataModel(GetScenePreviewDataResponseBodyDataModel &&) = default ;
    GetScenePreviewDataResponseBodyDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewDataResponseBodyDataModel() = default ;
    GetScenePreviewDataResponseBodyDataModel& operator=(const GetScenePreviewDataResponseBodyDataModel &) = default ;
    GetScenePreviewDataResponseBodyDataModel& operator=(GetScenePreviewDataResponseBodyDataModel &&) = default ;
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
    inline GetScenePreviewDataResponseBodyDataModel& setModelPath(string modelPath) { DARABONBA_PTR_SET_VALUE(modelPath_, modelPath) };


    // panoList Field Functions 
    bool hasPanoList() const { return this->panoList_ != nullptr;};
    void deletePanoList() { this->panoList_ = nullptr;};
    inline const vector<Models::GetScenePreviewDataResponseBodyDataModelPanoList> & panoList() const { DARABONBA_PTR_GET_CONST(panoList_, vector<Models::GetScenePreviewDataResponseBodyDataModelPanoList>) };
    inline vector<Models::GetScenePreviewDataResponseBodyDataModelPanoList> panoList() { DARABONBA_PTR_GET(panoList_, vector<Models::GetScenePreviewDataResponseBodyDataModelPanoList>) };
    inline GetScenePreviewDataResponseBodyDataModel& setPanoList(const vector<Models::GetScenePreviewDataResponseBodyDataModelPanoList> & panoList) { DARABONBA_PTR_SET_VALUE(panoList_, panoList) };
    inline GetScenePreviewDataResponseBodyDataModel& setPanoList(vector<Models::GetScenePreviewDataResponseBodyDataModelPanoList> && panoList) { DARABONBA_PTR_SET_RVALUE(panoList_, panoList) };


    // textureModelPath Field Functions 
    bool hasTextureModelPath() const { return this->textureModelPath_ != nullptr;};
    void deleteTextureModelPath() { this->textureModelPath_ = nullptr;};
    inline string textureModelPath() const { DARABONBA_PTR_GET_DEFAULT(textureModelPath_, "") };
    inline GetScenePreviewDataResponseBodyDataModel& setTextureModelPath(string textureModelPath) { DARABONBA_PTR_SET_VALUE(textureModelPath_, textureModelPath) };


    // texturePanoPath Field Functions 
    bool hasTexturePanoPath() const { return this->texturePanoPath_ != nullptr;};
    void deleteTexturePanoPath() { this->texturePanoPath_ = nullptr;};
    inline string texturePanoPath() const { DARABONBA_PTR_GET_DEFAULT(texturePanoPath_, "") };
    inline GetScenePreviewDataResponseBodyDataModel& setTexturePanoPath(string texturePanoPath) { DARABONBA_PTR_SET_VALUE(texturePanoPath_, texturePanoPath) };


  protected:
    std::shared_ptr<string> modelPath_ = nullptr;
    std::shared_ptr<vector<Models::GetScenePreviewDataResponseBodyDataModelPanoList>> panoList_ = nullptr;
    std::shared_ptr<string> textureModelPath_ = nullptr;
    std::shared_ptr<string> texturePanoPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
