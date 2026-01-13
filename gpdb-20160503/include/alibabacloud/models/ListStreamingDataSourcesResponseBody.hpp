// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTREAMINGDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTREAMINGDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListStreamingDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStreamingDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceItems, dataSourceItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStreamingDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceItems, dataSourceItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListStreamingDataSourcesResponseBody() = default ;
    ListStreamingDataSourcesResponseBody(const ListStreamingDataSourcesResponseBody &) = default ;
    ListStreamingDataSourcesResponseBody(ListStreamingDataSourcesResponseBody &&) = default ;
    ListStreamingDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStreamingDataSourcesResponseBody() = default ;
    ListStreamingDataSourcesResponseBody& operator=(const ListStreamingDataSourcesResponseBody &) = default ;
    ListStreamingDataSourcesResponseBody& operator=(ListStreamingDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataSourceItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSourceItems& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataSourceConfig, dataSourceConfig_);
        DARABONBA_PTR_TO_JSON(DataSourceDescription, dataSourceDescription_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DataSourceItems& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataSourceConfig, dataSourceConfig_);
        DARABONBA_PTR_FROM_JSON(DataSourceDescription, dataSourceDescription_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DataSourceItems() = default ;
      DataSourceItems(const DataSourceItems &) = default ;
      DataSourceItems(DataSourceItems &&) = default ;
      DataSourceItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSourceItems() = default ;
      DataSourceItems& operator=(const DataSourceItems &) = default ;
      DataSourceItems& operator=(DataSourceItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataSourceConfig_ == nullptr && this->dataSourceDescription_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceName_ == nullptr && this->dataSourceType_ == nullptr
        && this->errorMessage_ == nullptr && this->modifyTime_ == nullptr && this->serviceId_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DataSourceItems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataSourceConfig Field Functions 
      bool hasDataSourceConfig() const { return this->dataSourceConfig_ != nullptr;};
      void deleteDataSourceConfig() { this->dataSourceConfig_ = nullptr;};
      inline string getDataSourceConfig() const { DARABONBA_PTR_GET_DEFAULT(dataSourceConfig_, "") };
      inline DataSourceItems& setDataSourceConfig(string dataSourceConfig) { DARABONBA_PTR_SET_VALUE(dataSourceConfig_, dataSourceConfig) };


      // dataSourceDescription Field Functions 
      bool hasDataSourceDescription() const { return this->dataSourceDescription_ != nullptr;};
      void deleteDataSourceDescription() { this->dataSourceDescription_ = nullptr;};
      inline string getDataSourceDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDescription_, "") };
      inline DataSourceItems& setDataSourceDescription(string dataSourceDescription) { DARABONBA_PTR_SET_VALUE(dataSourceDescription_, dataSourceDescription) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline int32_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0) };
      inline DataSourceItems& setDataSourceId(int32_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceName Field Functions 
      bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
      void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
      inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
      inline DataSourceItems& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


      // dataSourceType Field Functions 
      bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
      void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
      inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
      inline DataSourceItems& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline DataSourceItems& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline DataSourceItems& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline int32_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0) };
      inline DataSourceItems& setServiceId(int32_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataSourceItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the data source was created.
      shared_ptr<string> createTime_ {};
      // The configurations of the data source.
      shared_ptr<string> dataSourceConfig_ {};
      // The description of the data source.
      shared_ptr<string> dataSourceDescription_ {};
      // The data source ID.
      shared_ptr<int32_t> dataSourceId_ {};
      // The name of the data source.
      shared_ptr<string> dataSourceName_ {};
      // The type of the data source. Valid values:
      // 
      // *   kafka
      shared_ptr<string> dataSourceType_ {};
      // The information about the service status. For example, if the service is in the exception state, the cause of the exception is displayed. If the service is in the running state, this parameter is left empty.
      shared_ptr<string> errorMessage_ {};
      // The time when the data source was last modified.
      shared_ptr<string> modifyTime_ {};
      // The service ID.
      shared_ptr<int32_t> serviceId_ {};
      // The status of the service. Valid values:
      // 
      // *   init
      // *   running
      // *   exception
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->dataSourceItems_ == nullptr
        && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // dataSourceItems Field Functions 
    bool hasDataSourceItems() const { return this->dataSourceItems_ != nullptr;};
    void deleteDataSourceItems() { this->dataSourceItems_ = nullptr;};
    inline const vector<ListStreamingDataSourcesResponseBody::DataSourceItems> & getDataSourceItems() const { DARABONBA_PTR_GET_CONST(dataSourceItems_, vector<ListStreamingDataSourcesResponseBody::DataSourceItems>) };
    inline vector<ListStreamingDataSourcesResponseBody::DataSourceItems> getDataSourceItems() { DARABONBA_PTR_GET(dataSourceItems_, vector<ListStreamingDataSourcesResponseBody::DataSourceItems>) };
    inline ListStreamingDataSourcesResponseBody& setDataSourceItems(const vector<ListStreamingDataSourcesResponseBody::DataSourceItems> & dataSourceItems) { DARABONBA_PTR_SET_VALUE(dataSourceItems_, dataSourceItems) };
    inline ListStreamingDataSourcesResponseBody& setDataSourceItems(vector<ListStreamingDataSourcesResponseBody::DataSourceItems> && dataSourceItems) { DARABONBA_PTR_SET_RVALUE(dataSourceItems_, dataSourceItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStreamingDataSourcesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStreamingDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListStreamingDataSourcesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The queried data sources.
    shared_ptr<vector<ListStreamingDataSourcesResponseBody::DataSourceItems>> dataSourceItems_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
