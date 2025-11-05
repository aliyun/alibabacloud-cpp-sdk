// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYDOMAINSRESPONSEBODYCONTENTDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYDOMAINSRESPONSEBODYCONTENTDOMAINS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListRealtimeLogDeliveryDomainsResponseBodyContentDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeLogDeliveryDomainsResponseBodyContentDomains& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeLogDeliveryDomainsResponseBodyContentDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListRealtimeLogDeliveryDomainsResponseBodyContentDomains() = default ;
    ListRealtimeLogDeliveryDomainsResponseBodyContentDomains(const ListRealtimeLogDeliveryDomainsResponseBodyContentDomains &) = default ;
    ListRealtimeLogDeliveryDomainsResponseBodyContentDomains(ListRealtimeLogDeliveryDomainsResponseBodyContentDomains &&) = default ;
    ListRealtimeLogDeliveryDomainsResponseBodyContentDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeLogDeliveryDomainsResponseBodyContentDomains() = default ;
    ListRealtimeLogDeliveryDomainsResponseBodyContentDomains& operator=(const ListRealtimeLogDeliveryDomainsResponseBodyContentDomains &) = default ;
    ListRealtimeLogDeliveryDomainsResponseBodyContentDomains& operator=(ListRealtimeLogDeliveryDomainsResponseBodyContentDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->status_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListRealtimeLogDeliveryDomainsResponseBodyContentDomains& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListRealtimeLogDeliveryDomainsResponseBodyContentDomains& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status. Valid values:
    // 
    // *   **online**: enabled
    // *   **offline**: disabled
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
