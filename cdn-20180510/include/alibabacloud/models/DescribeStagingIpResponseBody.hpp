// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTAGINGIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTAGINGIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeStagingIpResponseBodyIPV4s.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeStagingIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStagingIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IPV4s, IPV4s_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStagingIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IPV4s, IPV4s_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeStagingIpResponseBody() = default ;
    DescribeStagingIpResponseBody(const DescribeStagingIpResponseBody &) = default ;
    DescribeStagingIpResponseBody(DescribeStagingIpResponseBody &&) = default ;
    DescribeStagingIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStagingIpResponseBody() = default ;
    DescribeStagingIpResponseBody& operator=(const DescribeStagingIpResponseBody &) = default ;
    DescribeStagingIpResponseBody& operator=(DescribeStagingIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IPV4s_ == nullptr
        && return this->requestId_ == nullptr; };
    // IPV4s Field Functions 
    bool hasIPV4s() const { return this->IPV4s_ != nullptr;};
    void deleteIPV4s() { this->IPV4s_ = nullptr;};
    inline const DescribeStagingIpResponseBodyIPV4s & IPV4s() const { DARABONBA_PTR_GET_CONST(IPV4s_, DescribeStagingIpResponseBodyIPV4s) };
    inline DescribeStagingIpResponseBodyIPV4s IPV4s() { DARABONBA_PTR_GET(IPV4s_, DescribeStagingIpResponseBodyIPV4s) };
    inline DescribeStagingIpResponseBody& setIPV4s(const DescribeStagingIpResponseBodyIPV4s & IPV4s) { DARABONBA_PTR_SET_VALUE(IPV4s_, IPV4s) };
    inline DescribeStagingIpResponseBody& setIPV4s(DescribeStagingIpResponseBodyIPV4s && IPV4s) { DARABONBA_PTR_SET_RVALUE(IPV4s_, IPV4s) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStagingIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // IPv4 addresses.
    std::shared_ptr<DescribeStagingIpResponseBodyIPV4s> IPV4s_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
