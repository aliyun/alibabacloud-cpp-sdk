// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERSRESPONSEBODYTRANSITROUTERSTRANSITROUTERCIDRLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERSRESPONSEBODYTRANSITROUTERSTRANSITROUTERCIDRLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PublishCidrRoute, publishCidrRoute_);
      DARABONBA_PTR_TO_JSON(TransitRouterCidrId, transitRouterCidrId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PublishCidrRoute, publishCidrRoute_);
      DARABONBA_PTR_FROM_JSON(TransitRouterCidrId, transitRouterCidrId_);
    };
    ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList() = default ;
    ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList(const ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList &) = default ;
    ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList(ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList &&) = default ;
    ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList() = default ;
    ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList& operator=(const ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList &) = default ;
    ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList& operator=(ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidr_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->publishCidrRoute_ != nullptr && this->transitRouterCidrId_ != nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publishCidrRoute Field Functions 
    bool hasPublishCidrRoute() const { return this->publishCidrRoute_ != nullptr;};
    void deletePublishCidrRoute() { this->publishCidrRoute_ = nullptr;};
    inline bool publishCidrRoute() const { DARABONBA_PTR_GET_DEFAULT(publishCidrRoute_, false) };
    inline ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList& setPublishCidrRoute(bool publishCidrRoute) { DARABONBA_PTR_SET_VALUE(publishCidrRoute_, publishCidrRoute) };


    // transitRouterCidrId Field Functions 
    bool hasTransitRouterCidrId() const { return this->transitRouterCidrId_ != nullptr;};
    void deleteTransitRouterCidrId() { this->transitRouterCidrId_ = nullptr;};
    inline string transitRouterCidrId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterCidrId_, "") };
    inline ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList& setTransitRouterCidrId(string transitRouterCidrId) { DARABONBA_PTR_SET_VALUE(transitRouterCidrId_, transitRouterCidrId) };


  protected:
    // The CIDR block of the transit router.
    std::shared_ptr<string> cidr_ = nullptr;
    // The description of the CIDR block.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the CIDR block.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the system is allowed to automatically add a route to the route table of the transit router. Valid values:
    // 
    // - **true**: yes
    // 
    //   A value of **true** indicates that after you create a private VPN connection and create a route learning correlation for the private VPC connection, the system automatically adds the following route to the route table of the transit router that is in route learning correlation with the private VPN connection: A blackhole route whose destination CIDR block is the CIDR block of the transit router. The CIDR block of the transit router refers to the CIDR block from which gateway IP addresses are allocated to IPsec-VPN connections. 
    //          
    //   The blackhole route is advertised only to the route tables of virtual border routers (VBRs) that are connected to the transit router. 
    // 
    // - **false**: no
    std::shared_ptr<bool> publishCidrRoute_ = nullptr;
    // The ID of the CIDR block.
    std::shared_ptr<string> transitRouterCidrId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
