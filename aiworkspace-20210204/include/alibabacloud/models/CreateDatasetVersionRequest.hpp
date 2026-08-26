// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
#include <alibabacloud/models/UserMetricsEndpoint.hpp>
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
      DARABONBA_PTR_TO_JSON(DatasetTaskRamRole, datasetTaskRamRole_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
      DARABONBA_PTR_TO_JSON(UserMetricsEndpoints, userMetricsEndpoints_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCount, dataCount_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DatasetTaskRamRole, datasetTaskRamRole_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
      DARABONBA_PTR_FROM_JSON(UserMetricsEndpoints, userMetricsEndpoints_);
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
        && this->dataSize_ == nullptr && this->dataSourceType_ == nullptr && this->datasetTaskRamRole_ == nullptr && this->description_ == nullptr && this->importInfo_ == nullptr
        && this->labels_ == nullptr && this->options_ == nullptr && this->property_ == nullptr && this->sourceId_ == nullptr && this->sourceType_ == nullptr
        && this->uri_ == nullptr && this->userMetricsEndpoints_ == nullptr; };
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


    // datasetTaskRamRole Field Functions 
    bool hasDatasetTaskRamRole() const { return this->datasetTaskRamRole_ != nullptr;};
    void deleteDatasetTaskRamRole() { this->datasetTaskRamRole_ = nullptr;};
    inline string getDatasetTaskRamRole() const { DARABONBA_PTR_GET_DEFAULT(datasetTaskRamRole_, "") };
    inline CreateDatasetVersionRequest& setDatasetTaskRamRole(string datasetTaskRamRole) { DARABONBA_PTR_SET_VALUE(datasetTaskRamRole_, datasetTaskRamRole) };


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


    // userMetricsEndpoints Field Functions 
    bool hasUserMetricsEndpoints() const { return this->userMetricsEndpoints_ != nullptr;};
    void deleteUserMetricsEndpoints() { this->userMetricsEndpoints_ = nullptr;};
    inline const vector<UserMetricsEndpoint> & getUserMetricsEndpoints() const { DARABONBA_PTR_GET_CONST(userMetricsEndpoints_, vector<UserMetricsEndpoint>) };
    inline vector<UserMetricsEndpoint> getUserMetricsEndpoints() { DARABONBA_PTR_GET(userMetricsEndpoints_, vector<UserMetricsEndpoint>) };
    inline CreateDatasetVersionRequest& setUserMetricsEndpoints(const vector<UserMetricsEndpoint> & userMetricsEndpoints) { DARABONBA_PTR_SET_VALUE(userMetricsEndpoints_, userMetricsEndpoints) };
    inline CreateDatasetVersionRequest& setUserMetricsEndpoints(vector<UserMetricsEndpoint> && userMetricsEndpoints) { DARABONBA_PTR_SET_RVALUE(userMetricsEndpoints_, userMetricsEndpoints) };


  protected:
    // The number of dataset files.
    shared_ptr<int64_t> dataCount_ {};
    // The size of space occupied by dataset files. Unit: bytes.
    shared_ptr<int64_t> dataSize_ {};
    // The data source type. Separate multiple values with commas (,). Valid values:
    // 
    // - NAS: Alibaba Cloud Network Attached Storage (NAS).
    // 
    // - OSS: Alibaba Cloud Object Storage Service (OSS).
    // 
    // - CPFS
    // 
    // > The DataSourceType of the version must be consistent with the DataSourceType of the dataset. Validation is performed against the dataset when a version is created.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceType_ {};
    // UserMetricsEndpoints
    shared_ptr<string> datasetTaskRamRole_ {};
    // The custom description of the dataset version, used to distinguish different dataset versions.
    shared_ptr<string> description_ {};
    // The storage import configuration of the dataset. OSS, NAS, and CPFS are supported.
    // 
    // <details>
    // <summary>OSS</summary>
    // {<BR>
    //   "region": "${region}",//Region ID<BR>
    //   "bucket": "${bucket}",//Bucket name<BR>
    //   "path": "${path}" //File path<BR>
    // }<BR>
    // </details>
    // 
    // <details>
    // <summary>NAS</summary>
    // {<BR>
    //   "region": "${region}",//Region ID<BR>
    //   "fileSystemId": "${file_system_id}", //File system ID<BR>
    //   "path": "${path}", //File system path<BR>
    //   "mountTarget": "${mount_target}" //File system mount target<BR>
    // }<BR>
    // </details>
    // 
    // 
    // <details>
    // <summary>CPFS</summary>
    // {<BR>
    //   "region": "${region}",//Region ID<BR>
    //   "fileSystemId": "${file_system_id}", //File system ID<BR>
    //   "protocolServiceId":"${protocol_service_id}", //File system protocol service<BR>
    //   "exportId": "${export_id}", //File system export directory<BR>
    //   "path": "${path}",  //File system path<BR>
    // }<BR>
    // </details>
    // 
    // <details>
    // <summary>Lingjun CPFS</summary>
    // {<BR>
    //   "region": "${region}",//Region ID<BR>
    //   "fileSystemId": "${file_system_id}", //File system ID<BR>
    //   "path": "${path}",  //File system path<BR>
    //   "mountTarget": "${mount_target}" //File system mount target, specific to Lingjun edition<BR>
    //   "isVpcMount": boolean, //Whether it is a VPC mount target, specific to Lingjun edition<BR>
    // }<BR>
    // </details>
    shared_ptr<string> importInfo_ {};
    // The list of dataset version labels.
    shared_ptr<vector<Label>> labels_ {};
    // The extended field in JsonString format.
    // When DLC uses a dataset, you can specify the default mount path of the dataset by configuring the mountPath field.
    shared_ptr<string> options_ {};
    // The property of the dataset. Valid values:
    // - FILE: file.
    // - DIRECTORY: folder.
    // 
    // This parameter is required.
    shared_ptr<string> property_ {};
    // The data source ID.
    // - If SourceType is USER, SourceId can be customized.
    // - If SourceType is ITAG, which indicates a dataset generated from iTAG annotation results, SourceId is the iTAG task ID.
    // - If SourceType is PAI_PUBLIC_DATASET, which indicates a dataset created from a PAI public dataset, SourceId is empty by default.
    shared_ptr<string> sourceId_ {};
    // The data source type. Default value: USER. Valid values:
    // - PAI-PUBLIC-DATASET: PAI public dataset.
    // - ITAG: dataset generated from iTAG annotation results.
    // - USER: user-registered dataset.
    shared_ptr<string> sourceType_ {};
    // Examples of Uri configurations:
    // - If the data source type is OSS: `oss://bucket.endpoint/object`
    // - If the data source type is NAS:
    // General-purpose NAS format: `nas://<nasfisid>.region/subpath/to/dir/`;
    // CPFS 1.0: `nas://<cpfs-fsid>.region/subpath/to/dir/`;
    // CPFS 2.0: `nas://<cpfs-fsid>.region/<protocolserviceid>/`.
    // CPFS 1.0 and CPFS 2.0 are distinguished by the format of the fsid: CPFS 1.0 format is cpfs-<8 ASCII characters>; CPFS 2.0 format is cpfs-<16 ASCII characters>.
    // 
    // This parameter is required.
    shared_ptr<string> uri_ {};
    shared_ptr<vector<UserMetricsEndpoint>> userMetricsEndpoints_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
