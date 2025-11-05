// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYDOMAINSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYDOMAINSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRealtimeLogDeliveryDomainsResponseBodyContentDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListRealtimeLogDeliveryDomainsResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeLogDeliveryDomainsResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeLogDeliveryDomainsResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
    };
    ListRealtimeLogDeliveryDomainsResponseBodyContent() = default ;
    ListRealtimeLogDeliveryDomainsResponseBodyContent(const ListRealtimeLogDeliveryDomainsResponseBodyContent &) = default ;
    ListRealtimeLogDeliveryDomainsResponseBodyContent(ListRealtimeLogDeliveryDomainsResponseBodyContent &&) = default ;
    ListRealtimeLogDeliveryDomainsResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeLogDeliveryDomainsResponseBodyContent() = default ;
    ListRealtimeLogDeliveryDomainsResponseBodyContent& operator=(const ListRealtimeLogDeliveryDomainsResponseBodyContent &) = default ;
    ListRealtimeLogDeliveryDomainsResponseBodyContent& operator=(ListRealtimeLogDeliveryDomainsResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domains_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<Models::ListRealtimeLogDeliveryDomainsResponseBodyContentDomains> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<Models::ListRealtimeLogDeliveryDomainsResponseBodyContentDomains>) };
    inline vector<Models::ListRealtimeLogDeliveryDomainsResponseBodyContentDomains> domains() { DARABONBA_PTR_GET(domains_, vector<Models::ListRealtimeLogDeliveryDomainsResponseBodyContentDomains>) };
    inline ListRealtimeLogDeliveryDomainsResponseBodyContent& setDomains(const vector<Models::ListRealtimeLogDeliveryDomainsResponseBodyContentDomains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline ListRealtimeLogDeliveryDomainsResponseBodyContent& setDomains(vector<Models::ListRealtimeLogDeliveryDomainsResponseBodyContentDomains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


  protected:
    std::shared_ptr<vector<Models::ListRealtimeLogDeliveryDomainsResponseBodyContentDomains>> domains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
