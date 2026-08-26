// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTUDIOLAYOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTUDIOLAYOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyStudioLayoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStudioLayoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BgImageConfig, bgImageConfig_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(CommonConfig, commonConfig_);
      DARABONBA_PTR_TO_JSON(LayerOrderConfigList, layerOrderConfigList_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(LayoutName, layoutName_);
      DARABONBA_PTR_TO_JSON(MediaInputConfigList, mediaInputConfigList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScreenInputConfigList, screenInputConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStudioLayoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BgImageConfig, bgImageConfig_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(CommonConfig, commonConfig_);
      DARABONBA_PTR_FROM_JSON(LayerOrderConfigList, layerOrderConfigList_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(LayoutName, layoutName_);
      DARABONBA_PTR_FROM_JSON(MediaInputConfigList, mediaInputConfigList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScreenInputConfigList, screenInputConfigList_);
    };
    ModifyStudioLayoutRequest() = default ;
    ModifyStudioLayoutRequest(const ModifyStudioLayoutRequest &) = default ;
    ModifyStudioLayoutRequest(ModifyStudioLayoutRequest &&) = default ;
    ModifyStudioLayoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStudioLayoutRequest() = default ;
    ModifyStudioLayoutRequest& operator=(const ModifyStudioLayoutRequest &) = default ;
    ModifyStudioLayoutRequest& operator=(ModifyStudioLayoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bgImageConfig_ == nullptr
        && this->casterId_ == nullptr && this->commonConfig_ == nullptr && this->layerOrderConfigList_ == nullptr && this->layoutId_ == nullptr && this->layoutName_ == nullptr
        && this->mediaInputConfigList_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->screenInputConfigList_ == nullptr; };
    // bgImageConfig Field Functions 
    bool hasBgImageConfig() const { return this->bgImageConfig_ != nullptr;};
    void deleteBgImageConfig() { this->bgImageConfig_ = nullptr;};
    inline string getBgImageConfig() const { DARABONBA_PTR_GET_DEFAULT(bgImageConfig_, "") };
    inline ModifyStudioLayoutRequest& setBgImageConfig(string bgImageConfig) { DARABONBA_PTR_SET_VALUE(bgImageConfig_, bgImageConfig) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline ModifyStudioLayoutRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // commonConfig Field Functions 
    bool hasCommonConfig() const { return this->commonConfig_ != nullptr;};
    void deleteCommonConfig() { this->commonConfig_ = nullptr;};
    inline string getCommonConfig() const { DARABONBA_PTR_GET_DEFAULT(commonConfig_, "") };
    inline ModifyStudioLayoutRequest& setCommonConfig(string commonConfig) { DARABONBA_PTR_SET_VALUE(commonConfig_, commonConfig) };


    // layerOrderConfigList Field Functions 
    bool hasLayerOrderConfigList() const { return this->layerOrderConfigList_ != nullptr;};
    void deleteLayerOrderConfigList() { this->layerOrderConfigList_ = nullptr;};
    inline string getLayerOrderConfigList() const { DARABONBA_PTR_GET_DEFAULT(layerOrderConfigList_, "") };
    inline ModifyStudioLayoutRequest& setLayerOrderConfigList(string layerOrderConfigList) { DARABONBA_PTR_SET_VALUE(layerOrderConfigList_, layerOrderConfigList) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline ModifyStudioLayoutRequest& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // layoutName Field Functions 
    bool hasLayoutName() const { return this->layoutName_ != nullptr;};
    void deleteLayoutName() { this->layoutName_ = nullptr;};
    inline string getLayoutName() const { DARABONBA_PTR_GET_DEFAULT(layoutName_, "") };
    inline ModifyStudioLayoutRequest& setLayoutName(string layoutName) { DARABONBA_PTR_SET_VALUE(layoutName_, layoutName) };


    // mediaInputConfigList Field Functions 
    bool hasMediaInputConfigList() const { return this->mediaInputConfigList_ != nullptr;};
    void deleteMediaInputConfigList() { this->mediaInputConfigList_ = nullptr;};
    inline string getMediaInputConfigList() const { DARABONBA_PTR_GET_DEFAULT(mediaInputConfigList_, "") };
    inline ModifyStudioLayoutRequest& setMediaInputConfigList(string mediaInputConfigList) { DARABONBA_PTR_SET_VALUE(mediaInputConfigList_, mediaInputConfigList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyStudioLayoutRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyStudioLayoutRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // screenInputConfigList Field Functions 
    bool hasScreenInputConfigList() const { return this->screenInputConfigList_ != nullptr;};
    void deleteScreenInputConfigList() { this->screenInputConfigList_ = nullptr;};
    inline string getScreenInputConfigList() const { DARABONBA_PTR_GET_DEFAULT(screenInputConfigList_, "") };
    inline ModifyStudioLayoutRequest& setScreenInputConfigList(string screenInputConfigList) { DARABONBA_PTR_SET_VALUE(screenInputConfigList_, screenInputConfigList) };


  protected:
    // The configuration of the background resource. This parameter is a JSON string. For more information, see **BgImageConfig**.
    // 
    // >Notice: 
    // 
    // This parameter is required only when LayoutType is set to studio.
    shared_ptr<string> bgImageConfig_ {};
    // The ID of the production studio. >Notice: The production studio must be created in advance and must be of the virtual studio type.
    // 
    // - If you create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, use the CasterId value returned in the response.
    // 
    // - If you create a production studio in the ApsaraVideo Live console, go to the **ApsaraVideo Live console** > **Production Studio** > **Cloud Production Studio** page to view the ID.
    // 
    // > The name of the production studio in the list on the Cloud Production Studio page is the production studio ID.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The configuration of the common layout. This parameter is a JSON string. For more information, see **CommonConfig**. >Notice: This parameter is required only when LayoutType is set to common.
    shared_ptr<string> commonConfig_ {};
    // The layer order settings. This parameter is a JSON string. For more information, see **layerOrderConfig**. You can sort background and multimedia materials. Chroma keying layers are not supported. The earlier an item appears in the list, the lower its layer.
    shared_ptr<string> layerOrderConfigList_ {};
    // The ID of the layout. If you add a layout for a production studio by calling the [AddStudioLayout](https://help.aliyun.com/document_detail/2848062.html) operation, use the LayoutId value returned in the response.
    // 
    // This parameter is required.
    shared_ptr<string> layoutId_ {};
    // The name of the production studio layout.
    shared_ptr<string> layoutName_ {};
    // The settings for the multimedia input resource. This parameter is a JSON string. For more information, see **MediaInputConfig**.
    // 
    // >Notice: 
    // 
    // This parameter is valid and optional only when LayoutType is set to studio.
    shared_ptr<string> mediaInputConfigList_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The settings for the chroma keying input. This parameter is a JSON string. For more information, see **ScreenInputConfig**.
    // 
    // >Notice: 
    // 
    // This parameter is required only when LayoutType is set to studio.
    shared_ptr<string> screenInputConfigList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
