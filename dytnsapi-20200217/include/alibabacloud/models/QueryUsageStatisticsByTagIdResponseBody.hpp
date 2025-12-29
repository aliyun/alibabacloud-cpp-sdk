// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSAGESTATISTICSBYTAGIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSAGESTATISTICSBYTAGIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class QueryUsageStatisticsByTagIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUsageStatisticsByTagIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUsageStatisticsByTagIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryUsageStatisticsByTagIdResponseBody() = default ;
    QueryUsageStatisticsByTagIdResponseBody(const QueryUsageStatisticsByTagIdResponseBody &) = default ;
    QueryUsageStatisticsByTagIdResponseBody(QueryUsageStatisticsByTagIdResponseBody &&) = default ;
    QueryUsageStatisticsByTagIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUsageStatisticsByTagIdResponseBody() = default ;
    QueryUsageStatisticsByTagIdResponseBody& operator=(const QueryUsageStatisticsByTagIdResponseBody &) = default ;
    QueryUsageStatisticsByTagIdResponseBody& operator=(QueryUsageStatisticsByTagIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationCode, authorizationCode_);
        DARABONBA_PTR_TO_JSON(FailTotal, failTotal_);
        DARABONBA_PTR_TO_JSON(GmtDateStr, gmtDateStr_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IndustryName, industryName_);
        DARABONBA_PTR_TO_JSON(PartnerId, partnerId_);
        DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
        DARABONBA_PTR_TO_JSON(SuccessTotal, successTotal_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
        DARABONBA_PTR_TO_JSON(TagName, tagName_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationCode, authorizationCode_);
        DARABONBA_PTR_FROM_JSON(FailTotal, failTotal_);
        DARABONBA_PTR_FROM_JSON(GmtDateStr, gmtDateStr_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IndustryName, industryName_);
        DARABONBA_PTR_FROM_JSON(PartnerId, partnerId_);
        DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
        DARABONBA_PTR_FROM_JSON(SuccessTotal, successTotal_);
        DARABONBA_PTR_FROM_JSON(TagId, tagId_);
        DARABONBA_PTR_FROM_JSON(TagName, tagName_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      virtual bool empty() const override { return this->authorizationCode_ == nullptr
        && this->failTotal_ == nullptr && this->gmtDateStr_ == nullptr && this->id_ == nullptr && this->industryName_ == nullptr && this->partnerId_ == nullptr
        && this->sceneName_ == nullptr && this->successTotal_ == nullptr && this->tagId_ == nullptr && this->tagName_ == nullptr && this->total_ == nullptr; };
      // authorizationCode Field Functions 
      bool hasAuthorizationCode() const { return this->authorizationCode_ != nullptr;};
      void deleteAuthorizationCode() { this->authorizationCode_ = nullptr;};
      inline string getAuthorizationCode() const { DARABONBA_PTR_GET_DEFAULT(authorizationCode_, "") };
      inline Data& setAuthorizationCode(string authorizationCode) { DARABONBA_PTR_SET_VALUE(authorizationCode_, authorizationCode) };


      // failTotal Field Functions 
      bool hasFailTotal() const { return this->failTotal_ != nullptr;};
      void deleteFailTotal() { this->failTotal_ = nullptr;};
      inline int64_t getFailTotal() const { DARABONBA_PTR_GET_DEFAULT(failTotal_, 0L) };
      inline Data& setFailTotal(int64_t failTotal) { DARABONBA_PTR_SET_VALUE(failTotal_, failTotal) };


      // gmtDateStr Field Functions 
      bool hasGmtDateStr() const { return this->gmtDateStr_ != nullptr;};
      void deleteGmtDateStr() { this->gmtDateStr_ = nullptr;};
      inline string getGmtDateStr() const { DARABONBA_PTR_GET_DEFAULT(gmtDateStr_, "") };
      inline Data& setGmtDateStr(string gmtDateStr) { DARABONBA_PTR_SET_VALUE(gmtDateStr_, gmtDateStr) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // industryName Field Functions 
      bool hasIndustryName() const { return this->industryName_ != nullptr;};
      void deleteIndustryName() { this->industryName_ = nullptr;};
      inline string getIndustryName() const { DARABONBA_PTR_GET_DEFAULT(industryName_, "") };
      inline Data& setIndustryName(string industryName) { DARABONBA_PTR_SET_VALUE(industryName_, industryName) };


      // partnerId Field Functions 
      bool hasPartnerId() const { return this->partnerId_ != nullptr;};
      void deletePartnerId() { this->partnerId_ = nullptr;};
      inline int64_t getPartnerId() const { DARABONBA_PTR_GET_DEFAULT(partnerId_, 0L) };
      inline Data& setPartnerId(int64_t partnerId) { DARABONBA_PTR_SET_VALUE(partnerId_, partnerId) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline Data& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // successTotal Field Functions 
      bool hasSuccessTotal() const { return this->successTotal_ != nullptr;};
      void deleteSuccessTotal() { this->successTotal_ = nullptr;};
      inline int64_t getSuccessTotal() const { DARABONBA_PTR_GET_DEFAULT(successTotal_, 0L) };
      inline Data& setSuccessTotal(int64_t successTotal) { DARABONBA_PTR_SET_VALUE(successTotal_, successTotal) };


      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline int64_t getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, 0L) };
      inline Data& setTagId(int64_t tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline Data& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The authorization code.
      shared_ptr<string> authorizationCode_ {};
      // The numbers for which the query failed.
      shared_ptr<int64_t> failTotal_ {};
      // The creation time.
      shared_ptr<string> gmtDateStr_ {};
      // The ID of the authorization code usage record.
      shared_ptr<int64_t> id_ {};
      // The industry name.
      shared_ptr<string> industryName_ {};
      // The customer product ID (PID).
      shared_ptr<int64_t> partnerId_ {};
      // The scene name.
      shared_ptr<string> sceneName_ {};
      // The numbers for which the query succeeded.
      shared_ptr<int64_t> successTotal_ {};
      // The tag name.
      shared_ptr<int64_t> tagId_ {};
      // The tag name.
      shared_ptr<string> tagName_ {};
      // The total quantity of numbers that are involved in the query.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryUsageStatisticsByTagIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryUsageStatisticsByTagIdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryUsageStatisticsByTagIdResponseBody::Data>) };
    inline vector<QueryUsageStatisticsByTagIdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryUsageStatisticsByTagIdResponseBody::Data>) };
    inline QueryUsageStatisticsByTagIdResponseBody& setData(const vector<QueryUsageStatisticsByTagIdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryUsageStatisticsByTagIdResponseBody& setData(vector<QueryUsageStatisticsByTagIdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryUsageStatisticsByTagIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUsageStatisticsByTagIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryUsageStatisticsByTagIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. **OK** indicates that the request is successful.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<vector<QueryUsageStatisticsByTagIdResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful.
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
