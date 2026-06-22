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
        && this->backgroundColor_ == nullptr && this->credentialConfigShrink_ == nullptr && this->direction_ == nullptr && this->imageFormat_ == nullptr && this->margin_ == nullptr
        && this->notificationShrink_ == nullptr && this->padding_ == nullptr && this->projectName_ == nullptr && this->quality_ == nullptr && this->scaleType_ == nullptr
        && this->sourcesShrink_ == nullptr && this->tagsShrink_ == nullptr && this->targetURI_ == nullptr && this->userData_ == nullptr; };
    // align Field Functions 
    bool hasAlign() const { return this->align_ != nullptr;};
    void deleteAlign() { this->align_ = nullptr;};
    inline int64_t getAlign() const { DARABONBA_PTR_GET_DEFAULT(align_, 0L) };
    inline CreateImageSplicingTaskShrinkRequest& setAlign(int64_t align) { DARABONBA_PTR_SET_VALUE(align_, align) };


    // backgroundColor Field Functions 
    bool hasBackgroundColor() const { return this->backgroundColor_ != nullptr;};
    void deleteBackgroundColor() { this->backgroundColor_ = nullptr;};
    inline string getBackgroundColor() const { DARABONBA_PTR_GET_DEFAULT(backgroundColor_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setBackgroundColor(string backgroundColor) { DARABONBA_PTR_SET_VALUE(backgroundColor_, backgroundColor) };


    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string getCredentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // imageFormat Field Functions 
    bool hasImageFormat() const { return this->imageFormat_ != nullptr;};
    void deleteImageFormat() { this->imageFormat_ = nullptr;};
    inline string getImageFormat() const { DARABONBA_PTR_GET_DEFAULT(imageFormat_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setImageFormat(string imageFormat) { DARABONBA_PTR_SET_VALUE(imageFormat_, imageFormat) };


    // margin Field Functions 
    bool hasMargin() const { return this->margin_ != nullptr;};
    void deleteMargin() { this->margin_ = nullptr;};
    inline int64_t getMargin() const { DARABONBA_PTR_GET_DEFAULT(margin_, 0L) };
    inline CreateImageSplicingTaskShrinkRequest& setMargin(int64_t margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string getNotificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // padding Field Functions 
    bool hasPadding() const { return this->padding_ != nullptr;};
    void deletePadding() { this->padding_ = nullptr;};
    inline int64_t getPadding() const { DARABONBA_PTR_GET_DEFAULT(padding_, 0L) };
    inline CreateImageSplicingTaskShrinkRequest& setPadding(int64_t padding) { DARABONBA_PTR_SET_VALUE(padding_, padding) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline int64_t getQuality() const { DARABONBA_PTR_GET_DEFAULT(quality_, 0L) };
    inline CreateImageSplicingTaskShrinkRequest& setQuality(int64_t quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string getScaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // sourcesShrink Field Functions 
    bool hasSourcesShrink() const { return this->sourcesShrink_ != nullptr;};
    void deleteSourcesShrink() { this->sourcesShrink_ = nullptr;};
    inline string getSourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourcesShrink_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setSourcesShrink(string sourcesShrink) { DARABONBA_PTR_SET_VALUE(sourcesShrink_, sourcesShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string getTargetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateImageSplicingTaskShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The alignment value, in pixels, for the width or height of the images to be stitched. The value can range from 1 to 4096.
    // 
    // - If you set **Direction** to `vertical`, this parameter specifies the width alignment.
    // 
    // - If you set **Direction** to `horizontal`, this parameter specifies the height alignment.
    // 
    // > If you do not specify this parameter, the width or height of the first image is used for alignment by default.
    shared_ptr<int64_t> align_ {};
    // The fill color for the areas specified by `Padding` and `Margin`. The value can be in the `#FFFFFF` format or a keyword such as `red` or `alpha`.
    shared_ptr<string> backgroundColor_ {};
    // The chained authorization configuration. For more information, see [Use chained authorization to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<string> credentialConfigShrink_ {};
    // The image stitching method. Valid values:
    // 
    // - vertical (default): Stitches images vertically. The widths of all images must be the same.
    // 
    // - horizontal: Stitches images horizontally. The heights of all images must be the same.
    shared_ptr<string> direction_ {};
    // The compression format of the output image. Valid values:
    // 
    // - jpg (default)
    // 
    // - png
    // 
    // - webp
    shared_ptr<string> imageFormat_ {};
    // The blank margin, in pixels, of the stitched image. The default value is 0.
    shared_ptr<int64_t> margin_ {};
    // The message notification configuration. For information about the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<string> notificationShrink_ {};
    // The space, in pixels, between sub-images in the stitched image. The default value is 0.
    shared_ptr<int64_t> padding_ {};
    // The project name. For more information about how to obtain the project name, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The compression quality of the output image. This parameter is valid only for JPG and WebP images. The value range is 0 to 100. The default value is 80.
    shared_ptr<int64_t> quality_ {};
    // The scaling method used when the width or height of an image is aligned. Valid values:
    // 
    // - fit (default): Scales the image without adding black bars. Only proportional scaling is supported.
    // 
    // - stretch: Stretches the image to fill the space.
    shared_ptr<string> scaleType_ {};
    // The list of input images. The images are stitched in the order of their URIs in the list.
    // 
    // This parameter is required.
    shared_ptr<string> sourcesShrink_ {};
    // Custom tags used to search for and filter asynchronous tasks.
    shared_ptr<string> tagsShrink_ {};
    // The OSS URI where the output image is stored.
    // 
    // The URI must be in the oss\\://${bucketname}/${objectname} format. ${bucketname} is the name of the OSS bucket that is in the same region as the project. ${objectname} is the path of the file, including the file name.
    // 
    // This parameter is required.
    shared_ptr<string> targetURI_ {};
    // The custom information. This information is returned in the asynchronous notification message. Use this information to associate the notification message with your system. The maximum length is 2,048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
