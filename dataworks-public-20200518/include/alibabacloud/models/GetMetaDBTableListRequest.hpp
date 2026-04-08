// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETADBTABLELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETADBTABLELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaDBTableListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaDBTableListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppGuid, appGuid_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaDBTableListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGuid, appGuid_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetMetaDBTableListRequest() = default ;
    GetMetaDBTableListRequest(const GetMetaDBTableListRequest &) = default ;
    GetMetaDBTableListRequest(GetMetaDBTableListRequest &&) = default ;
    GetMetaDBTableListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaDBTableListRequest() = default ;
    GetMetaDBTableListRequest& operator=(const GetMetaDBTableListRequest &) = default ;
    GetMetaDBTableListRequest& operator=(GetMetaDBTableListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appGuid_ == nullptr
        && this->clusterId_ == nullptr && this->dataSourceType_ == nullptr && this->databaseName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // appGuid Field Functions 
    bool hasAppGuid() const { return this->appGuid_ != nullptr;};
    void deleteAppGuid() { this->appGuid_ = nullptr;};
    inline string getAppGuid() const { DARABONBA_PTR_GET_DEFAULT(appGuid_, "") };
    inline GetMetaDBTableListRequest& setAppGuid(string appGuid) { DARABONBA_PTR_SET_VALUE(appGuid_, appGuid) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetMetaDBTableListRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline GetMetaDBTableListRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetMetaDBTableListRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetMetaDBTableListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetMetaDBTableListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The GUID of the MaxCompute project. Specify the GUID in the `odps.{projectName}` format. You must configure this parameter only if you set the DataSourceType parameter to odps.
    shared_ptr<string> appGuid_ {};
    // The E-MapReduce (EMR) cluster ID. You must configure this parameter only if you set the DataSourceType parameter to emr.
    shared_ptr<string> clusterId_ {};
    // The type of the data source. Valid values: odps and emr.
    shared_ptr<string> dataSourceType_ {};
    // The name of the metadatabase.
    shared_ptr<string> databaseName_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
