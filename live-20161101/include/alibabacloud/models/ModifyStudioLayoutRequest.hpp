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
        && return this->casterId_ == nullptr && return this->commonConfig_ == nullptr && return this->layerOrderConfigList_ == nullptr && return this->layoutId_ == nullptr && return this->layoutName_ == nullptr
        && return this->mediaInputConfigList_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->screenInputConfigList_ == nullptr; };
    // bgImageConfig Field Functions 
    bool hasBgImageConfig() const { return this->bgImageConfig_ != nullptr;};
    void deleteBgImageConfig() { this->bgImageConfig_ = nullptr;};
    inline string bgImageConfig() const { DARABONBA_PTR_GET_DEFAULT(bgImageConfig_, "") };
    inline ModifyStudioLayoutRequest& setBgImageConfig(string bgImageConfig) { DARABONBA_PTR_SET_VALUE(bgImageConfig_, bgImageConfig) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline ModifyStudioLayoutRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // commonConfig Field Functions 
    bool hasCommonConfig() const { return this->commonConfig_ != nullptr;};
    void deleteCommonConfig() { this->commonConfig_ = nullptr;};
    inline string commonConfig() const { DARABONBA_PTR_GET_DEFAULT(commonConfig_, "") };
    inline ModifyStudioLayoutRequest& setCommonConfig(string commonConfig) { DARABONBA_PTR_SET_VALUE(commonConfig_, commonConfig) };


    // layerOrderConfigList Field Functions 
    bool hasLayerOrderConfigList() const { return this->layerOrderConfigList_ != nullptr;};
    void deleteLayerOrderConfigList() { this->layerOrderConfigList_ = nullptr;};
    inline string layerOrderConfigList() const { DARABONBA_PTR_GET_DEFAULT(layerOrderConfigList_, "") };
    inline ModifyStudioLayoutRequest& setLayerOrderConfigList(string layerOrderConfigList) { DARABONBA_PTR_SET_VALUE(layerOrderConfigList_, layerOrderConfigList) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string layoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline ModifyStudioLayoutRequest& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // layoutName Field Functions 
    bool hasLayoutName() const { return this->layoutName_ != nullptr;};
    void deleteLayoutName() { this->layoutName_ = nullptr;};
    inline string layoutName() const { DARABONBA_PTR_GET_DEFAULT(layoutName_, "") };
    inline ModifyStudioLayoutRequest& setLayoutName(string layoutName) { DARABONBA_PTR_SET_VALUE(layoutName_, layoutName) };


    // mediaInputConfigList Field Functions 
    bool hasMediaInputConfigList() const { return this->mediaInputConfigList_ != nullptr;};
    void deleteMediaInputConfigList() { this->mediaInputConfigList_ = nullptr;};
    inline string mediaInputConfigList() const { DARABONBA_PTR_GET_DEFAULT(mediaInputConfigList_, "") };
    inline ModifyStudioLayoutRequest& setMediaInputConfigList(string mediaInputConfigList) { DARABONBA_PTR_SET_VALUE(mediaInputConfigList_, mediaInputConfigList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyStudioLayoutRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyStudioLayoutRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // screenInputConfigList Field Functions 
    bool hasScreenInputConfigList() const { return this->screenInputConfigList_ != nullptr;};
    void deleteScreenInputConfigList() { this->screenInputConfigList_ = nullptr;};
    inline string screenInputConfigList() const { DARABONBA_PTR_GET_DEFAULT(screenInputConfigList_, "") };
    inline ModifyStudioLayoutRequest& setScreenInputConfigList(string screenInputConfigList) { DARABONBA_PTR_SET_VALUE(screenInputConfigList_, screenInputConfigList) };


  protected:
    // The background material configurations. The value is a JSON string. For more information, see **BgImageConfig**.
    // 
    // >  This parameter is required only if you set LayoutType to studio.
    std::shared_ptr<string> bgImageConfig_ = nullptr;
    // The ID of the production studio.
    // 
    // >  The production studio must be a virtual studio that you create in advance.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    std::shared_ptr<string> casterId_ = nullptr;
    // The common layout configurations. The value is a JSON string. For more information, see **CommonConfig**.
    // 
    // >  This parameter is required only if you set LayoutType to common.
    std::shared_ptr<string> commonConfig_ = nullptr;
    // The layer sorting configurations. The value is a JSON string. For more information, see **layerOrderConfig**. You can sort layers of background and multimedia materials. The chroma key layer cannot be sorted. A layer that is in the front of the code is placed behind other layers in the layout.
    std::shared_ptr<string> layerOrderConfigList_ = nullptr;
    // The ID of the layout. If the layout was added by calling the [AddStudioLayout](https://help.aliyun.com/document_detail/2848062.html) operation, check the value of the response parameter LayoutId to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> layoutId_ = nullptr;
    // The name of the layout.
    std::shared_ptr<string> layoutName_ = nullptr;
    // The multimedia input configurations. The value is a JSON string. For more information, see **MediaInputConfig**.
    // 
    // >  This parameter is optional and takes effect only if you set LayoutType to studio.
    std::shared_ptr<string> mediaInputConfigList_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The input configurations for chroma key. The value is a JSON string. For more information, see **ScreenInputConfig**.
    // 
    // >  This parameter is required only if you set LayoutType to studio.
    std::shared_ptr<string> screenInputConfigList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
