// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMOBILESCARDSUPPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMOBILESCARDSUPPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryMobilesCardSupportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMobilesCardSupportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMobilesCardSupportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryMobilesCardSupportResponseBody() = default ;
    QueryMobilesCardSupportResponseBody(const QueryMobilesCardSupportResponseBody &) = default ;
    QueryMobilesCardSupportResponseBody(QueryMobilesCardSupportResponseBody &&) = default ;
    QueryMobilesCardSupportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMobilesCardSupportResponseBody() = default ;
    QueryMobilesCardSupportResponseBody& operator=(const QueryMobilesCardSupportResponseBody &) = default ;
    QueryMobilesCardSupportResponseBody& operator=(QueryMobilesCardSupportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(QueryResult, queryResult_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(QueryResult, queryResult_);
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
      class QueryResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryResult& obj) { 
          DARABONBA_PTR_TO_JSON(Mobile, mobile_);
          DARABONBA_PTR_TO_JSON(Support, support_);
        };
        friend void from_json(const Darabonba::Json& j, QueryResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
          DARABONBA_PTR_FROM_JSON(Support, support_);
        };
        QueryResult() = default ;
        QueryResult(const QueryResult &) = default ;
        QueryResult(QueryResult &&) = default ;
        QueryResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueryResult() = default ;
        QueryResult& operator=(const QueryResult &) = default ;
        QueryResult& operator=(QueryResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mobile_ == nullptr
        && this->support_ == nullptr; };
        // mobile Field Functions 
        bool hasMobile() const { return this->mobile_ != nullptr;};
        void deleteMobile() { this->mobile_ = nullptr;};
        inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
        inline QueryResult& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


        // support Field Functions 
        bool hasSupport() const { return this->support_ != nullptr;};
        void deleteSupport() { this->support_ = nullptr;};
        inline bool getSupport() const { DARABONBA_PTR_GET_DEFAULT(support_, false) };
        inline QueryResult& setSupport(bool support) { DARABONBA_PTR_SET_VALUE(support_, support) };


      protected:
        // 查询的手机号码。
        shared_ptr<string> mobile_ {};
        // 是否支持卡片短信。取值：
        // 
        // - **true**：支持。
        // - **false**：不支持。
        shared_ptr<bool> support_ {};
      };

      virtual bool empty() const override { return this->queryResult_ == nullptr; };
      // queryResult Field Functions 
      bool hasQueryResult() const { return this->queryResult_ != nullptr;};
      void deleteQueryResult() { this->queryResult_ = nullptr;};
      inline const vector<Data::QueryResult> & getQueryResult() const { DARABONBA_PTR_GET_CONST(queryResult_, vector<Data::QueryResult>) };
      inline vector<Data::QueryResult> getQueryResult() { DARABONBA_PTR_GET(queryResult_, vector<Data::QueryResult>) };
      inline Data& setQueryResult(const vector<Data::QueryResult> & queryResult) { DARABONBA_PTR_SET_VALUE(queryResult_, queryResult) };
      inline Data& setQueryResult(vector<Data::QueryResult> && queryResult) { DARABONBA_PTR_SET_RVALUE(queryResult_, queryResult) };


    protected:
      // 查询值。
      shared_ptr<vector<Data::QueryResult>> queryResult_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryMobilesCardSupportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryMobilesCardSupportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryMobilesCardSupportResponseBody::Data) };
    inline QueryMobilesCardSupportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryMobilesCardSupportResponseBody::Data) };
    inline QueryMobilesCardSupportResponseBody& setData(const QueryMobilesCardSupportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryMobilesCardSupportResponseBody& setData(QueryMobilesCardSupportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMobilesCardSupportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryMobilesCardSupportResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // 请求状态码。
    // 
    // - 返回OK代表请求成功。
    // - 其他错误码，请参见[错误码列表](https://help.aliyun.com/document_detail/101346.html)。
    shared_ptr<string> code_ {};
    // 返回数据。
    shared_ptr<QueryMobilesCardSupportResponseBody::Data> data_ {};
    // 阿里云为该请求生成的唯一标识符。
    shared_ptr<string> requestId_ {};
    // 调用接口是否成功。取值：
    // 
    // - **true**：调用成功。
    // 
    // - **false**：调用失败。
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
