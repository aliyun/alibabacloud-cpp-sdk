// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddFilesFromAuthorizedOssResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFilesFromAuthorizedOssResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddFilesFromAuthorizedOssResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddFilesFromAuthorizedOssResponseBody() = default ;
    AddFilesFromAuthorizedOssResponseBody(const AddFilesFromAuthorizedOssResponseBody &) = default ;
    AddFilesFromAuthorizedOssResponseBody(AddFilesFromAuthorizedOssResponseBody &&) = default ;
    AddFilesFromAuthorizedOssResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFilesFromAuthorizedOssResponseBody() = default ;
    AddFilesFromAuthorizedOssResponseBody& operator=(const AddFilesFromAuthorizedOssResponseBody &) = default ;
    AddFilesFromAuthorizedOssResponseBody& operator=(AddFilesFromAuthorizedOssResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AddFileResultList, addFileResultList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AddFileResultList, addFileResultList_);
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
      class AddFileResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddFileResultList& obj) { 
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(Msg, msg_);
          DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, AddFileResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(Msg, msg_);
          DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        AddFileResultList() = default ;
        AddFileResultList(const AddFileResultList &) = default ;
        AddFileResultList(AddFileResultList &&) = default ;
        AddFileResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddFileResultList() = default ;
        AddFileResultList& operator=(const AddFileResultList &) = default ;
        AddFileResultList& operator=(AddFileResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileId_ == nullptr
        && this->msg_ == nullptr && this->ossKey_ == nullptr && this->status_ == nullptr; };
        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
        inline AddFileResultList& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // msg Field Functions 
        bool hasMsg() const { return this->msg_ != nullptr;};
        void deleteMsg() { this->msg_ = nullptr;};
        inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
        inline AddFileResultList& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


        // ossKey Field Functions 
        bool hasOssKey() const { return this->ossKey_ != nullptr;};
        void deleteOssKey() { this->ossKey_ = nullptr;};
        inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
        inline AddFileResultList& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AddFileResultList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> fileId_ {};
        shared_ptr<string> msg_ {};
        shared_ptr<string> ossKey_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->addFileResultList_ == nullptr; };
      // addFileResultList Field Functions 
      bool hasAddFileResultList() const { return this->addFileResultList_ != nullptr;};
      void deleteAddFileResultList() { this->addFileResultList_ = nullptr;};
      inline const vector<Data::AddFileResultList> & getAddFileResultList() const { DARABONBA_PTR_GET_CONST(addFileResultList_, vector<Data::AddFileResultList>) };
      inline vector<Data::AddFileResultList> getAddFileResultList() { DARABONBA_PTR_GET(addFileResultList_, vector<Data::AddFileResultList>) };
      inline Data& setAddFileResultList(const vector<Data::AddFileResultList> & addFileResultList) { DARABONBA_PTR_SET_VALUE(addFileResultList_, addFileResultList) };
      inline Data& setAddFileResultList(vector<Data::AddFileResultList> && addFileResultList) { DARABONBA_PTR_SET_RVALUE(addFileResultList_, addFileResultList) };


    protected:
      shared_ptr<vector<Data::AddFileResultList>> addFileResultList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddFilesFromAuthorizedOssResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddFilesFromAuthorizedOssResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddFilesFromAuthorizedOssResponseBody::Data) };
    inline AddFilesFromAuthorizedOssResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddFilesFromAuthorizedOssResponseBody::Data) };
    inline AddFilesFromAuthorizedOssResponseBody& setData(const AddFilesFromAuthorizedOssResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddFilesFromAuthorizedOssResponseBody& setData(AddFilesFromAuthorizedOssResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddFilesFromAuthorizedOssResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddFilesFromAuthorizedOssResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AddFilesFromAuthorizedOssResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline AddFilesFromAuthorizedOssResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<AddFilesFromAuthorizedOssResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
