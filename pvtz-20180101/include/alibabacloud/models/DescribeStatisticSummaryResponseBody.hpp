// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTATISTICSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTATISTICSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeStatisticSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStatisticSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpcRequestTops, vpcRequestTops_);
      DARABONBA_PTR_TO_JSON(ZoneRequestTops, zoneRequestTops_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStatisticSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpcRequestTops, vpcRequestTops_);
      DARABONBA_PTR_FROM_JSON(ZoneRequestTops, zoneRequestTops_);
    };
    DescribeStatisticSummaryResponseBody() = default ;
    DescribeStatisticSummaryResponseBody(const DescribeStatisticSummaryResponseBody &) = default ;
    DescribeStatisticSummaryResponseBody(DescribeStatisticSummaryResponseBody &&) = default ;
    DescribeStatisticSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStatisticSummaryResponseBody() = default ;
    DescribeStatisticSummaryResponseBody& operator=(const DescribeStatisticSummaryResponseBody &) = default ;
    DescribeStatisticSummaryResponseBody& operator=(DescribeStatisticSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneRequestTops : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneRequestTops& obj) { 
        DARABONBA_PTR_TO_JSON(ZoneRequestTop, zoneRequestTop_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneRequestTops& obj) { 
        DARABONBA_PTR_FROM_JSON(ZoneRequestTop, zoneRequestTop_);
      };
      ZoneRequestTops() = default ;
      ZoneRequestTops(const ZoneRequestTops &) = default ;
      ZoneRequestTops(ZoneRequestTops &&) = default ;
      ZoneRequestTops(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZoneRequestTops() = default ;
      ZoneRequestTops& operator=(const ZoneRequestTops &) = default ;
      ZoneRequestTops& operator=(ZoneRequestTops &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ZoneRequestTop : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ZoneRequestTop& obj) { 
          DARABONBA_PTR_TO_JSON(BizType, bizType_);
          DARABONBA_PTR_TO_JSON(RequestCount, requestCount_);
          DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
        };
        friend void from_json(const Darabonba::Json& j, ZoneRequestTop& obj) { 
          DARABONBA_PTR_FROM_JSON(BizType, bizType_);
          DARABONBA_PTR_FROM_JSON(RequestCount, requestCount_);
          DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
        };
        ZoneRequestTop() = default ;
        ZoneRequestTop(const ZoneRequestTop &) = default ;
        ZoneRequestTop(ZoneRequestTop &&) = default ;
        ZoneRequestTop(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ZoneRequestTop() = default ;
        ZoneRequestTop& operator=(const ZoneRequestTop &) = default ;
        ZoneRequestTop& operator=(ZoneRequestTop &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizType_ == nullptr
        && this->requestCount_ == nullptr && this->zoneName_ == nullptr; };
        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline ZoneRequestTop& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // requestCount Field Functions 
        bool hasRequestCount() const { return this->requestCount_ != nullptr;};
        void deleteRequestCount() { this->requestCount_ = nullptr;};
        inline int64_t getRequestCount() const { DARABONBA_PTR_GET_DEFAULT(requestCount_, 0L) };
        inline ZoneRequestTop& setRequestCount(int64_t requestCount) { DARABONBA_PTR_SET_VALUE(requestCount_, requestCount) };


        // zoneName Field Functions 
        bool hasZoneName() const { return this->zoneName_ != nullptr;};
        void deleteZoneName() { this->zoneName_ = nullptr;};
        inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
        inline ZoneRequestTop& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


      protected:
        // The business type. Valid values:
        // 
        // *   AUTH_ZONE: authoritative zone
        // *   RESOLVER_RULE: forwarding rule
        // *   INBOUND: inbound endpoint
        shared_ptr<string> bizType_ {};
        // The number of DNS requests on the previous day.
        shared_ptr<int64_t> requestCount_ {};
        // The zone name.
        shared_ptr<string> zoneName_ {};
      };

      virtual bool empty() const override { return this->zoneRequestTop_ == nullptr; };
      // zoneRequestTop Field Functions 
      bool hasZoneRequestTop() const { return this->zoneRequestTop_ != nullptr;};
      void deleteZoneRequestTop() { this->zoneRequestTop_ = nullptr;};
      inline const vector<ZoneRequestTops::ZoneRequestTop> & getZoneRequestTop() const { DARABONBA_PTR_GET_CONST(zoneRequestTop_, vector<ZoneRequestTops::ZoneRequestTop>) };
      inline vector<ZoneRequestTops::ZoneRequestTop> getZoneRequestTop() { DARABONBA_PTR_GET(zoneRequestTop_, vector<ZoneRequestTops::ZoneRequestTop>) };
      inline ZoneRequestTops& setZoneRequestTop(const vector<ZoneRequestTops::ZoneRequestTop> & zoneRequestTop) { DARABONBA_PTR_SET_VALUE(zoneRequestTop_, zoneRequestTop) };
      inline ZoneRequestTops& setZoneRequestTop(vector<ZoneRequestTops::ZoneRequestTop> && zoneRequestTop) { DARABONBA_PTR_SET_RVALUE(zoneRequestTop_, zoneRequestTop) };


    protected:
      shared_ptr<vector<ZoneRequestTops::ZoneRequestTop>> zoneRequestTop_ {};
    };

    class VpcRequestTops : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcRequestTops& obj) { 
        DARABONBA_PTR_TO_JSON(VpcRequestTop, vpcRequestTop_);
      };
      friend void from_json(const Darabonba::Json& j, VpcRequestTops& obj) { 
        DARABONBA_PTR_FROM_JSON(VpcRequestTop, vpcRequestTop_);
      };
      VpcRequestTops() = default ;
      VpcRequestTops(const VpcRequestTops &) = default ;
      VpcRequestTops(VpcRequestTops &&) = default ;
      VpcRequestTops(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpcRequestTops() = default ;
      VpcRequestTops& operator=(const VpcRequestTops &) = default ;
      VpcRequestTops& operator=(VpcRequestTops &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpcRequestTop : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpcRequestTop& obj) { 
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RegionName, regionName_);
          DARABONBA_PTR_TO_JSON(RequestCount, requestCount_);
          DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
        };
        friend void from_json(const Darabonba::Json& j, VpcRequestTop& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
          DARABONBA_PTR_FROM_JSON(RequestCount, requestCount_);
          DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
        };
        VpcRequestTop() = default ;
        VpcRequestTop(const VpcRequestTop &) = default ;
        VpcRequestTop(VpcRequestTop &&) = default ;
        VpcRequestTop(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpcRequestTop() = default ;
        VpcRequestTop& operator=(const VpcRequestTop &) = default ;
        VpcRequestTop& operator=(VpcRequestTop &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->regionId_ == nullptr
        && this->regionName_ == nullptr && this->requestCount_ == nullptr && this->tunnelId_ == nullptr && this->vpcId_ == nullptr && this->vpcType_ == nullptr; };
        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline VpcRequestTop& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // regionName Field Functions 
        bool hasRegionName() const { return this->regionName_ != nullptr;};
        void deleteRegionName() { this->regionName_ = nullptr;};
        inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
        inline VpcRequestTop& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


        // requestCount Field Functions 
        bool hasRequestCount() const { return this->requestCount_ != nullptr;};
        void deleteRequestCount() { this->requestCount_ = nullptr;};
        inline int64_t getRequestCount() const { DARABONBA_PTR_GET_DEFAULT(requestCount_, 0L) };
        inline VpcRequestTop& setRequestCount(int64_t requestCount) { DARABONBA_PTR_SET_VALUE(requestCount_, requestCount) };


        // tunnelId Field Functions 
        bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
        void deleteTunnelId() { this->tunnelId_ = nullptr;};
        inline string getTunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
        inline VpcRequestTop& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VpcRequestTop& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcType Field Functions 
        bool hasVpcType() const { return this->vpcType_ != nullptr;};
        void deleteVpcType() { this->vpcType_ = nullptr;};
        inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
        inline VpcRequestTop& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


      protected:
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The name of the region.
        shared_ptr<string> regionName_ {};
        // The number of DNS requests on the previous day.
        shared_ptr<int64_t> requestCount_ {};
        // The tunnel ID.
        shared_ptr<string> tunnelId_ {};
        // The VPC ID.
        shared_ptr<string> vpcId_ {};
        // The VPC type. Valid values:
        // 
        // *   STANDARD: standard VPC
        // *   EDS: Elastic Desktop Service (EDS) workspace VPC
        shared_ptr<string> vpcType_ {};
      };

      virtual bool empty() const override { return this->vpcRequestTop_ == nullptr; };
      // vpcRequestTop Field Functions 
      bool hasVpcRequestTop() const { return this->vpcRequestTop_ != nullptr;};
      void deleteVpcRequestTop() { this->vpcRequestTop_ = nullptr;};
      inline const vector<VpcRequestTops::VpcRequestTop> & getVpcRequestTop() const { DARABONBA_PTR_GET_CONST(vpcRequestTop_, vector<VpcRequestTops::VpcRequestTop>) };
      inline vector<VpcRequestTops::VpcRequestTop> getVpcRequestTop() { DARABONBA_PTR_GET(vpcRequestTop_, vector<VpcRequestTops::VpcRequestTop>) };
      inline VpcRequestTops& setVpcRequestTop(const vector<VpcRequestTops::VpcRequestTop> & vpcRequestTop) { DARABONBA_PTR_SET_VALUE(vpcRequestTop_, vpcRequestTop) };
      inline VpcRequestTops& setVpcRequestTop(vector<VpcRequestTops::VpcRequestTop> && vpcRequestTop) { DARABONBA_PTR_SET_RVALUE(vpcRequestTop_, vpcRequestTop) };


    protected:
      shared_ptr<vector<VpcRequestTops::VpcRequestTop>> vpcRequestTop_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->vpcRequestTops_ == nullptr && this->zoneRequestTops_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStatisticSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeStatisticSummaryResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcRequestTops Field Functions 
    bool hasVpcRequestTops() const { return this->vpcRequestTops_ != nullptr;};
    void deleteVpcRequestTops() { this->vpcRequestTops_ = nullptr;};
    inline const DescribeStatisticSummaryResponseBody::VpcRequestTops & getVpcRequestTops() const { DARABONBA_PTR_GET_CONST(vpcRequestTops_, DescribeStatisticSummaryResponseBody::VpcRequestTops) };
    inline DescribeStatisticSummaryResponseBody::VpcRequestTops getVpcRequestTops() { DARABONBA_PTR_GET(vpcRequestTops_, DescribeStatisticSummaryResponseBody::VpcRequestTops) };
    inline DescribeStatisticSummaryResponseBody& setVpcRequestTops(const DescribeStatisticSummaryResponseBody::VpcRequestTops & vpcRequestTops) { DARABONBA_PTR_SET_VALUE(vpcRequestTops_, vpcRequestTops) };
    inline DescribeStatisticSummaryResponseBody& setVpcRequestTops(DescribeStatisticSummaryResponseBody::VpcRequestTops && vpcRequestTops) { DARABONBA_PTR_SET_RVALUE(vpcRequestTops_, vpcRequestTops) };


    // zoneRequestTops Field Functions 
    bool hasZoneRequestTops() const { return this->zoneRequestTops_ != nullptr;};
    void deleteZoneRequestTops() { this->zoneRequestTops_ = nullptr;};
    inline const DescribeStatisticSummaryResponseBody::ZoneRequestTops & getZoneRequestTops() const { DARABONBA_PTR_GET_CONST(zoneRequestTops_, DescribeStatisticSummaryResponseBody::ZoneRequestTops) };
    inline DescribeStatisticSummaryResponseBody::ZoneRequestTops getZoneRequestTops() { DARABONBA_PTR_GET(zoneRequestTops_, DescribeStatisticSummaryResponseBody::ZoneRequestTops) };
    inline DescribeStatisticSummaryResponseBody& setZoneRequestTops(const DescribeStatisticSummaryResponseBody::ZoneRequestTops & zoneRequestTops) { DARABONBA_PTR_SET_VALUE(zoneRequestTops_, zoneRequestTops) };
    inline DescribeStatisticSummaryResponseBody& setZoneRequestTops(DescribeStatisticSummaryResponseBody::ZoneRequestTops && zoneRequestTops) { DARABONBA_PTR_SET_RVALUE(zoneRequestTops_, zoneRequestTops) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
    // The top three VPCs with the largest number of DNS requests.
    shared_ptr<DescribeStatisticSummaryResponseBody::VpcRequestTops> vpcRequestTops_ {};
    // The top three zones with the largest number of DNS requests.
    shared_ptr<DescribeStatisticSummaryResponseBody::ZoneRequestTops> zoneRequestTops_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
