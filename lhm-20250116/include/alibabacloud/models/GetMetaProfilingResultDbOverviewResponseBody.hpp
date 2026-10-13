// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETAPROFILINGRESULTDBOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETAPROFILINGRESULTDBOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetMetaProfilingResultDbOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaProfilingResultDbOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaProfilingResultDbOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetMetaProfilingResultDbOverviewResponseBody() = default ;
    GetMetaProfilingResultDbOverviewResponseBody(const GetMetaProfilingResultDbOverviewResponseBody &) = default ;
    GetMetaProfilingResultDbOverviewResponseBody(GetMetaProfilingResultDbOverviewResponseBody &&) = default ;
    GetMetaProfilingResultDbOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaProfilingResultDbOverviewResponseBody() = default ;
    GetMetaProfilingResultDbOverviewResponseBody& operator=(const GetMetaProfilingResultDbOverviewResponseBody &) = default ;
    GetMetaProfilingResultDbOverviewResponseBody& operator=(GetMetaProfilingResultDbOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(catalogCount, catalogCount_);
        DARABONBA_PTR_TO_JSON(componentId, componentId_);
        DARABONBA_PTR_TO_JSON(componentType, componentType_);
        DARABONBA_PTR_TO_JSON(dsName, dsName_);
        DARABONBA_PTR_TO_JSON(dsVersion, dsVersion_);
        DARABONBA_PTR_TO_JSON(etTableCount, etTableCount_);
        DARABONBA_PTR_TO_JSON(funcCount, funcCount_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(lastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(noPtTableCount, noPtTableCount_);
        DARABONBA_PTR_TO_JSON(partitionCount, partitionCount_);
        DARABONBA_PTR_TO_JSON(ptTableCount, ptTableCount_);
        DARABONBA_PTR_TO_JSON(recordCount, recordCount_);
        DARABONBA_PTR_TO_JSON(schemaCount, schemaCount_);
        DARABONBA_PTR_TO_JSON(storageSize, storageSize_);
        DARABONBA_PTR_TO_JSON(tableCount, tableCount_);
        DARABONBA_PTR_TO_JSON(transactionalCount, transactionalCount_);
        DARABONBA_PTR_TO_JSON(viewCount, viewCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(catalogCount, catalogCount_);
        DARABONBA_PTR_FROM_JSON(componentId, componentId_);
        DARABONBA_PTR_FROM_JSON(componentType, componentType_);
        DARABONBA_PTR_FROM_JSON(dsName, dsName_);
        DARABONBA_PTR_FROM_JSON(dsVersion, dsVersion_);
        DARABONBA_PTR_FROM_JSON(etTableCount, etTableCount_);
        DARABONBA_PTR_FROM_JSON(funcCount, funcCount_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(lastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(noPtTableCount, noPtTableCount_);
        DARABONBA_PTR_FROM_JSON(partitionCount, partitionCount_);
        DARABONBA_PTR_FROM_JSON(ptTableCount, ptTableCount_);
        DARABONBA_PTR_FROM_JSON(recordCount, recordCount_);
        DARABONBA_PTR_FROM_JSON(schemaCount, schemaCount_);
        DARABONBA_PTR_FROM_JSON(storageSize, storageSize_);
        DARABONBA_PTR_FROM_JSON(tableCount, tableCount_);
        DARABONBA_PTR_FROM_JSON(transactionalCount, transactionalCount_);
        DARABONBA_PTR_FROM_JSON(viewCount, viewCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->catalogCount_ == nullptr
        && this->componentId_ == nullptr && this->componentType_ == nullptr && this->dsName_ == nullptr && this->dsVersion_ == nullptr && this->etTableCount_ == nullptr
        && this->funcCount_ == nullptr && this->gmtCreate_ == nullptr && this->lastModified_ == nullptr && this->noPtTableCount_ == nullptr && this->partitionCount_ == nullptr
        && this->ptTableCount_ == nullptr && this->recordCount_ == nullptr && this->schemaCount_ == nullptr && this->storageSize_ == nullptr && this->tableCount_ == nullptr
        && this->transactionalCount_ == nullptr && this->viewCount_ == nullptr; };
      // catalogCount Field Functions 
      bool hasCatalogCount() const { return this->catalogCount_ != nullptr;};
      void deleteCatalogCount() { this->catalogCount_ = nullptr;};
      inline int32_t getCatalogCount() const { DARABONBA_PTR_GET_DEFAULT(catalogCount_, 0) };
      inline Data& setCatalogCount(int32_t catalogCount) { DARABONBA_PTR_SET_VALUE(catalogCount_, catalogCount) };


      // componentId Field Functions 
      bool hasComponentId() const { return this->componentId_ != nullptr;};
      void deleteComponentId() { this->componentId_ = nullptr;};
      inline int64_t getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, 0L) };
      inline Data& setComponentId(int64_t componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


      // componentType Field Functions 
      bool hasComponentType() const { return this->componentType_ != nullptr;};
      void deleteComponentType() { this->componentType_ = nullptr;};
      inline int32_t getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, 0) };
      inline Data& setComponentType(int32_t componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


      // dsName Field Functions 
      bool hasDsName() const { return this->dsName_ != nullptr;};
      void deleteDsName() { this->dsName_ = nullptr;};
      inline string getDsName() const { DARABONBA_PTR_GET_DEFAULT(dsName_, "") };
      inline Data& setDsName(string dsName) { DARABONBA_PTR_SET_VALUE(dsName_, dsName) };


      // dsVersion Field Functions 
      bool hasDsVersion() const { return this->dsVersion_ != nullptr;};
      void deleteDsVersion() { this->dsVersion_ = nullptr;};
      inline string getDsVersion() const { DARABONBA_PTR_GET_DEFAULT(dsVersion_, "") };
      inline Data& setDsVersion(string dsVersion) { DARABONBA_PTR_SET_VALUE(dsVersion_, dsVersion) };


      // etTableCount Field Functions 
      bool hasEtTableCount() const { return this->etTableCount_ != nullptr;};
      void deleteEtTableCount() { this->etTableCount_ = nullptr;};
      inline int32_t getEtTableCount() const { DARABONBA_PTR_GET_DEFAULT(etTableCount_, 0) };
      inline Data& setEtTableCount(int32_t etTableCount) { DARABONBA_PTR_SET_VALUE(etTableCount_, etTableCount) };


      // funcCount Field Functions 
      bool hasFuncCount() const { return this->funcCount_ != nullptr;};
      void deleteFuncCount() { this->funcCount_ = nullptr;};
      inline int32_t getFuncCount() const { DARABONBA_PTR_GET_DEFAULT(funcCount_, 0) };
      inline Data& setFuncCount(int32_t funcCount) { DARABONBA_PTR_SET_VALUE(funcCount_, funcCount) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline Data& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // noPtTableCount Field Functions 
      bool hasNoPtTableCount() const { return this->noPtTableCount_ != nullptr;};
      void deleteNoPtTableCount() { this->noPtTableCount_ = nullptr;};
      inline int32_t getNoPtTableCount() const { DARABONBA_PTR_GET_DEFAULT(noPtTableCount_, 0) };
      inline Data& setNoPtTableCount(int32_t noPtTableCount) { DARABONBA_PTR_SET_VALUE(noPtTableCount_, noPtTableCount) };


      // partitionCount Field Functions 
      bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
      void deletePartitionCount() { this->partitionCount_ = nullptr;};
      inline int32_t getPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, 0) };
      inline Data& setPartitionCount(int32_t partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


      // ptTableCount Field Functions 
      bool hasPtTableCount() const { return this->ptTableCount_ != nullptr;};
      void deletePtTableCount() { this->ptTableCount_ = nullptr;};
      inline int32_t getPtTableCount() const { DARABONBA_PTR_GET_DEFAULT(ptTableCount_, 0) };
      inline Data& setPtTableCount(int32_t ptTableCount) { DARABONBA_PTR_SET_VALUE(ptTableCount_, ptTableCount) };


      // recordCount Field Functions 
      bool hasRecordCount() const { return this->recordCount_ != nullptr;};
      void deleteRecordCount() { this->recordCount_ = nullptr;};
      inline int64_t getRecordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
      inline Data& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


      // schemaCount Field Functions 
      bool hasSchemaCount() const { return this->schemaCount_ != nullptr;};
      void deleteSchemaCount() { this->schemaCount_ = nullptr;};
      inline int32_t getSchemaCount() const { DARABONBA_PTR_GET_DEFAULT(schemaCount_, 0) };
      inline Data& setSchemaCount(int32_t schemaCount) { DARABONBA_PTR_SET_VALUE(schemaCount_, schemaCount) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline string getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, "") };
      inline Data& setStorageSize(string storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      // tableCount Field Functions 
      bool hasTableCount() const { return this->tableCount_ != nullptr;};
      void deleteTableCount() { this->tableCount_ = nullptr;};
      inline int32_t getTableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0) };
      inline Data& setTableCount(int32_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


      // transactionalCount Field Functions 
      bool hasTransactionalCount() const { return this->transactionalCount_ != nullptr;};
      void deleteTransactionalCount() { this->transactionalCount_ = nullptr;};
      inline int32_t getTransactionalCount() const { DARABONBA_PTR_GET_DEFAULT(transactionalCount_, 0) };
      inline Data& setTransactionalCount(int32_t transactionalCount) { DARABONBA_PTR_SET_VALUE(transactionalCount_, transactionalCount) };


      // viewCount Field Functions 
      bool hasViewCount() const { return this->viewCount_ != nullptr;};
      void deleteViewCount() { this->viewCount_ = nullptr;};
      inline int32_t getViewCount() const { DARABONBA_PTR_GET_DEFAULT(viewCount_, 0) };
      inline Data& setViewCount(int32_t viewCount) { DARABONBA_PTR_SET_VALUE(viewCount_, viewCount) };


    protected:
      // The number of catalogs.
      shared_ptr<int32_t> catalogCount_ {};
      // The component ID, which is the primary key identifier of the data source component.
      shared_ptr<int64_t> componentId_ {};
      // The identifier of the data source component type.
      shared_ptr<int32_t> componentType_ {};
      // The name of the data source.
      shared_ptr<string> dsName_ {};
      // The version of the data source.
      shared_ptr<string> dsVersion_ {};
      // The number of external tables.
      shared_ptr<int32_t> etTableCount_ {};
      // The number of functions.
      shared_ptr<int32_t> funcCount_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The last modification time.
      shared_ptr<string> lastModified_ {};
      // The number of non-partitioned tables.
      shared_ptr<int32_t> noPtTableCount_ {};
      // The number of partitions.
      shared_ptr<int32_t> partitionCount_ {};
      // The number of partitioned tables.
      shared_ptr<int32_t> ptTableCount_ {};
      // The number of data rows.
      shared_ptr<int64_t> recordCount_ {};
      // The number of schemas.
      shared_ptr<int32_t> schemaCount_ {};
      // The data storage size.
      shared_ptr<string> storageSize_ {};
      // The number of tables.
      shared_ptr<int32_t> tableCount_ {};
      // The number of transactional tables.
      shared_ptr<int32_t> transactionalCount_ {};
      // The number of views.
      shared_ptr<int32_t> viewCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMetaProfilingResultDbOverviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMetaProfilingResultDbOverviewResponseBody::Data) };
    inline GetMetaProfilingResultDbOverviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMetaProfilingResultDbOverviewResponseBody::Data) };
    inline GetMetaProfilingResultDbOverviewResponseBody& setData(const GetMetaProfilingResultDbOverviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMetaProfilingResultDbOverviewResponseBody& setData(GetMetaProfilingResultDbOverviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetMetaProfilingResultDbOverviewResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetMetaProfilingResultDbOverviewResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaProfilingResultDbOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaProfilingResultDbOverviewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data source-level metadata profiling overview object. For more information about each field, see the descriptions of the sub-fields.
    shared_ptr<GetMetaProfilingResultDbOverviewResponseBody::Data> data_ {};
    // The error code. It is an empty string if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. It is an empty string if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The request ID, which is used to locate and troubleshoot issues related to this call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // - true: The call is successful.
    // - false: The call failed. If the call fails, troubleshoot the issue based on the errCode and errMessage parameters.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
