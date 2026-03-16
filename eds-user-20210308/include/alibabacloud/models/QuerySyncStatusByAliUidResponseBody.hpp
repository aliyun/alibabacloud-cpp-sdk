// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSYNCSTATUSBYALIUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSYNCSTATUSBYALIUIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class QuerySyncStatusByAliUidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySyncStatusByAliUidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySyncStatusByAliUidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySyncStatusByAliUidResponseBody() = default ;
    QuerySyncStatusByAliUidResponseBody(const QuerySyncStatusByAliUidResponseBody &) = default ;
    QuerySyncStatusByAliUidResponseBody(QuerySyncStatusByAliUidResponseBody &&) = default ;
    QuerySyncStatusByAliUidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySyncStatusByAliUidResponseBody() = default ;
    QuerySyncStatusByAliUidResponseBody& operator=(const QuerySyncStatusByAliUidResponseBody &) = default ;
    QuerySyncStatusByAliUidResponseBody& operator=(QuerySyncStatusByAliUidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(CorpId, corpId_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LatestBeginTime, latestBeginTime_);
        DARABONBA_PTR_TO_JSON(LatestEndTime, latestEndTime_);
        DARABONBA_PTR_TO_JSON(LatestSuccessTime, latestSuccessTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LatestBeginTime, latestBeginTime_);
        DARABONBA_PTR_FROM_JSON(LatestEndTime, latestEndTime_);
        DARABONBA_PTR_FROM_JSON(LatestSuccessTime, latestSuccessTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->corpId_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->latestBeginTime_ == nullptr
        && this->latestEndTime_ == nullptr && this->latestSuccessTime_ == nullptr && this->status_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Data& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Data& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // latestBeginTime Field Functions 
      bool hasLatestBeginTime() const { return this->latestBeginTime_ != nullptr;};
      void deleteLatestBeginTime() { this->latestBeginTime_ = nullptr;};
      inline string getLatestBeginTime() const { DARABONBA_PTR_GET_DEFAULT(latestBeginTime_, "") };
      inline Data& setLatestBeginTime(string latestBeginTime) { DARABONBA_PTR_SET_VALUE(latestBeginTime_, latestBeginTime) };


      // latestEndTime Field Functions 
      bool hasLatestEndTime() const { return this->latestEndTime_ != nullptr;};
      void deleteLatestEndTime() { this->latestEndTime_ = nullptr;};
      inline string getLatestEndTime() const { DARABONBA_PTR_GET_DEFAULT(latestEndTime_, "") };
      inline Data& setLatestEndTime(string latestEndTime) { DARABONBA_PTR_SET_VALUE(latestEndTime_, latestEndTime) };


      // latestSuccessTime Field Functions 
      bool hasLatestSuccessTime() const { return this->latestSuccessTime_ != nullptr;};
      void deleteLatestSuccessTime() { this->latestSuccessTime_ = nullptr;};
      inline string getLatestSuccessTime() const { DARABONBA_PTR_GET_DEFAULT(latestSuccessTime_, "") };
      inline Data& setLatestSuccessTime(string latestSuccessTime) { DARABONBA_PTR_SET_VALUE(latestSuccessTime_, latestSuccessTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int64_t> aliUid_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> gmtCreated_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> latestBeginTime_ {};
      shared_ptr<string> latestEndTime_ {};
      shared_ptr<string> latestSuccessTime_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySyncStatusByAliUidResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QuerySyncStatusByAliUidResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QuerySyncStatusByAliUidResponseBody::Data) };
    inline QuerySyncStatusByAliUidResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QuerySyncStatusByAliUidResponseBody::Data) };
    inline QuerySyncStatusByAliUidResponseBody& setData(const QuerySyncStatusByAliUidResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySyncStatusByAliUidResponseBody& setData(QuerySyncStatusByAliUidResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QuerySyncStatusByAliUidResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySyncStatusByAliUidResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySyncStatusByAliUidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySyncStatusByAliUidResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QuerySyncStatusByAliUidResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
