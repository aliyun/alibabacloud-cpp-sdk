// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMELOGDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMELOGDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealtimeLogDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    DescribeDomainRealtimeLogDeliveryRequest() = default ;
    DescribeDomainRealtimeLogDeliveryRequest(const DescribeDomainRealtimeLogDeliveryRequest &) = default ;
    DescribeDomainRealtimeLogDeliveryRequest(DescribeDomainRealtimeLogDeliveryRequest &&) = default ;
    DescribeDomainRealtimeLogDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealtimeLogDeliveryRequest() = default ;
    DescribeDomainRealtimeLogDeliveryRequest& operator=(const DescribeDomainRealtimeLogDeliveryRequest &) = default ;
    DescribeDomainRealtimeLogDeliveryRequest& operator=(DescribeDomainRealtimeLogDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainRealtimeLogDeliveryRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    // The accelerated domain name for which real-time log delivery is enabled. You can specify only one domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
