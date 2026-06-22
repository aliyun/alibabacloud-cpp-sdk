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
        && this->credentialConfig_ == nullptr && this->kdtreeOption_ == nullptr && this->notification_ == nullptr && this->octreeOption_ == nullptr && this->pointCloudFields_ == nullptr
        && this->pointCloudFileFormat_ == nullptr && this->projectName_ == nullptr && this->sourceURI_ == nullptr && this->tags_ == nullptr && this->targetURI_ == nullptr
        && this->userData_ == nullptr; };
    // compressMethod Field Functions 
    bool hasCompressMethod() const { return this->compressMethod_ != nullptr;};
    void deleteCompressMethod() { this->compressMethod_ = nullptr;};
    inline string getCompressMethod() const { DARABONBA_PTR_GET_DEFAULT(compressMethod_, "") };
    inline CreateCompressPointCloudTaskRequest& setCompressMethod(string compressMethod) { DARABONBA_PTR_SET_VALUE(compressMethod_, compressMethod) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateCompressPointCloudTaskRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateCompressPointCloudTaskRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // kdtreeOption Field Functions 
    bool hasKdtreeOption() const { return this->kdtreeOption_ != nullptr;};
    void deleteKdtreeOption() { this->kdtreeOption_ = nullptr;};
    inline const KdtreeOption & getKdtreeOption() const { DARABONBA_PTR_GET_CONST(kdtreeOption_, KdtreeOption) };
    inline KdtreeOption getKdtreeOption() { DARABONBA_PTR_GET(kdtreeOption_, KdtreeOption) };
    inline CreateCompressPointCloudTaskRequest& setKdtreeOption(const KdtreeOption & kdtreeOption) { DARABONBA_PTR_SET_VALUE(kdtreeOption_, kdtreeOption) };
    inline CreateCompressPointCloudTaskRequest& setKdtreeOption(KdtreeOption && kdtreeOption) { DARABONBA_PTR_SET_RVALUE(kdtreeOption_, kdtreeOption) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification getNotification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateCompressPointCloudTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateCompressPointCloudTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // octreeOption Field Functions 
    bool hasOctreeOption() const { return this->octreeOption_ != nullptr;};
    void deleteOctreeOption() { this->octreeOption_ = nullptr;};
    inline const OctreeOption & getOctreeOption() const { DARABONBA_PTR_GET_CONST(octreeOption_, OctreeOption) };
    inline OctreeOption getOctreeOption() { DARABONBA_PTR_GET(octreeOption_, OctreeOption) };
    inline CreateCompressPointCloudTaskRequest& setOctreeOption(const OctreeOption & octreeOption) { DARABONBA_PTR_SET_VALUE(octreeOption_, octreeOption) };
    inline CreateCompressPointCloudTaskRequest& setOctreeOption(OctreeOption && octreeOption) { DARABONBA_PTR_SET_RVALUE(octreeOption_, octreeOption) };


    // pointCloudFields Field Functions 
    bool hasPointCloudFields() const { return this->pointCloudFields_ != nullptr;};
    void deletePointCloudFields() { this->pointCloudFields_ = nullptr;};
    inline const vector<string> & getPointCloudFields() const { DARABONBA_PTR_GET_CONST(pointCloudFields_, vector<string>) };
    inline vector<string> getPointCloudFields() { DARABONBA_PTR_GET(pointCloudFields_, vector<string>) };
    inline CreateCompressPointCloudTaskRequest& setPointCloudFields(const vector<string> & pointCloudFields) { DARABONBA_PTR_SET_VALUE(pointCloudFields_, pointCloudFields) };
    inline CreateCompressPointCloudTaskRequest& setPointCloudFields(vector<string> && pointCloudFields) { DARABONBA_PTR_SET_RVALUE(pointCloudFields_, pointCloudFields) };


    // pointCloudFileFormat Field Functions 
    bool hasPointCloudFileFormat() const { return this->pointCloudFileFormat_ != nullptr;};
    void deletePointCloudFileFormat() { this->pointCloudFileFormat_ = nullptr;};
    inline string getPointCloudFileFormat() const { DARABONBA_PTR_GET_DEFAULT(pointCloudFileFormat_, "") };
    inline CreateCompressPointCloudTaskRequest& setPointCloudFileFormat(string pointCloudFileFormat) { DARABONBA_PTR_SET_VALUE(pointCloudFileFormat_, pointCloudFileFormat) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateCompressPointCloudTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string getSourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline CreateCompressPointCloudTaskRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline CreateCompressPointCloudTaskRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateCompressPointCloudTaskRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string getTargetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateCompressPointCloudTaskRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateCompressPointCloudTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The name of the compression algorithm. Valid values:
    // 
    // - octree: octree
    // 
    // - kdtree: K-d tree
    // 
    // This parameter is required.
    shared_ptr<string> compressMethod_ {};
    // **If you do not have special requirements, leave this parameter empty.**
    // 
    // The chained authorization configuration. This parameter is not required. For more information, see [Use chained authorization to access other entity resources](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // The parameters for K-d tree compression.
    shared_ptr<KdtreeOption> kdtreeOption_ {};
    // The notification configuration. For more information, click Notification. For the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html).
    // 
    // > Intelligent Media Management API callbacks do not support specifying a webhook address. Use MNS instead.
    shared_ptr<Notification> notification_ {};
    // The parameters for Octree compression.
    shared_ptr<OctreeOption> octreeOption_ {};
    // The PCD property fields to compress and the compression order. After compression, the data is decompressed in this order.
    // 
    // - If you use Octree compression from the Point Cloud Library (PCL), only ["xyz"] is supported.
    // 
    // - If you use K-d tree compression from the Draco library, ["xyz"] or ["xyz", "intensity"] is supported.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> pointCloudFields_ {};
    // The format of the point cloud file. Only the PCD format is supported. The default value is pcd.
    shared_ptr<string> pointCloudFileFormat_ {};
    // The project name. For more information, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The OSS URI of the point cloud file.
    // 
    // The URI must be in the format oss\\://${Bucket}/${Object}. ${Bucket} is the name of the OSS bucket in the same region as the project. ${Object} is the full path of the file, including the file name extension.
    // 
    // This parameter is required.
    shared_ptr<string> sourceURI_ {};
    // Custom tags to search for and filter asynchronous tasks.
    Darabonba::Json tags_ {};
    // The OSS URI of the output file after compression.
    // 
    // The URI must be in the format oss\\://${Bucket}/${Object}. ${Bucket} is the name of the OSS bucket in the same region as the project. ${Object} is the full path of the file, including the file name extension.
    // 
    // This parameter is required.
    shared_ptr<string> targetURI_ {};
    // Custom information that is returned in the asynchronous notification message. You can use this information to associate notification messages in your system. The maximum length is 2048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
