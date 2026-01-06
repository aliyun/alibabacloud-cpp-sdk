// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateDatasetVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataCount, dataCount_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCount, dataCount_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
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
    virtual bool empty() const override { return this->dataCount_ == nullptr
        && this->dataSize_ == nullptr && this->dataSourceType_ == nullptr && this->description_ == nullptr && this->importInfo_ == nullptr && this->labels_ == nullptr
        && this->options_ == nullptr && this->property_ == nullptr && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->uri_ == nullptr; };
    // dataCount Field Functions 
    bool hasDataCount() const { return this->dataCount_ != nullptr;};
    void deleteDataCount() { this->dataCount_ = nullptr;};
    inline int64_t getDataCount() const { DARABONBA_PTR_GET_DEFAULT(dataCount_, 0L) };
    inline CreateDatasetVersionRequest& setDataCount(int64_t dataCount) { DARABONBA_PTR_SET_VALUE(dataCount_, dataCount) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline CreateDatasetVersionRequest& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline CreateDatasetVersionRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDatasetVersionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // importInfo Field Functions 
    bool hasImportInfo() const { return this->importInfo_ != nullptr;};
    void deleteImportInfo() { this->importInfo_ = nullptr;};
    inline string getImportInfo() const { DARABONBA_PTR_GET_DEFAULT(importInfo_, "") };
    inline CreateDatasetVersionRequest& setImportInfo(string importInfo) { DARABONBA_PTR_SET_VALUE(importInfo_, importInfo) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> getLabels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline CreateDatasetVersionRequest& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateDatasetVersionRequest& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateDatasetVersionRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline CreateDatasetVersionRequest& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateDatasetVersionRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateDatasetVersionRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CreateDatasetVersionRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // The number of dataset files.
    shared_ptr<int64_t> dataCount_ {};
    // The size of the dataset file. Unit: bytes.
    shared_ptr<int64_t> dataSize_ {};
    // The type of the data source. Separate multiple types with commas (,). Valid values:
    // 
    // *   NAS: File Storage NAS (NAS).
    // *   OSS: Object Storage Service (OSS).
    // *   CPFS
    // 
    // Note: The DataSourceType value of a dataset version must be the same as that of the dataset. When you create a dataset version, the system checks whether the values are the same.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceType_ {};
    // The description of the dataset. Descriptions are used to differentiate datasets.
    shared_ptr<string> description_ {};
    // The dataset storage import configurations, such as OSS, NAS, and CPFS.
    // 
    // **OSS**
    // 
    // {\\
    // "region": "${region}",// The region ID\\
    // "bucket": "${bucket}",//The bucket name\\
    // "path": "${path}" // The file path\\
    // }\\
    // 
    // 
    // **NAS**
    // 
    // {\\
    // "region": "${region}",// The region ID\\
    // "fileSystemId": "${file_system_id}", // The file system ID\\
    // "path": "${path}", // The file system path\\
    // "mountTarget": "${mount_target}" // The mount point of the file system\\
    // }\\
    // 
    // 
    // **CPFS**
    // 
    // {\\
    // "region": "${region}",// The region ID\\
    // "fileSystemId": "${file_system_id}", // The file system ID\\
    // "protocolServiceId":"${protocol_service_id}", // The file system protocol service\\
    // "exportId": "${export_id}", // The file system export directory\\
    // "path": "${path}", // The file system path\\
    // }\\
    // 
    // 
    // **CPFS for Lingjun**
    // 
    // {\\
    // "region": "${region}",// The region ID\\
    // "fileSystemId": "${file_system_id}", // The file system ID\\
    // "path": "${path}", // The ile system path\\
    // "mountTarget": "${mount_target}" // The mount point of the file system, CPFS for Lingjun only\\
    // "isVpcMount": boolean, // Whether the mount point is a VPC mount point, CPFS for Lingjun only\\
    // }\\
    shared_ptr<string> importInfo_ {};
    // The tags of the dataset version.
    shared_ptr<vector<Label>> labels_ {};
    // The extended field, which is of the JsonString type. When you use the dataset in Deep Learning Containers (DLC), you can use the mountPath field to specify the default mount path of the dataset.
    shared_ptr<string> options_ {};
    // The property of the dataset. Valid values:
    // 
    // *   FILE
    // *   DIRECTORY
    // 
    // This parameter is required.
    shared_ptr<string> property_ {};
    // The ID of the data source.
    // 
    // *   If SourceType is set to USER, the value of SourceId can be a custom string.
    // *   If SourceType is set to ITAG, the value of SourceId is the ID of the labeling job of iTAG.
    // *   If SourceType is set to PAI_PUBLIC_DATASET, SourceId is empty by default.
    shared_ptr<string> sourceId_ {};
    // The type of the data source. Default value: USER. Valid values:
    // 
    // *   PAI-PUBLIC-DATASET: a public dataset of Platform for AI (PAI).
    // *   ITAG: a dataset generated from a labeling job of iTAG.
    // *   USER: a dataset registered by a user.
    // 
    // For each job type:
    // 
    // *   PAI_PUBLIC_DATASET: PAI_PUBLIC_DATASET.
    // *   ITAG: ITAG.
    // *   USER: USER.
    shared_ptr<string> sourceType_ {};
    // Example format:
    // 
    // *   Value format when DataSourceType is set to OSS: `oss://bucket.endpoint/object`.
    // *   Value formats when DataSourceType is set to NAS: General-purpose NAS: `nas://<nasfisid>.region/subpath/to/dir/`. CPFS 1.0: `nas://<cpfs-fsid>.region/subpath/to/dir/`. CPFS 2.0: `nas://<cpfs-fsid>.region/<protocolserviceid>/`. You can distinguish CPFS 1.0 and CPFS 2.0 file systems based on the format of the file system ID: The ID for CPFS 1.0 is in the cpfs-<8-bit ASCII characters> format. The ID for CPFS 2.0 is in the cpfs-<16-bit ASCII characters> format.
    // 
    // This parameter is required.
    shared_ptr<string> uri_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
