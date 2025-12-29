// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELATIONPRODUCTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRELATIONPRODUCTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetRelationProductListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRelationProductListResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Extentions, extentions_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetRelationProductListResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Extentions, extentions_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    GetRelationProductListResponseBody() = default ;
    GetRelationProductListResponseBody(const GetRelationProductListResponseBody &) = default ;
    GetRelationProductListResponseBody(GetRelationProductListResponseBody &&) = default ;
    GetRelationProductListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRelationProductListResponseBody() = default ;
    GetRelationProductListResponseBody& operator=(const GetRelationProductListResponseBody &) = default ;
    GetRelationProductListResponseBody& operator=(GetRelationProductListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Pk, pk_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->pk_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pk Field Functions 
      bool hasPk() const { return this->pk_ != nullptr;};
      void deletePk() { this->pk_ = nullptr;};
      inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
      inline Result& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> pk_ {};
    };

    virtual bool empty() const override { return this->extentions_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // extentions Field Functions 
    bool hasExtentions() const { return this->extentions_ != nullptr;};
    void deleteExtentions() { this->extentions_ = nullptr;};
    inline     const Darabonba::Json & getExtentions() const { DARABONBA_GET(extentions_) };
    Darabonba::Json & getExtentions() { DARABONBA_GET(extentions_) };
    inline GetRelationProductListResponseBody& setExtentions(const Darabonba::Json & extentions) { DARABONBA_SET_VALUE(extentions_, extentions) };
    inline GetRelationProductListResponseBody& setExtentions(Darabonba::Json && extentions) { DARABONBA_SET_RVALUE(extentions_, extentions) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRelationProductListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRelationProductListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetRelationProductListResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetRelationProductListResponseBody::Result>) };
    inline vector<GetRelationProductListResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetRelationProductListResponseBody::Result>) };
    inline GetRelationProductListResponseBody& setResult(const vector<GetRelationProductListResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetRelationProductListResponseBody& setResult(vector<GetRelationProductListResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetRelationProductListResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    Darabonba::Json extentions_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetRelationProductListResponseBody::Result>> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
