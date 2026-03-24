// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDNSRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDNSRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDomainDNSRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDNSRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DNSStatus, DNSStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDNSRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DNSStatus, DNSStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainDNSRecordResponseBody() = default ;
    DescribeDomainDNSRecordResponseBody(const DescribeDomainDNSRecordResponseBody &) = default ;
    DescribeDomainDNSRecordResponseBody(DescribeDomainDNSRecordResponseBody &&) = default ;
    DescribeDomainDNSRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDNSRecordResponseBody() = default ;
    DescribeDomainDNSRecordResponseBody& operator=(const DescribeDomainDNSRecordResponseBody &) = default ;
    DescribeDomainDNSRecordResponseBody& operator=(DescribeDomainDNSRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DNSStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // DNSStatus Field Functions 
    bool hasDNSStatus() const { return this->DNSStatus_ != nullptr;};
    void deleteDNSStatus() { this->DNSStatus_ = nullptr;};
    inline string getDNSStatus() const { DARABONBA_PTR_GET_DEFAULT(DNSStatus_, "") };
    inline DescribeDomainDNSRecordResponseBody& setDNSStatus(string DNSStatus) { DARABONBA_PTR_SET_VALUE(DNSStatus_, DNSStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainDNSRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The DNS status. Valid values:
    // 
    // - **cnameMatched**: The DNS record is normal.
    // 
    // - **vipMatched**: The domain name is mapped to an A record.
    // 
    // - **wafVip**: The domain name is mapped to the virtual IP address (VIP) of another WAF instance.
    // 
    // - **unRecord**: No DNS record is configured.
    // 
    // - **unUsed**: Traffic is not forwarded to WAF.
    // 
    // - **checkTimeout**: The check timed out.
    shared_ptr<string> DNSStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
