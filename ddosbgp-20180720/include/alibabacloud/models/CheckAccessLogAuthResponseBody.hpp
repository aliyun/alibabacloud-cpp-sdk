// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKACCESSLOGAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKACCESSLOGAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class CheckAccessLogAuthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAccessLogAuthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogAuth, accessLogAuth_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAccessLogAuthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogAuth, accessLogAuth_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckAccessLogAuthResponseBody() = default ;
    CheckAccessLogAuthResponseBody(const CheckAccessLogAuthResponseBody &) = default ;
    CheckAccessLogAuthResponseBody(CheckAccessLogAuthResponseBody &&) = default ;
    CheckAccessLogAuthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAccessLogAuthResponseBody() = default ;
    CheckAccessLogAuthResponseBody& operator=(const CheckAccessLogAuthResponseBody &) = default ;
    CheckAccessLogAuthResponseBody& operator=(CheckAccessLogAuthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLogAuth_ == nullptr
        && this->requestId_ == nullptr; };
    // accessLogAuth Field Functions 
    bool hasAccessLogAuth() const { return this->accessLogAuth_ != nullptr;};
    void deleteAccessLogAuth() { this->accessLogAuth_ = nullptr;};
    inline bool getAccessLogAuth() const { DARABONBA_PTR_GET_DEFAULT(accessLogAuth_, false) };
    inline CheckAccessLogAuthResponseBody& setAccessLogAuth(bool accessLogAuth) { DARABONBA_PTR_SET_VALUE(accessLogAuth_, accessLogAuth) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckAccessLogAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether Anti-DDoS Origin was authorized to access Simple Log Service. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> accessLogAuth_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
