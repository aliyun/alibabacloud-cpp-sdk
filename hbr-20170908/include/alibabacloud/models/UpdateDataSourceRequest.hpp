// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdateDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConnectionInfo, connectionInfo_);
      DARABONBA_PTR_TO_JSON(Credential, credential_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(IndexLevel, indexLevel_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConnectionInfo, connectionInfo_);
      DARABONBA_PTR_FROM_JSON(Credential, credential_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(IndexLevel, indexLevel_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
    };
    UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest(UpdateDataSourceRequest &&) = default ;
    UpdateDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest& operator=(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest& operator=(UpdateDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->connectionInfo_ == nullptr && this->credential_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceName_ == nullptr && this->exclude_ == nullptr
        && this->include_ == nullptr && this->indexLevel_ == nullptr && this->options_ == nullptr && this->path_ == nullptr && this->schedule_ == nullptr
        && this->speedLimit_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateDataSourceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // connectionInfo Field Functions 
    bool hasConnectionInfo() const { return this->connectionInfo_ != nullptr;};
    void deleteConnectionInfo() { this->connectionInfo_ = nullptr;};
    inline string getConnectionInfo() const { DARABONBA_PTR_GET_DEFAULT(connectionInfo_, "") };
    inline UpdateDataSourceRequest& setConnectionInfo(string connectionInfo) { DARABONBA_PTR_SET_VALUE(connectionInfo_, connectionInfo) };


    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline string getCredential() const { DARABONBA_PTR_GET_DEFAULT(credential_, "") };
    inline UpdateDataSourceRequest& setCredential(string credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline UpdateDataSourceRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline UpdateDataSourceRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline UpdateDataSourceRequest& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline UpdateDataSourceRequest& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // indexLevel Field Functions 
    bool hasIndexLevel() const { return this->indexLevel_ != nullptr;};
    void deleteIndexLevel() { this->indexLevel_ = nullptr;};
    inline string getIndexLevel() const { DARABONBA_PTR_GET_DEFAULT(indexLevel_, "") };
    inline UpdateDataSourceRequest& setIndexLevel(string indexLevel) { DARABONBA_PTR_SET_VALUE(indexLevel_, indexLevel) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline UpdateDataSourceRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const vector<string> & getPath() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
    inline vector<string> getPath() { DARABONBA_PTR_GET(path_, vector<string>) };
    inline UpdateDataSourceRequest& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline UpdateDataSourceRequest& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline UpdateDataSourceRequest& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string getSpeedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline UpdateDataSourceRequest& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


  protected:
    // The ID of the client group used to access the data source.
    shared_ptr<string> clusterId_ {};
    // The connection information for the data source. Examples:
    // 
    // - On-premises NAS data source:
    //   {
    //   "dataServerAddresses": [
    //   {
    //   "host": "123.123.123.123",
    //   "port": "8080"
    //   }
    //   ],
    //   "sharePath": "/share",
    //   "mountOptions": "vers=3",
    //   "fileSystemType": "nfs"
    //   }
    // 
    // - Intelligent Computing CPFS data source:
    //   {"vpcMountTarget":"cpfs-010wn\\*\\*\\*wy-vpc-ta\\*\\*\\*8.cn-shanghai.cpfs.aliyuncs.com","sharePath":"/"}
    // 
    // - Other large-scale file system data sources:
    //   {"path":"/mnt"}
    shared_ptr<string> connectionInfo_ {};
    // The access credentials for the data source. This parameter is used for on-premises NAS data sources that use the SMB protocol, and for OSS and S3 protocol-compatible data sources. Examples:
    // 
    // - On-premises NAS data source (SMB protocol):
    //   {
    //   "mountUsername": "\\*\\*\\*\\*\\*",
    //   "mountPassword": "\\*\\*\\*\\*\\*"
    //   }
    // 
    // - OSS protocol-compatible data source/S3 protocol-compatible data source:
    //   {
    //   "accessKeyId": "\\*\\*\\*\\*\\*",
    //   "accessKeySecret": "\\*\\*\\*\\*\\*"
    //   }
    shared_ptr<string> credential_ {};
    // The ID of the data source.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceId_ {};
    // The name of the data source.
    shared_ptr<string> dataSourceName_ {};
    // A filter to specify which files to exclude. This parameter applies only to the archive feature.
    shared_ptr<string> exclude_ {};
    // A filter to specify which files to include. This parameter applies only to the archive feature.
    shared_ptr<string> include_ {};
    // The index level for data source analysis. This parameter applies only to the archive feature.
    // 
    // - OFF: No index is created.
    // 
    // - META: A metadata index is created.
    // 
    // - ALL: A full-text index is created. (Deprecated)
    shared_ptr<string> indexLevel_ {};
    // The options for data source analysis. This parameter applies only to the archive feature.
    shared_ptr<string> options_ {};
    // A list of paths for data source analysis. This parameter applies only to the archive feature.
    shared_ptr<vector<string>> path_ {};
    // The schedule for data source analysis. This parameter applies only to the archive feature. The format is `I|{startTime}|{interval}`. This specifies a task that starts at `{startTime}` and repeats at the specified `{interval}`. `startTime` is a Unix time value in seconds. `interval` is an ISO 8601 time interval. For example, `PT1H` indicates a one-hour interval, and `P1D` indicates a one-day interval.
    shared_ptr<string> schedule_ {};
    // The rate limiting configuration for data source analysis. This parameter applies only to the archive feature.
    shared_ptr<string> speedLimit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
