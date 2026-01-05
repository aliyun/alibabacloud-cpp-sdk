// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVESTREAMRECORDINDEXFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVESTREAMRECORDINDEXFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveStreamRecordIndexFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveStreamRecordIndexFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RecordDeleteInfoList, recordDeleteInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveStreamRecordIndexFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RecordDeleteInfoList, recordDeleteInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteLiveStreamRecordIndexFilesResponseBody() = default ;
    DeleteLiveStreamRecordIndexFilesResponseBody(const DeleteLiveStreamRecordIndexFilesResponseBody &) = default ;
    DeleteLiveStreamRecordIndexFilesResponseBody(DeleteLiveStreamRecordIndexFilesResponseBody &&) = default ;
    DeleteLiveStreamRecordIndexFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveStreamRecordIndexFilesResponseBody() = default ;
    DeleteLiveStreamRecordIndexFilesResponseBody& operator=(const DeleteLiveStreamRecordIndexFilesResponseBody &) = default ;
    DeleteLiveStreamRecordIndexFilesResponseBody& operator=(DeleteLiveStreamRecordIndexFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordDeleteInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordDeleteInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(RecordDeleteInfo, recordDeleteInfo_);
      };
      friend void from_json(const Darabonba::Json& j, RecordDeleteInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(RecordDeleteInfo, recordDeleteInfo_);
      };
      RecordDeleteInfoList() = default ;
      RecordDeleteInfoList(const RecordDeleteInfoList &) = default ;
      RecordDeleteInfoList(RecordDeleteInfoList &&) = default ;
      RecordDeleteInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordDeleteInfoList() = default ;
      RecordDeleteInfoList& operator=(const RecordDeleteInfoList &) = default ;
      RecordDeleteInfoList& operator=(RecordDeleteInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecordDeleteInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordDeleteInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        };
        friend void from_json(const Darabonba::Json& j, RecordDeleteInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
        };
        RecordDeleteInfo() = default ;
        RecordDeleteInfo(const RecordDeleteInfo &) = default ;
        RecordDeleteInfo(RecordDeleteInfo &&) = default ;
        RecordDeleteInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordDeleteInfo() = default ;
        RecordDeleteInfo& operator=(const RecordDeleteInfo &) = default ;
        RecordDeleteInfo& operator=(RecordDeleteInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->message_ == nullptr
        && this->recordId_ == nullptr; };
        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline RecordDeleteInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // recordId Field Functions 
        bool hasRecordId() const { return this->recordId_ != nullptr;};
        void deleteRecordId() { this->recordId_ = nullptr;};
        inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
        inline RecordDeleteInfo& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      protected:
        // The processing result of each file indicated by the file ID. Valid values:
        // 
        // *   **OK**: The file has been deleted.
        // *   **AccessDenied**: Access to the file has been denied.
        // *   **FileNotFound**: The file fails to be found.
        shared_ptr<string> message_ {};
        // The ID of the index file that is used to locate the live stream recording files to be deleted.
        shared_ptr<string> recordId_ {};
      };

      virtual bool empty() const override { return this->recordDeleteInfo_ == nullptr; };
      // recordDeleteInfo Field Functions 
      bool hasRecordDeleteInfo() const { return this->recordDeleteInfo_ != nullptr;};
      void deleteRecordDeleteInfo() { this->recordDeleteInfo_ = nullptr;};
      inline const vector<RecordDeleteInfoList::RecordDeleteInfo> & getRecordDeleteInfo() const { DARABONBA_PTR_GET_CONST(recordDeleteInfo_, vector<RecordDeleteInfoList::RecordDeleteInfo>) };
      inline vector<RecordDeleteInfoList::RecordDeleteInfo> getRecordDeleteInfo() { DARABONBA_PTR_GET(recordDeleteInfo_, vector<RecordDeleteInfoList::RecordDeleteInfo>) };
      inline RecordDeleteInfoList& setRecordDeleteInfo(const vector<RecordDeleteInfoList::RecordDeleteInfo> & recordDeleteInfo) { DARABONBA_PTR_SET_VALUE(recordDeleteInfo_, recordDeleteInfo) };
      inline RecordDeleteInfoList& setRecordDeleteInfo(vector<RecordDeleteInfoList::RecordDeleteInfo> && recordDeleteInfo) { DARABONBA_PTR_SET_RVALUE(recordDeleteInfo_, recordDeleteInfo) };


    protected:
      shared_ptr<vector<RecordDeleteInfoList::RecordDeleteInfo>> recordDeleteInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->recordDeleteInfoList_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteLiveStreamRecordIndexFilesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteLiveStreamRecordIndexFilesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // recordDeleteInfoList Field Functions 
    bool hasRecordDeleteInfoList() const { return this->recordDeleteInfoList_ != nullptr;};
    void deleteRecordDeleteInfoList() { this->recordDeleteInfoList_ = nullptr;};
    inline const DeleteLiveStreamRecordIndexFilesResponseBody::RecordDeleteInfoList & getRecordDeleteInfoList() const { DARABONBA_PTR_GET_CONST(recordDeleteInfoList_, DeleteLiveStreamRecordIndexFilesResponseBody::RecordDeleteInfoList) };
    inline DeleteLiveStreamRecordIndexFilesResponseBody::RecordDeleteInfoList getRecordDeleteInfoList() { DARABONBA_PTR_GET(recordDeleteInfoList_, DeleteLiveStreamRecordIndexFilesResponseBody::RecordDeleteInfoList) };
    inline DeleteLiveStreamRecordIndexFilesResponseBody& setRecordDeleteInfoList(const DeleteLiveStreamRecordIndexFilesResponseBody::RecordDeleteInfoList & recordDeleteInfoList) { DARABONBA_PTR_SET_VALUE(recordDeleteInfoList_, recordDeleteInfoList) };
    inline DeleteLiveStreamRecordIndexFilesResponseBody& setRecordDeleteInfoList(DeleteLiveStreamRecordIndexFilesResponseBody::RecordDeleteInfoList && recordDeleteInfoList) { DARABONBA_PTR_SET_RVALUE(recordDeleteInfoList_, recordDeleteInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteLiveStreamRecordIndexFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. A return value of 500 indicates an error. For details, see the Error codes section of this topic.
    shared_ptr<string> code_ {};
    // The status description. A return value of 500 indicates an error. For details, see the Error codes section of this topic.
    shared_ptr<string> message_ {};
    // The deletion information.
    shared_ptr<DeleteLiveStreamRecordIndexFilesResponseBody::RecordDeleteInfoList> recordDeleteInfoList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
