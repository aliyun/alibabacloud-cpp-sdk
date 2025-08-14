// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERREQUESTTRANSITROUTERCIDRLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERREQUESTTRANSITROUTERCIDRLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterRequestTransitRouterCidrList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterRequestTransitRouterCidrList& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PublishCidrRoute, publishCidrRoute_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterRequestTransitRouterCidrList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PublishCidrRoute, publishCidrRoute_);
    };
    CreateTransitRouterRequestTransitRouterCidrList() = default ;
    CreateTransitRouterRequestTransitRouterCidrList(const CreateTransitRouterRequestTransitRouterCidrList &) = default ;
    CreateTransitRouterRequestTransitRouterCidrList(CreateTransitRouterRequestTransitRouterCidrList &&) = default ;
    CreateTransitRouterRequestTransitRouterCidrList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterRequestTransitRouterCidrList() = default ;
    CreateTransitRouterRequestTransitRouterCidrList& operator=(const CreateTransitRouterRequestTransitRouterCidrList &) = default ;
    CreateTransitRouterRequestTransitRouterCidrList& operator=(CreateTransitRouterRequestTransitRouterCidrList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidr_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->publishCidrRoute_ != nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline CreateTransitRouterRequestTransitRouterCidrList& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTransitRouterRequestTransitRouterCidrList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTransitRouterRequestTransitRouterCidrList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publishCidrRoute Field Functions 
    bool hasPublishCidrRoute() const { return this->publishCidrRoute_ != nullptr;};
    void deletePublishCidrRoute() { this->publishCidrRoute_ = nullptr;};
    inline bool publishCidrRoute() const { DARABONBA_PTR_GET_DEFAULT(publishCidrRoute_, false) };
    inline CreateTransitRouterRequestTransitRouterCidrList& setPublishCidrRoute(bool publishCidrRoute) { DARABONBA_PTR_SET_VALUE(publishCidrRoute_, publishCidrRoute) };


  protected:
    // The CIDR block of the transit router.
    std::shared_ptr<string> cidr_ = nullptr;
    // The description of the transit router CIDR block.
    // 
    // The description must be 1 to 256 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the transit router CIDR block.
    // 
    // The name must be 1 to 128 characters in length.
    std::shared_ptr<string> name_ = nullptr;
    // Specifies whether to allow the system to automatically add a route that points to the CIDR block to the route table of the transit router.
    // 
    // *   **true** (default)
    // 
    //     If you set the value to true, after you create a VPN attachment on a private VPN gateway and enable route learning for the VPN attachment, the system automatically adds the following route to the route table of the transit router that is in route learning relationship with the VPN attachment:
    // 
    //     A blackhole route whose destination CIDR block is the transit router CIDR block, which refers to the CIDR block from which gateway IP addresses are allocated to the IPsec-VPN connection.
    // 
    //     The blackhole route is advertised only to the route tables of virtual border routers (VBRs) connected to the transit router.
    // 
    // *   **false**
    std::shared_ptr<bool> publishCidrRoute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
