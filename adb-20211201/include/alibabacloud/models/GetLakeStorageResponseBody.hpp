// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLAKESTORAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLAKESTORAGERESPONSEBODY_HPP_
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
  class GetLakeStorageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLakeStorageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetLakeStorageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetLakeStorageResponseBody() = default ;
    GetLakeStorageResponseBody(const GetLakeStorageResponseBody &) = default ;
    GetLakeStorageResponseBody(GetLakeStorageResponseBody &&) = default ;
    GetLakeStorageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLakeStorageResponseBody() = default ;
    GetLakeStorageResponseBody& operator=(const GetLakeStorageResponseBody &) = default ;
    GetLakeStorageResponseBody& operator=(GetLakeStorageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatorUid, creatorUid_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(LakeStorageId, lakeStorageId_);
        DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
        DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_TO_JSON(PartitionCount, partitionCount_);
        DARABONBA_PTR_TO_JSON(Permissions, permissions_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
        DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatorUid, creatorUid_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(LakeStorageId, lakeStorageId_);
        DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
        DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_FROM_JSON(PartitionCount, partitionCount_);
        DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
        DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
        // The account ID.
        shared_ptr<string> account_ {};
        // The read permissions.
        shared_ptr<bool> read_ {};
        // The account type.
        shared_ptr<string> type_ {};
        // The write permissions.
        shared_ptr<bool> write_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creatorUid_ == nullptr && this->DBClusterId_ == nullptr && this->description_ == nullptr && this->fileSize_ == nullptr && this->lakeStorageId_ == nullptr
        && this->operatorUid_ == nullptr && this->ownerUid_ == nullptr && this->partitionCount_ == nullptr && this->permissions_ == nullptr && this->regionId_ == nullptr
        && this->rowCount_ == nullptr && this->tableCount_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorUid Field Functions 
      bool hasCreatorUid() const { return this->creatorUid_ != nullptr;};
      void deleteCreatorUid() { this->creatorUid_ = nullptr;};
      inline string getCreatorUid() const { DARABONBA_PTR_GET_DEFAULT(creatorUid_, "") };
      inline Data& setCreatorUid(string creatorUid) { DARABONBA_PTR_SET_VALUE(creatorUid_, creatorUid) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Data& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
      inline Data& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // lakeStorageId Field Functions 
      bool hasLakeStorageId() const { return this->lakeStorageId_ != nullptr;};
      void deleteLakeStorageId() { this->lakeStorageId_ = nullptr;};
      inline string getLakeStorageId() const { DARABONBA_PTR_GET_DEFAULT(lakeStorageId_, "") };
      inline Data& setLakeStorageId(string lakeStorageId) { DARABONBA_PTR_SET_VALUE(lakeStorageId_, lakeStorageId) };


      // operatorUid Field Functions 
      bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
      void deleteOperatorUid() { this->operatorUid_ = nullptr;};
      inline string getOperatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, "") };
      inline Data& setOperatorUid(string operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


      // ownerUid Field Functions 
      bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
      void deleteOwnerUid() { this->ownerUid_ = nullptr;};
      inline string getOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, "") };
      inline Data& setOwnerUid(string ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


      // partitionCount Field Functions 
      bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
      void deletePartitionCount() { this->partitionCount_ = nullptr;};
      inline string getPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, "") };
      inline Data& setPartitionCount(string partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


      // permissions Field Functions 
      bool hasPermissions() const { return this->permissions_ != nullptr;};
      void deletePermissions() { this->permissions_ = nullptr;};
      inline const vector<Data::Permissions> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<Data::Permissions>) };
      inline vector<Data::Permissions> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<Data::Permissions>) };
      inline Data& setPermissions(const vector<Data::Permissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
      inline Data& setPermissions(vector<Data::Permissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // rowCount Field Functions 
      bool hasRowCount() const { return this->rowCount_ != nullptr;};
      void deleteRowCount() { this->rowCount_ = nullptr;};
      inline int64_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
      inline Data& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


      // tableCount Field Functions 
      bool hasTableCount() const { return this->tableCount_ != nullptr;};
      void deleteTableCount() { this->tableCount_ = nullptr;};
      inline int32_t getTableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0) };
      inline Data& setTableCount(int32_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the lake storage was created.
      shared_ptr<string> createTime_ {};
      // The creator UID.
      shared_ptr<string> creatorUid_ {};
      // The ID of the AnalyticDB for MySQL cluster.
      shared_ptr<string> DBClusterId_ {};
      // The description of the lake storage.
      shared_ptr<string> description_ {};
      // The total storage size.
      shared_ptr<string> fileSize_ {};
      // The unique identifier of the lake storage.
      shared_ptr<string> lakeStorageId_ {};
      // The operator UID.
      shared_ptr<string> operatorUid_ {};
      // The owner UID.
      shared_ptr<string> ownerUid_ {};
      // The number of partitions.
      shared_ptr<string> partitionCount_ {};
      // The permissions on the lake storage.
      shared_ptr<vector<Data::Permissions>> permissions_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> rowCount_ {};
      // The number of the tables.
      shared_ptr<int32_t> tableCount_ {};
      // The time when the lake storage was last updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetLakeStorageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetLakeStorageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetLakeStorageResponseBody::Data) };
    inline GetLakeStorageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetLakeStorageResponseBody::Data) };
    inline GetLakeStorageResponseBody& setData(const GetLakeStorageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetLakeStorageResponseBody& setData(GetLakeStorageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetLakeStorageResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLakeStorageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLakeStorageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetLakeStorageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code or the error code.
    shared_ptr<string> code_ {};
    // The queried lake storage.
    shared_ptr<GetLakeStorageResponseBody::Data> data_ {};
    // The response code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message. Valid values:
    // 
    // *   If the request was successful, a success message is returned.****
    // *   If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
