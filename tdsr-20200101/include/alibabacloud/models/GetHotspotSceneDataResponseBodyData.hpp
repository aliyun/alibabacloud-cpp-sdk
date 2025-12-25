// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTSCENEDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTSCENEDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetHotspotSceneDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotspotSceneDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ModelToken, modelToken_);
      DARABONBA_PTR_TO_JSON(PreviewData, previewData_);
      DARABONBA_PTR_TO_JSON(PreviewToken, previewToken_);
      DARABONBA_PTR_TO_JSON(SceneType, sceneType_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotspotSceneDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelToken, modelToken_);
      DARABONBA_PTR_FROM_JSON(PreviewData, previewData_);
      DARABONBA_PTR_FROM_JSON(PreviewToken, previewToken_);
      DARABONBA_PTR_FROM_JSON(SceneType, sceneType_);
    };
    GetHotspotSceneDataResponseBodyData() = default ;
    GetHotspotSceneDataResponseBodyData(const GetHotspotSceneDataResponseBodyData &) = default ;
    GetHotspotSceneDataResponseBodyData(GetHotspotSceneDataResponseBodyData &&) = default ;
    GetHotspotSceneDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotspotSceneDataResponseBodyData() = default ;
    GetHotspotSceneDataResponseBodyData& operator=(const GetHotspotSceneDataResponseBodyData &) = default ;
    GetHotspotSceneDataResponseBodyData& operator=(GetHotspotSceneDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelToken_ == nullptr
        && return this->previewData_ == nullptr && return this->previewToken_ == nullptr && return this->sceneType_ == nullptr; };
    // modelToken Field Functions 
    bool hasModelToken() const { return this->modelToken_ != nullptr;};
    void deleteModelToken() { this->modelToken_ = nullptr;};
    inline string modelToken() const { DARABONBA_PTR_GET_DEFAULT(modelToken_, "") };
    inline GetHotspotSceneDataResponseBodyData& setModelToken(string modelToken) { DARABONBA_PTR_SET_VALUE(modelToken_, modelToken) };


    // previewData Field Functions 
    bool hasPreviewData() const { return this->previewData_ != nullptr;};
    void deletePreviewData() { this->previewData_ = nullptr;};
    inline string previewData() const { DARABONBA_PTR_GET_DEFAULT(previewData_, "") };
    inline GetHotspotSceneDataResponseBodyData& setPreviewData(string previewData) { DARABONBA_PTR_SET_VALUE(previewData_, previewData) };


    // previewToken Field Functions 
    bool hasPreviewToken() const { return this->previewToken_ != nullptr;};
    void deletePreviewToken() { this->previewToken_ = nullptr;};
    inline string previewToken() const { DARABONBA_PTR_GET_DEFAULT(previewToken_, "") };
    inline GetHotspotSceneDataResponseBodyData& setPreviewToken(string previewToken) { DARABONBA_PTR_SET_VALUE(previewToken_, previewToken) };


    // sceneType Field Functions 
    bool hasSceneType() const { return this->sceneType_ != nullptr;};
    void deleteSceneType() { this->sceneType_ = nullptr;};
    inline string sceneType() const { DARABONBA_PTR_GET_DEFAULT(sceneType_, "") };
    inline GetHotspotSceneDataResponseBodyData& setSceneType(string sceneType) { DARABONBA_PTR_SET_VALUE(sceneType_, sceneType) };


  protected:
    std::shared_ptr<string> modelToken_ = nullptr;
    std::shared_ptr<string> previewData_ = nullptr;
    std::shared_ptr<string> previewToken_ = nullptr;
    std::shared_ptr<string> sceneType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
