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
    // The number of files in the dataset.
    shared_ptr<int64_t> dataCount_ {};
    // The size of the space occupied by the dataset files. Unit: bytes.
    shared_ptr<int64_t> dataSize_ {};
    // The type of the data source. If you specify multiple types, separate them with commas (,). Valid values:
    // 
    // - NAS: The data is stored in Alibaba Cloud File Storage (NAS).
    // 
    // - OSS: The data is stored in Alibaba Cloud Object Storage Service (OSS).
    // 
    // - CPFS
    // 
    // Note: The DataSourceType of the version must be the same as the DataSourceType of the dataset. The system verifies this consistency when you create the version.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceType_ {};
    // A custom description for the dataset version. This helps distinguish different dataset versions.
    shared_ptr<string> description_ {};
    // The storage import configuration of the dataset. Supported storage types include OSS, NAS, and CPFS.
    // 
    // <details>
    // 
    // <summary>
    // 
    // OSS
    // 
    // </summary>
    // 
    // {<br>
    // "region": "${region}",// The region ID.<br>
    // "bucket": "${bucket}",// The bucket name.<br>
    // "path": "${path}" // The file path.<br>
    // }
    // 
    // </details>
    // 
    // <details>
    // 
    // <summary>
    // 
    // NAS
    // 
    // </summary>
    // 
    // {<br>
    // "region": "${region}",// The region ID.<br>
    // "fileSystemId": "${file_system_id}", // The file system ID.<br>
    // "path": "${path}", // The file system path.<br>
    // "mountTarget": "${mount_target}" // The mount target of the file system.<br>
    // }
    // 
    // </details>
    // 
    // <details>
    // 
    // <summary>
    // 
    // CPFS
    // 
    // </summary>
    // 
    // {<br>
    // "region": "${region}",// The region ID.<br>
    // "fileSystemId": "${file_system_id}", // The file system ID.<br>
    // "protocolServiceId":"${protocol_service_id}", // The protocol service of the file system.<br>
    // "exportId": "${export_id}", // The exported directory of the file system.<br>
    // "path": "${path}", // The file system path.<br>
    // }
    // 
    // </details>
    // 
    // <details>
    // 
    // <summary>
    // 
    // Intelligent Computing CPFS
    // 
    // </summary>
    // 
    // {<br>
    // "region": "${region}",// The region ID.<br>
    // "fileSystemId": "${file_system_id}", // The file system ID.<br>
    // "path": "${path}", // The file system path.<br>
    // "mountTarget": "${mount_target}", // The mount target of the file system. This parameter is specific to the Intelligent Computing edition.<br>
    // "isVpcMount": boolean, // Specifies whether the mount target is in a VPC. This parameter is specific to the Intelligent Computing edition.<br>
    // }
    // 
    // </details>
    shared_ptr<string> importInfo_ {};
    // A list of tags for the dataset version.
    shared_ptr<vector<Label>> labels_ {};
    // The extended field, which is a JSON string.
    // When DLC uses the dataset, you can configure the mountPath field to specify the default mount path for the dataset.
    shared_ptr<string> options_ {};
    // The property of the dataset. Valid values:
    // 
    // - FILE: A file.
    // 
    // - DIRECTORY: A folder.
    // 
    // This parameter is required.
    shared_ptr<string> property_ {};
    // The ID of the data source.
    // 
    // - If SourceType is set to USER, you can customize the SourceId.
    // 
    // - If SourceType is set to ITAG, which indicates a dataset generated from the annotation results of the iTAG module, SourceId is the task ID from iTAG.
    // 
    // - If SourceType is set to PAI_PUBLIC_DATASET, which indicates a dataset created from a public PAI dataset, SourceId is empty by default.
    shared_ptr<string> sourceId_ {};
    // The type of the data source. The default value is USER. Valid values:
    // 
    // - PAI-PUBLIC-DATASET: a public dataset from PAI.
    // 
    // - ITAG: a dataset generated from the annotation results of the iTAG module.
    // 
    // - USER: a dataset registered by a user.
    shared_ptr<string> sourceType_ {};
    // The following examples show how to configure the URI:
    // 
    // - If the data source type is OSS: `oss://bucket.endpoint/object`
    // 
    // - If the data source type is NAS:
    //   The format for a general-purpose NAS file system is `nas://<nasfisid>.region/subpath/to/dir/`.
    //   CPFS 1.0: `nas://<cpfs-fsid>.region/subpath/to/dir/`.
    //   CPFS 2.0: `nas://<cpfs-fsid>.region/<protocolserviceid>/`.
    //   CPFS 1.0 and CPFS 2.0 are distinguished by the format of the fsid. The format for CPFS 1.0 is cpfs-<8 ASCII characters>. The format for CPFS 2.0 is cpfs-<16 ASCII characters>.
    // 
    // This parameter is required.
    shared_ptr<string> uri_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
