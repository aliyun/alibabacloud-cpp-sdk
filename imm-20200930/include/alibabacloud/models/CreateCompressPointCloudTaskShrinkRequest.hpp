// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPRESSPOINTCLOUDTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPRESSPOINTCLOUDTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateCompressPointCloudTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCompressPointCloudTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompressMethod, compressMethod_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(KdtreeOption, kdtreeOptionShrink_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(OctreeOption, octreeOptionShrink_);
      DARABONBA_PTR_TO_JSON(PointCloudFields, pointCloudFieldsShrink_);
      DARABONBA_PTR_TO_JSON(PointCloudFileFormat, pointCloudFileFormat_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCompressPointCloudTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompressMethod, compressMethod_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(KdtreeOption, kdtreeOptionShrink_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(OctreeOption, octreeOptionShrink_);
      DARABONBA_PTR_FROM_JSON(PointCloudFields, pointCloudFieldsShrink_);
      DARABONBA_PTR_FROM_JSON(PointCloudFileFormat, pointCloudFileFormat_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateCompressPointCloudTaskShrinkRequest() = default ;
    CreateCompressPointCloudTaskShrinkRequest(const CreateCompressPointCloudTaskShrinkRequest &) = default ;
    CreateCompressPointCloudTaskShrinkRequest(CreateCompressPointCloudTaskShrinkRequest &&) = default ;
    CreateCompressPointCloudTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCompressPointCloudTaskShrinkRequest() = default ;
    CreateCompressPointCloudTaskShrinkRequest& operator=(const CreateCompressPointCloudTaskShrinkRequest &) = default ;
    CreateCompressPointCloudTaskShrinkRequest& operator=(CreateCompressPointCloudTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->compressMethod_ != nullptr
        && this->credentialConfigShrink_ != nullptr && this->kdtreeOptionShrink_ != nullptr && this->notificationShrink_ != nullptr && this->octreeOptionShrink_ != nullptr && this->pointCloudFieldsShrink_ != nullptr
        && this->pointCloudFileFormat_ != nullptr && this->projectName_ != nullptr && this->sourceURI_ != nullptr && this->tagsShrink_ != nullptr && this->targetURI_ != nullptr
        && this->userData_ != nullptr; };
    // compressMethod Field Functions 
    bool hasCompressMethod() const { return this->compressMethod_ != nullptr;};
    void deleteCompressMethod() { this->compressMethod_ = nullptr;};
    inline string compressMethod() const { DARABONBA_PTR_GET_DEFAULT(compressMethod_, "") };
    inline CreateCompressPointCloudTaskShrinkRequest& setCompressMethod(string compressMethod) { DARABONBA_PTR_SET_VALUE(compressMethod_, compressMethod) };


    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string credentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline CreateCompressPointCloudTaskShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // kdtreeOptionShrink Field Functions 
    bool hasKdtreeOptionShrink() const { return this->kdtreeOptionShrink_ != nullptr;};
    void deleteKdtreeOptionShrink() { this->kdtreeOptionShrink_ = nullptr;};
    inline string kdtreeOptionShrink() const { DARABONBA_PTR_GET_DEFAULT(kdtreeOptionShrink_, "") };
    inline CreateCompressPointCloudTaskShrinkRequest& setKdtreeOptionShrink(string kdtreeOptionShrink) { DARABONBA_PTR_SET_VALUE(kdtreeOptionShrink_, kdtreeOptionShrink) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string notificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateCompressPointCloudTaskShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // octreeOptionShrink Field Functions 
    bool hasOctreeOptionShrink() const { return this->octreeOptionShrink_ != nullptr;};
    void deleteOctreeOptionShrink() { this->octreeOptionShrink_ = nullptr;};
    inline string octreeOptionShrink() const { DARABONBA_PTR_GET_DEFAULT(octreeOptionShrink_, "") };
    inline CreateCompressPointCloudTaskShrinkRequest& setOctreeOptionShrink(string octreeOptionShrink) { DARABONBA_PTR_SET_VALUE(octreeOptionShrink_, octreeOptionShrink) };


    // pointCloudFieldsShrink Field Functions 
    bool hasPointCloudFieldsShrink() const { return this->pointCloudFieldsShrink_ != nullptr;};
    void deletePointCloudFieldsShrink() { this->pointCloudFieldsShrink_ = nullptr;};
    inline string pointCloudFieldsShrink() const { DARABONBA_PTR_GET_DEFAULT(pointCloudFieldsShrink_, "") };
    inline CreateCompressPointCloudTaskShrinkRequest& setPointCloudFieldsShrink(string pointCloudFieldsShrink) { DARABONBA_PTR_SET_VALUE(pointCloudFieldsShrink_, pointCloudFieldsShrink) };


    // pointCloudFileFormat Field Functions 
    bool hasPointCloudFileFormat() const { return this->pointCloudFileFormat_ != nullptr;};
    void deletePointCloudFileFormat() { this->pointCloudFileFormat_ = nullptr;};
    inline string pointCloudFileFormat() const { DARABONBA_PTR_GET_DEFAULT(pointCloudFileFormat_, "") };
    inline CreateCompressPointCloudTaskShrinkRequest& setPointCloudFileFormat(string pointCloudFileFormat) { DARABONBA_PTR_SET_VALUE(pointCloudFileFormat_, pointCloudFileFormat) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateCompressPointCloudTaskShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline CreateCompressPointCloudTaskShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateCompressPointCloudTaskShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string targetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateCompressPointCloudTaskShrinkRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateCompressPointCloudTaskShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The compression algorithm. Valid values:
    // 
    // *   octree
    // *   kdtree
    // 
    // This parameter is required.
    std::shared_ptr<string> compressMethod_ = nullptr;
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The configurations of authorization chains. This parameter is optional. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<string> credentialConfigShrink_ = nullptr;
    // The k-d tree compression options.
    std::shared_ptr<string> kdtreeOptionShrink_ = nullptr;
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<string> notificationShrink_ = nullptr;
    // The octree compression options.
    std::shared_ptr<string> octreeOptionShrink_ = nullptr;
    // The PCD property fields and the compression order in which the data is decompressed after the compression is complete.
    // 
    // *   If octree of Point Cloud Library (PCL) is used for compression, ["xyz"] is supported.
    // *   If Draco k-dimensional (k-d) tree is used for compression, ["xyz"] and ["xyz", "intensity"] are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> pointCloudFieldsShrink_ = nullptr;
    // The file format. Set the value to the default value: pcd.
    std::shared_ptr<string> pointCloudFileFormat_ = nullptr;
    // The name of the project. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The OSS URL of the PCD file.
    // 
    // Specify the value in the oss://${Bucket}/${Object} format. `${Bucket}` specifies the name of the OSS bucket that resides in the same region as the current project. `${Object}` specifies the path of the object with the extension included.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceURI_ = nullptr;
    // The custom tags, which can be used to search for and filter asynchronous tasks.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The OSS URL of the output file after compression.
    // 
    // Specify the value in the oss://${Bucket}/${Object} format. `${Bucket}` specifies the name of the OSS bucket that resides in the same region as the current project. `${Object}` specifies the path of the object with the extension included.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetURI_ = nullptr;
    // The custom data, which is returned in an asynchronous notification and facilitates notification management. The maximum length is 2,048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
