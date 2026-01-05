// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMOBILESCARDSUPPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKMOBILESCARDSUPPORTRESPONSEBODY_HPP_
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
  class CheckMobilesCardSupportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckMobilesCardSupportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckMobilesCardSupportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CheckMobilesCardSupportResponseBody() = default ;
    CheckMobilesCardSupportResponseBody(const CheckMobilesCardSupportResponseBody &) = default ;
    CheckMobilesCardSupportResponseBody(CheckMobilesCardSupportResponseBody &&) = default ;
    CheckMobilesCardSupportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckMobilesCardSupportResponseBody() = default ;
    CheckMobilesCardSupportResponseBody& operator=(const CheckMobilesCardSupportResponseBody &) = default ;
    CheckMobilesCardSupportResponseBody& operator=(CheckMobilesCardSupportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(queryResult, queryResult_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(queryResult, queryResult_);
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
          DARABONBA_PTR_TO_JSON(mobile, mobile_);
          DARABONBA_PTR_TO_JSON(support, support_);
        };
        friend void from_json(const Darabonba::Json& j, QueryResult& obj) { 
          DARABONBA_PTR_FROM_JSON(mobile, mobile_);
          DARABONBA_PTR_FROM_JSON(support, support_);
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
        // The mobile phone number.
        shared_ptr<string> mobile_ {};
        // Indicates whether the mobile phone number supports card messages.
        // 
        // *   **true**
        // *   **false**
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
      // The list of returned results.
      shared_ptr<vector<Data::QueryResult>> queryResult_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CheckMobilesCardSupportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CheckMobilesCardSupportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CheckMobilesCardSupportResponseBody::Data) };
    inline CheckMobilesCardSupportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CheckMobilesCardSupportResponseBody::Data) };
    inline CheckMobilesCardSupportResponseBody& setData(const CheckMobilesCardSupportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CheckMobilesCardSupportResponseBody& setData(CheckMobilesCardSupportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckMobilesCardSupportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckMobilesCardSupportResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other values indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<CheckMobilesCardSupportResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
