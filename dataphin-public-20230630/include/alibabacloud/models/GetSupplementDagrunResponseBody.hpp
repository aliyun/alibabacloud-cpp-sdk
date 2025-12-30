// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPLEMENTDAGRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPLEMENTDAGRUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSupplementDagrunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupplementDagrunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DagrunList, dagrunList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupplementDagrunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DagrunList, dagrunList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSupplementDagrunResponseBody() = default ;
    GetSupplementDagrunResponseBody(const GetSupplementDagrunResponseBody &) = default ;
    GetSupplementDagrunResponseBody(GetSupplementDagrunResponseBody &&) = default ;
    GetSupplementDagrunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupplementDagrunResponseBody() = default ;
    GetSupplementDagrunResponseBody& operator=(const GetSupplementDagrunResponseBody &) = default ;
    GetSupplementDagrunResponseBody& operator=(GetSupplementDagrunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DagrunList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DagrunList& obj) { 
        DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(EndExecuteTime, endExecuteTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(StartExecuteTime, startExecuteTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupplementId, supplementId_);
      };
      friend void from_json(const Darabonba::Json& j, DagrunList& obj) { 
        DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(EndExecuteTime, endExecuteTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(StartExecuteTime, startExecuteTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupplementId, supplementId_);
      };
      DagrunList() = default ;
      DagrunList(const DagrunList &) = default ;
      DagrunList(DagrunList &&) = default ;
      DagrunList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DagrunList() = default ;
      DagrunList& operator=(const DagrunList &) = default ;
      DagrunList& operator=(DagrunList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->duration_ == nullptr && this->endExecuteTime_ == nullptr && this->id_ == nullptr && this->startExecuteTime_ == nullptr && this->status_ == nullptr
        && this->supplementId_ == nullptr; };
      // bizDate Field Functions 
      bool hasBizDate() const { return this->bizDate_ != nullptr;};
      void deleteBizDate() { this->bizDate_ = nullptr;};
      inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
      inline DagrunList& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline DagrunList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // endExecuteTime Field Functions 
      bool hasEndExecuteTime() const { return this->endExecuteTime_ != nullptr;};
      void deleteEndExecuteTime() { this->endExecuteTime_ = nullptr;};
      inline int64_t getEndExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(endExecuteTime_, 0L) };
      inline DagrunList& setEndExecuteTime(int64_t endExecuteTime) { DARABONBA_PTR_SET_VALUE(endExecuteTime_, endExecuteTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DagrunList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // startExecuteTime Field Functions 
      bool hasStartExecuteTime() const { return this->startExecuteTime_ != nullptr;};
      void deleteStartExecuteTime() { this->startExecuteTime_ = nullptr;};
      inline int64_t getStartExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(startExecuteTime_, 0L) };
      inline DagrunList& setStartExecuteTime(int64_t startExecuteTime) { DARABONBA_PTR_SET_VALUE(startExecuteTime_, startExecuteTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DagrunList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supplementId Field Functions 
      bool hasSupplementId() const { return this->supplementId_ != nullptr;};
      void deleteSupplementId() { this->supplementId_ = nullptr;};
      inline string getSupplementId() const { DARABONBA_PTR_GET_DEFAULT(supplementId_, "") };
      inline DagrunList& setSupplementId(string supplementId) { DARABONBA_PTR_SET_VALUE(supplementId_, supplementId) };


    protected:
      shared_ptr<string> bizDate_ {};
      shared_ptr<string> duration_ {};
      shared_ptr<int64_t> endExecuteTime_ {};
      // Dagrun ID
      shared_ptr<string> id_ {};
      shared_ptr<int64_t> startExecuteTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> supplementId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->dagrunList_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSupplementDagrunResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dagrunList Field Functions 
    bool hasDagrunList() const { return this->dagrunList_ != nullptr;};
    void deleteDagrunList() { this->dagrunList_ = nullptr;};
    inline const vector<GetSupplementDagrunResponseBody::DagrunList> & getDagrunList() const { DARABONBA_PTR_GET_CONST(dagrunList_, vector<GetSupplementDagrunResponseBody::DagrunList>) };
    inline vector<GetSupplementDagrunResponseBody::DagrunList> getDagrunList() { DARABONBA_PTR_GET(dagrunList_, vector<GetSupplementDagrunResponseBody::DagrunList>) };
    inline GetSupplementDagrunResponseBody& setDagrunList(const vector<GetSupplementDagrunResponseBody::DagrunList> & dagrunList) { DARABONBA_PTR_SET_VALUE(dagrunList_, dagrunList) };
    inline GetSupplementDagrunResponseBody& setDagrunList(vector<GetSupplementDagrunResponseBody::DagrunList> && dagrunList) { DARABONBA_PTR_SET_RVALUE(dagrunList_, dagrunList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSupplementDagrunResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSupplementDagrunResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSupplementDagrunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSupplementDagrunResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetSupplementDagrunResponseBody::DagrunList>> dagrunList_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
