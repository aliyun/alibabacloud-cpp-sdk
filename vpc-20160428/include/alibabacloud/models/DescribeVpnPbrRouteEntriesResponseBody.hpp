// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNPBRROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNPBRROUTEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnPbrRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnPbrRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnPbrRouteEntries, vpnPbrRouteEntries_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnPbrRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnPbrRouteEntries, vpnPbrRouteEntries_);
    };
    DescribeVpnPbrRouteEntriesResponseBody() = default ;
    DescribeVpnPbrRouteEntriesResponseBody(const DescribeVpnPbrRouteEntriesResponseBody &) = default ;
    DescribeVpnPbrRouteEntriesResponseBody(DescribeVpnPbrRouteEntriesResponseBody &&) = default ;
    DescribeVpnPbrRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnPbrRouteEntriesResponseBody() = default ;
    DescribeVpnPbrRouteEntriesResponseBody& operator=(const DescribeVpnPbrRouteEntriesResponseBody &) = default ;
    DescribeVpnPbrRouteEntriesResponseBody& operator=(DescribeVpnPbrRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpnPbrRouteEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpnPbrRouteEntries& obj) { 
        DARABONBA_PTR_TO_JSON(VpnPbrRouteEntry, vpnPbrRouteEntry_);
      };
      friend void from_json(const Darabonba::Json& j, VpnPbrRouteEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(VpnPbrRouteEntry, vpnPbrRouteEntry_);
      };
      VpnPbrRouteEntries() = default ;
      VpnPbrRouteEntries(const VpnPbrRouteEntries &) = default ;
      VpnPbrRouteEntries(VpnPbrRouteEntries &&) = default ;
      VpnPbrRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpnPbrRouteEntries() = default ;
      VpnPbrRouteEntries& operator=(const VpnPbrRouteEntries &) = default ;
      VpnPbrRouteEntries& operator=(VpnPbrRouteEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpnPbrRouteEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpnPbrRouteEntry& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
          DARABONBA_PTR_TO_JSON(NextHopTunnelId, nextHopTunnelId_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(RouteDest, routeDest_);
          DARABONBA_PTR_TO_JSON(RouteSource, routeSource_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(VpnInstanceId, vpnInstanceId_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, VpnPbrRouteEntry& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
          DARABONBA_PTR_FROM_JSON(NextHopTunnelId, nextHopTunnelId_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(RouteDest, routeDest_);
          DARABONBA_PTR_FROM_JSON(RouteSource, routeSource_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(VpnInstanceId, vpnInstanceId_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        VpnPbrRouteEntry() = default ;
        VpnPbrRouteEntry(const VpnPbrRouteEntry &) = default ;
        VpnPbrRouteEntry(VpnPbrRouteEntry &&) = default ;
        VpnPbrRouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpnPbrRouteEntry() = default ;
        VpnPbrRouteEntry& operator=(const VpnPbrRouteEntry &) = default ;
        VpnPbrRouteEntry& operator=(VpnPbrRouteEntry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->nextHop_ == nullptr && this->nextHopTunnelId_ == nullptr && this->priority_ == nullptr && this->routeDest_ == nullptr && this->routeSource_ == nullptr
        && this->state_ == nullptr && this->vpnInstanceId_ == nullptr && this->weight_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline VpnPbrRouteEntry& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // nextHop Field Functions 
        bool hasNextHop() const { return this->nextHop_ != nullptr;};
        void deleteNextHop() { this->nextHop_ = nullptr;};
        inline string getNextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
        inline VpnPbrRouteEntry& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


        // nextHopTunnelId Field Functions 
        bool hasNextHopTunnelId() const { return this->nextHopTunnelId_ != nullptr;};
        void deleteNextHopTunnelId() { this->nextHopTunnelId_ = nullptr;};
        inline string getNextHopTunnelId() const { DARABONBA_PTR_GET_DEFAULT(nextHopTunnelId_, "") };
        inline VpnPbrRouteEntry& setNextHopTunnelId(string nextHopTunnelId) { DARABONBA_PTR_SET_VALUE(nextHopTunnelId_, nextHopTunnelId) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline VpnPbrRouteEntry& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // routeDest Field Functions 
        bool hasRouteDest() const { return this->routeDest_ != nullptr;};
        void deleteRouteDest() { this->routeDest_ = nullptr;};
        inline string getRouteDest() const { DARABONBA_PTR_GET_DEFAULT(routeDest_, "") };
        inline VpnPbrRouteEntry& setRouteDest(string routeDest) { DARABONBA_PTR_SET_VALUE(routeDest_, routeDest) };


        // routeSource Field Functions 
        bool hasRouteSource() const { return this->routeSource_ != nullptr;};
        void deleteRouteSource() { this->routeSource_ = nullptr;};
        inline string getRouteSource() const { DARABONBA_PTR_GET_DEFAULT(routeSource_, "") };
        inline VpnPbrRouteEntry& setRouteSource(string routeSource) { DARABONBA_PTR_SET_VALUE(routeSource_, routeSource) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline VpnPbrRouteEntry& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // vpnInstanceId Field Functions 
        bool hasVpnInstanceId() const { return this->vpnInstanceId_ != nullptr;};
        void deleteVpnInstanceId() { this->vpnInstanceId_ = nullptr;};
        inline string getVpnInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpnInstanceId_, "") };
        inline VpnPbrRouteEntry& setVpnInstanceId(string vpnInstanceId) { DARABONBA_PTR_SET_VALUE(vpnInstanceId_, vpnInstanceId) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline VpnPbrRouteEntry& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The time when the policy-based route was created. Unit: millisecond.
        // 
        // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> createTime_ {};
        // The next hop of the policy-based route.
        shared_ptr<string> nextHop_ {};
        // The ID of the tunnel associated with the next hop of the policy-based route.
        // 
        // This parameter is returned only if the VPN gateway supports IPsec-VPN connections in dual-tunnel mode.
        shared_ptr<string> nextHopTunnelId_ {};
        // The priority of the policy-based route.
        // 
        // A smaller value indicates a higher priority.
        shared_ptr<int32_t> priority_ {};
        // The destination CIDR block of the policy-based route.
        shared_ptr<string> routeDest_ {};
        // The source CIDR block of the policy-based route.
        shared_ptr<string> routeSource_ {};
        // The status of the policy-based route. Valid values:
        // 
        // *   **published**: advertised to the VPC route table.
        // *   **normal**: not advertised to the VPC route table.
        shared_ptr<string> state_ {};
        // The ID of the VPN gateway.
        shared_ptr<string> vpnInstanceId_ {};
        // The weight of the policy-based route.
        // 
        // For a VPN gateway that supports IPsec-VPN connections in single-tunnel mode, the weight of a policy-based route indicates the priority of the route.
        // 
        // *   **100**: a high priority If multiple policy-based routes with the same source CIDR block and destination CIDR block exist, the IPsec-VPN connection associated with the policy-based route is the active connection.
        // *   **0**: a low priority If multiple policy-based routes with the same source CIDR block and destination CIDR block exist, the IPsec-VPN connection associated with the policy-based route is the standby connection.
        // 
        // >  For a VPN gateway that does not support IPsec-VPN connections in single-tunnel mode, this parameter does not take effect.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->vpnPbrRouteEntry_ == nullptr; };
      // vpnPbrRouteEntry Field Functions 
      bool hasVpnPbrRouteEntry() const { return this->vpnPbrRouteEntry_ != nullptr;};
      void deleteVpnPbrRouteEntry() { this->vpnPbrRouteEntry_ = nullptr;};
      inline const vector<VpnPbrRouteEntries::VpnPbrRouteEntry> & getVpnPbrRouteEntry() const { DARABONBA_PTR_GET_CONST(vpnPbrRouteEntry_, vector<VpnPbrRouteEntries::VpnPbrRouteEntry>) };
      inline vector<VpnPbrRouteEntries::VpnPbrRouteEntry> getVpnPbrRouteEntry() { DARABONBA_PTR_GET(vpnPbrRouteEntry_, vector<VpnPbrRouteEntries::VpnPbrRouteEntry>) };
      inline VpnPbrRouteEntries& setVpnPbrRouteEntry(const vector<VpnPbrRouteEntries::VpnPbrRouteEntry> & vpnPbrRouteEntry) { DARABONBA_PTR_SET_VALUE(vpnPbrRouteEntry_, vpnPbrRouteEntry) };
      inline VpnPbrRouteEntries& setVpnPbrRouteEntry(vector<VpnPbrRouteEntries::VpnPbrRouteEntry> && vpnPbrRouteEntry) { DARABONBA_PTR_SET_RVALUE(vpnPbrRouteEntry_, vpnPbrRouteEntry) };


    protected:
      shared_ptr<vector<VpnPbrRouteEntries::VpnPbrRouteEntry>> vpnPbrRouteEntry_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vpnPbrRouteEntries_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnPbrRouteEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnPbrRouteEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnPbrRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpnPbrRouteEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnPbrRouteEntries Field Functions 
    bool hasVpnPbrRouteEntries() const { return this->vpnPbrRouteEntries_ != nullptr;};
    void deleteVpnPbrRouteEntries() { this->vpnPbrRouteEntries_ = nullptr;};
    inline const DescribeVpnPbrRouteEntriesResponseBody::VpnPbrRouteEntries & getVpnPbrRouteEntries() const { DARABONBA_PTR_GET_CONST(vpnPbrRouteEntries_, DescribeVpnPbrRouteEntriesResponseBody::VpnPbrRouteEntries) };
    inline DescribeVpnPbrRouteEntriesResponseBody::VpnPbrRouteEntries getVpnPbrRouteEntries() { DARABONBA_PTR_GET(vpnPbrRouteEntries_, DescribeVpnPbrRouteEntriesResponseBody::VpnPbrRouteEntries) };
    inline DescribeVpnPbrRouteEntriesResponseBody& setVpnPbrRouteEntries(const DescribeVpnPbrRouteEntriesResponseBody::VpnPbrRouteEntries & vpnPbrRouteEntries) { DARABONBA_PTR_SET_VALUE(vpnPbrRouteEntries_, vpnPbrRouteEntries) };
    inline DescribeVpnPbrRouteEntriesResponseBody& setVpnPbrRouteEntries(DescribeVpnPbrRouteEntriesResponseBody::VpnPbrRouteEntries && vpnPbrRouteEntries) { DARABONBA_PTR_SET_RVALUE(vpnPbrRouteEntries_, vpnPbrRouteEntries) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The list of policy-based routes.
    shared_ptr<DescribeVpnPbrRouteEntriesResponseBody::VpnPbrRouteEntries> vpnPbrRouteEntries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
