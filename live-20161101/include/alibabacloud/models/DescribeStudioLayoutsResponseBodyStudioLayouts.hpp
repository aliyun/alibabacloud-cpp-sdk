// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig.hpp>
#include <alibabacloud/models/DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList.hpp>
#include <alibabacloud/models/DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList.hpp>
#include <alibabacloud/models/DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeStudioLayoutsResponseBodyStudioLayouts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStudioLayoutsResponseBodyStudioLayouts& obj) { 
      DARABONBA_PTR_TO_JSON(BgImageConfig, bgImageConfig_);
      DARABONBA_PTR_TO_JSON(CommonConfig, commonConfig_);
      DARABONBA_PTR_TO_JSON(LayerOrderConfigList, layerOrderConfigList_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(LayoutName, layoutName_);
      DARABONBA_PTR_TO_JSON(LayoutType, layoutType_);
      DARABONBA_PTR_TO_JSON(MediaInputConfigList, mediaInputConfigList_);
      DARABONBA_PTR_TO_JSON(ScreenInputConfigList, screenInputConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStudioLayoutsResponseBodyStudioLayouts& obj) { 
      DARABONBA_PTR_FROM_JSON(BgImageConfig, bgImageConfig_);
      DARABONBA_PTR_FROM_JSON(CommonConfig, commonConfig_);
      DARABONBA_PTR_FROM_JSON(LayerOrderConfigList, layerOrderConfigList_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(LayoutName, layoutName_);
      DARABONBA_PTR_FROM_JSON(LayoutType, layoutType_);
      DARABONBA_PTR_FROM_JSON(MediaInputConfigList, mediaInputConfigList_);
      DARABONBA_PTR_FROM_JSON(ScreenInputConfigList, screenInputConfigList_);
    };
    DescribeStudioLayoutsResponseBodyStudioLayouts() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayouts(const DescribeStudioLayoutsResponseBodyStudioLayouts &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayouts(DescribeStudioLayoutsResponseBodyStudioLayouts &&) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayouts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStudioLayoutsResponseBodyStudioLayouts() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayouts& operator=(const DescribeStudioLayoutsResponseBodyStudioLayouts &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayouts& operator=(DescribeStudioLayoutsResponseBodyStudioLayouts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bgImageConfig_ == nullptr
        && return this->commonConfig_ == nullptr && return this->layerOrderConfigList_ == nullptr && return this->layoutId_ == nullptr && return this->layoutName_ == nullptr && return this->layoutType_ == nullptr
        && return this->mediaInputConfigList_ == nullptr && return this->screenInputConfigList_ == nullptr; };
    // bgImageConfig Field Functions 
    bool hasBgImageConfig() const { return this->bgImageConfig_ != nullptr;};
    void deleteBgImageConfig() { this->bgImageConfig_ = nullptr;};
    inline const Models::DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig & bgImageConfig() const { DARABONBA_PTR_GET_CONST(bgImageConfig_, Models::DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig) };
    inline Models::DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig bgImageConfig() { DARABONBA_PTR_GET(bgImageConfig_, Models::DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig) };
    inline DescribeStudioLayoutsResponseBodyStudioLayouts& setBgImageConfig(const Models::DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig & bgImageConfig) { DARABONBA_PTR_SET_VALUE(bgImageConfig_, bgImageConfig) };
    inline DescribeStudioLayoutsResponseBodyStudioLayouts& setBgImageConfig(Models::DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig && bgImageConfig) { DARABONBA_PTR_SET_RVALUE(bgImageConfig_, bgImageConfig) };


    // commonConfig Field Functions 
    bool hasCommonConfig() const { return this->commonConfig_ != nullptr;};
    void deleteCommonConfig() { this->commonConfig_ = nullptr;};
    inline const Models::DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig & commonConfig() const { DARABONBA_PTR_GET_CONST(commonConfig_, Models::DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig) };
    inline Models::DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig commonConfig() { DARABONBA_PTR_GET(commonConfig_, Models::DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig) };
    inline DescribeStudioLayoutsResponseBodyStudioLayouts& setCommonConfig(const Models::DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig & commonConfig) { DARABONBA_PTR_SET_VALUE(commonConfig_, commonConfig) };
    inline DescribeStudioLayoutsResponseBodyStudioLayouts& setCommonConfig(Models::DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig && commonConfig) { DARABONBA_PTR_SET_RVALUE(commonConfig_, commonConfig) };


    // layerOrderConfigList Field Functions 
    bool hasLayerOrderConfigList() const { return this->layerOrderConfigList_ != nullptr;};
    void deleteLayerOrderConfigList() { this->layerOrderConfigList_ = nullptr;};
    inline const vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList> & layerOrderConfigList() const { DARABONBA_PTR_GET_CONST(layerOrderConfigList_, vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList>) };
    inline vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList> layerOrderConfigList() { DARABONBA_PTR_GET(layerOrderConfigList_, vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList>) };
    inline DescribeStudioLayoutsResponseBodyStudioLayouts& setLayerOrderConfigList(const vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList> & layerOrderConfigList) { DARABONBA_PTR_SET_VALUE(layerOrderConfigList_, layerOrderConfigList) };
    inline DescribeStudioLayoutsResponseBodyStudioLayouts& setLayerOrderConfigList(vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList> && layerOrderConfigList) { DARABONBA_PTR_SET_RVALUE(layerOrderConfigList_, layerOrderConfigList) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string layoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayouts& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // layoutName Field Functions 
    bool hasLayoutName() const { return this->layoutName_ != nullptr;};
    void deleteLayoutName() { this->layoutName_ = nullptr;};
    inline string layoutName() const { DARABONBA_PTR_GET_DEFAULT(layoutName_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayouts& setLayoutName(string layoutName) { DARABONBA_PTR_SET_VALUE(layoutName_, layoutName) };


    // layoutType Field Functions 
    bool hasLayoutType() const { return this->layoutType_ != nullptr;};
    void deleteLayoutType() { this->layoutType_ = nullptr;};
    inline string layoutType() const { DARABONBA_PTR_GET_DEFAULT(layoutType_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayouts& setLayoutType(string layoutType) { DARABONBA_PTR_SET_VALUE(layoutType_, layoutType) };


    // mediaInputConfigList Field Functions 
    bool hasMediaInputConfigList() const { return this->mediaInputConfigList_ != nullptr;};
    void deleteMediaInputConfigList() { this->mediaInputConfigList_ = nullptr;};
    inline const vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList> & mediaInputConfigList() const { DARABONBA_PTR_GET_CONST(mediaInputConfigList_, vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList>) };
    inline vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList> mediaInputConfigList() { DARABONBA_PTR_GET(mediaInputConfigList_, vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList>) };
    inline DescribeStudioLayoutsResponseBodyStudioLayouts& setMediaInputConfigList(const vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList> & mediaInputConfigList) { DARABONBA_PTR_SET_VALUE(mediaInputConfigList_, mediaInputConfigList) };
    inline DescribeStudioLayoutsResponseBodyStudioLayouts& setMediaInputConfigList(vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList> && mediaInputConfigList) { DARABONBA_PTR_SET_RVALUE(mediaInputConfigList_, mediaInputConfigList) };


    // screenInputConfigList Field Functions 
    bool hasScreenInputConfigList() const { return this->screenInputConfigList_ != nullptr;};
    void deleteScreenInputConfigList() { this->screenInputConfigList_ = nullptr;};
    inline const vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList> & screenInputConfigList() const { DARABONBA_PTR_GET_CONST(screenInputConfigList_, vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList>) };
    inline vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList> screenInputConfigList() { DARABONBA_PTR_GET(screenInputConfigList_, vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList>) };
    inline DescribeStudioLayoutsResponseBodyStudioLayouts& setScreenInputConfigList(const vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList> & screenInputConfigList) { DARABONBA_PTR_SET_VALUE(screenInputConfigList_, screenInputConfigList) };
    inline DescribeStudioLayoutsResponseBodyStudioLayouts& setScreenInputConfigList(vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList> && screenInputConfigList) { DARABONBA_PTR_SET_RVALUE(screenInputConfigList_, screenInputConfigList) };


  protected:
    // The background material configurations.
    std::shared_ptr<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig> bgImageConfig_ = nullptr;
    // The common layout configurations. This parameter is returned only for a common layout.
    std::shared_ptr<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig> commonConfig_ = nullptr;
    // The layer sorting configurations.
    std::shared_ptr<vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList>> layerOrderConfigList_ = nullptr;
    // The ID of the layout.
    std::shared_ptr<string> layoutId_ = nullptr;
    // The name of the layout.
    std::shared_ptr<string> layoutName_ = nullptr;
    // The type of the layout. Valid values:
    // 
    // *   **common**
    // *   **studio**
    std::shared_ptr<string> layoutType_ = nullptr;
    // The multimedia input configurations.
    std::shared_ptr<vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList>> mediaInputConfigList_ = nullptr;
    // The input configurations for chroma key.
    std::shared_ptr<vector<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList>> screenInputConfigList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
