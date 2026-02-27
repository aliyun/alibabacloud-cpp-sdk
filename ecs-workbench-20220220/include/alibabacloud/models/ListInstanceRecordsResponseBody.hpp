// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class ListInstanceRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Root, root_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Root, root_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListInstanceRecordsResponseBody() = default ;
    ListInstanceRecordsResponseBody(const ListInstanceRecordsResponseBody &) = default ;
    ListInstanceRecordsResponseBody(ListInstanceRecordsResponseBody &&) = default ;
    ListInstanceRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRecordsResponseBody() = default ;
    ListInstanceRecordsResponseBody& operator=(const ListInstanceRecordsResponseBody &) = default ;
    ListInstanceRecordsResponseBody& operator=(ListInstanceRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Root : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Root& obj) { 
        DARABONBA_PTR_TO_JSON(RecordList, recordList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Root& obj) { 
        DARABONBA_PTR_FROM_JSON(RecordList, recordList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Root() = default ;
      Root(const Root &) = default ;
      Root(Root &&) = default ;
      Root(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Root() = default ;
      Root& operator=(const Root &) = default ;
      Root& operator=(Root &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecordList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceRecordUrl, instanceRecordUrl_);
          DARABONBA_PTR_TO_JSON(RecordDurationMillis, recordDurationMillis_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TerminalSessionToken, terminalSessionToken_);
        };
        friend void from_json(const Darabonba::Json& j, RecordList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceRecordUrl, instanceRecordUrl_);
          DARABONBA_PTR_FROM_JSON(RecordDurationMillis, recordDurationMillis_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TerminalSessionToken, terminalSessionToken_);
        };
        RecordList() = default ;
        RecordList(const RecordList &) = default ;
        RecordList(RecordList &&) = default ;
        RecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordList() = default ;
        RecordList& operator=(const RecordList &) = default ;
        RecordList& operator=(RecordList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->expireTime_ == nullptr && this->gmtCreate_ == nullptr && this->instanceId_ == nullptr && this->instanceRecordUrl_ == nullptr && this->recordDurationMillis_ == nullptr
        && this->status_ == nullptr && this->terminalSessionToken_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
        inline RecordList& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline RecordList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline RecordList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline RecordList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceRecordUrl Field Functions 
        bool hasInstanceRecordUrl() const { return this->instanceRecordUrl_ != nullptr;};
        void deleteInstanceRecordUrl() { this->instanceRecordUrl_ = nullptr;};
        inline string getInstanceRecordUrl() const { DARABONBA_PTR_GET_DEFAULT(instanceRecordUrl_, "") };
        inline RecordList& setInstanceRecordUrl(string instanceRecordUrl) { DARABONBA_PTR_SET_VALUE(instanceRecordUrl_, instanceRecordUrl) };


        // recordDurationMillis Field Functions 
        bool hasRecordDurationMillis() const { return this->recordDurationMillis_ != nullptr;};
        void deleteRecordDurationMillis() { this->recordDurationMillis_ = nullptr;};
        inline int64_t getRecordDurationMillis() const { DARABONBA_PTR_GET_DEFAULT(recordDurationMillis_, 0L) };
        inline RecordList& setRecordDurationMillis(int64_t recordDurationMillis) { DARABONBA_PTR_SET_VALUE(recordDurationMillis_, recordDurationMillis) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RecordList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // terminalSessionToken Field Functions 
        bool hasTerminalSessionToken() const { return this->terminalSessionToken_ != nullptr;};
        void deleteTerminalSessionToken() { this->terminalSessionToken_ = nullptr;};
        inline string getTerminalSessionToken() const { DARABONBA_PTR_GET_DEFAULT(terminalSessionToken_, "") };
        inline RecordList& setTerminalSessionToken(string terminalSessionToken) { DARABONBA_PTR_SET_VALUE(terminalSessionToken_, terminalSessionToken) };


      protected:
        shared_ptr<int64_t> accountId_ {};
        shared_ptr<string> expireTime_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceRecordUrl_ {};
        shared_ptr<int64_t> recordDurationMillis_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> terminalSessionToken_ {};
      };

      virtual bool empty() const override { return this->recordList_ == nullptr
        && this->totalCount_ == nullptr; };
      // recordList Field Functions 
      bool hasRecordList() const { return this->recordList_ != nullptr;};
      void deleteRecordList() { this->recordList_ = nullptr;};
      inline const vector<Root::RecordList> & getRecordList() const { DARABONBA_PTR_GET_CONST(recordList_, vector<Root::RecordList>) };
      inline vector<Root::RecordList> getRecordList() { DARABONBA_PTR_GET(recordList_, vector<Root::RecordList>) };
      inline Root& setRecordList(const vector<Root::RecordList> & recordList) { DARABONBA_PTR_SET_VALUE(recordList_, recordList) };
      inline Root& setRecordList(vector<Root::RecordList> && recordList) { DARABONBA_PTR_SET_RVALUE(recordList_, recordList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Root& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Root::RecordList>> recordList_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->root_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInstanceRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInstanceRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // root Field Functions 
    bool hasRoot() const { return this->root_ != nullptr;};
    void deleteRoot() { this->root_ = nullptr;};
    inline const ListInstanceRecordsResponseBody::Root & getRoot() const { DARABONBA_PTR_GET_CONST(root_, ListInstanceRecordsResponseBody::Root) };
    inline ListInstanceRecordsResponseBody::Root getRoot() { DARABONBA_PTR_GET(root_, ListInstanceRecordsResponseBody::Root) };
    inline ListInstanceRecordsResponseBody& setRoot(const ListInstanceRecordsResponseBody::Root & root) { DARABONBA_PTR_SET_VALUE(root_, root) };
    inline ListInstanceRecordsResponseBody& setRoot(ListInstanceRecordsResponseBody::Root && root) { DARABONBA_PTR_SET_RVALUE(root_, root) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInstanceRecordsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<ListInstanceRecordsResponseBody::Root> root_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
