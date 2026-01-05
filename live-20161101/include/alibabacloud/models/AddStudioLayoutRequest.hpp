// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSTUDIOLAYOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSTUDIOLAYOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddStudioLayoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddStudioLayoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BgImageConfig, bgImageConfig_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(CommonConfig, commonConfig_);
      DARABONBA_PTR_TO_JSON(LayerOrderConfigList, layerOrderConfigList_);
      DARABONBA_PTR_TO_JSON(LayoutName, layoutName_);
      DARABONBA_PTR_TO_JSON(LayoutType, layoutType_);
      DARABONBA_PTR_TO_JSON(MediaInputConfigList, mediaInputConfigList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScreenInputConfigList, screenInputConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, AddStudioLayoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BgImageConfig, bgImageConfig_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(CommonConfig, commonConfig_);
      DARABONBA_PTR_FROM_JSON(LayerOrderConfigList, layerOrderConfigList_);
      DARABONBA_PTR_FROM_JSON(LayoutName, layoutName_);
      DARABONBA_PTR_FROM_JSON(LayoutType, layoutType_);
      DARABONBA_PTR_FROM_JSON(MediaInputConfigList, mediaInputConfigList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScreenInputConfigList, screenInputConfigList_);
    };
    AddStudioLayoutRequest() = default ;
    AddStudioLayoutRequest(const AddStudioLayoutRequest &) = default ;
    AddStudioLayoutRequest(AddStudioLayoutRequest &&) = default ;
    AddStudioLayoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddStudioLayoutRequest() = default ;
    AddStudioLayoutRequest& operator=(const AddStudioLayoutRequest &) = default ;
    AddStudioLayoutRequest& operator=(AddStudioLayoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bgImageConfig_ == nullptr
        && this->casterId_ == nullptr && this->commonConfig_ == nullptr && this->layerOrderConfigList_ == nullptr && this->layoutName_ == nullptr && this->layoutType_ == nullptr
        && this->mediaInputConfigList_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->screenInputConfigList_ == nullptr; };
    // bgImageConfig Field Functions 
    bool hasBgImageConfig() const { return this->bgImageConfig_ != nullptr;};
    void deleteBgImageConfig() { this->bgImageConfig_ = nullptr;};
    inline string getBgImageConfig() const { DARABONBA_PTR_GET_DEFAULT(bgImageConfig_, "") };
    inline AddStudioLayoutRequest& setBgImageConfig(string bgImageConfig) { DARABONBA_PTR_SET_VALUE(bgImageConfig_, bgImageConfig) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline AddStudioLayoutRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // commonConfig Field Functions 
    bool hasCommonConfig() const { return this->commonConfig_ != nullptr;};
    void deleteCommonConfig() { this->commonConfig_ = nullptr;};
    inline string getCommonConfig() const { DARABONBA_PTR_GET_DEFAULT(commonConfig_, "") };
    inline AddStudioLayoutRequest& setCommonConfig(string commonConfig) { DARABONBA_PTR_SET_VALUE(commonConfig_, commonConfig) };


    // layerOrderConfigList Field Functions 
    bool hasLayerOrderConfigList() const { return this->layerOrderConfigList_ != nullptr;};
    void deleteLayerOrderConfigList() { this->layerOrderConfigList_ = nullptr;};
    inline string getLayerOrderConfigList() const { DARABONBA_PTR_GET_DEFAULT(layerOrderConfigList_, "") };
    inline AddStudioLayoutRequest& setLayerOrderConfigList(string layerOrderConfigList) { DARABONBA_PTR_SET_VALUE(layerOrderConfigList_, layerOrderConfigList) };


    // layoutName Field Functions 
    bool hasLayoutName() const { return this->layoutName_ != nullptr;};
    void deleteLayoutName() { this->layoutName_ = nullptr;};
    inline string getLayoutName() const { DARABONBA_PTR_GET_DEFAULT(layoutName_, "") };
    inline AddStudioLayoutRequest& setLayoutName(string layoutName) { DARABONBA_PTR_SET_VALUE(layoutName_, layoutName) };


    // layoutType Field Functions 
    bool hasLayoutType() const { return this->layoutType_ != nullptr;};
    void deleteLayoutType() { this->layoutType_ = nullptr;};
    inline string getLayoutType() const { DARABONBA_PTR_GET_DEFAULT(layoutType_, "") };
    inline AddStudioLayoutRequest& setLayoutType(string layoutType) { DARABONBA_PTR_SET_VALUE(layoutType_, layoutType) };


    // mediaInputConfigList Field Functions 
    bool hasMediaInputConfigList() const { return this->mediaInputConfigList_ != nullptr;};
    void deleteMediaInputConfigList() { this->mediaInputConfigList_ = nullptr;};
    inline string getMediaInputConfigList() const { DARABONBA_PTR_GET_DEFAULT(mediaInputConfigList_, "") };
    inline AddStudioLayoutRequest& setMediaInputConfigList(string mediaInputConfigList) { DARABONBA_PTR_SET_VALUE(mediaInputConfigList_, mediaInputConfigList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddStudioLayoutRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddStudioLayoutRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // screenInputConfigList Field Functions 
    bool hasScreenInputConfigList() const { return this->screenInputConfigList_ != nullptr;};
    void deleteScreenInputConfigList() { this->screenInputConfigList_ = nullptr;};
    inline string getScreenInputConfigList() const { DARABONBA_PTR_GET_DEFAULT(screenInputConfigList_, "") };
    inline AddStudioLayoutRequest& setScreenInputConfigList(string screenInputConfigList) { DARABONBA_PTR_SET_VALUE(screenInputConfigList_, screenInputConfigList) };


  protected:
    // The background material configurations. The value is a JSON string. For more information, see **BgImageConfig**.
    // 
    // >  This parameter is required only if you set LayoutType to studio.
    shared_ptr<string> bgImageConfig_ {};
    // The ID of the production studio.
    // 
    // >  The production studio must be a virtual studio that you create in advance. You can use the ApsaraVideo Live console or call the CreateCaster operation to create a virtual studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The common layout configurations. The value is a JSON string. For more information, see **CommonConfig**.
    // 
    // >  This parameter is required only if you set LayoutType to common.
    shared_ptr<string> commonConfig_ {};
    // The layer sorting configurations. The value is a JSON string. For more information, see **layerOrderConfig**. You can sort layers of background and multimedia materials. The chroma key layer cannot be sorted. A layer that is in the front of the code is placed behind other layers in the layout.
    shared_ptr<string> layerOrderConfigList_ {};
    // The name of the layout.
    // 
    // This parameter is required.
    shared_ptr<string> layoutName_ {};
    // The type of the layout. Valid values:
    // 
    // *   **common**: If you set this parameter to common, you must specify the CommonConfig parameter.
    // *   **studio**: If you set this parameter to studio, you must specify the BgImageConfig and ScreenInputConfigList parameters. The MediaInputConfigList parameter is optional.
    // 
    // This parameter is required.
    shared_ptr<string> layoutType_ {};
    // The multimedia input configurations. The value is a JSON string. For more information, see **MediaInputConfig**.
    // 
    // >  This parameter is optional and is valid only if you set LayoutType to studio.
    shared_ptr<string> mediaInputConfigList_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // The input configurations for chroma key. The value is a JSON string. For more information, see **ScreenInputConfig**.
    // 
    // >  This parameter is required only if you set LayoutType to studio.
    shared_ptr<string> screenInputConfigList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
