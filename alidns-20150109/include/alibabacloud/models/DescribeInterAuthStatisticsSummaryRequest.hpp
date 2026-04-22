// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInterAuthStatisticsSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInterAuthStatisticsSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(GrowType, growType_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Rcode, rcode_);
      DARABONBA_PTR_TO_JSON(ServerRegion, serverRegion_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_TO_JSON(StatisticalType, statisticalType_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInterAuthStatisticsSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(GrowType, growType_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Rcode, rcode_);
      DARABONBA_PTR_FROM_JSON(ServerRegion, serverRegion_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_FROM_JSON(StatisticalType, statisticalType_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    DescribeInterAuthStatisticsSummaryRequest() = default ;
    DescribeInterAuthStatisticsSummaryRequest(const DescribeInterAuthStatisticsSummaryRequest &) = default ;
    DescribeInterAuthStatisticsSummaryRequest(DescribeInterAuthStatisticsSummaryRequest &&) = default ;
    DescribeInterAuthStatisticsSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInterAuthStatisticsSummaryRequest() = default ;
    DescribeInterAuthStatisticsSummaryRequest& operator=(const DescribeInterAuthStatisticsSummaryRequest &) = default ;
    DescribeInterAuthStatisticsSummaryRequest& operator=(DescribeInterAuthStatisticsSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && this->domainName_ == nullptr && this->endTimestamp_ == nullptr && this->growType_ == nullptr && this->orderBy_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->period_ == nullptr && this->rcode_ == nullptr && this->serverRegion_ == nullptr && this->sourceType_ == nullptr
        && this->startTimestamp_ == nullptr && this->statisticalType_ == nullptr && this->zoneName_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeInterAuthStatisticsSummaryRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeInterAuthStatisticsSummaryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
    inline DescribeInterAuthStatisticsSummaryRequest& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // growType Field Functions 
    bool hasGrowType() const { return this->growType_ != nullptr;};
    void deleteGrowType() { this->growType_ = nullptr;};
    inline string getGrowType() const { DARABONBA_PTR_GET_DEFAULT(growType_, "") };
    inline DescribeInterAuthStatisticsSummaryRequest& setGrowType(string growType) { DARABONBA_PTR_SET_VALUE(growType_, growType) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeInterAuthStatisticsSummaryRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInterAuthStatisticsSummaryRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInterAuthStatisticsSummaryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeInterAuthStatisticsSummaryRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // rcode Field Functions 
    bool hasRcode() const { return this->rcode_ != nullptr;};
    void deleteRcode() { this->rcode_ = nullptr;};
    inline string getRcode() const { DARABONBA_PTR_GET_DEFAULT(rcode_, "") };
    inline DescribeInterAuthStatisticsSummaryRequest& setRcode(string rcode) { DARABONBA_PTR_SET_VALUE(rcode_, rcode) };


    // serverRegion Field Functions 
    bool hasServerRegion() const { return this->serverRegion_ != nullptr;};
    void deleteServerRegion() { this->serverRegion_ = nullptr;};
    inline string getServerRegion() const { DARABONBA_PTR_GET_DEFAULT(serverRegion_, "") };
    inline DescribeInterAuthStatisticsSummaryRequest& setServerRegion(string serverRegion) { DARABONBA_PTR_SET_VALUE(serverRegion_, serverRegion) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeInterAuthStatisticsSummaryRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int64_t getStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
    inline DescribeInterAuthStatisticsSummaryRequest& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


    // statisticalType Field Functions 
    bool hasStatisticalType() const { return this->statisticalType_ != nullptr;};
    void deleteStatisticalType() { this->statisticalType_ = nullptr;};
    inline string getStatisticalType() const { DARABONBA_PTR_GET_DEFAULT(statisticalType_, "") };
    inline DescribeInterAuthStatisticsSummaryRequest& setStatisticalType(string statisticalType) { DARABONBA_PTR_SET_VALUE(statisticalType_, statisticalType) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline DescribeInterAuthStatisticsSummaryRequest& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    shared_ptr<string> direction_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<int64_t> endTimestamp_ {};
    shared_ptr<string> growType_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> period_ {};
    shared_ptr<string> rcode_ {};
    shared_ptr<string> serverRegion_ {};
    shared_ptr<string> sourceType_ {};
    shared_ptr<int64_t> startTimestamp_ {};
    shared_ptr<string> statisticalType_ {};
    shared_ptr<string> zoneName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
