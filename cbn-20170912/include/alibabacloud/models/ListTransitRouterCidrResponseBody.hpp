// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERCIDRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERCIDRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterCidrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterCidrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CidrLists, cidrLists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterCidrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrLists, cidrLists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTransitRouterCidrResponseBody() = default ;
    ListTransitRouterCidrResponseBody(const ListTransitRouterCidrResponseBody &) = default ;
    ListTransitRouterCidrResponseBody(ListTransitRouterCidrResponseBody &&) = default ;
    ListTransitRouterCidrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterCidrResponseBody() = default ;
    ListTransitRouterCidrResponseBody& operator=(const ListTransitRouterCidrResponseBody &) = default ;
    ListTransitRouterCidrResponseBody& operator=(ListTransitRouterCidrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CidrLists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CidrLists& obj) { 
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Family, family_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PublishCidrRoute, publishCidrRoute_);
        DARABONBA_PTR_TO_JSON(TransitRouterCidrId, transitRouterCidrId_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      };
      friend void from_json(const Darabonba::Json& j, CidrLists& obj) { 
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Family, family_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PublishCidrRoute, publishCidrRoute_);
        DARABONBA_PTR_FROM_JSON(TransitRouterCidrId, transitRouterCidrId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      };
      CidrLists() = default ;
      CidrLists(const CidrLists &) = default ;
      CidrLists(CidrLists &&) = default ;
      CidrLists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CidrLists() = default ;
      CidrLists& operator=(const CidrLists &) = default ;
      CidrLists& operator=(CidrLists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidr_ == nullptr
        && this->description_ == nullptr && this->family_ == nullptr && this->name_ == nullptr && this->publishCidrRoute_ == nullptr && this->transitRouterCidrId_ == nullptr
        && this->transitRouterId_ == nullptr; };
      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
      inline CidrLists& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CidrLists& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // family Field Functions 
      bool hasFamily() const { return this->family_ != nullptr;};
      void deleteFamily() { this->family_ = nullptr;};
      inline string getFamily() const { DARABONBA_PTR_GET_DEFAULT(family_, "") };
      inline CidrLists& setFamily(string family) { DARABONBA_PTR_SET_VALUE(family_, family) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CidrLists& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // publishCidrRoute Field Functions 
      bool hasPublishCidrRoute() const { return this->publishCidrRoute_ != nullptr;};
      void deletePublishCidrRoute() { this->publishCidrRoute_ = nullptr;};
      inline bool getPublishCidrRoute() const { DARABONBA_PTR_GET_DEFAULT(publishCidrRoute_, false) };
      inline CidrLists& setPublishCidrRoute(bool publishCidrRoute) { DARABONBA_PTR_SET_VALUE(publishCidrRoute_, publishCidrRoute) };


      // transitRouterCidrId Field Functions 
      bool hasTransitRouterCidrId() const { return this->transitRouterCidrId_ != nullptr;};
      void deleteTransitRouterCidrId() { this->transitRouterCidrId_ = nullptr;};
      inline string getTransitRouterCidrId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterCidrId_, "") };
      inline CidrLists& setTransitRouterCidrId(string transitRouterCidrId) { DARABONBA_PTR_SET_VALUE(transitRouterCidrId_, transitRouterCidrId) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline CidrLists& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    protected:
      // The transit router CIDR block.
      shared_ptr<string> cidr_ {};
      // The description of the transit router CIDR block.
      shared_ptr<string> description_ {};
      // The type of the transit router CIDR block.
      // 
      // The value is **IPv4** only, which indicates that the transit router CIDR block is of the IPv4 type.
      shared_ptr<string> family_ {};
      // The name of the transit router CIDR block.
      shared_ptr<string> name_ {};
      // Indicates whether the system is allowed to automatically add a route for the transit router CIDR block to the transit router route table.
      // 
      // - **true**: allowed.
      //        
      //     If the value of this parameter is **true**, after you create a VPN connection of the private gateway type and create a route learning relationship for the VPN connection, the system automatically adds a route entry to the transit router route table that has a route learning relationship with the VPN connection:
      //    
      //   The route entry is a blackhole route whose destination CIDR block is the transit router CIDR block from which gateway IP addresses have been allocated to the IPsec connection.
      //         
      //   The blackhole route is propagated only to the route tables of VBR instances associated with the transit router.
      // - **false**: not allowed.
      shared_ptr<bool> publishCidrRoute_ {};
      // The ID of the transit router CIDR block.
      shared_ptr<string> transitRouterCidrId_ {};
      // The ID of the transit router instance.
      shared_ptr<string> transitRouterId_ {};
    };

    virtual bool empty() const override { return this->cidrLists_ == nullptr
        && this->requestId_ == nullptr; };
    // cidrLists Field Functions 
    bool hasCidrLists() const { return this->cidrLists_ != nullptr;};
    void deleteCidrLists() { this->cidrLists_ = nullptr;};
    inline const vector<ListTransitRouterCidrResponseBody::CidrLists> & getCidrLists() const { DARABONBA_PTR_GET_CONST(cidrLists_, vector<ListTransitRouterCidrResponseBody::CidrLists>) };
    inline vector<ListTransitRouterCidrResponseBody::CidrLists> getCidrLists() { DARABONBA_PTR_GET(cidrLists_, vector<ListTransitRouterCidrResponseBody::CidrLists>) };
    inline ListTransitRouterCidrResponseBody& setCidrLists(const vector<ListTransitRouterCidrResponseBody::CidrLists> & cidrLists) { DARABONBA_PTR_SET_VALUE(cidrLists_, cidrLists) };
    inline ListTransitRouterCidrResponseBody& setCidrLists(vector<ListTransitRouterCidrResponseBody::CidrLists> && cidrLists) { DARABONBA_PTR_SET_RVALUE(cidrLists_, cidrLists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterCidrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of transit router CIDR blocks.
    shared_ptr<vector<ListTransitRouterCidrResponseBody::CidrLists>> cidrLists_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
