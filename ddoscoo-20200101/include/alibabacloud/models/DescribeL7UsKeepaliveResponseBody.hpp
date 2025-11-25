// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL7USKEEPALIVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL7USKEEPALIVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeL7UsKeepaliveResponseBodyRsKeepalive.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeL7UsKeepaliveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL7UsKeepaliveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RsKeepalive, rsKeepalive_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL7UsKeepaliveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RsKeepalive, rsKeepalive_);
    };
    DescribeL7UsKeepaliveResponseBody() = default ;
    DescribeL7UsKeepaliveResponseBody(const DescribeL7UsKeepaliveResponseBody &) = default ;
    DescribeL7UsKeepaliveResponseBody(DescribeL7UsKeepaliveResponseBody &&) = default ;
    DescribeL7UsKeepaliveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL7UsKeepaliveResponseBody() = default ;
    DescribeL7UsKeepaliveResponseBody& operator=(const DescribeL7UsKeepaliveResponseBody &) = default ;
    DescribeL7UsKeepaliveResponseBody& operator=(DescribeL7UsKeepaliveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->rsKeepalive_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeL7UsKeepaliveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rsKeepalive Field Functions 
    bool hasRsKeepalive() const { return this->rsKeepalive_ != nullptr;};
    void deleteRsKeepalive() { this->rsKeepalive_ = nullptr;};
    inline const DescribeL7UsKeepaliveResponseBodyRsKeepalive & rsKeepalive() const { DARABONBA_PTR_GET_CONST(rsKeepalive_, DescribeL7UsKeepaliveResponseBodyRsKeepalive) };
    inline DescribeL7UsKeepaliveResponseBodyRsKeepalive rsKeepalive() { DARABONBA_PTR_GET(rsKeepalive_, DescribeL7UsKeepaliveResponseBodyRsKeepalive) };
    inline DescribeL7UsKeepaliveResponseBody& setRsKeepalive(const DescribeL7UsKeepaliveResponseBodyRsKeepalive & rsKeepalive) { DARABONBA_PTR_SET_VALUE(rsKeepalive_, rsKeepalive) };
    inline DescribeL7UsKeepaliveResponseBody& setRsKeepalive(DescribeL7UsKeepaliveResponseBodyRsKeepalive && rsKeepalive) { DARABONBA_PTR_SET_RVALUE(rsKeepalive_, rsKeepalive) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The value of the Back-to-origin Persistent Connections parameter.
    std::shared_ptr<DescribeL7UsKeepaliveResponseBodyRsKeepalive> rsKeepalive_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
