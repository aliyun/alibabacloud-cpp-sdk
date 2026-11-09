// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TokenStatus, tokenStatus_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TokenStatus, tokenStatus_);
    };
    QueryTokenResponseBody() = default ;
    QueryTokenResponseBody(const QueryTokenResponseBody &) = default ;
    QueryTokenResponseBody(QueryTokenResponseBody &&) = default ;
    QueryTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTokenResponseBody() = default ;
    QueryTokenResponseBody& operator=(const QueryTokenResponseBody &) = default ;
    QueryTokenResponseBody& operator=(QueryTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tokenStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tokenStatus Field Functions 
    bool hasTokenStatus() const { return this->tokenStatus_ != nullptr;};
    void deleteTokenStatus() { this->tokenStatus_ = nullptr;};
    inline bool getTokenStatus() const { DARABONBA_PTR_GET_DEFAULT(tokenStatus_, false) };
    inline QueryTokenResponseBody& setTokenStatus(bool tokenStatus) { DARABONBA_PTR_SET_VALUE(tokenStatus_, tokenStatus) };


  protected:
    // The unique ID that the system generates for the request. This parameter is a common parameter.
    shared_ptr<string> requestId_ {};
    // The status of the queried token. Valid values:
    // 
    // *   **true**: indicates the token is valid.
    // *   **false**: indicates the token is invalid.
    shared_ptr<bool> tokenStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
