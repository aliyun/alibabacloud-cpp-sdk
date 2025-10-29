// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYDOMAINSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYDOMAINSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveRealtimeLogDeliveryDomainsResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRealtimeLogDeliveryDomainsResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRealtimeLogDeliveryDomainsResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
    };
    ListLiveRealtimeLogDeliveryDomainsResponseBodyContent() = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBodyContent(const ListLiveRealtimeLogDeliveryDomainsResponseBodyContent &) = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBodyContent(ListLiveRealtimeLogDeliveryDomainsResponseBodyContent &&) = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRealtimeLogDeliveryDomainsResponseBodyContent() = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBodyContent& operator=(const ListLiveRealtimeLogDeliveryDomainsResponseBodyContent &) = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBodyContent& operator=(ListLiveRealtimeLogDeliveryDomainsResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domains_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<Models::ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<Models::ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains>) };
    inline vector<Models::ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains> domains() { DARABONBA_PTR_GET(domains_, vector<Models::ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains>) };
    inline ListLiveRealtimeLogDeliveryDomainsResponseBodyContent& setDomains(const vector<Models::ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline ListLiveRealtimeLogDeliveryDomainsResponseBodyContent& setDomains(vector<Models::ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


  protected:
    std::shared_ptr<vector<Models::ListLiveRealtimeLogDeliveryDomainsResponseBodyContentDomains>> domains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
