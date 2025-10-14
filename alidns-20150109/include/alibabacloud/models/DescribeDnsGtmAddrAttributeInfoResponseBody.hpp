// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRATTRIBUTEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRATTRIBUTEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsGtmAddrAttributeInfoResponseBodyAddr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAddrAttributeInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAddrAttributeInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAddrAttributeInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDnsGtmAddrAttributeInfoResponseBody() = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBody(const DescribeDnsGtmAddrAttributeInfoResponseBody &) = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBody(DescribeDnsGtmAddrAttributeInfoResponseBody &&) = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAddrAttributeInfoResponseBody() = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBody& operator=(const DescribeDnsGtmAddrAttributeInfoResponseBody &) = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBody& operator=(DescribeDnsGtmAddrAttributeInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addr_ == nullptr
        && return this->requestId_ == nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const DescribeDnsGtmAddrAttributeInfoResponseBodyAddr & addr() const { DARABONBA_PTR_GET_CONST(addr_, DescribeDnsGtmAddrAttributeInfoResponseBodyAddr) };
    inline DescribeDnsGtmAddrAttributeInfoResponseBodyAddr addr() { DARABONBA_PTR_GET(addr_, DescribeDnsGtmAddrAttributeInfoResponseBodyAddr) };
    inline DescribeDnsGtmAddrAttributeInfoResponseBody& setAddr(const DescribeDnsGtmAddrAttributeInfoResponseBodyAddr & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline DescribeDnsGtmAddrAttributeInfoResponseBody& setAddr(DescribeDnsGtmAddrAttributeInfoResponseBodyAddr && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmAddrAttributeInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The address in the address pool.
    std::shared_ptr<DescribeDnsGtmAddrAttributeInfoResponseBodyAddr> addr_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
