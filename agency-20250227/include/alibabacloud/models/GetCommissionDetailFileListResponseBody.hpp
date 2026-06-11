// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMISSIONDETAILFILELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMISSIONDETAILFILELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class GetCommissionDetailFileListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommissionDetailFileListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommissionDetailFileListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCommissionDetailFileListResponseBody() = default ;
    GetCommissionDetailFileListResponseBody(const GetCommissionDetailFileListResponseBody &) = default ;
    GetCommissionDetailFileListResponseBody(GetCommissionDetailFileListResponseBody &&) = default ;
    GetCommissionDetailFileListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommissionDetailFileListResponseBody() = default ;
    GetCommissionDetailFileListResponseBody& operator=(const GetCommissionDetailFileListResponseBody &) = default ;
    GetCommissionDetailFileListResponseBody& operator=(GetCommissionDetailFileListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BillMonth, billMonth_);
        DARABONBA_PTR_TO_JSON(FileList, fileList_);
        DARABONBA_PTR_TO_JSON(PartnerUid, partnerUid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BillMonth, billMonth_);
        DARABONBA_PTR_FROM_JSON(FileList, fileList_);
        DARABONBA_PTR_FROM_JSON(PartnerUid, partnerUid_);
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
      class FileList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileList& obj) { 
          DARABONBA_PTR_TO_JSON(BucketSyncStatus, bucketSyncStatus_);
          DARABONBA_PTR_TO_JSON(CommissionPolicyName, commissionPolicyName_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FileType, fileType_);
          DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        };
        friend void from_json(const Darabonba::Json& j, FileList& obj) { 
          DARABONBA_PTR_FROM_JSON(BucketSyncStatus, bucketSyncStatus_);
          DARABONBA_PTR_FROM_JSON(CommissionPolicyName, commissionPolicyName_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FileType, fileType_);
          DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        };
        FileList() = default ;
        FileList(const FileList &) = default ;
        FileList(FileList &&) = default ;
        FileList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileList() = default ;
        FileList& operator=(const FileList &) = default ;
        FileList& operator=(FileList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucketSyncStatus_ == nullptr
        && this->commissionPolicyName_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->fileUrl_ == nullptr; };
        // bucketSyncStatus Field Functions 
        bool hasBucketSyncStatus() const { return this->bucketSyncStatus_ != nullptr;};
        void deleteBucketSyncStatus() { this->bucketSyncStatus_ = nullptr;};
        inline string getBucketSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(bucketSyncStatus_, "") };
        inline FileList& setBucketSyncStatus(string bucketSyncStatus) { DARABONBA_PTR_SET_VALUE(bucketSyncStatus_, bucketSyncStatus) };


        // commissionPolicyName Field Functions 
        bool hasCommissionPolicyName() const { return this->commissionPolicyName_ != nullptr;};
        void deleteCommissionPolicyName() { this->commissionPolicyName_ = nullptr;};
        inline string getCommissionPolicyName() const { DARABONBA_PTR_GET_DEFAULT(commissionPolicyName_, "") };
        inline FileList& setCommissionPolicyName(string commissionPolicyName) { DARABONBA_PTR_SET_VALUE(commissionPolicyName_, commissionPolicyName) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline FileList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline FileList& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // fileUrl Field Functions 
        bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
        void deleteFileUrl() { this->fileUrl_ = nullptr;};
        inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
        inline FileList& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      protected:
        // OSS file push status: Processing, Succeeded, or failed
        shared_ptr<string> bucketSyncStatus_ {};
        // Policy name
        shared_ptr<string> commissionPolicyName_ {};
        // File name
        shared_ptr<string> fileName_ {};
        // File type
        shared_ptr<string> fileType_ {};
        // File URL
        shared_ptr<string> fileUrl_ {};
      };

      virtual bool empty() const override { return this->billMonth_ == nullptr
        && this->fileList_ == nullptr && this->partnerUid_ == nullptr; };
      // billMonth Field Functions 
      bool hasBillMonth() const { return this->billMonth_ != nullptr;};
      void deleteBillMonth() { this->billMonth_ = nullptr;};
      inline string getBillMonth() const { DARABONBA_PTR_GET_DEFAULT(billMonth_, "") };
      inline Data& setBillMonth(string billMonth) { DARABONBA_PTR_SET_VALUE(billMonth_, billMonth) };


      // fileList Field Functions 
      bool hasFileList() const { return this->fileList_ != nullptr;};
      void deleteFileList() { this->fileList_ = nullptr;};
      inline const vector<Data::FileList> & getFileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<Data::FileList>) };
      inline vector<Data::FileList> getFileList() { DARABONBA_PTR_GET(fileList_, vector<Data::FileList>) };
      inline Data& setFileList(const vector<Data::FileList> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
      inline Data& setFileList(vector<Data::FileList> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


      // partnerUid Field Functions 
      bool hasPartnerUid() const { return this->partnerUid_ != nullptr;};
      void deletePartnerUid() { this->partnerUid_ = nullptr;};
      inline string getPartnerUid() const { DARABONBA_PTR_GET_DEFAULT(partnerUid_, "") };
      inline Data& setPartnerUid(string partnerUid) { DARABONBA_PTR_SET_VALUE(partnerUid_, partnerUid) };


    protected:
      // Bill month
      shared_ptr<string> billMonth_ {};
      // File list
      shared_ptr<vector<Data::FileList>> fileList_ {};
      // Partner UID
      shared_ptr<string> partnerUid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCommissionDetailFileListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCommissionDetailFileListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCommissionDetailFileListResponseBody::Data) };
    inline GetCommissionDetailFileListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCommissionDetailFileListResponseBody::Data) };
    inline GetCommissionDetailFileListResponseBody& setData(const GetCommissionDetailFileListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCommissionDetailFileListResponseBody& setData(GetCommissionDetailFileListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCommissionDetailFileListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCommissionDetailFileListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCommissionDetailFileListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // code
    shared_ptr<string> code_ {};
    // Returned data
    shared_ptr<GetCommissionDetailFileListResponseBody::Data> data_ {};
    // Message
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the invocation succeeded.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
