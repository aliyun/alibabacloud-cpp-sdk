// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVERECORDFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVERECORDFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteLiveRecordFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveRecordFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteFileInfoList, deleteFileInfoList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveRecordFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteFileInfoList, deleteFileInfoList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteLiveRecordFilesResponseBody() = default ;
    DeleteLiveRecordFilesResponseBody(const DeleteLiveRecordFilesResponseBody &) = default ;
    DeleteLiveRecordFilesResponseBody(DeleteLiveRecordFilesResponseBody &&) = default ;
    DeleteLiveRecordFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveRecordFilesResponseBody() = default ;
    DeleteLiveRecordFilesResponseBody& operator=(const DeleteLiveRecordFilesResponseBody &) = default ;
    DeleteLiveRecordFilesResponseBody& operator=(DeleteLiveRecordFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteFileInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteFileInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteFileInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      };
      DeleteFileInfoList() = default ;
      DeleteFileInfoList(const DeleteFileInfoList &) = default ;
      DeleteFileInfoList(DeleteFileInfoList &&) = default ;
      DeleteFileInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteFileInfoList() = default ;
      DeleteFileInfoList& operator=(const DeleteFileInfoList &) = default ;
      DeleteFileInfoList& operator=(DeleteFileInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->recordId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline DeleteFileInfoList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline DeleteFileInfoList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
      inline DeleteFileInfoList& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    protected:
      // The code that identifies the result of the deletion.
      shared_ptr<string> code_ {};
      // The result of deletion.
      shared_ptr<string> message_ {};
      // The ID of the deleted recording file.
      shared_ptr<string> recordId_ {};
    };

    virtual bool empty() const override { return this->deleteFileInfoList_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
    // deleteFileInfoList Field Functions 
    bool hasDeleteFileInfoList() const { return this->deleteFileInfoList_ != nullptr;};
    void deleteDeleteFileInfoList() { this->deleteFileInfoList_ = nullptr;};
    inline const vector<DeleteLiveRecordFilesResponseBody::DeleteFileInfoList> & getDeleteFileInfoList() const { DARABONBA_PTR_GET_CONST(deleteFileInfoList_, vector<DeleteLiveRecordFilesResponseBody::DeleteFileInfoList>) };
    inline vector<DeleteLiveRecordFilesResponseBody::DeleteFileInfoList> getDeleteFileInfoList() { DARABONBA_PTR_GET(deleteFileInfoList_, vector<DeleteLiveRecordFilesResponseBody::DeleteFileInfoList>) };
    inline DeleteLiveRecordFilesResponseBody& setDeleteFileInfoList(const vector<DeleteLiveRecordFilesResponseBody::DeleteFileInfoList> & deleteFileInfoList) { DARABONBA_PTR_SET_VALUE(deleteFileInfoList_, deleteFileInfoList) };
    inline DeleteLiveRecordFilesResponseBody& setDeleteFileInfoList(vector<DeleteLiveRecordFilesResponseBody::DeleteFileInfoList> && deleteFileInfoList) { DARABONBA_PTR_SET_RVALUE(deleteFileInfoList_, deleteFileInfoList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteLiveRecordFilesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteLiveRecordFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of files deleted.
    shared_ptr<vector<DeleteLiveRecordFilesResponseBody::DeleteFileInfoList>> deleteFileInfoList_ {};
    // The description of the state returned.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
