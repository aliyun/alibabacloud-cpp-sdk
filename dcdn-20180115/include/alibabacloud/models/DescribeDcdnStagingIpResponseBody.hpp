// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSTAGINGIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSTAGINGIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnStagingIpResponseBodyIPV4s.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnStagingIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnStagingIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IPV4s, IPV4s_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnStagingIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IPV4s, IPV4s_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnStagingIpResponseBody() = default ;
    DescribeDcdnStagingIpResponseBody(const DescribeDcdnStagingIpResponseBody &) = default ;
    DescribeDcdnStagingIpResponseBody(DescribeDcdnStagingIpResponseBody &&) = default ;
    DescribeDcdnStagingIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnStagingIpResponseBody() = default ;
    DescribeDcdnStagingIpResponseBody& operator=(const DescribeDcdnStagingIpResponseBody &) = default ;
    DescribeDcdnStagingIpResponseBody& operator=(DescribeDcdnStagingIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->IPV4s_ != nullptr
        && this->requestId_ != nullptr; };
    // IPV4s Field Functions 
    bool hasIPV4s() const { return this->IPV4s_ != nullptr;};
    void deleteIPV4s() { this->IPV4s_ = nullptr;};
    inline const DescribeDcdnStagingIpResponseBodyIPV4s & IPV4s() const { DARABONBA_PTR_GET_CONST(IPV4s_, DescribeDcdnStagingIpResponseBodyIPV4s) };
    inline DescribeDcdnStagingIpResponseBodyIPV4s IPV4s() { DARABONBA_PTR_GET(IPV4s_, DescribeDcdnStagingIpResponseBodyIPV4s) };
    inline DescribeDcdnStagingIpResponseBody& setIPV4s(const DescribeDcdnStagingIpResponseBodyIPV4s & IPV4s) { DARABONBA_PTR_SET_VALUE(IPV4s_, IPV4s) };
    inline DescribeDcdnStagingIpResponseBody& setIPV4s(DescribeDcdnStagingIpResponseBodyIPV4s && IPV4s) { DARABONBA_PTR_SET_RVALUE(IPV4s_, IPV4s) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnStagingIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeDcdnStagingIpResponseBodyIPV4s> IPV4s_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
