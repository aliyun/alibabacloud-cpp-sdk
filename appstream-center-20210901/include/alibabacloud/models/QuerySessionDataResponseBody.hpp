// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSESSIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSESSIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class QuerySessionDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySessionDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IndexData, indexData_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySessionDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IndexData, indexData_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QuerySessionDataResponseBody() = default ;
    QuerySessionDataResponseBody(const QuerySessionDataResponseBody &) = default ;
    QuerySessionDataResponseBody(QuerySessionDataResponseBody &&) = default ;
    QuerySessionDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySessionDataResponseBody() = default ;
    QuerySessionDataResponseBody& operator=(const QuerySessionDataResponseBody &) = default ;
    QuerySessionDataResponseBody& operator=(QuerySessionDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IndexData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IndexData& obj) { 
        DARABONBA_PTR_TO_JSON(Hh, hh_);
        DARABONBA_PTR_TO_JSON(Mi, mi_);
        DARABONBA_PTR_TO_JSON(SessionCntMi, sessionCntMi_);
        DARABONBA_PTR_TO_JSON(StatDate, statDate_);
      };
      friend void from_json(const Darabonba::Json& j, IndexData& obj) { 
        DARABONBA_PTR_FROM_JSON(Hh, hh_);
        DARABONBA_PTR_FROM_JSON(Mi, mi_);
        DARABONBA_PTR_FROM_JSON(SessionCntMi, sessionCntMi_);
        DARABONBA_PTR_FROM_JSON(StatDate, statDate_);
      };
      IndexData() = default ;
      IndexData(const IndexData &) = default ;
      IndexData(IndexData &&) = default ;
      IndexData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IndexData() = default ;
      IndexData& operator=(const IndexData &) = default ;
      IndexData& operator=(IndexData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hh_ == nullptr
        && this->mi_ == nullptr && this->sessionCntMi_ == nullptr && this->statDate_ == nullptr; };
      // hh Field Functions 
      bool hasHh() const { return this->hh_ != nullptr;};
      void deleteHh() { this->hh_ = nullptr;};
      inline string getHh() const { DARABONBA_PTR_GET_DEFAULT(hh_, "") };
      inline IndexData& setHh(string hh) { DARABONBA_PTR_SET_VALUE(hh_, hh) };


      // mi Field Functions 
      bool hasMi() const { return this->mi_ != nullptr;};
      void deleteMi() { this->mi_ = nullptr;};
      inline string getMi() const { DARABONBA_PTR_GET_DEFAULT(mi_, "") };
      inline IndexData& setMi(string mi) { DARABONBA_PTR_SET_VALUE(mi_, mi) };


      // sessionCntMi Field Functions 
      bool hasSessionCntMi() const { return this->sessionCntMi_ != nullptr;};
      void deleteSessionCntMi() { this->sessionCntMi_ = nullptr;};
      inline int64_t getSessionCntMi() const { DARABONBA_PTR_GET_DEFAULT(sessionCntMi_, 0L) };
      inline IndexData& setSessionCntMi(int64_t sessionCntMi) { DARABONBA_PTR_SET_VALUE(sessionCntMi_, sessionCntMi) };


      // statDate Field Functions 
      bool hasStatDate() const { return this->statDate_ != nullptr;};
      void deleteStatDate() { this->statDate_ = nullptr;};
      inline string getStatDate() const { DARABONBA_PTR_GET_DEFAULT(statDate_, "") };
      inline IndexData& setStatDate(string statDate) { DARABONBA_PTR_SET_VALUE(statDate_, statDate) };


    protected:
      // The hour to which the session data belongs, with a value range of 00-23 (full hours).
      shared_ptr<string> hh_ {};
      // The minute to which the session data belongs, aggregated in 10-minute intervals, with a value range of 00-50 (namely 00, 10, 20, 30, 40, and 50).
      shared_ptr<string> mi_ {};
      // The aggregated session count within the hour and minute interval (10-minute granularity).
      shared_ptr<int64_t> sessionCntMi_ {};
      // The statistical date to which the session data belongs, in the yyyyMMdd format, consistent with the request parameter StatDate.
      shared_ptr<string> statDate_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->indexData_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySessionDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // indexData Field Functions 
    bool hasIndexData() const { return this->indexData_ != nullptr;};
    void deleteIndexData() { this->indexData_ = nullptr;};
    inline const vector<QuerySessionDataResponseBody::IndexData> & getIndexData() const { DARABONBA_PTR_GET_CONST(indexData_, vector<QuerySessionDataResponseBody::IndexData>) };
    inline vector<QuerySessionDataResponseBody::IndexData> getIndexData() { DARABONBA_PTR_GET(indexData_, vector<QuerySessionDataResponseBody::IndexData>) };
    inline QuerySessionDataResponseBody& setIndexData(const vector<QuerySessionDataResponseBody::IndexData> & indexData) { DARABONBA_PTR_SET_VALUE(indexData_, indexData) };
    inline QuerySessionDataResponseBody& setIndexData(vector<QuerySessionDataResponseBody::IndexData> && indexData) { DARABONBA_PTR_SET_RVALUE(indexData_, indexData) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySessionDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySessionDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The return code. It is empty when the request is successful and data is found. NO_DATA is returned when the query result is empty. If the request fails, the corresponding error code is returned, such as InvalidParameter.DateFormat when the format of the statistical parameter is invalid.
    shared_ptr<string> code_ {};
    // The list of session trend data, sorted in ascending order by hour and minute. An empty array is returned when there is no session data on the specified date, and the return code is NO_DATA.
    shared_ptr<vector<QuerySessionDataResponseBody::IndexData>> indexData_ {};
    // The return message. It is empty when the request is successful. If the request fails, the corresponding error description is returned.
    shared_ptr<string> message_ {};
    // The ID of the request, used to locate call records and troubleshoot issues. The example shows a partially desensitized value.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
