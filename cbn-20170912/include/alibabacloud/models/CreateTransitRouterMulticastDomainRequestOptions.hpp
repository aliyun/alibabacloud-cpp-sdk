// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERMULTICASTDOMAINREQUESTOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERMULTICASTDOMAINREQUESTOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterMulticastDomainRequestOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterMulticastDomainRequestOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Igmpv2Support, igmpv2Support_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterMulticastDomainRequestOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Igmpv2Support, igmpv2Support_);
    };
    CreateTransitRouterMulticastDomainRequestOptions() = default ;
    CreateTransitRouterMulticastDomainRequestOptions(const CreateTransitRouterMulticastDomainRequestOptions &) = default ;
    CreateTransitRouterMulticastDomainRequestOptions(CreateTransitRouterMulticastDomainRequestOptions &&) = default ;
    CreateTransitRouterMulticastDomainRequestOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterMulticastDomainRequestOptions() = default ;
    CreateTransitRouterMulticastDomainRequestOptions& operator=(const CreateTransitRouterMulticastDomainRequestOptions &) = default ;
    CreateTransitRouterMulticastDomainRequestOptions& operator=(CreateTransitRouterMulticastDomainRequestOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->igmpv2Support_ != nullptr; };
    // igmpv2Support Field Functions 
    bool hasIgmpv2Support() const { return this->igmpv2Support_ != nullptr;};
    void deleteIgmpv2Support() { this->igmpv2Support_ = nullptr;};
    inline string igmpv2Support() const { DARABONBA_PTR_GET_DEFAULT(igmpv2Support_, "") };
    inline CreateTransitRouterMulticastDomainRequestOptions& setIgmpv2Support(string igmpv2Support) { DARABONBA_PTR_SET_VALUE(igmpv2Support_, igmpv2Support) };


  protected:
    // Indicates whether the IGMP feature is enabled for the multicast domain. Once enabled, hosts can dynamically join or leave multicast groups by using IGMP protocol. Valid values:
    // 
    // *   **enable**: enables IGMP.
    // *   **disable**(default): disables IGMP.
    // 
    // > *   The IGMP feature is in beta testing. To use it, contact your account manager.
    // > *   If you select this option, you cannot disable IPv6 after the VBR is created.
    std::shared_ptr<string> igmpv2Support_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
