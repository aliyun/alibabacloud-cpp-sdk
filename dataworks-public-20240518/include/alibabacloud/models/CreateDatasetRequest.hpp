// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(InitVersion, initVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(InitVersion, initVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    CreateDatasetRequest() = default ;
    CreateDatasetRequest(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest(CreateDatasetRequest &&) = default ;
    CreateDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetRequest() = default ;
    CreateDatasetRequest& operator=(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest& operator=(CreateDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InitVersion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InitVersion& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(ImportInfo, importInfo_);
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, InitVersion& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(ImportInfo, importInfo_);
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      InitVersion() = default ;
      InitVersion(const InitVersion &) = default ;
      InitVersion(InitVersion &&) = default ;
      InitVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InitVersion() = default ;
      InitVersion& operator=(const InitVersion &) = default ;
      InitVersion& operator=(InitVersion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->importInfo_ == nullptr && this->mountPath_ == nullptr && this->url_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline InitVersion& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // importInfo Field Functions 
      bool hasImportInfo() const { return this->importInfo_ != nullptr;};
      void deleteImportInfo() { this->importInfo_ = nullptr;};
      inline const map<string, string> & getImportInfo() const { DARABONBA_PTR_GET_CONST(importInfo_, map<string, string>) };
      inline map<string, string> getImportInfo() { DARABONBA_PTR_GET(importInfo_, map<string, string>) };
      inline InitVersion& setImportInfo(const map<string, string> & importInfo) { DARABONBA_PTR_SET_VALUE(importInfo_, importInfo) };
      inline InitVersion& setImportInfo(map<string, string> && importInfo) { DARABONBA_PTR_SET_RVALUE(importInfo_, importInfo) };


      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline InitVersion& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline InitVersion& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The description. It must not exceed 1,024 characters in length.
      shared_ptr<string> comment_ {};
      // The storage import configuration for the dataset. The required configuration information varies by storage type.
      // 
      // **NAS**
      // 
      // For valid values, refer to the response of the file storage API DescribeFileSystems.
      // 
      // ```JSON
      // {
      // "fileSystemId": "3b6XXX89c9", // The file system ID.
      // "fileSystemStorageType":  "Performance" // The storage specification of the file system.
      // "vpcId": "vpc-uf66oxxxrqge1t2gson7s" // The VPC ID of the mount point.
      // }
      // ```
      shared_ptr<map<string, string>> importInfo_ {};
      // The mount path. It must start with /mnt/. Default value: /mnt/data.
      shared_ptr<string> mountPath_ {};
      // URL
      // 
      // This parameter is required.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->comment_ == nullptr
        && this->dataType_ == nullptr && this->initVersion_ == nullptr && this->name_ == nullptr && this->origin_ == nullptr && this->projectId_ == nullptr
        && this->storageType_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDatasetRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline CreateDatasetRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // initVersion Field Functions 
    bool hasInitVersion() const { return this->initVersion_ != nullptr;};
    void deleteInitVersion() { this->initVersion_ = nullptr;};
    inline const CreateDatasetRequest::InitVersion & getInitVersion() const { DARABONBA_PTR_GET_CONST(initVersion_, CreateDatasetRequest::InitVersion) };
    inline CreateDatasetRequest::InitVersion getInitVersion() { DARABONBA_PTR_GET(initVersion_, CreateDatasetRequest::InitVersion) };
    inline CreateDatasetRequest& setInitVersion(const CreateDatasetRequest::InitVersion & initVersion) { DARABONBA_PTR_SET_VALUE(initVersion_, initVersion) };
    inline CreateDatasetRequest& setInitVersion(CreateDatasetRequest::InitVersion && initVersion) { DARABONBA_PTR_SET_RVALUE(initVersion_, initVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDatasetRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline CreateDatasetRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDatasetRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateDatasetRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The description of the dataset. It must not exceed 1,024 characters in length.
    shared_ptr<string> comment_ {};
    // The data type. Valid values:
    // 
    // *   COMMON: Common (Default)
    // *   PIC
    // *   TEXT
    // *   TABLE
    // *   VIDEO
    // *   AUDIO
    // *   INDEX
    shared_ptr<string> dataType_ {};
    // The initial version of the dataset.
    // 
    // This parameter is required.
    shared_ptr<CreateDatasetRequest::InitVersion> initVersion_ {};
    // The name of the dataset. It cannot be an empty string and must not exceed 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The source of the dataset. Currently, only DataWorks is supported.
    shared_ptr<string> origin_ {};
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The storage type. Currently supported values:
    // 
    // *   OSS
    // *   NAS: General-purpose NAS file systems
    // *   EXTREMENAS: Extreme NAS file systems
    // *   DLF_LANCE: Data Lake Formation
    // 
    // Valid values:
    // 
    // *   NAS: General-purpose NAS file systems
    // *   MAXCOMPUTE: MaxCompute table
    // *   CPFS: Cloud Parallel File Storage
    // *   BMCPFS: CPFS for Lingjun
    // *   EXTREMENAS: Extreme NAS file systems
    // *   OSS: Object Storage Service
    // *   DLF_LANCE: Data Lake Formation.
    // 
    // This parameter is required.
    shared_ptr<string> storageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
