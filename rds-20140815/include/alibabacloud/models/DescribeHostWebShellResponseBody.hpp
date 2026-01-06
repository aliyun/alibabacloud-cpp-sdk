// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOSTWEBSHELLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOSTWEBSHELLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeHostWebShellResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHostWebShellResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoginUrl, loginUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHostWebShellResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginUrl, loginUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHostWebShellResponseBody() = default ;
    DescribeHostWebShellResponseBody(const DescribeHostWebShellResponseBody &) = default ;
    DescribeHostWebShellResponseBody(DescribeHostWebShellResponseBody &&) = default ;
    DescribeHostWebShellResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHostWebShellResponseBody() = default ;
    DescribeHostWebShellResponseBody& operator=(const DescribeHostWebShellResponseBody &) = default ;
    DescribeHostWebShellResponseBody& operator=(DescribeHostWebShellResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loginUrl_ == nullptr
        && this->requestId_ == nullptr; };
    // loginUrl Field Functions 
    bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
    void deleteLoginUrl() { this->loginUrl_ = nullptr;};
    inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
    inline DescribeHostWebShellResponseBody& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHostWebShellResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The webshell URL.
    shared_ptr<string> loginUrl_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
