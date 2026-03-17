// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIEWSMARTACCESSGATEWAYROUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VIEWSMARTACCESSGATEWAYROUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ViewSmartAccessGatewayRoutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ViewSmartAccessGatewayRoutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Routes, routes_);
    };
    friend void from_json(const Darabonba::Json& j, ViewSmartAccessGatewayRoutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Routes, routes_);
    };
    ViewSmartAccessGatewayRoutesResponseBody() = default ;
    ViewSmartAccessGatewayRoutesResponseBody(const ViewSmartAccessGatewayRoutesResponseBody &) = default ;
    ViewSmartAccessGatewayRoutesResponseBody(ViewSmartAccessGatewayRoutesResponseBody &&) = default ;
    ViewSmartAccessGatewayRoutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ViewSmartAccessGatewayRoutesResponseBody() = default ;
    ViewSmartAccessGatewayRoutesResponseBody& operator=(const ViewSmartAccessGatewayRoutesResponseBody &) = default ;
    ViewSmartAccessGatewayRoutesResponseBody& operator=(ViewSmartAccessGatewayRoutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Routes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Routes& obj) { 
        DARABONBA_PTR_TO_JSON(ConflictCidrs, conflictCidrs_);
        DARABONBA_PTR_TO_JSON(Cost, cost_);
        DARABONBA_PTR_TO_JSON(Dst, dst_);
        DARABONBA_PTR_TO_JSON(Idx, idx_);
        DARABONBA_PTR_TO_JSON(Nexthop, nexthop_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Routes& obj) { 
        DARABONBA_PTR_FROM_JSON(ConflictCidrs, conflictCidrs_);
        DARABONBA_PTR_FROM_JSON(Cost, cost_);
        DARABONBA_PTR_FROM_JSON(Dst, dst_);
        DARABONBA_PTR_FROM_JSON(Idx, idx_);
        DARABONBA_PTR_FROM_JSON(Nexthop, nexthop_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Routes() = default ;
      Routes(const Routes &) = default ;
      Routes(Routes &&) = default ;
      Routes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Routes() = default ;
      Routes& operator=(const Routes &) = default ;
      Routes& operator=(Routes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->conflictCidrs_ == nullptr
        && this->cost_ == nullptr && this->dst_ == nullptr && this->idx_ == nullptr && this->nexthop_ == nullptr && this->role_ == nullptr
        && this->type_ == nullptr; };
      // conflictCidrs Field Functions 
      bool hasConflictCidrs() const { return this->conflictCidrs_ != nullptr;};
      void deleteConflictCidrs() { this->conflictCidrs_ = nullptr;};
      inline const vector<string> & getConflictCidrs() const { DARABONBA_PTR_GET_CONST(conflictCidrs_, vector<string>) };
      inline vector<string> getConflictCidrs() { DARABONBA_PTR_GET(conflictCidrs_, vector<string>) };
      inline Routes& setConflictCidrs(const vector<string> & conflictCidrs) { DARABONBA_PTR_SET_VALUE(conflictCidrs_, conflictCidrs) };
      inline Routes& setConflictCidrs(vector<string> && conflictCidrs) { DARABONBA_PTR_SET_RVALUE(conflictCidrs_, conflictCidrs) };


      // cost Field Functions 
      bool hasCost() const { return this->cost_ != nullptr;};
      void deleteCost() { this->cost_ = nullptr;};
      inline string getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, "") };
      inline Routes& setCost(string cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


      // dst Field Functions 
      bool hasDst() const { return this->dst_ != nullptr;};
      void deleteDst() { this->dst_ = nullptr;};
      inline string getDst() const { DARABONBA_PTR_GET_DEFAULT(dst_, "") };
      inline Routes& setDst(string dst) { DARABONBA_PTR_SET_VALUE(dst_, dst) };


      // idx Field Functions 
      bool hasIdx() const { return this->idx_ != nullptr;};
      void deleteIdx() { this->idx_ = nullptr;};
      inline int32_t getIdx() const { DARABONBA_PTR_GET_DEFAULT(idx_, 0) };
      inline Routes& setIdx(int32_t idx) { DARABONBA_PTR_SET_VALUE(idx_, idx) };


      // nexthop Field Functions 
      bool hasNexthop() const { return this->nexthop_ != nullptr;};
      void deleteNexthop() { this->nexthop_ = nullptr;};
      inline string getNexthop() const { DARABONBA_PTR_GET_DEFAULT(nexthop_, "") };
      inline Routes& setNexthop(string nexthop) { DARABONBA_PTR_SET_VALUE(nexthop_, nexthop) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Routes& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Routes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The CIDR blocks that overlap with each other.
      shared_ptr<vector<string>> conflictCidrs_ {};
      // The route cost.
      // 
      // The first **0** represents the administrative distance (AD).
      // 
      // The second **0** represents the router metric.
      shared_ptr<string> cost_ {};
      // The destination CIDR block.
      shared_ptr<string> dst_ {};
      // The port number. A value of -1 indicates that the next hop points to a VPN tunnel.
      // 
      // Valid values: **-1** to **4294967295**.
      shared_ptr<int32_t> idx_ {};
      // The next hop.
      shared_ptr<string> nexthop_ {};
      // The port role.
      shared_ptr<string> role_ {};
      // The route type. Valid values:
      // 
      // *   **static**
      // *   **bgp**
      // *   **ospf**
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->routes_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ViewSmartAccessGatewayRoutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<ViewSmartAccessGatewayRoutesResponseBody::Routes> & getRoutes() const { DARABONBA_PTR_GET_CONST(routes_, vector<ViewSmartAccessGatewayRoutesResponseBody::Routes>) };
    inline vector<ViewSmartAccessGatewayRoutesResponseBody::Routes> getRoutes() { DARABONBA_PTR_GET(routes_, vector<ViewSmartAccessGatewayRoutesResponseBody::Routes>) };
    inline ViewSmartAccessGatewayRoutesResponseBody& setRoutes(const vector<ViewSmartAccessGatewayRoutesResponseBody::Routes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline ViewSmartAccessGatewayRoutesResponseBody& setRoutes(vector<ViewSmartAccessGatewayRoutesResponseBody::Routes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the queried routes.
    shared_ptr<vector<ViewSmartAccessGatewayRoutesResponseBody::Routes>> routes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
