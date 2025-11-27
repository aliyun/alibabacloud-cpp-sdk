// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEVNCURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEVNCURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceVncUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceVncUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoginUrl, loginUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceVncUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginUrl, loginUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCInstanceVncUrlResponseBody() = default ;
    DescribeRCInstanceVncUrlResponseBody(const DescribeRCInstanceVncUrlResponseBody &) = default ;
    DescribeRCInstanceVncUrlResponseBody(DescribeRCInstanceVncUrlResponseBody &&) = default ;
    DescribeRCInstanceVncUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceVncUrlResponseBody() = default ;
    DescribeRCInstanceVncUrlResponseBody& operator=(const DescribeRCInstanceVncUrlResponseBody &) = default ;
    DescribeRCInstanceVncUrlResponseBody& operator=(DescribeRCInstanceVncUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loginUrl_ == nullptr
        && return this->requestId_ == nullptr; };
    // loginUrl Field Functions 
    bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
    void deleteLoginUrl() { this->loginUrl_ = nullptr;};
    inline string loginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
    inline DescribeRCInstanceVncUrlResponseBody& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInstanceVncUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The VNC logon address.
    // 
    // >  The address returned is valid only for 15 seconds. If you do not use the returned address to establish a connection within 15 seconds, the address expires and you must call the operation again to obtain a new address.
    std::shared_ptr<string> loginUrl_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
