// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASOURCEREQUEST_HPP_
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
  class AddDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConnectionInfo, connectionInfo_);
      DARABONBA_PTR_TO_JSON(Credential, credential_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(IndexLevel, indexLevel_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConnectionInfo, connectionInfo_);
      DARABONBA_PTR_FROM_JSON(Credential, credential_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(IndexLevel, indexLevel_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
    };
    AddDataSourceRequest() = default ;
    AddDataSourceRequest(const AddDataSourceRequest &) = default ;
    AddDataSourceRequest(AddDataSourceRequest &&) = default ;
    AddDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataSourceRequest() = default ;
    AddDataSourceRequest& operator=(const AddDataSourceRequest &) = default ;
    AddDataSourceRequest& operator=(AddDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->connectionInfo_ == nullptr && this->credential_ == nullptr && this->dataSourceName_ == nullptr && this->dataSourceType_ == nullptr && this->exclude_ == nullptr
        && this->include_ == nullptr && this->indexLevel_ == nullptr && this->options_ == nullptr && this->path_ == nullptr && this->schedule_ == nullptr
        && this->speedLimit_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline AddDataSourceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // connectionInfo Field Functions 
    bool hasConnectionInfo() const { return this->connectionInfo_ != nullptr;};
    void deleteConnectionInfo() { this->connectionInfo_ = nullptr;};
    inline string getConnectionInfo() const { DARABONBA_PTR_GET_DEFAULT(connectionInfo_, "") };
    inline AddDataSourceRequest& setConnectionInfo(string connectionInfo) { DARABONBA_PTR_SET_VALUE(connectionInfo_, connectionInfo) };


    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline string getCredential() const { DARABONBA_PTR_GET_DEFAULT(credential_, "") };
    inline AddDataSourceRequest& setCredential(string credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline AddDataSourceRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline AddDataSourceRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline AddDataSourceRequest& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline AddDataSourceRequest& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // indexLevel Field Functions 
    bool hasIndexLevel() const { return this->indexLevel_ != nullptr;};
    void deleteIndexLevel() { this->indexLevel_ = nullptr;};
    inline string getIndexLevel() const { DARABONBA_PTR_GET_DEFAULT(indexLevel_, "") };
    inline AddDataSourceRequest& setIndexLevel(string indexLevel) { DARABONBA_PTR_SET_VALUE(indexLevel_, indexLevel) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline AddDataSourceRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const vector<string> & getPath() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
    inline vector<string> getPath() { DARABONBA_PTR_GET(path_, vector<string>) };
    inline AddDataSourceRequest& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline AddDataSourceRequest& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline AddDataSourceRequest& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string getSpeedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline AddDataSourceRequest& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


  protected:
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> connectionInfo_ {};
    shared_ptr<string> credential_ {};
    // This parameter is required.
    shared_ptr<string> dataSourceName_ {};
    // This parameter is required.
    shared_ptr<string> dataSourceType_ {};
    shared_ptr<string> exclude_ {};
    shared_ptr<string> include_ {};
    shared_ptr<string> indexLevel_ {};
    shared_ptr<string> options_ {};
    shared_ptr<vector<string>> path_ {};
    shared_ptr<string> schedule_ {};
    shared_ptr<string> speedLimit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
