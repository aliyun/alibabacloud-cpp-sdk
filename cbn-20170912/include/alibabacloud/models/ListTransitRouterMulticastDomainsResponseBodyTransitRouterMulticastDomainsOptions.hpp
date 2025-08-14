// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINSRESPONSEBODYTRANSITROUTERMULTICASTDOMAINSOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINSRESPONSEBODYTRANSITROUTERMULTICASTDOMAINSOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Igmpv2Support, igmpv2Support_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Igmpv2Support, igmpv2Support_);
    };
    ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions() = default ;
    ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions(const ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions &) = default ;
    ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions(ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions &&) = default ;
    ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions() = default ;
    ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions& operator=(const ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions &) = default ;
    ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions& operator=(ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->igmpv2Support_ != nullptr; };
    // igmpv2Support Field Functions 
    bool hasIgmpv2Support() const { return this->igmpv2Support_ != nullptr;};
    void deleteIgmpv2Support() { this->igmpv2Support_ = nullptr;};
    inline string igmpv2Support() const { DARABONBA_PTR_GET_DEFAULT(igmpv2Support_, "") };
    inline ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions& setIgmpv2Support(string igmpv2Support) { DARABONBA_PTR_SET_VALUE(igmpv2Support_, igmpv2Support) };


  protected:
    // Indicates whether the IGMP feature is enabled for the multicast domain.
    std::shared_ptr<string> igmpv2Support_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
