// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTERNALDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTERNALDATASOURCESRESPONSEBODY_HPP_
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
  class ListExternalDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExternalDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExternalDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListExternalDataSourcesResponseBody() = default ;
    ListExternalDataSourcesResponseBody(const ListExternalDataSourcesResponseBody &) = default ;
    ListExternalDataSourcesResponseBody(ListExternalDataSourcesResponseBody &&) = default ;
    ListExternalDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExternalDataSourcesResponseBody() = default ;
    ListExternalDataSourcesResponseBody& operator=(const ListExternalDataSourcesResponseBody &) = default ;
    ListExternalDataSourcesResponseBody& operator=(ListExternalDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataSourceDescription, dataSourceDescription_);
        DARABONBA_PTR_TO_JSON(DataSourceDir, dataSourceDir_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_TO_JSON(DataSourceStatus, dataSourceStatus_);
        DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
        DARABONBA_PTR_TO_JSON(ExternalDataServiceId, externalDataServiceId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataSourceDescription, dataSourceDescription_);
        DARABONBA_PTR_FROM_JSON(DataSourceDir, dataSourceDir_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_FROM_JSON(DataSourceStatus, dataSourceStatus_);
        DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
        DARABONBA_PTR_FROM_JSON(ExternalDataServiceId, externalDataServiceId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataSourceDescription_ == nullptr && this->dataSourceDir_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceName_ == nullptr && this->dataSourceStatus_ == nullptr
        && this->dataSourceType_ == nullptr && this->externalDataServiceId_ == nullptr && this->modifyTime_ == nullptr && this->statusMessage_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Items& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataSourceDescription Field Functions 
      bool hasDataSourceDescription() const { return this->dataSourceDescription_ != nullptr;};
      void deleteDataSourceDescription() { this->dataSourceDescription_ = nullptr;};
      inline string getDataSourceDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDescription_, "") };
      inline Items& setDataSourceDescription(string dataSourceDescription) { DARABONBA_PTR_SET_VALUE(dataSourceDescription_, dataSourceDescription) };


      // dataSourceDir Field Functions 
      bool hasDataSourceDir() const { return this->dataSourceDir_ != nullptr;};
      void deleteDataSourceDir() { this->dataSourceDir_ = nullptr;};
      inline string getDataSourceDir() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDir_, "") };
      inline Items& setDataSourceDir(string dataSourceDir) { DARABONBA_PTR_SET_VALUE(dataSourceDir_, dataSourceDir) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline int32_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0) };
      inline Items& setDataSourceId(int32_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceName Field Functions 
      bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
      void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
      inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
      inline Items& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


      // dataSourceStatus Field Functions 
      bool hasDataSourceStatus() const { return this->dataSourceStatus_ != nullptr;};
      void deleteDataSourceStatus() { this->dataSourceStatus_ = nullptr;};
      inline string getDataSourceStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStatus_, "") };
      inline Items& setDataSourceStatus(string dataSourceStatus) { DARABONBA_PTR_SET_VALUE(dataSourceStatus_, dataSourceStatus) };


      // dataSourceType Field Functions 
      bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
      void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
      inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
      inline Items& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


      // externalDataServiceId Field Functions 
      bool hasExternalDataServiceId() const { return this->externalDataServiceId_ != nullptr;};
      void deleteExternalDataServiceId() { this->externalDataServiceId_ = nullptr;};
      inline int32_t getExternalDataServiceId() const { DARABONBA_PTR_GET_DEFAULT(externalDataServiceId_, 0) };
      inline Items& setExternalDataServiceId(int32_t externalDataServiceId) { DARABONBA_PTR_SET_VALUE(externalDataServiceId_, externalDataServiceId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Items& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline Items& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    protected:
      // The time when the service was created.
      shared_ptr<string> createTime_ {};
      // The description of the data source.
      shared_ptr<string> dataSourceDescription_ {};
      // The service directory in which Hadoop-related configuration files are stored.
      shared_ptr<string> dataSourceDir_ {};
      // The service ID.
      shared_ptr<int32_t> dataSourceId_ {};
      // The name of the service.
      shared_ptr<string> dataSourceName_ {};
      // The status of the service. Valid values:
      // 
      // *   init
      // *   running
      // *   exception
      shared_ptr<string> dataSourceStatus_ {};
      // The type of the data source.
      shared_ptr<string> dataSourceType_ {};
      // The Id of external data service
      shared_ptr<int32_t> externalDataServiceId_ {};
      // The time when the service was last modified.
      shared_ptr<string> modifyTime_ {};
      // The information about the service status. For example, if the service is in the exception state, the cause of the exception is displayed. If the service is in the running state, this parameter is left empty.
      shared_ptr<string> statusMessage_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListExternalDataSourcesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListExternalDataSourcesResponseBody::Items>) };
    inline vector<ListExternalDataSourcesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListExternalDataSourcesResponseBody::Items>) };
    inline ListExternalDataSourcesResponseBody& setItems(const vector<ListExternalDataSourcesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListExternalDataSourcesResponseBody& setItems(vector<ListExternalDataSourcesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExternalDataSourcesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExternalDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListExternalDataSourcesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The Hadoop external table services.
    shared_ptr<vector<ListExternalDataSourcesResponseBody::Items>> items_ {};
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
