// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAKESTORAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLAKESTORAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListLakeStoragesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLakeStoragesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLakeStoragesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLakeStoragesResponseBody() = default ;
    ListLakeStoragesResponseBody(const ListLakeStoragesResponseBody &) = default ;
    ListLakeStoragesResponseBody(ListLakeStoragesResponseBody &&) = default ;
    ListLakeStoragesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLakeStoragesResponseBody() = default ;
    ListLakeStoragesResponseBody& operator=(const ListLakeStoragesResponseBody &) = default ;
    ListLakeStoragesResponseBody& operator=(ListLakeStoragesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatorUid, creatorUid_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(LakeStorageId, lakeStorageId_);
        DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
        DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_TO_JSON(Permissions, permissions_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
        DARABONBA_PTR_TO_JSON(TotalRows, totalRows_);
        DARABONBA_PTR_TO_JSON(TotalStorage, totalStorage_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatorUid, creatorUid_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(LakeStorageId, lakeStorageId_);
        DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
        DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
        DARABONBA_PTR_FROM_JSON(TotalRows, totalRows_);
        DARABONBA_PTR_FROM_JSON(TotalStorage, totalStorage_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
      class Permissions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Permissions& obj) { 
          DARABONBA_PTR_TO_JSON(Account, account_);
          DARABONBA_PTR_TO_JSON(Read, read_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Write, write_);
        };
        friend void from_json(const Darabonba::Json& j, Permissions& obj) { 
          DARABONBA_PTR_FROM_JSON(Account, account_);
          DARABONBA_PTR_FROM_JSON(Read, read_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Write, write_);
        };
        Permissions() = default ;
        Permissions(const Permissions &) = default ;
        Permissions(Permissions &&) = default ;
        Permissions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Permissions() = default ;
        Permissions& operator=(const Permissions &) = default ;
        Permissions& operator=(Permissions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->account_ == nullptr
        && this->read_ == nullptr && this->type_ == nullptr && this->write_ == nullptr; };
        // account Field Functions 
        bool hasAccount() const { return this->account_ != nullptr;};
        void deleteAccount() { this->account_ = nullptr;};
        inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
        inline Permissions& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


        // read Field Functions 
        bool hasRead() const { return this->read_ != nullptr;};
        void deleteRead() { this->read_ = nullptr;};
        inline bool getRead() const { DARABONBA_PTR_GET_DEFAULT(read_, false) };
        inline Permissions& setRead(bool read) { DARABONBA_PTR_SET_VALUE(read_, read) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Permissions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // write Field Functions 
        bool hasWrite() const { return this->write_ != nullptr;};
        void deleteWrite() { this->write_ = nullptr;};
        inline bool getWrite() const { DARABONBA_PTR_GET_DEFAULT(write_, false) };
        inline Permissions& setWrite(bool write) { DARABONBA_PTR_SET_VALUE(write_, write) };


      protected:
        // The database account ID.
        shared_ptr<string> account_ {};
        // The read permissions.
        shared_ptr<bool> read_ {};
        // The type of the database account.
        shared_ptr<string> type_ {};
        // The write permissions.
        shared_ptr<bool> write_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creatorUid_ == nullptr && this->DBClusterId_ == nullptr && this->description_ == nullptr && this->fileSize_ == nullptr && this->lakeStorageId_ == nullptr
        && this->operatorUid_ == nullptr && this->ownerUid_ == nullptr && this->permissions_ == nullptr && this->regionId_ == nullptr && this->tableCount_ == nullptr
        && this->totalRows_ == nullptr && this->totalStorage_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Items& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorUid Field Functions 
      bool hasCreatorUid() const { return this->creatorUid_ != nullptr;};
      void deleteCreatorUid() { this->creatorUid_ = nullptr;};
      inline string getCreatorUid() const { DARABONBA_PTR_GET_DEFAULT(creatorUid_, "") };
      inline Items& setCreatorUid(string creatorUid) { DARABONBA_PTR_SET_VALUE(creatorUid_, creatorUid) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Items& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
      inline Items& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // lakeStorageId Field Functions 
      bool hasLakeStorageId() const { return this->lakeStorageId_ != nullptr;};
      void deleteLakeStorageId() { this->lakeStorageId_ = nullptr;};
      inline string getLakeStorageId() const { DARABONBA_PTR_GET_DEFAULT(lakeStorageId_, "") };
      inline Items& setLakeStorageId(string lakeStorageId) { DARABONBA_PTR_SET_VALUE(lakeStorageId_, lakeStorageId) };


      // operatorUid Field Functions 
      bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
      void deleteOperatorUid() { this->operatorUid_ = nullptr;};
      inline string getOperatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, "") };
      inline Items& setOperatorUid(string operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


      // ownerUid Field Functions 
      bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
      void deleteOwnerUid() { this->ownerUid_ = nullptr;};
      inline string getOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, "") };
      inline Items& setOwnerUid(string ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


      // permissions Field Functions 
      bool hasPermissions() const { return this->permissions_ != nullptr;};
      void deletePermissions() { this->permissions_ = nullptr;};
      inline const vector<Items::Permissions> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<Items::Permissions>) };
      inline vector<Items::Permissions> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<Items::Permissions>) };
      inline Items& setPermissions(const vector<Items::Permissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
      inline Items& setPermissions(vector<Items::Permissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // tableCount Field Functions 
      bool hasTableCount() const { return this->tableCount_ != nullptr;};
      void deleteTableCount() { this->tableCount_ = nullptr;};
      inline int32_t getTableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0) };
      inline Items& setTableCount(int32_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


      // totalRows Field Functions 
      bool hasTotalRows() const { return this->totalRows_ != nullptr;};
      void deleteTotalRows() { this->totalRows_ = nullptr;};
      inline int64_t getTotalRows() const { DARABONBA_PTR_GET_DEFAULT(totalRows_, 0L) };
      inline Items& setTotalRows(int64_t totalRows) { DARABONBA_PTR_SET_VALUE(totalRows_, totalRows) };


      // totalStorage Field Functions 
      bool hasTotalStorage() const { return this->totalStorage_ != nullptr;};
      void deleteTotalStorage() { this->totalStorage_ = nullptr;};
      inline string getTotalStorage() const { DARABONBA_PTR_GET_DEFAULT(totalStorage_, "") };
      inline Items& setTotalStorage(string totalStorage) { DARABONBA_PTR_SET_VALUE(totalStorage_, totalStorage) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Items& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the lake storage was created.
      shared_ptr<string> createTime_ {};
      // The creator UID.
      shared_ptr<string> creatorUid_ {};
      // The ID of the AnalyticDB for MySQL cluster.
      shared_ptr<string> DBClusterId_ {};
      // The description of the lake storage.
      shared_ptr<string> description_ {};
      // The size of data files.
      shared_ptr<string> fileSize_ {};
      // The unique identifier of the lake storage.
      shared_ptr<string> lakeStorageId_ {};
      // The operator UID.
      shared_ptr<string> operatorUid_ {};
      // The queried lake storage.
      shared_ptr<string> ownerUid_ {};
      // The permissions on the lake storage.
      shared_ptr<vector<Items::Permissions>> permissions_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The number of tables.
      shared_ptr<int32_t> tableCount_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalRows_ {};
      // The total storage size.
      shared_ptr<string> totalStorage_ {};
      // The time when the lake storage was last updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListLakeStoragesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListLakeStoragesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListLakeStoragesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListLakeStoragesResponseBody::Items>) };
    inline vector<ListLakeStoragesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListLakeStoragesResponseBody::Items>) };
    inline ListLakeStoragesResponseBody& setItems(const vector<ListLakeStoragesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListLakeStoragesResponseBody& setItems(vector<ListLakeStoragesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListLakeStoragesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLakeStoragesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLakeStoragesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLakeStoragesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLakeStoragesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLakeStoragesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The HTTP status code or the error code.
    shared_ptr<string> code_ {};
    // The response code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The queried lake storages.
    shared_ptr<vector<ListLakeStoragesResponseBody::Items>> items_ {};
    // The returned message. Valid values:
    // 
    // *   If the request was successful, a success message is returned.****
    // *   If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The token that is used for paging when the number of results is greater than the value of MaxResults.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the dry run succeeds. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
