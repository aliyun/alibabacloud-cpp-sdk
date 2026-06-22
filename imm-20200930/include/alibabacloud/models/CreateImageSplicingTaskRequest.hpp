// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGESPLICINGTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGESPLICINGTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/Notification.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateImageSplicingTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageSplicingTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Align, align_);
      DARABONBA_PTR_TO_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(ImageFormat, imageFormat_);
      DARABONBA_PTR_TO_JSON(Margin, margin_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(Padding, padding_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Quality, quality_);
      DARABONBA_PTR_TO_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageSplicingTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Align, align_);
      DARABONBA_PTR_FROM_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(ImageFormat, imageFormat_);
      DARABONBA_PTR_FROM_JSON(Margin, margin_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(Padding, padding_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Quality, quality_);
      DARABONBA_PTR_FROM_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateImageSplicingTaskRequest() = default ;
    CreateImageSplicingTaskRequest(const CreateImageSplicingTaskRequest &) = default ;
    CreateImageSplicingTaskRequest(CreateImageSplicingTaskRequest &&) = default ;
    CreateImageSplicingTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageSplicingTaskRequest() = default ;
    CreateImageSplicingTaskRequest& operator=(const CreateImageSplicingTaskRequest &) = default ;
    CreateImageSplicingTaskRequest& operator=(CreateImageSplicingTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sources& obj) { 
        DARABONBA_PTR_TO_JSON(Rotate, rotate_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, Sources& obj) { 
        DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      Sources() = default ;
      Sources(const Sources &) = default ;
      Sources(Sources &&) = default ;
      Sources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sources() = default ;
      Sources& operator=(const Sources &) = default ;
      Sources& operator=(Sources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->rotate_ == nullptr
        && this->URI_ == nullptr; };
      // rotate Field Functions 
      bool hasRotate() const { return this->rotate_ != nullptr;};
      void deleteRotate() { this->rotate_ = nullptr;};
      inline int64_t getRotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, 0L) };
      inline Sources& setRotate(int64_t rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Sources& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The rotation angle of the image. Valid values:
      // 
      // - 0 (default)
      // 
      // - 90
      // 
      // - 180
      // 
      // - 270
      shared_ptr<int64_t> rotate_ {};
      // The OSS URI of the source image.
      // 
      // The URI must be in the oss\\://${Bucket}/${Object} format. `${Bucket}` is the name of the OSS bucket that is in the same region as the project. `${Object}` is the full path of the file, including the file name extension.
      // 
      // Supported image formats: JPG and PNG.
      // 
      // This parameter is required.
      shared_ptr<string> URI_ {};
    };

    virtual bool empty() const override { return this->align_ == nullptr
        && this->backgroundColor_ == nullptr && this->credentialConfig_ == nullptr && this->direction_ == nullptr && this->imageFormat_ == nullptr && this->margin_ == nullptr
        && this->notification_ == nullptr && this->padding_ == nullptr && this->projectName_ == nullptr && this->quality_ == nullptr && this->scaleType_ == nullptr
        && this->sources_ == nullptr && this->tags_ == nullptr && this->targetURI_ == nullptr && this->userData_ == nullptr; };
    // align Field Functions 
    bool hasAlign() const { return this->align_ != nullptr;};
    void deleteAlign() { this->align_ = nullptr;};
    inline int64_t getAlign() const { DARABONBA_PTR_GET_DEFAULT(align_, 0L) };
    inline CreateImageSplicingTaskRequest& setAlign(int64_t align) { DARABONBA_PTR_SET_VALUE(align_, align) };


    // backgroundColor Field Functions 
    bool hasBackgroundColor() const { return this->backgroundColor_ != nullptr;};
    void deleteBackgroundColor() { this->backgroundColor_ = nullptr;};
    inline string getBackgroundColor() const { DARABONBA_PTR_GET_DEFAULT(backgroundColor_, "") };
    inline CreateImageSplicingTaskRequest& setBackgroundColor(string backgroundColor) { DARABONBA_PTR_SET_VALUE(backgroundColor_, backgroundColor) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateImageSplicingTaskRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateImageSplicingTaskRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline CreateImageSplicingTaskRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // imageFormat Field Functions 
    bool hasImageFormat() const { return this->imageFormat_ != nullptr;};
    void deleteImageFormat() { this->imageFormat_ = nullptr;};
    inline string getImageFormat() const { DARABONBA_PTR_GET_DEFAULT(imageFormat_, "") };
    inline CreateImageSplicingTaskRequest& setImageFormat(string imageFormat) { DARABONBA_PTR_SET_VALUE(imageFormat_, imageFormat) };


    // margin Field Functions 
    bool hasMargin() const { return this->margin_ != nullptr;};
    void deleteMargin() { this->margin_ = nullptr;};
    inline int64_t getMargin() const { DARABONBA_PTR_GET_DEFAULT(margin_, 0L) };
    inline CreateImageSplicingTaskRequest& setMargin(int64_t margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification getNotification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateImageSplicingTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateImageSplicingTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // padding Field Functions 
    bool hasPadding() const { return this->padding_ != nullptr;};
    void deletePadding() { this->padding_ = nullptr;};
    inline int64_t getPadding() const { DARABONBA_PTR_GET_DEFAULT(padding_, 0L) };
    inline CreateImageSplicingTaskRequest& setPadding(int64_t padding) { DARABONBA_PTR_SET_VALUE(padding_, padding) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateImageSplicingTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline int64_t getQuality() const { DARABONBA_PTR_GET_DEFAULT(quality_, 0L) };
    inline CreateImageSplicingTaskRequest& setQuality(int64_t quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string getScaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline CreateImageSplicingTaskRequest& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<CreateImageSplicingTaskRequest::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<CreateImageSplicingTaskRequest::Sources>) };
    inline vector<CreateImageSplicingTaskRequest::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<CreateImageSplicingTaskRequest::Sources>) };
    inline CreateImageSplicingTaskRequest& setSources(const vector<CreateImageSplicingTaskRequest::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline CreateImageSplicingTaskRequest& setSources(vector<CreateImageSplicingTaskRequest::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline CreateImageSplicingTaskRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateImageSplicingTaskRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string getTargetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateImageSplicingTaskRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateImageSplicingTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


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
    shared_ptr<CredentialConfig> credentialConfig_ {};
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
    shared_ptr<Notification> notification_ {};
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
    shared_ptr<vector<CreateImageSplicingTaskRequest::Sources>> sources_ {};
    // Custom tags used to search for and filter asynchronous tasks.
    Darabonba::Json tags_ {};
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
