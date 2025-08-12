// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCASTERLAYOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCASTERLAYOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCasterLayoutRequestAudioLayer.hpp>
#include <alibabacloud/models/ModifyCasterLayoutRequestVideoLayer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyCasterLayoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCasterLayoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLayer, audioLayer_);
      DARABONBA_PTR_TO_JSON(BlendList, blendList_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(MixList, mixList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VideoLayer, videoLayer_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCasterLayoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLayer, audioLayer_);
      DARABONBA_PTR_FROM_JSON(BlendList, blendList_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(MixList, mixList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VideoLayer, videoLayer_);
    };
    ModifyCasterLayoutRequest() = default ;
    ModifyCasterLayoutRequest(const ModifyCasterLayoutRequest &) = default ;
    ModifyCasterLayoutRequest(ModifyCasterLayoutRequest &&) = default ;
    ModifyCasterLayoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCasterLayoutRequest() = default ;
    ModifyCasterLayoutRequest& operator=(const ModifyCasterLayoutRequest &) = default ;
    ModifyCasterLayoutRequest& operator=(ModifyCasterLayoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioLayer_ != nullptr
        && this->blendList_ != nullptr && this->casterId_ != nullptr && this->layoutId_ != nullptr && this->mixList_ != nullptr && this->ownerId_ != nullptr
        && this->regionId_ != nullptr && this->videoLayer_ != nullptr; };
    // audioLayer Field Functions 
    bool hasAudioLayer() const { return this->audioLayer_ != nullptr;};
    void deleteAudioLayer() { this->audioLayer_ = nullptr;};
    inline const vector<ModifyCasterLayoutRequestAudioLayer> & audioLayer() const { DARABONBA_PTR_GET_CONST(audioLayer_, vector<ModifyCasterLayoutRequestAudioLayer>) };
    inline vector<ModifyCasterLayoutRequestAudioLayer> audioLayer() { DARABONBA_PTR_GET(audioLayer_, vector<ModifyCasterLayoutRequestAudioLayer>) };
    inline ModifyCasterLayoutRequest& setAudioLayer(const vector<ModifyCasterLayoutRequestAudioLayer> & audioLayer) { DARABONBA_PTR_SET_VALUE(audioLayer_, audioLayer) };
    inline ModifyCasterLayoutRequest& setAudioLayer(vector<ModifyCasterLayoutRequestAudioLayer> && audioLayer) { DARABONBA_PTR_SET_RVALUE(audioLayer_, audioLayer) };


    // blendList Field Functions 
    bool hasBlendList() const { return this->blendList_ != nullptr;};
    void deleteBlendList() { this->blendList_ = nullptr;};
    inline const vector<string> & blendList() const { DARABONBA_PTR_GET_CONST(blendList_, vector<string>) };
    inline vector<string> blendList() { DARABONBA_PTR_GET(blendList_, vector<string>) };
    inline ModifyCasterLayoutRequest& setBlendList(const vector<string> & blendList) { DARABONBA_PTR_SET_VALUE(blendList_, blendList) };
    inline ModifyCasterLayoutRequest& setBlendList(vector<string> && blendList) { DARABONBA_PTR_SET_RVALUE(blendList_, blendList) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline ModifyCasterLayoutRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string layoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline ModifyCasterLayoutRequest& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // mixList Field Functions 
    bool hasMixList() const { return this->mixList_ != nullptr;};
    void deleteMixList() { this->mixList_ = nullptr;};
    inline const vector<string> & mixList() const { DARABONBA_PTR_GET_CONST(mixList_, vector<string>) };
    inline vector<string> mixList() { DARABONBA_PTR_GET(mixList_, vector<string>) };
    inline ModifyCasterLayoutRequest& setMixList(const vector<string> & mixList) { DARABONBA_PTR_SET_VALUE(mixList_, mixList) };
    inline ModifyCasterLayoutRequest& setMixList(vector<string> && mixList) { DARABONBA_PTR_SET_RVALUE(mixList_, mixList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCasterLayoutRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCasterLayoutRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // videoLayer Field Functions 
    bool hasVideoLayer() const { return this->videoLayer_ != nullptr;};
    void deleteVideoLayer() { this->videoLayer_ = nullptr;};
    inline const vector<ModifyCasterLayoutRequestVideoLayer> & videoLayer() const { DARABONBA_PTR_GET_CONST(videoLayer_, vector<ModifyCasterLayoutRequestVideoLayer>) };
    inline vector<ModifyCasterLayoutRequestVideoLayer> videoLayer() { DARABONBA_PTR_GET(videoLayer_, vector<ModifyCasterLayoutRequestVideoLayer>) };
    inline ModifyCasterLayoutRequest& setVideoLayer(const vector<ModifyCasterLayoutRequestVideoLayer> & videoLayer) { DARABONBA_PTR_SET_VALUE(videoLayer_, videoLayer) };
    inline ModifyCasterLayoutRequest& setVideoLayer(vector<ModifyCasterLayoutRequestVideoLayer> && videoLayer) { DARABONBA_PTR_SET_RVALUE(videoLayer_, videoLayer) };


  protected:
    // The audio layers.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ModifyCasterLayoutRequestAudioLayer>> audioLayer_ = nullptr;
    // The location IDs of the video layers, which are in the same order as the video layers.
    // 
    // For more information, see [AddCasterVideoResource](https://help.aliyun.com/document_detail/2848020.html).
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> blendList_ = nullptr;
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    std::shared_ptr<string> casterId_ = nullptr;
    // The ID of the layout. If the layout was added by calling the [AddCasterLayout](https://help.aliyun.com/document_detail/2848025.html) operation, check the value of the response parameter LayoutId to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> layoutId_ = nullptr;
    // The location IDs of the audio layers, which are in the same order as the audio layers.
    // 
    // For more information, see [AddCasterVideoResource](https://help.aliyun.com/document_detail/2848020.html).
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> mixList_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The video layers.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ModifyCasterLayoutRequestVideoLayer>> videoLayer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
