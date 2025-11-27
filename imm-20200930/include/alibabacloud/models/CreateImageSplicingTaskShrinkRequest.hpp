// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGESPLICINGTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGESPLICINGTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateImageSplicingTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageSplicingTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Align, align_);
      DARABONBA_PTR_TO_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(ImageFormat, imageFormat_);
      DARABONBA_PTR_TO_JSON(Margin, margin_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(Padding, padding_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Quality, quality_);
      DARABONBA_PTR_TO_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_TO_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageSplicingTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Align, align_);
      DARABONBA_PTR_FROM_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(ImageFormat, imageFormat_);
      DARABONBA_PTR_FROM_JSON(Margin, margin_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(Padding, padding_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Quality, quality_);
      DARABONBA_PTR_FROM_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_FROM_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateImageSplicingTaskShrinkRequest() = default ;
    CreateImageSplicingTaskShrinkRequest(const CreateImageSplicingTaskShrinkRequest &) = default ;
    CreateImageSplicingTaskShrinkRequest(CreateImageSplicingTaskShrinkRequest &&) = default ;
    CreateImageSplicingTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageSplicingTaskShrinkRequest() = default ;
    CreateImageSplicingTaskShrinkRequest& operator=(const CreateImageSplicingTaskShrinkRequest &) = default ;
    CreateImageSplicingTaskShrinkRequest& operator=(CreateImageSplicingTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->align_ == nullptr
        && return this->backgroundColor_ == nullptr && return this->credentialConfigShrink_ == nullptr && return this->direction_ == nullptr && return this->imageFormat_ == nullptr && return this->margin_ == nullptr
        && return this->notificationShrink_ == nullptr && return this->padding_ == nullptr && return this->projectName_ == nullptr && return this->quality_ == nullptr && return this->scaleType_ == nullptr
        && return this->sourcesShrink_ == nullptr && return this->tagsShrink_ == nullptr && return this->targetURI_ == nullptr && return this->userData_ == nullptr; };
    // align Field Functions 
    bool hasAlign() const { return this->align_ != nullptr;};
    void deleteAlign() { this->align_ = nullptr;};
    inline int64_t align() const { DARABONBA_PTR_GET_DEFAULT(align_, 0L) };
    inline CreateImageSplicingTaskShrinkRequest& setAlign(int64_t align) { DARABONBA_PTR_SET_VALUE(align_, align) };


    // backgroundColor Field Functions 
    bool hasBackgroundColor() const { return this->backgroundColor_ != nullptr;};
    void deleteBackgroundColor() { this->backgroundColor_ = nullptr;};
    inline string backgroundColor() const { DARABONBA_PTR_GET_DEFAULT(backgroundColor_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setBackgroundColor(string backgroundColor) { DARABONBA_PTR_SET_VALUE(backgroundColor_, backgroundColor) };


    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string credentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // imageFormat Field Functions 
    bool hasImageFormat() const { return this->imageFormat_ != nullptr;};
    void deleteImageFormat() { this->imageFormat_ = nullptr;};
    inline string imageFormat() const { DARABONBA_PTR_GET_DEFAULT(imageFormat_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setImageFormat(string imageFormat) { DARABONBA_PTR_SET_VALUE(imageFormat_, imageFormat) };


    // margin Field Functions 
    bool hasMargin() const { return this->margin_ != nullptr;};
    void deleteMargin() { this->margin_ = nullptr;};
    inline int64_t margin() const { DARABONBA_PTR_GET_DEFAULT(margin_, 0L) };
    inline CreateImageSplicingTaskShrinkRequest& setMargin(int64_t margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string notificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // padding Field Functions 
    bool hasPadding() const { return this->padding_ != nullptr;};
    void deletePadding() { this->padding_ = nullptr;};
    inline int64_t padding() const { DARABONBA_PTR_GET_DEFAULT(padding_, 0L) };
    inline CreateImageSplicingTaskShrinkRequest& setPadding(int64_t padding) { DARABONBA_PTR_SET_VALUE(padding_, padding) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline int64_t quality() const { DARABONBA_PTR_GET_DEFAULT(quality_, 0L) };
    inline CreateImageSplicingTaskShrinkRequest& setQuality(int64_t quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string scaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // sourcesShrink Field Functions 
    bool hasSourcesShrink() const { return this->sourcesShrink_ != nullptr;};
    void deleteSourcesShrink() { this->sourcesShrink_ = nullptr;};
    inline string sourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourcesShrink_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setSourcesShrink(string sourcesShrink) { DARABONBA_PTR_SET_VALUE(sourcesShrink_, sourcesShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string targetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The width or height with which the input images must align. Valid values: 1 to 4096. Unit: px.
    // 
    // *   If you set **Direction** to `vertical`, this parameter specifies the width with which the input images must align.
    // *   If you set **Direction** to `horizontal`, this parameter specifies the height with which the input images must align.
    // 
    // >  If you do not specify this parameter, the width or height of the first input image is used.
    std::shared_ptr<int64_t> align_ = nullptr;
    // The padding color of the spaces specified by `Padding` and `Margin`. Colors encoded in the `#FFFFFF` format and colors that are related to preset keywords such as `red` and `alpha` are supported.
    std::shared_ptr<string> backgroundColor_ = nullptr;
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<string> credentialConfigShrink_ = nullptr;
    // The splicing method. Valid values:
    // 
    // *   vertical (default): All input images are vertically aligned and have the same width.
    // *   horizontal: All input images are horizontally aligned and have the same height.
    std::shared_ptr<string> direction_ = nullptr;
    // The compression format of the output image. Valid values:
    // 
    // *   jpg (default)
    // *   png
    // *   webp
    std::shared_ptr<string> imageFormat_ = nullptr;
    // The empty space or border around the edges of the output image. Default value: 0. Unit: px.
    std::shared_ptr<int64_t> margin_ = nullptr;
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<string> notificationShrink_ = nullptr;
    // The space between component images in the output image. Default value: 0. Unit: px.
    std::shared_ptr<int64_t> padding_ = nullptr;
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The compression quality of the output image. This parameter takes effect only for JPG and WebP images. Valid values: 0 to 100. Default value: 80.
    std::shared_ptr<int64_t> quality_ = nullptr;
    // The scaling mode of the input images that are vertically or horizontally aligned. Valid values:
    // 
    // *   fit (default): Input images are scaled proportionally, and black edges are not retained.
    // *   stretch: Input images are stretched to fill the space.
    // *   horizon: Input images are horizontally stretched.
    // *   vertical: Input images are vertically stretched.
    std::shared_ptr<string> scaleType_ = nullptr;
    // The input images. The images are sliced in the order of the input image URIs.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourcesShrink_ = nullptr;
    // The custom tags. You can search for or filter asynchronous tasks by custom tag.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The OSS bucket in which you want to store the output image.
    // 
    // Specify the value in the oss://${bucketname}/${objectname} format. ${bucketname} specifies the name of the OSS bucket that resides in the same region as the current project. ${objectname} specifies the path to the output image.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetURI_ = nullptr;
    // The user data, which is returned as asynchronous notifications to help manage notifications within your system. The maximum length of the user data is 2,048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
