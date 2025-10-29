// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYDOMAINSRESPONSEBODYCONTENTDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYDOMAINSRESPONSEBODYCONTENTDOMAINS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains() = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains(const ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains &) = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains(ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains &&) = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains() = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains& operator=(const ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains &) = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains& operator=(ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains &&) = default ;
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
    inline ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of real-time log delivery. Valid values:
    // 
    // *   **online**: enabled
    // *   **offline**: disabled
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
