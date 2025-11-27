// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPRESSPOINTCLOUDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPRESSPOINTCLOUDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/KdtreeOption.hpp>
#include <alibabacloud/models/Notification.hpp>
#include <alibabacloud/models/OctreeOption.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateCompressPointCloudTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCompressPointCloudTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompressMethod, compressMethod_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(KdtreeOption, kdtreeOption_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(OctreeOption, octreeOption_);
      DARABONBA_PTR_TO_JSON(PointCloudFields, pointCloudFields_);
      DARABONBA_PTR_TO_JSON(PointCloudFileFormat, pointCloudFileFormat_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCompressPointCloudTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompressMethod, compressMethod_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(KdtreeOption, kdtreeOption_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(OctreeOption, octreeOption_);
      DARABONBA_PTR_FROM_JSON(PointCloudFields, pointCloudFields_);
      DARABONBA_PTR_FROM_JSON(PointCloudFileFormat, pointCloudFileFormat_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateCompressPointCloudTaskRequest() = default ;
    CreateCompressPointCloudTaskRequest(const CreateCompressPointCloudTaskRequest &) = default ;
    CreateCompressPointCloudTaskRequest(CreateCompressPointCloudTaskRequest &&) = default ;
    CreateCompressPointCloudTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCompressPointCloudTaskRequest() = default ;
    CreateCompressPointCloudTaskRequest& operator=(const CreateCompressPointCloudTaskRequest &) = default ;
    CreateCompressPointCloudTaskRequest& operator=(CreateCompressPointCloudTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compressMethod_ == nullptr
        && return this->credentialConfig_ == nullptr && return this->kdtreeOption_ == nullptr && return this->notification_ == nullptr && return this->octreeOption_ == nullptr && return this->pointCloudFields_ == nullptr
        && return this->pointCloudFileFormat_ == nullptr && return this->projectName_ == nullptr && return this->sourceURI_ == nullptr && return this->tags_ == nullptr && return this->targetURI_ == nullptr
        && return this->userData_ == nullptr; };
    // compressMethod Field Functions 
    bool hasCompressMethod() const { return this->compressMethod_ != nullptr;};
    void deleteCompressMethod() { this->compressMethod_ = nullptr;};
    inline string compressMethod() const { DARABONBA_PTR_GET_DEFAULT(compressMethod_, "") };
    inline CreateCompressPointCloudTaskRequest& setCompressMethod(string compressMethod) { DARABONBA_PTR_SET_VALUE(compressMethod_, compressMethod) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateCompressPointCloudTaskRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateCompressPointCloudTaskRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // kdtreeOption Field Functions 
    bool hasKdtreeOption() const { return this->kdtreeOption_ != nullptr;};
    void deleteKdtreeOption() { this->kdtreeOption_ = nullptr;};
    inline const KdtreeOption & kdtreeOption() const { DARABONBA_PTR_GET_CONST(kdtreeOption_, KdtreeOption) };
    inline KdtreeOption kdtreeOption() { DARABONBA_PTR_GET(kdtreeOption_, KdtreeOption) };
    inline CreateCompressPointCloudTaskRequest& setKdtreeOption(const KdtreeOption & kdtreeOption) { DARABONBA_PTR_SET_VALUE(kdtreeOption_, kdtreeOption) };
    inline CreateCompressPointCloudTaskRequest& setKdtreeOption(KdtreeOption && kdtreeOption) { DARABONBA_PTR_SET_RVALUE(kdtreeOption_, kdtreeOption) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & notification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification notification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateCompressPointCloudTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateCompressPointCloudTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // octreeOption Field Functions 
    bool hasOctreeOption() const { return this->octreeOption_ != nullptr;};
    void deleteOctreeOption() { this->octreeOption_ = nullptr;};
    inline const OctreeOption & octreeOption() const { DARABONBA_PTR_GET_CONST(octreeOption_, OctreeOption) };
    inline OctreeOption octreeOption() { DARABONBA_PTR_GET(octreeOption_, OctreeOption) };
    inline CreateCompressPointCloudTaskRequest& setOctreeOption(const OctreeOption & octreeOption) { DARABONBA_PTR_SET_VALUE(octreeOption_, octreeOption) };
    inline CreateCompressPointCloudTaskRequest& setOctreeOption(OctreeOption && octreeOption) { DARABONBA_PTR_SET_RVALUE(octreeOption_, octreeOption) };


    // pointCloudFields Field Functions 
    bool hasPointCloudFields() const { return this->pointCloudFields_ != nullptr;};
    void deletePointCloudFields() { this->pointCloudFields_ = nullptr;};
    inline const vector<string> & pointCloudFields() const { DARABONBA_PTR_GET_CONST(pointCloudFields_, vector<string>) };
    inline vector<string> pointCloudFields() { DARABONBA_PTR_GET(pointCloudFields_, vector<string>) };
    inline CreateCompressPointCloudTaskRequest& setPointCloudFields(const vector<string> & pointCloudFields) { DARABONBA_PTR_SET_VALUE(pointCloudFields_, pointCloudFields) };
    inline CreateCompressPointCloudTaskRequest& setPointCloudFields(vector<string> && pointCloudFields) { DARABONBA_PTR_SET_RVALUE(pointCloudFields_, pointCloudFields) };


    // pointCloudFileFormat Field Functions 
    bool hasPointCloudFileFormat() const { return this->pointCloudFileFormat_ != nullptr;};
    void deletePointCloudFileFormat() { this->pointCloudFileFormat_ = nullptr;};
    inline string pointCloudFileFormat() const { DARABONBA_PTR_GET_DEFAULT(pointCloudFileFormat_, "") };
    inline CreateCompressPointCloudTaskRequest& setPointCloudFileFormat(string pointCloudFileFormat) { DARABONBA_PTR_SET_VALUE(pointCloudFileFormat_, pointCloudFileFormat) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateCompressPointCloudTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline CreateCompressPointCloudTaskRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline CreateCompressPointCloudTaskRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateCompressPointCloudTaskRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string targetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateCompressPointCloudTaskRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateCompressPointCloudTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


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
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    // The k-d tree compression options.
    std::shared_ptr<KdtreeOption> kdtreeOption_ = nullptr;
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    // 
    // >  The IMM operation does not support a callback URL. We recommend that you use Simple Message Queue (SMQ) to receive notifications.
    std::shared_ptr<Notification> notification_ = nullptr;
    // The octree compression options.
    std::shared_ptr<OctreeOption> octreeOption_ = nullptr;
    // The PCD property fields and the compression order in which the data is decompressed after the compression is complete.
    // 
    // *   If octree of Point Cloud Library (PCL) is used for compression, ["xyz"] is supported.
    // *   If Draco k-dimensional (k-d) tree is used for compression, ["xyz"] and ["xyz", "intensity"] are supported.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> pointCloudFields_ = nullptr;
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
    Darabonba::Json tags_ = nullptr;
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
