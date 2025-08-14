// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERCIDRRESPONSEBODYCIDRLISTS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERCIDRRESPONSEBODYCIDRLISTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterCidrResponseBodyCidrLists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterCidrResponseBodyCidrLists& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Family, family_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PublishCidrRoute, publishCidrRoute_);
      DARABONBA_PTR_TO_JSON(TransitRouterCidrId, transitRouterCidrId_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterCidrResponseBodyCidrLists& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Family, family_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PublishCidrRoute, publishCidrRoute_);
      DARABONBA_PTR_FROM_JSON(TransitRouterCidrId, transitRouterCidrId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    ListTransitRouterCidrResponseBodyCidrLists() = default ;
    ListTransitRouterCidrResponseBodyCidrLists(const ListTransitRouterCidrResponseBodyCidrLists &) = default ;
    ListTransitRouterCidrResponseBodyCidrLists(ListTransitRouterCidrResponseBodyCidrLists &&) = default ;
    ListTransitRouterCidrResponseBodyCidrLists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterCidrResponseBodyCidrLists() = default ;
    ListTransitRouterCidrResponseBodyCidrLists& operator=(const ListTransitRouterCidrResponseBodyCidrLists &) = default ;
    ListTransitRouterCidrResponseBodyCidrLists& operator=(ListTransitRouterCidrResponseBodyCidrLists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidr_ != nullptr
        && this->description_ != nullptr && this->family_ != nullptr && this->name_ != nullptr && this->publishCidrRoute_ != nullptr && this->transitRouterCidrId_ != nullptr
        && this->transitRouterId_ != nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline ListTransitRouterCidrResponseBodyCidrLists& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTransitRouterCidrResponseBodyCidrLists& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // family Field Functions 
    bool hasFamily() const { return this->family_ != nullptr;};
    void deleteFamily() { this->family_ = nullptr;};
    inline string family() const { DARABONBA_PTR_GET_DEFAULT(family_, "") };
    inline ListTransitRouterCidrResponseBodyCidrLists& setFamily(string family) { DARABONBA_PTR_SET_VALUE(family_, family) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTransitRouterCidrResponseBodyCidrLists& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publishCidrRoute Field Functions 
    bool hasPublishCidrRoute() const { return this->publishCidrRoute_ != nullptr;};
    void deletePublishCidrRoute() { this->publishCidrRoute_ = nullptr;};
    inline bool publishCidrRoute() const { DARABONBA_PTR_GET_DEFAULT(publishCidrRoute_, false) };
    inline ListTransitRouterCidrResponseBodyCidrLists& setPublishCidrRoute(bool publishCidrRoute) { DARABONBA_PTR_SET_VALUE(publishCidrRoute_, publishCidrRoute) };


    // transitRouterCidrId Field Functions 
    bool hasTransitRouterCidrId() const { return this->transitRouterCidrId_ != nullptr;};
    void deleteTransitRouterCidrId() { this->transitRouterCidrId_ = nullptr;};
    inline string transitRouterCidrId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterCidrId_, "") };
    inline ListTransitRouterCidrResponseBodyCidrLists& setTransitRouterCidrId(string transitRouterCidrId) { DARABONBA_PTR_SET_VALUE(transitRouterCidrId_, transitRouterCidrId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRouterCidrResponseBodyCidrLists& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The CIDR block of the transit router.
    std::shared_ptr<string> cidr_ = nullptr;
    // The description of the CIDR block.
    std::shared_ptr<string> description_ = nullptr;
    // The type of the CIDR block.
    // 
    // The value is **IPv4**, which indicates that the CIDR block is of the IPv4 type.
    std::shared_ptr<string> family_ = nullptr;
    // The name of the CIDR block.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the system is allowed to automatically add a route to the route table of the transit router. Valid values:
    // 
    // *   **true**
    // 
    //     A value of **true** indicates that after you create a private VPN connection and enable route learning for the connection, the system automatically adds a blackhole route to the route table of the transit router to which the VPN connection is attached.
    // 
    //     The destination CIDR block of the blackhole route is the CIDR block of the transit router. The CIDR block of the transit router refers to the CIDR block from which gateway IP addresses are allocated to IPsec-VPN connections.
    // 
    //     The blackhole route is advertised only to the route table of the virtual border router (VBR) that is connected to the transit router.
    // 
    // *   **false**
    std::shared_ptr<bool> publishCidrRoute_ = nullptr;
    // The ID of the transit router CIDR block.
    std::shared_ptr<string> transitRouterCidrId_ = nullptr;
    // The transit router ID.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
