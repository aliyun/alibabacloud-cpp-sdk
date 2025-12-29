// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINFRAREDDEVICEBRANDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINFRAREDDEVICEBRANDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListInfraredDeviceBrandsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInfraredDeviceBrandsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListInfraredDeviceBrandsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    ListInfraredDeviceBrandsResponseBody() = default ;
    ListInfraredDeviceBrandsResponseBody(const ListInfraredDeviceBrandsResponseBody &) = default ;
    ListInfraredDeviceBrandsResponseBody(ListInfraredDeviceBrandsResponseBody &&) = default ;
    ListInfraredDeviceBrandsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInfraredDeviceBrandsResponseBody() = default ;
    ListInfraredDeviceBrandsResponseBody& operator=(const ListInfraredDeviceBrandsResponseBody &) = default ;
    ListInfraredDeviceBrandsResponseBody& operator=(ListInfraredDeviceBrandsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInfraredDeviceBrandsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInfraredDeviceBrandsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const map<string, vector<string>> & getResult() const { DARABONBA_PTR_GET_CONST(result_, map<string, vector<string>>) };
    inline map<string, vector<string>> getResult() { DARABONBA_PTR_GET(result_, map<string, vector<string>>) };
    inline ListInfraredDeviceBrandsResponseBody& setResult(const map<string, vector<string>> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListInfraredDeviceBrandsResponseBody& setResult(map<string, vector<string>> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListInfraredDeviceBrandsResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<map<string, vector<string>>> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
