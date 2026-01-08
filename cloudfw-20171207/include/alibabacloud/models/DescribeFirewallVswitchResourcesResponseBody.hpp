// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeFirewallVswitchResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallVswitchResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VswitchList, vswitchList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallVswitchResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VswitchList, vswitchList_);
    };
    DescribeFirewallVswitchResourcesResponseBody() = default ;
    DescribeFirewallVswitchResourcesResponseBody(const DescribeFirewallVswitchResourcesResponseBody &) = default ;
    DescribeFirewallVswitchResourcesResponseBody(DescribeFirewallVswitchResourcesResponseBody &&) = default ;
    DescribeFirewallVswitchResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallVswitchResourcesResponseBody() = default ;
    DescribeFirewallVswitchResourcesResponseBody& operator=(const DescribeFirewallVswitchResourcesResponseBody &) = default ;
    DescribeFirewallVswitchResourcesResponseBody& operator=(DescribeFirewallVswitchResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VswitchList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VswitchList& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableIpCount, availableIpCount_);
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(FirewallList, firewallList_);
        DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
        DARABONBA_PTR_TO_JSON(RouteTableType, routeTableType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_TO_JSON(VswitchName, vswitchName_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, VswitchList& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableIpCount, availableIpCount_);
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(FirewallList, firewallList_);
        DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
        DARABONBA_PTR_FROM_JSON(RouteTableType, routeTableType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_FROM_JSON(VswitchName, vswitchName_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      VswitchList() = default ;
      VswitchList(const VswitchList &) = default ;
      VswitchList(VswitchList &&) = default ;
      VswitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VswitchList() = default ;
      VswitchList& operator=(const VswitchList &) = default ;
      VswitchList& operator=(VswitchList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FirewallList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FirewallList& obj) { 
          DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
          DARABONBA_PTR_TO_JSON(FirewallName, firewallName_);
          DARABONBA_PTR_TO_JSON(FirewallType, firewallType_);
        };
        friend void from_json(const Darabonba::Json& j, FirewallList& obj) { 
          DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
          DARABONBA_PTR_FROM_JSON(FirewallName, firewallName_);
          DARABONBA_PTR_FROM_JSON(FirewallType, firewallType_);
        };
        FirewallList() = default ;
        FirewallList(const FirewallList &) = default ;
        FirewallList(FirewallList &&) = default ;
        FirewallList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FirewallList() = default ;
        FirewallList& operator=(const FirewallList &) = default ;
        FirewallList& operator=(FirewallList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->firewallId_ == nullptr
        && this->firewallName_ == nullptr && this->firewallType_ == nullptr; };
        // firewallId Field Functions 
        bool hasFirewallId() const { return this->firewallId_ != nullptr;};
        void deleteFirewallId() { this->firewallId_ = nullptr;};
        inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
        inline FirewallList& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


        // firewallName Field Functions 
        bool hasFirewallName() const { return this->firewallName_ != nullptr;};
        void deleteFirewallName() { this->firewallName_ = nullptr;};
        inline string getFirewallName() const { DARABONBA_PTR_GET_DEFAULT(firewallName_, "") };
        inline FirewallList& setFirewallName(string firewallName) { DARABONBA_PTR_SET_VALUE(firewallName_, firewallName) };


        // firewallType Field Functions 
        bool hasFirewallType() const { return this->firewallType_ != nullptr;};
        void deleteFirewallType() { this->firewallType_ = nullptr;};
        inline string getFirewallType() const { DARABONBA_PTR_GET_DEFAULT(firewallType_, "") };
        inline FirewallList& setFirewallType(string firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };


      protected:
        shared_ptr<string> firewallId_ {};
        shared_ptr<string> firewallName_ {};
        shared_ptr<string> firewallType_ {};
      };

      virtual bool empty() const override { return this->availableIpCount_ == nullptr
        && this->cidrBlock_ == nullptr && this->detail_ == nullptr && this->firewallList_ == nullptr && this->routeTableId_ == nullptr && this->routeTableType_ == nullptr
        && this->status_ == nullptr && this->vswitchId_ == nullptr && this->vswitchName_ == nullptr && this->zoneId_ == nullptr; };
      // availableIpCount Field Functions 
      bool hasAvailableIpCount() const { return this->availableIpCount_ != nullptr;};
      void deleteAvailableIpCount() { this->availableIpCount_ = nullptr;};
      inline string getAvailableIpCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpCount_, "") };
      inline VswitchList& setAvailableIpCount(string availableIpCount) { DARABONBA_PTR_SET_VALUE(availableIpCount_, availableIpCount) };


      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline VswitchList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline VswitchList& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // firewallList Field Functions 
      bool hasFirewallList() const { return this->firewallList_ != nullptr;};
      void deleteFirewallList() { this->firewallList_ = nullptr;};
      inline const vector<VswitchList::FirewallList> & getFirewallList() const { DARABONBA_PTR_GET_CONST(firewallList_, vector<VswitchList::FirewallList>) };
      inline vector<VswitchList::FirewallList> getFirewallList() { DARABONBA_PTR_GET(firewallList_, vector<VswitchList::FirewallList>) };
      inline VswitchList& setFirewallList(const vector<VswitchList::FirewallList> & firewallList) { DARABONBA_PTR_SET_VALUE(firewallList_, firewallList) };
      inline VswitchList& setFirewallList(vector<VswitchList::FirewallList> && firewallList) { DARABONBA_PTR_SET_RVALUE(firewallList_, firewallList) };


      // routeTableId Field Functions 
      bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
      void deleteRouteTableId() { this->routeTableId_ = nullptr;};
      inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
      inline VswitchList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


      // routeTableType Field Functions 
      bool hasRouteTableType() const { return this->routeTableType_ != nullptr;};
      void deleteRouteTableType() { this->routeTableType_ = nullptr;};
      inline string getRouteTableType() const { DARABONBA_PTR_GET_DEFAULT(routeTableType_, "") };
      inline VswitchList& setRouteTableType(string routeTableType) { DARABONBA_PTR_SET_VALUE(routeTableType_, routeTableType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VswitchList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline VswitchList& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      // vswitchName Field Functions 
      bool hasVswitchName() const { return this->vswitchName_ != nullptr;};
      void deleteVswitchName() { this->vswitchName_ = nullptr;};
      inline string getVswitchName() const { DARABONBA_PTR_GET_DEFAULT(vswitchName_, "") };
      inline VswitchList& setVswitchName(string vswitchName) { DARABONBA_PTR_SET_VALUE(vswitchName_, vswitchName) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline VswitchList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> availableIpCount_ {};
      shared_ptr<string> cidrBlock_ {};
      shared_ptr<string> detail_ {};
      shared_ptr<vector<VswitchList::FirewallList>> firewallList_ {};
      shared_ptr<string> routeTableId_ {};
      shared_ptr<string> routeTableType_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> vswitchId_ {};
      shared_ptr<string> vswitchName_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->vswitchList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFirewallVswitchResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFirewallVswitchResourcesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vswitchList Field Functions 
    bool hasVswitchList() const { return this->vswitchList_ != nullptr;};
    void deleteVswitchList() { this->vswitchList_ = nullptr;};
    inline const vector<DescribeFirewallVswitchResourcesResponseBody::VswitchList> & getVswitchList() const { DARABONBA_PTR_GET_CONST(vswitchList_, vector<DescribeFirewallVswitchResourcesResponseBody::VswitchList>) };
    inline vector<DescribeFirewallVswitchResourcesResponseBody::VswitchList> getVswitchList() { DARABONBA_PTR_GET(vswitchList_, vector<DescribeFirewallVswitchResourcesResponseBody::VswitchList>) };
    inline DescribeFirewallVswitchResourcesResponseBody& setVswitchList(const vector<DescribeFirewallVswitchResourcesResponseBody::VswitchList> & vswitchList) { DARABONBA_PTR_SET_VALUE(vswitchList_, vswitchList) };
    inline DescribeFirewallVswitchResourcesResponseBody& setVswitchList(vector<DescribeFirewallVswitchResourcesResponseBody::VswitchList> && vswitchList) { DARABONBA_PTR_SET_RVALUE(vswitchList_, vswitchList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<DescribeFirewallVswitchResourcesResponseBody::VswitchList>> vswitchList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
