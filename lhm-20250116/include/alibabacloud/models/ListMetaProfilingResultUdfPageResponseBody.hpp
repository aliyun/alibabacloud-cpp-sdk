// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETAPROFILINGRESULTUDFPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMETAPROFILINGRESULTUDFPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListMetaProfilingResultUdfPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaProfilingResultUdfPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaProfilingResultUdfPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListMetaProfilingResultUdfPageResponseBody() = default ;
    ListMetaProfilingResultUdfPageResponseBody(const ListMetaProfilingResultUdfPageResponseBody &) = default ;
    ListMetaProfilingResultUdfPageResponseBody(ListMetaProfilingResultUdfPageResponseBody &&) = default ;
    ListMetaProfilingResultUdfPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaProfilingResultUdfPageResponseBody() = default ;
    ListMetaProfilingResultUdfPageResponseBody& operator=(const ListMetaProfilingResultUdfPageResponseBody &) = default ;
    ListMetaProfilingResultUdfPageResponseBody& operator=(ListMetaProfilingResultUdfPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(catalogName, catalogName_);
        DARABONBA_PTR_TO_JSON(className, className_);
        DARABONBA_PTR_TO_JSON(dbName, dbName_);
        DARABONBA_PTR_TO_JSON(dsType, dsType_);
        DARABONBA_PTR_TO_JSON(funcComment, funcComment_);
        DARABONBA_PTR_TO_JSON(funcCrtTime, funcCrtTime_);
        DARABONBA_PTR_TO_JSON(funcId, funcId_);
        DARABONBA_PTR_TO_JSON(funcModTime, funcModTime_);
        DARABONBA_PTR_TO_JSON(funcName, funcName_);
        DARABONBA_PTR_TO_JSON(funcType, funcType_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(migrationStatus, migrationStatus_);
        DARABONBA_PTR_TO_JSON(owner, owner_);
        DARABONBA_PTR_TO_JSON(resourceLocation, resourceLocation_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(catalogName, catalogName_);
        DARABONBA_PTR_FROM_JSON(className, className_);
        DARABONBA_PTR_FROM_JSON(dbName, dbName_);
        DARABONBA_PTR_FROM_JSON(dsType, dsType_);
        DARABONBA_PTR_FROM_JSON(funcComment, funcComment_);
        DARABONBA_PTR_FROM_JSON(funcCrtTime, funcCrtTime_);
        DARABONBA_PTR_FROM_JSON(funcId, funcId_);
        DARABONBA_PTR_FROM_JSON(funcModTime, funcModTime_);
        DARABONBA_PTR_FROM_JSON(funcName, funcName_);
        DARABONBA_PTR_FROM_JSON(funcType, funcType_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(migrationStatus, migrationStatus_);
        DARABONBA_PTR_FROM_JSON(owner, owner_);
        DARABONBA_PTR_FROM_JSON(resourceLocation, resourceLocation_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
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
      virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->className_ == nullptr && this->dbName_ == nullptr && this->dsType_ == nullptr && this->funcComment_ == nullptr && this->funcCrtTime_ == nullptr
        && this->funcId_ == nullptr && this->funcModTime_ == nullptr && this->funcName_ == nullptr && this->funcType_ == nullptr && this->id_ == nullptr
        && this->migrationStatus_ == nullptr && this->owner_ == nullptr && this->resourceLocation_ == nullptr && this->resourceType_ == nullptr && this->tenantId_ == nullptr; };
      // catalogName Field Functions 
      bool hasCatalogName() const { return this->catalogName_ != nullptr;};
      void deleteCatalogName() { this->catalogName_ = nullptr;};
      inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
      inline Data& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


      // className Field Functions 
      bool hasClassName() const { return this->className_ != nullptr;};
      void deleteClassName() { this->className_ = nullptr;};
      inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
      inline Data& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
      inline Data& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


      // dsType Field Functions 
      bool hasDsType() const { return this->dsType_ != nullptr;};
      void deleteDsType() { this->dsType_ = nullptr;};
      inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
      inline Data& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


      // funcComment Field Functions 
      bool hasFuncComment() const { return this->funcComment_ != nullptr;};
      void deleteFuncComment() { this->funcComment_ = nullptr;};
      inline string getFuncComment() const { DARABONBA_PTR_GET_DEFAULT(funcComment_, "") };
      inline Data& setFuncComment(string funcComment) { DARABONBA_PTR_SET_VALUE(funcComment_, funcComment) };


      // funcCrtTime Field Functions 
      bool hasFuncCrtTime() const { return this->funcCrtTime_ != nullptr;};
      void deleteFuncCrtTime() { this->funcCrtTime_ = nullptr;};
      inline string getFuncCrtTime() const { DARABONBA_PTR_GET_DEFAULT(funcCrtTime_, "") };
      inline Data& setFuncCrtTime(string funcCrtTime) { DARABONBA_PTR_SET_VALUE(funcCrtTime_, funcCrtTime) };


      // funcId Field Functions 
      bool hasFuncId() const { return this->funcId_ != nullptr;};
      void deleteFuncId() { this->funcId_ = nullptr;};
      inline string getFuncId() const { DARABONBA_PTR_GET_DEFAULT(funcId_, "") };
      inline Data& setFuncId(string funcId) { DARABONBA_PTR_SET_VALUE(funcId_, funcId) };


      // funcModTime Field Functions 
      bool hasFuncModTime() const { return this->funcModTime_ != nullptr;};
      void deleteFuncModTime() { this->funcModTime_ = nullptr;};
      inline string getFuncModTime() const { DARABONBA_PTR_GET_DEFAULT(funcModTime_, "") };
      inline Data& setFuncModTime(string funcModTime) { DARABONBA_PTR_SET_VALUE(funcModTime_, funcModTime) };


      // funcName Field Functions 
      bool hasFuncName() const { return this->funcName_ != nullptr;};
      void deleteFuncName() { this->funcName_ = nullptr;};
      inline string getFuncName() const { DARABONBA_PTR_GET_DEFAULT(funcName_, "") };
      inline Data& setFuncName(string funcName) { DARABONBA_PTR_SET_VALUE(funcName_, funcName) };


      // funcType Field Functions 
      bool hasFuncType() const { return this->funcType_ != nullptr;};
      void deleteFuncType() { this->funcType_ = nullptr;};
      inline string getFuncType() const { DARABONBA_PTR_GET_DEFAULT(funcType_, "") };
      inline Data& setFuncType(string funcType) { DARABONBA_PTR_SET_VALUE(funcType_, funcType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // migrationStatus Field Functions 
      bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
      void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
      inline string getMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, "") };
      inline Data& setMigrationStatus(string migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // resourceLocation Field Functions 
      bool hasResourceLocation() const { return this->resourceLocation_ != nullptr;};
      void deleteResourceLocation() { this->resourceLocation_ = nullptr;};
      inline string getResourceLocation() const { DARABONBA_PTR_GET_DEFAULT(resourceLocation_, "") };
      inline Data& setResourceLocation(string resourceLocation) { DARABONBA_PTR_SET_VALUE(resourceLocation_, resourceLocation) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Data& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> catalogName_ {};
      shared_ptr<string> className_ {};
      shared_ptr<string> dbName_ {};
      shared_ptr<string> dsType_ {};
      shared_ptr<string> funcComment_ {};
      shared_ptr<string> funcCrtTime_ {};
      shared_ptr<string> funcId_ {};
      shared_ptr<string> funcModTime_ {};
      shared_ptr<string> funcName_ {};
      shared_ptr<string> funcType_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> migrationStatus_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> resourceLocation_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMetaProfilingResultUdfPageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMetaProfilingResultUdfPageResponseBody::Data>) };
    inline vector<ListMetaProfilingResultUdfPageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListMetaProfilingResultUdfPageResponseBody::Data>) };
    inline ListMetaProfilingResultUdfPageResponseBody& setData(const vector<ListMetaProfilingResultUdfPageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMetaProfilingResultUdfPageResponseBody& setData(vector<ListMetaProfilingResultUdfPageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListMetaProfilingResultUdfPageResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListMetaProfilingResultUdfPageResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListMetaProfilingResultUdfPageResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetaProfilingResultUdfPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMetaProfilingResultUdfPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMetaProfilingResultUdfPageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListMetaProfilingResultUdfPageResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
