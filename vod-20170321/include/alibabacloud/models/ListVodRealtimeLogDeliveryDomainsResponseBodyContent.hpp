// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODREALTIMELOGDELIVERYDOMAINSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTVODREALTIMELOGDELIVERYDOMAINSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVodRealtimeLogDeliveryDomainsResponseBodyContentDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListVodRealtimeLogDeliveryDomainsResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodRealtimeLogDeliveryDomainsResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodRealtimeLogDeliveryDomainsResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
    };
    ListVodRealtimeLogDeliveryDomainsResponseBodyContent() = default ;
    ListVodRealtimeLogDeliveryDomainsResponseBodyContent(const ListVodRealtimeLogDeliveryDomainsResponseBodyContent &) = default ;
    ListVodRealtimeLogDeliveryDomainsResponseBodyContent(ListVodRealtimeLogDeliveryDomainsResponseBodyContent &&) = default ;
    ListVodRealtimeLogDeliveryDomainsResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodRealtimeLogDeliveryDomainsResponseBodyContent() = default ;
    ListVodRealtimeLogDeliveryDomainsResponseBodyContent& operator=(const ListVodRealtimeLogDeliveryDomainsResponseBodyContent &) = default ;
    ListVodRealtimeLogDeliveryDomainsResponseBodyContent& operator=(ListVodRealtimeLogDeliveryDomainsResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domains_ != nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<Models::ListVodRealtimeLogDeliveryDomainsResponseBodyContentDomains> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<Models::ListVodRealtimeLogDeliveryDomainsResponseBodyContentDomains>) };
    inline vector<Models::ListVodRealtimeLogDeliveryDomainsResponseBodyContentDomains> domains() { DARABONBA_PTR_GET(domains_, vector<Models::ListVodRealtimeLogDeliveryDomainsResponseBodyContentDomains>) };
    inline ListVodRealtimeLogDeliveryDomainsResponseBodyContent& setDomains(const vector<Models::ListVodRealtimeLogDeliveryDomainsResponseBodyContentDomains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline ListVodRealtimeLogDeliveryDomainsResponseBodyContent& setDomains(vector<Models::ListVodRealtimeLogDeliveryDomainsResponseBodyContentDomains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


  protected:
    std::shared_ptr<vector<Models::ListVodRealtimeLogDeliveryDomainsResponseBodyContentDomains>> domains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
