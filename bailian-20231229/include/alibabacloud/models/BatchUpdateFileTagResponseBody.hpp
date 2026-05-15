// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEFILETAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEFILETAGRESPONSEBODY_HPP_
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
  class BatchUpdateFileTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateFileTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateFileTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchUpdateFileTagResponseBody() = default ;
    BatchUpdateFileTagResponseBody(const BatchUpdateFileTagResponseBody &) = default ;
    BatchUpdateFileTagResponseBody(BatchUpdateFileTagResponseBody &&) = default ;
    BatchUpdateFileTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateFileTagResponseBody() = default ;
    BatchUpdateFileTagResponseBody& operator=(const BatchUpdateFileTagResponseBody &) = default ;
    BatchUpdateFileTagResponseBody& operator=(BatchUpdateFileTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(UpdateFileTagResultList, updateFileTagResultList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(UpdateFileTagResultList, updateFileTagResultList_);
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
      class UpdateFileTagResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UpdateFileTagResultList& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, UpdateFileTagResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        UpdateFileTagResultList() = default ;
        UpdateFileTagResultList(const UpdateFileTagResultList &) = default ;
        UpdateFileTagResultList(UpdateFileTagResultList &&) = default ;
        UpdateFileTagResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UpdateFileTagResultList() = default ;
        UpdateFileTagResultList& operator=(const UpdateFileTagResultList &) = default ;
        UpdateFileTagResultList& operator=(UpdateFileTagResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->fileId_ == nullptr && this->success_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline UpdateFileTagResultList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline UpdateFileTagResultList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
        inline UpdateFileTagResultList& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline UpdateFileTagResultList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> errorMessage_ {};
        shared_ptr<string> fileId_ {};
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->updateFileTagResultList_ == nullptr; };
      // updateFileTagResultList Field Functions 
      bool hasUpdateFileTagResultList() const { return this->updateFileTagResultList_ != nullptr;};
      void deleteUpdateFileTagResultList() { this->updateFileTagResultList_ = nullptr;};
      inline const vector<Data::UpdateFileTagResultList> & getUpdateFileTagResultList() const { DARABONBA_PTR_GET_CONST(updateFileTagResultList_, vector<Data::UpdateFileTagResultList>) };
      inline vector<Data::UpdateFileTagResultList> getUpdateFileTagResultList() { DARABONBA_PTR_GET(updateFileTagResultList_, vector<Data::UpdateFileTagResultList>) };
      inline Data& setUpdateFileTagResultList(const vector<Data::UpdateFileTagResultList> & updateFileTagResultList) { DARABONBA_PTR_SET_VALUE(updateFileTagResultList_, updateFileTagResultList) };
      inline Data& setUpdateFileTagResultList(vector<Data::UpdateFileTagResultList> && updateFileTagResultList) { DARABONBA_PTR_SET_RVALUE(updateFileTagResultList_, updateFileTagResultList) };


    protected:
      shared_ptr<vector<Data::UpdateFileTagResultList>> updateFileTagResultList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchUpdateFileTagResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BatchUpdateFileTagResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BatchUpdateFileTagResponseBody::Data) };
    inline BatchUpdateFileTagResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BatchUpdateFileTagResponseBody::Data) };
    inline BatchUpdateFileTagResponseBody& setData(const BatchUpdateFileTagResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchUpdateFileTagResponseBody& setData(BatchUpdateFileTagResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchUpdateFileTagResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchUpdateFileTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BatchUpdateFileTagResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchUpdateFileTagResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<BatchUpdateFileTagResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
