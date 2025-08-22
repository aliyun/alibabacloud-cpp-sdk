// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUMUPLOADFILEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERUMUPLOADFILEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateRumUploadFileUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRumUploadFileUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourcemapType, sourcemapType_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRumUploadFileUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourcemapType, sourcemapType_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    CreateRumUploadFileUrlRequest() = default ;
    CreateRumUploadFileUrlRequest(const CreateRumUploadFileUrlRequest &) = default ;
    CreateRumUploadFileUrlRequest(CreateRumUploadFileUrlRequest &&) = default ;
    CreateRumUploadFileUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRumUploadFileUrlRequest() = default ;
    CreateRumUploadFileUrlRequest& operator=(const CreateRumUploadFileUrlRequest &) = default ;
    CreateRumUploadFileUrlRequest& operator=(CreateRumUploadFileUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->contentType_ != nullptr && this->fileName_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr && this->sourcemapType_ != nullptr
        && this->uuid_ != nullptr && this->versionId_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateRumUploadFileUrlRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline CreateRumUploadFileUrlRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateRumUploadFileUrlRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline CreateRumUploadFileUrlRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRumUploadFileUrlRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourcemapType Field Functions 
    bool hasSourcemapType() const { return this->sourcemapType_ != nullptr;};
    void deleteSourcemapType() { this->sourcemapType_ = nullptr;};
    inline string sourcemapType() const { DARABONBA_PTR_GET_DEFAULT(sourcemapType_, "") };
    inline CreateRumUploadFileUrlRequest& setSourcemapType(string sourcemapType) { DARABONBA_PTR_SET_VALUE(sourcemapType_, sourcemapType) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline CreateRumUploadFileUrlRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreateRumUploadFileUrlRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The type of the file. You can set this parameter to "application/zip", "text/plain", or an empty string.
    std::shared_ptr<string> contentType_ = nullptr;
    // The file name.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // The process ID (PID) of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The file type. Valid values: source-map: SourceMap files. mapping: symbol table files for Android. dsym: dSYM files for iOS.
    std::shared_ptr<string> sourcemapType_ = nullptr;
    // The file ID.
    std::shared_ptr<string> uuid_ = nullptr;
    // The version number of the file.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
