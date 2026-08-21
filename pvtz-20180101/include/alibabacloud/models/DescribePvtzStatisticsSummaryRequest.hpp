// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPVTZSTATISTICSSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPVTZSTATISTICSSUMMARYREQUEST_HPP_
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
  class DescribePvtzStatisticsSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePvtzStatisticsSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(GrowType, growType_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(NetworkParams, networkParams_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Rcode, rcode_);
      DARABONBA_PTR_TO_JSON(ServerRegion, serverRegion_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_TO_JSON(StatisticalType, statisticalType_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePvtzStatisticsSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(GrowType, growType_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(NetworkParams, networkParams_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Rcode, rcode_);
      DARABONBA_PTR_FROM_JSON(ServerRegion, serverRegion_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_FROM_JSON(StatisticalType, statisticalType_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    DescribePvtzStatisticsSummaryRequest() = default ;
    DescribePvtzStatisticsSummaryRequest(const DescribePvtzStatisticsSummaryRequest &) = default ;
    DescribePvtzStatisticsSummaryRequest(DescribePvtzStatisticsSummaryRequest &&) = default ;
    DescribePvtzStatisticsSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePvtzStatisticsSummaryRequest() = default ;
    DescribePvtzStatisticsSummaryRequest& operator=(const DescribePvtzStatisticsSummaryRequest &) = default ;
    DescribePvtzStatisticsSummaryRequest& operator=(DescribePvtzStatisticsSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkParams& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcOwner, vpcOwner_);
        DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkParams& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcOwner, vpcOwner_);
        DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
      };
      NetworkParams() = default ;
      NetworkParams(const NetworkParams &) = default ;
      NetworkParams(NetworkParams &&) = default ;
      NetworkParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkParams() = default ;
      NetworkParams& operator=(const NetworkParams &) = default ;
      NetworkParams& operator=(NetworkParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->vpcId_ == nullptr && this->vpcOwner_ == nullptr && this->vpcType_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline NetworkParams& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NetworkParams& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcOwner Field Functions 
      bool hasVpcOwner() const { return this->vpcOwner_ != nullptr;};
      void deleteVpcOwner() { this->vpcOwner_ = nullptr;};
      inline string getVpcOwner() const { DARABONBA_PTR_GET_DEFAULT(vpcOwner_, "") };
      inline NetworkParams& setVpcOwner(string vpcOwner) { DARABONBA_PTR_SET_VALUE(vpcOwner_, vpcOwner) };


      // vpcType Field Functions 
      bool hasVpcType() const { return this->vpcType_ != nullptr;};
      void deleteVpcType() { this->vpcType_ = nullptr;};
      inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
      inline NetworkParams& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


    protected:
      // The ID of the region where the VPC is deployed.
      shared_ptr<string> regionId_ {};
      // The ID of the VPC.
      shared_ptr<string> vpcId_ {};
      // The ID of the Alibaba Cloud account that owns the VPC.
      shared_ptr<string> vpcOwner_ {};
      // The type of the VPC.
      // 
      // - STANDARD: A standard VPC.
      // 
      // - EDS: A VPC for Elastic Desktop Service (EDS).
      shared_ptr<string> vpcType_ {};
    };

    virtual bool empty() const override { return this->direction_ == nullptr
        && this->domainName_ == nullptr && this->endTimestamp_ == nullptr && this->growType_ == nullptr && this->module_ == nullptr && this->networkParams_ == nullptr
        && this->orderBy_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->period_ == nullptr && this->rcode_ == nullptr
        && this->serverRegion_ == nullptr && this->startTimestamp_ == nullptr && this->statisticalType_ == nullptr && this->zoneName_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribePvtzStatisticsSummaryRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribePvtzStatisticsSummaryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline string getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
    inline DescribePvtzStatisticsSummaryRequest& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // growType Field Functions 
    bool hasGrowType() const { return this->growType_ != nullptr;};
    void deleteGrowType() { this->growType_ = nullptr;};
    inline string getGrowType() const { DARABONBA_PTR_GET_DEFAULT(growType_, "") };
    inline DescribePvtzStatisticsSummaryRequest& setGrowType(string growType) { DARABONBA_PTR_SET_VALUE(growType_, growType) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DescribePvtzStatisticsSummaryRequest& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // networkParams Field Functions 
    bool hasNetworkParams() const { return this->networkParams_ != nullptr;};
    void deleteNetworkParams() { this->networkParams_ = nullptr;};
    inline const vector<DescribePvtzStatisticsSummaryRequest::NetworkParams> & getNetworkParams() const { DARABONBA_PTR_GET_CONST(networkParams_, vector<DescribePvtzStatisticsSummaryRequest::NetworkParams>) };
    inline vector<DescribePvtzStatisticsSummaryRequest::NetworkParams> getNetworkParams() { DARABONBA_PTR_GET(networkParams_, vector<DescribePvtzStatisticsSummaryRequest::NetworkParams>) };
    inline DescribePvtzStatisticsSummaryRequest& setNetworkParams(const vector<DescribePvtzStatisticsSummaryRequest::NetworkParams> & networkParams) { DARABONBA_PTR_SET_VALUE(networkParams_, networkParams) };
    inline DescribePvtzStatisticsSummaryRequest& setNetworkParams(vector<DescribePvtzStatisticsSummaryRequest::NetworkParams> && networkParams) { DARABONBA_PTR_SET_RVALUE(networkParams_, networkParams) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribePvtzStatisticsSummaryRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePvtzStatisticsSummaryRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePvtzStatisticsSummaryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribePvtzStatisticsSummaryRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // rcode Field Functions 
    bool hasRcode() const { return this->rcode_ != nullptr;};
    void deleteRcode() { this->rcode_ = nullptr;};
    inline string getRcode() const { DARABONBA_PTR_GET_DEFAULT(rcode_, "") };
    inline DescribePvtzStatisticsSummaryRequest& setRcode(string rcode) { DARABONBA_PTR_SET_VALUE(rcode_, rcode) };


    // serverRegion Field Functions 
    bool hasServerRegion() const { return this->serverRegion_ != nullptr;};
    void deleteServerRegion() { this->serverRegion_ = nullptr;};
    inline string getServerRegion() const { DARABONBA_PTR_GET_DEFAULT(serverRegion_, "") };
    inline DescribePvtzStatisticsSummaryRequest& setServerRegion(string serverRegion) { DARABONBA_PTR_SET_VALUE(serverRegion_, serverRegion) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline string getStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, "") };
    inline DescribePvtzStatisticsSummaryRequest& setStartTimestamp(string startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


    // statisticalType Field Functions 
    bool hasStatisticalType() const { return this->statisticalType_ != nullptr;};
    void deleteStatisticalType() { this->statisticalType_ = nullptr;};
    inline string getStatisticalType() const { DARABONBA_PTR_GET_DEFAULT(statisticalType_, "") };
    inline DescribePvtzStatisticsSummaryRequest& setStatisticalType(string statisticalType) { DARABONBA_PTR_SET_VALUE(statisticalType_, statisticalType) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline DescribePvtzStatisticsSummaryRequest& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    // The sort order. Valid values: ASC and DESC.
    shared_ptr<string> direction_ {};
    // The domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range to query, specified as a UNIX timestamp in milliseconds.
    shared_ptr<string> endTimestamp_ {};
    // Specifies the type of change in request volume to report. Valid values: up (request spikes) and down (request drops).
    shared_ptr<string> growType_ {};
    // The statistics module. Valid values: AUTHORITY, AUTH_FAST, AUTH_SLOW, GLOBAL, CACHE, FORWARD, and RECURSION.
    shared_ptr<string> module_ {};
    // The network parameters.
    shared_ptr<vector<DescribePvtzStatisticsSummaryRequest::NetworkParams>> networkParams_ {};
    // The field by which to sort the results. To sort by fluctuation ratio, set this parameter to fluctuation_ratio.
    shared_ptr<string> orderBy_ {};
    // The page number to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The time granularity for the statistics.
    shared_ptr<string> period_ {};
    // The DNS response code.
    shared_ptr<string> rcode_ {};
    // The region.
    shared_ptr<string> serverRegion_ {};
    // The beginning of the time range to query, specified as a UNIX timestamp in milliseconds.
    shared_ptr<string> startTimestamp_ {};
    // The type of statistics to collect. Valid values: QTYPE_RATIO: The ratio of DNS request record types. NEGATIVE_RCODE: Statistics on negative DNS responses. RCODE_DOMAIN: The top domain names that receive negative responses. RCODE_SOURCE_IP: The top source IP addresses for requests to a specified domain name that receive negative responses. REQUEST_ZONE: The top zones by request volume. REQUEST_DOMAIN: The top subdomains by request volume. VPC_RATIO: The ratio of request sources. SOURCE_VPC: Analysis of high-traffic source networks. SOURCE_IP: Statistics on source IP addresses. LINE_RATIO: The percentage of traffic per resolution line. LINE_HIT: Details about resolution line hits.
    shared_ptr<string> statisticalType_ {};
    // The zone name.
    shared_ptr<string> zoneName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
