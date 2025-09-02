// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETADBINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETADBINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaDBInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaDBInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppGuid, appGuid_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaDBInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGuid, appGuid_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
    };
    GetMetaDBInfoRequest() = default ;
    GetMetaDBInfoRequest(const GetMetaDBInfoRequest &) = default ;
    GetMetaDBInfoRequest(GetMetaDBInfoRequest &&) = default ;
    GetMetaDBInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaDBInfoRequest() = default ;
    GetMetaDBInfoRequest& operator=(const GetMetaDBInfoRequest &) = default ;
    GetMetaDBInfoRequest& operator=(GetMetaDBInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appGuid_ != nullptr
        && this->clusterId_ != nullptr && this->dataSourceType_ != nullptr && this->databaseName_ != nullptr; };
    // appGuid Field Functions 
    bool hasAppGuid() const { return this->appGuid_ != nullptr;};
    void deleteAppGuid() { this->appGuid_ = nullptr;};
    inline string appGuid() const { DARABONBA_PTR_GET_DEFAULT(appGuid_, "") };
    inline GetMetaDBInfoRequest& setAppGuid(string appGuid) { DARABONBA_PTR_SET_VALUE(appGuid_, appGuid) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetMetaDBInfoRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline GetMetaDBInfoRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetMetaDBInfoRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


  protected:
    // The compute engine instance ID. Specify the ID in the `Engine type.Engine name` format.
    std::shared_ptr<string> appGuid_ = nullptr;
    // The E-MapReduce (EMR) cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The type of the data source. Valid values: odps and emr.
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The name of the metadatabase of the EMR cluster.
    std::shared_ptr<string> databaseName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
