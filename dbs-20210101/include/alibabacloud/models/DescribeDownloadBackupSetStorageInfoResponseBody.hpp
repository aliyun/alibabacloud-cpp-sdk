// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADBACKUPSETSTORAGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADBACKUPSETSTORAGEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DescribeDownloadBackupSetStorageInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadBackupSetStorageInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadBackupSetStorageInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDownloadBackupSetStorageInfoResponseBody() = default ;
    DescribeDownloadBackupSetStorageInfoResponseBody(const DescribeDownloadBackupSetStorageInfoResponseBody &) = default ;
    DescribeDownloadBackupSetStorageInfoResponseBody(DescribeDownloadBackupSetStorageInfoResponseBody &&) = default ;
    DescribeDownloadBackupSetStorageInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadBackupSetStorageInfoResponseBody() = default ;
    DescribeDownloadBackupSetStorageInfoResponseBody& operator=(const DescribeDownloadBackupSetStorageInfoResponseBody &) = default ;
    DescribeDownloadBackupSetStorageInfoResponseBody& operator=(DescribeDownloadBackupSetStorageInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(PrivateUrl, privateUrl_);
        DARABONBA_PTR_TO_JSON(PublicUrl, publicUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(PrivateUrl, privateUrl_);
        DARABONBA_PTR_FROM_JSON(PublicUrl, publicUrl_);
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
      virtual bool empty() const override { return this->expirationTime_ == nullptr
        && this->privateUrl_ == nullptr && this->publicUrl_ == nullptr; };
      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
      inline Data& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // privateUrl Field Functions 
      bool hasPrivateUrl() const { return this->privateUrl_ != nullptr;};
      void deletePrivateUrl() { this->privateUrl_ = nullptr;};
      inline string getPrivateUrl() const { DARABONBA_PTR_GET_DEFAULT(privateUrl_, "") };
      inline Data& setPrivateUrl(string privateUrl) { DARABONBA_PTR_SET_VALUE(privateUrl_, privateUrl) };


      // publicUrl Field Functions 
      bool hasPublicUrl() const { return this->publicUrl_ != nullptr;};
      void deletePublicUrl() { this->publicUrl_ = nullptr;};
      inline string getPublicUrl() const { DARABONBA_PTR_GET_DEFAULT(publicUrl_, "") };
      inline Data& setPublicUrl(string publicUrl) { DARABONBA_PTR_SET_VALUE(publicUrl_, publicUrl) };


    protected:
      // The validity period of the URL.
      // 
      // > This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> expirationTime_ {};
      // The private download URL of the backup set.
      shared_ptr<string> privateUrl_ {};
      // The public download URL of the backup set.
      shared_ptr<string> publicUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDownloadBackupSetStorageInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDownloadBackupSetStorageInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDownloadBackupSetStorageInfoResponseBody::Data) };
    inline DescribeDownloadBackupSetStorageInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDownloadBackupSetStorageInfoResponseBody::Data) };
    inline DescribeDownloadBackupSetStorageInfoResponseBody& setData(const DescribeDownloadBackupSetStorageInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDownloadBackupSetStorageInfoResponseBody& setData(DescribeDownloadBackupSetStorageInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDownloadBackupSetStorageInfoResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDownloadBackupSetStorageInfoResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDownloadBackupSetStorageInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDownloadBackupSetStorageInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeDownloadBackupSetStorageInfoResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<DescribeDownloadBackupSetStorageInfoResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errMessage_ {};
    // The error message returned if the request failed.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
