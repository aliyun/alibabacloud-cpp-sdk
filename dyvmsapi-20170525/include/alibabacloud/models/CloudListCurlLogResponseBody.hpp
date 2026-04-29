// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDLISTCURLLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDLISTCURLLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudListCurlLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudListCurlLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudListCurlLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudListCurlLogResponseBody() = default ;
    CloudListCurlLogResponseBody(const CloudListCurlLogResponseBody &) = default ;
    CloudListCurlLogResponseBody(CloudListCurlLogResponseBody &&) = default ;
    CloudListCurlLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudListCurlLogResponseBody() = default ;
    CloudListCurlLogResponseBody& operator=(const CloudListCurlLogResponseBody &) = default ;
    CloudListCurlLogResponseBody& operator=(CloudListCurlLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(ContentType, contentType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CurrentMonth, currentMonth_);
          DARABONBA_PTR_TO_JSON(Delay, delay_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(Headers, headers_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(Params, params_);
          DARABONBA_PTR_TO_JSON(Position, position_);
          DARABONBA_PTR_TO_JSON(RequestTime, requestTime_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(ResultText, resultText_);
          DARABONBA_PTR_TO_JSON(Retry, retry_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(TypeStr, typeStr_);
          DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CurrentMonth, currentMonth_);
          DARABONBA_PTR_FROM_JSON(Delay, delay_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(Headers, headers_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(Params, params_);
          DARABONBA_PTR_FROM_JSON(Position, position_);
          DARABONBA_PTR_FROM_JSON(RequestTime, requestTime_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(ResultText, resultText_);
          DARABONBA_PTR_FROM_JSON(Retry, retry_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(TypeStr, typeStr_);
          DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contentType_ == nullptr
        && this->createTime_ == nullptr && this->currentMonth_ == nullptr && this->delay_ == nullptr && this->endTime_ == nullptr && this->enterpriseId_ == nullptr
        && this->headers_ == nullptr && this->id_ == nullptr && this->level_ == nullptr && this->method_ == nullptr && this->params_ == nullptr
        && this->position_ == nullptr && this->requestTime_ == nullptr && this->result_ == nullptr && this->resultText_ == nullptr && this->retry_ == nullptr
        && this->startTime_ == nullptr && this->statusCode_ == nullptr && this->timeout_ == nullptr && this->type_ == nullptr && this->typeStr_ == nullptr
        && this->uniqueId_ == nullptr && this->url_ == nullptr; };
        // contentType Field Functions 
        bool hasContentType() const { return this->contentType_ != nullptr;};
        void deleteContentType() { this->contentType_ = nullptr;};
        inline int64_t getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, 0L) };
        inline List& setContentType(int64_t contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // currentMonth Field Functions 
        bool hasCurrentMonth() const { return this->currentMonth_ != nullptr;};
        void deleteCurrentMonth() { this->currentMonth_ = nullptr;};
        inline string getCurrentMonth() const { DARABONBA_PTR_GET_DEFAULT(currentMonth_, "") };
        inline List& setCurrentMonth(string currentMonth) { DARABONBA_PTR_SET_VALUE(currentMonth_, currentMonth) };


        // delay Field Functions 
        bool hasDelay() const { return this->delay_ != nullptr;};
        void deleteDelay() { this->delay_ = nullptr;};
        inline int64_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
        inline List& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline List& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
        inline List& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // headers Field Functions 
        bool hasHeaders() const { return this->headers_ != nullptr;};
        void deleteHeaders() { this->headers_ = nullptr;};
        inline string getHeaders() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
        inline List& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline List& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
        inline List& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline List& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // params Field Functions 
        bool hasParams() const { return this->params_ != nullptr;};
        void deleteParams() { this->params_ = nullptr;};
        inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
        inline List& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


        // position Field Functions 
        bool hasPosition() const { return this->position_ != nullptr;};
        void deletePosition() { this->position_ = nullptr;};
        inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
        inline List& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


        // requestTime Field Functions 
        bool hasRequestTime() const { return this->requestTime_ != nullptr;};
        void deleteRequestTime() { this->requestTime_ = nullptr;};
        inline string getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
        inline List& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline List& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // resultText Field Functions 
        bool hasResultText() const { return this->resultText_ != nullptr;};
        void deleteResultText() { this->resultText_ = nullptr;};
        inline string getResultText() const { DARABONBA_PTR_GET_DEFAULT(resultText_, "") };
        inline List& setResultText(string resultText) { DARABONBA_PTR_SET_VALUE(resultText_, resultText) };


        // retry Field Functions 
        bool hasRetry() const { return this->retry_ != nullptr;};
        void deleteRetry() { this->retry_ = nullptr;};
        inline int64_t getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, 0L) };
        inline List& setRetry(int64_t retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline List& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
        inline List& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline string getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
        inline List& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
        inline List& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // typeStr Field Functions 
        bool hasTypeStr() const { return this->typeStr_ != nullptr;};
        void deleteTypeStr() { this->typeStr_ = nullptr;};
        inline string getTypeStr() const { DARABONBA_PTR_GET_DEFAULT(typeStr_, "") };
        inline List& setTypeStr(string typeStr) { DARABONBA_PTR_SET_VALUE(typeStr_, typeStr) };


        // uniqueId Field Functions 
        bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
        void deleteUniqueId() { this->uniqueId_ = nullptr;};
        inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
        inline List& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline List& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // 文本类型
        shared_ptr<int64_t> contentType_ {};
        // 创建时间
        shared_ptr<string> createTime_ {};
        // 当月
        shared_ptr<string> currentMonth_ {};
        // 延迟推送时间
        shared_ptr<int64_t> delay_ {};
        // 推送结束时间
        shared_ptr<string> endTime_ {};
        // 企业id
        shared_ptr<string> enterpriseId_ {};
        // 请求头
        shared_ptr<string> headers_ {};
        // 日志id
        shared_ptr<string> id_ {};
        // 推送登记
        shared_ptr<int64_t> level_ {};
        // 推送方法
        shared_ptr<string> method_ {};
        // 推送参数
        shared_ptr<string> params_ {};
        // 推送位置
        shared_ptr<string> position_ {};
        // 推送时间
        shared_ptr<string> requestTime_ {};
        // 推送状态
        shared_ptr<string> result_ {};
        // 返回文本
        shared_ptr<string> resultText_ {};
        // 重试次数
        shared_ptr<int64_t> retry_ {};
        // 推送开始时间
        shared_ptr<string> startTime_ {};
        // 状态码
        shared_ptr<string> statusCode_ {};
        // 超时时间
        shared_ptr<string> timeout_ {};
        // 推送类型
        shared_ptr<int64_t> type_ {};
        // 推送类型字符串
        shared_ptr<string> typeStr_ {};
        // 唯一标示
        shared_ptr<string> uniqueId_ {};
        // 推送url
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    protected:
      // 返回数据JSON格式
      shared_ptr<vector<Data::List>> list_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudListCurlLogResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudListCurlLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudListCurlLogResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudListCurlLogResponseBody::Data) };
    inline CloudListCurlLogResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudListCurlLogResponseBody::Data) };
    inline CloudListCurlLogResponseBody& setData(const CloudListCurlLogResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudListCurlLogResponseBody& setData(CloudListCurlLogResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudListCurlLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudListCurlLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudListCurlLogResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
