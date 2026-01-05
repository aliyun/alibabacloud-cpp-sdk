// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETVERSIONREQUEST_HPP_
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
  class CreateDatasetVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateDatasetVersionRequest() = default ;
    CreateDatasetVersionRequest(const CreateDatasetVersionRequest &) = default ;
    CreateDatasetVersionRequest(CreateDatasetVersionRequest &&) = default ;
    CreateDatasetVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetVersionRequest() = default ;
    CreateDatasetVersionRequest& operator=(const CreateDatasetVersionRequest &) = default ;
    CreateDatasetVersionRequest& operator=(CreateDatasetVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->datasetId_ == nullptr && this->importInfo_ == nullptr && this->mountPath_ == nullptr && this->url_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDatasetVersionRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline CreateDatasetVersionRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // importInfo Field Functions 
    bool hasImportInfo() const { return this->importInfo_ != nullptr;};
    void deleteImportInfo() { this->importInfo_ = nullptr;};
    inline const map<string, string> & getImportInfo() const { DARABONBA_PTR_GET_CONST(importInfo_, map<string, string>) };
    inline map<string, string> getImportInfo() { DARABONBA_PTR_GET(importInfo_, map<string, string>) };
    inline CreateDatasetVersionRequest& setImportInfo(const map<string, string> & importInfo) { DARABONBA_PTR_SET_VALUE(importInfo_, importInfo) };
    inline CreateDatasetVersionRequest& setImportInfo(map<string, string> && importInfo) { DARABONBA_PTR_SET_RVALUE(importInfo_, importInfo) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline CreateDatasetVersionRequest& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateDatasetVersionRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The description for this dataset version. Maximum length: 1,024 characters.
    shared_ptr<string> comment_ {};
    // The dataset ID. Currently supports DataWorks datasets only.
    // 
    // This parameter is required.
    shared_ptr<string> datasetId_ {};
    // The storage import configuration for the dataset. Required configuration varies by storage type.
    // 
    // **NAS**
    // 
    // For valid values, see the response from the file storage API DescribeFileSystems.
    // 
    // ```JSON
    // {
    // "fileSystemId": "3b6XXX89c9", // The file system ID.
    // "fileSystemStorageType":  "Performance" // The file system storage type.
    // "vpcId": "vpc-uf66oxxxrqge1t2gson7s" // The VPC ID for the mount point.
    // }
    // ```
    shared_ptr<map<string, string>> importInfo_ {};
    // The mount path, which must start with /mnt/. Default value: /mnt/data.
    shared_ptr<string> mountPath_ {};
    // URL
    // 
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
