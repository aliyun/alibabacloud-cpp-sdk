// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERBYMOBILEACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERBYMOBILEACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserByMobileAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserByMobileAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserByMobileAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryUserByMobileAccountResponseBody() = default ;
    QueryUserByMobileAccountResponseBody(const QueryUserByMobileAccountResponseBody &) = default ;
    QueryUserByMobileAccountResponseBody(QueryUserByMobileAccountResponseBody &&) = default ;
    QueryUserByMobileAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserByMobileAccountResponseBody() = default ;
    QueryUserByMobileAccountResponseBody& operator=(const QueryUserByMobileAccountResponseBody &) = default ;
    QueryUserByMobileAccountResponseBody& operator=(QueryUserByMobileAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(BoundUserId, boundUserId_);
        DARABONBA_PTR_TO_JSON(ThirdAccountName, thirdAccountName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(BoundUserId, boundUserId_);
        DARABONBA_PTR_FROM_JSON(ThirdAccountName, thirdAccountName_);
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
      virtual bool empty() const override { return this->boundUserId_ == nullptr
        && this->thirdAccountName_ == nullptr; };
      // boundUserId Field Functions 
      bool hasBoundUserId() const { return this->boundUserId_ != nullptr;};
      void deleteBoundUserId() { this->boundUserId_ = nullptr;};
      inline string getBoundUserId() const { DARABONBA_PTR_GET_DEFAULT(boundUserId_, "") };
      inline Result& setBoundUserId(string boundUserId) { DARABONBA_PTR_SET_VALUE(boundUserId_, boundUserId) };


      // thirdAccountName Field Functions 
      bool hasThirdAccountName() const { return this->thirdAccountName_ != nullptr;};
      void deleteThirdAccountName() { this->thirdAccountName_ = nullptr;};
      inline string getThirdAccountName() const { DARABONBA_PTR_GET_DEFAULT(thirdAccountName_, "") };
      inline Result& setThirdAccountName(string thirdAccountName) { DARABONBA_PTR_SET_VALUE(thirdAccountName_, thirdAccountName) };


    protected:
      shared_ptr<string> boundUserId_ {};
      shared_ptr<string> thirdAccountName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserByMobileAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryUserByMobileAccountResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryUserByMobileAccountResponseBody::Result) };
    inline QueryUserByMobileAccountResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryUserByMobileAccountResponseBody::Result) };
    inline QueryUserByMobileAccountResponseBody& setResult(const QueryUserByMobileAccountResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryUserByMobileAccountResponseBody& setResult(QueryUserByMobileAccountResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryUserByMobileAccountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<QueryUserByMobileAccountResponseBody::Result> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
