// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTICSQLEXECUTECREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTICSQLEXECUTECREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateAgenticSqlExecuteCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgenticSqlExecuteCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgenticSqlExecuteCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateAgenticSqlExecuteCredentialResponseBody() = default ;
    CreateAgenticSqlExecuteCredentialResponseBody(const CreateAgenticSqlExecuteCredentialResponseBody &) = default ;
    CreateAgenticSqlExecuteCredentialResponseBody(CreateAgenticSqlExecuteCredentialResponseBody &&) = default ;
    CreateAgenticSqlExecuteCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgenticSqlExecuteCredentialResponseBody() = default ;
    CreateAgenticSqlExecuteCredentialResponseBody& operator=(const CreateAgenticSqlExecuteCredentialResponseBody &) = default ;
    CreateAgenticSqlExecuteCredentialResponseBody& operator=(CreateAgenticSqlExecuteCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
        DARABONBA_PTR_TO_JSON(AccessSecret, accessSecret_);
        DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
        DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
        DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(MaxConnectTimes, maxConnectTimes_);
        DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
        DARABONBA_PTR_FROM_JSON(AccessSecret, accessSecret_);
        DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
        DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
        DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(MaxConnectTimes, maxConnectTimes_);
        DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
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
      virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->accessSecret_ == nullptr && this->catalogName_ == nullptr && this->catalogUuid_ == nullptr && this->databaseUuid_ == nullptr && this->expireTime_ == nullptr
        && this->maxConnectTimes_ == nullptr && this->qualifiedName_ == nullptr; };
      // accessKey Field Functions 
      bool hasAccessKey() const { return this->accessKey_ != nullptr;};
      void deleteAccessKey() { this->accessKey_ = nullptr;};
      inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
      inline Data& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


      // accessSecret Field Functions 
      bool hasAccessSecret() const { return this->accessSecret_ != nullptr;};
      void deleteAccessSecret() { this->accessSecret_ = nullptr;};
      inline string getAccessSecret() const { DARABONBA_PTR_GET_DEFAULT(accessSecret_, "") };
      inline Data& setAccessSecret(string accessSecret) { DARABONBA_PTR_SET_VALUE(accessSecret_, accessSecret) };


      // catalogName Field Functions 
      bool hasCatalogName() const { return this->catalogName_ != nullptr;};
      void deleteCatalogName() { this->catalogName_ = nullptr;};
      inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
      inline Data& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


      // catalogUuid Field Functions 
      bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
      void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
      inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
      inline Data& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


      // databaseUuid Field Functions 
      bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
      void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
      inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
      inline Data& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // maxConnectTimes Field Functions 
      bool hasMaxConnectTimes() const { return this->maxConnectTimes_ != nullptr;};
      void deleteMaxConnectTimes() { this->maxConnectTimes_ = nullptr;};
      inline int64_t getMaxConnectTimes() const { DARABONBA_PTR_GET_DEFAULT(maxConnectTimes_, 0L) };
      inline Data& setMaxConnectTimes(int64_t maxConnectTimes) { DARABONBA_PTR_SET_VALUE(maxConnectTimes_, maxConnectTimes) };


      // qualifiedName Field Functions 
      bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
      void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
      inline string getQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
      inline Data& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


    protected:
      // The AccessKey of the credential.
      shared_ptr<string> accessKey_ {};
      // The AccessKey secret of the credential. This value is returned only once when the credential is created. Keep it secure.
      shared_ptr<string> accessSecret_ {};
      // The name of the instance.
      shared_ptr<string> catalogName_ {};
      // The UUID of the instance.
      shared_ptr<string> catalogUuid_ {};
      // The UUID of the database. If the credential is at the instance level, this value is empty.
      shared_ptr<string> databaseUuid_ {};
      // The expiration time of the credential. Format: yyyy-MM-dd HH:mm:ss.
      shared_ptr<string> expireTime_ {};
      // The total number of connections supported by the credential.
      shared_ptr<int64_t> maxConnectTimes_ {};
      // The fully qualified name of the database. If the credential is at the instance level, this value is empty.
      shared_ptr<string> qualifiedName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateAgenticSqlExecuteCredentialResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateAgenticSqlExecuteCredentialResponseBody::Data) };
    inline CreateAgenticSqlExecuteCredentialResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateAgenticSqlExecuteCredentialResponseBody::Data) };
    inline CreateAgenticSqlExecuteCredentialResponseBody& setData(const CreateAgenticSqlExecuteCredentialResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateAgenticSqlExecuteCredentialResponseBody& setData(CreateAgenticSqlExecuteCredentialResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateAgenticSqlExecuteCredentialResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateAgenticSqlExecuteCredentialResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAgenticSqlExecuteCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateAgenticSqlExecuteCredentialResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The temporary credential information.
    shared_ptr<CreateAgenticSqlExecuteCredentialResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - **true**: The request is successful.                                 
    // - **false**: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
