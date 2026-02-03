// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSITROUTERFLOWTOPNSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSITROUTERFLOWTOPNSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetTransitRouterFlowTopNShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransitRouterFlowTopNShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIdsShrink_);
      DARABONBA_PTR_TO_JSON(BandwithPackageId, bandwithPackageId_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OtherIp, otherIp_);
      DARABONBA_PTR_TO_JSON(OtherPort, otherPort_);
      DARABONBA_PTR_TO_JSON(OtherRegion, otherRegion_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(ThisIp, thisIp_);
      DARABONBA_PTR_TO_JSON(ThisPort, thisPort_);
      DARABONBA_PTR_TO_JSON(ThisRegion, thisRegion_);
      DARABONBA_PTR_TO_JSON(TopN, topN_);
      DARABONBA_PTR_TO_JSON(UseMultiAccount, useMultiAccount_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransitRouterFlowTopNShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(BandwithPackageId, bandwithPackageId_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OtherIp, otherIp_);
      DARABONBA_PTR_FROM_JSON(OtherPort, otherPort_);
      DARABONBA_PTR_FROM_JSON(OtherRegion, otherRegion_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(ThisIp, thisIp_);
      DARABONBA_PTR_FROM_JSON(ThisPort, thisPort_);
      DARABONBA_PTR_FROM_JSON(ThisRegion, thisRegion_);
      DARABONBA_PTR_FROM_JSON(TopN, topN_);
      DARABONBA_PTR_FROM_JSON(UseMultiAccount, useMultiAccount_);
    };
    GetTransitRouterFlowTopNShrinkRequest() = default ;
    GetTransitRouterFlowTopNShrinkRequest(const GetTransitRouterFlowTopNShrinkRequest &) = default ;
    GetTransitRouterFlowTopNShrinkRequest(GetTransitRouterFlowTopNShrinkRequest &&) = default ;
    GetTransitRouterFlowTopNShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransitRouterFlowTopNShrinkRequest() = default ;
    GetTransitRouterFlowTopNShrinkRequest& operator=(const GetTransitRouterFlowTopNShrinkRequest &) = default ;
    GetTransitRouterFlowTopNShrinkRequest& operator=(GetTransitRouterFlowTopNShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIdsShrink_ == nullptr
        && this->bandwithPackageId_ == nullptr && this->beginTime_ == nullptr && this->cenId_ == nullptr && this->direction_ == nullptr && this->endTime_ == nullptr
        && this->groupBy_ == nullptr && this->orderBy_ == nullptr && this->otherIp_ == nullptr && this->otherPort_ == nullptr && this->otherRegion_ == nullptr
        && this->protocol_ == nullptr && this->sort_ == nullptr && this->thisIp_ == nullptr && this->thisPort_ == nullptr && this->thisRegion_ == nullptr
        && this->topN_ == nullptr && this->useMultiAccount_ == nullptr; };
    // accountIdsShrink Field Functions 
    bool hasAccountIdsShrink() const { return this->accountIdsShrink_ != nullptr;};
    void deleteAccountIdsShrink() { this->accountIdsShrink_ = nullptr;};
    inline string getAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(accountIdsShrink_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setAccountIdsShrink(string accountIdsShrink) { DARABONBA_PTR_SET_VALUE(accountIdsShrink_, accountIdsShrink) };


    // bandwithPackageId Field Functions 
    bool hasBandwithPackageId() const { return this->bandwithPackageId_ != nullptr;};
    void deleteBandwithPackageId() { this->bandwithPackageId_ = nullptr;};
    inline string getBandwithPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwithPackageId_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setBandwithPackageId(string bandwithPackageId) { DARABONBA_PTR_SET_VALUE(bandwithPackageId_, bandwithPackageId) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetTransitRouterFlowTopNShrinkRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetTransitRouterFlowTopNShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // otherIp Field Functions 
    bool hasOtherIp() const { return this->otherIp_ != nullptr;};
    void deleteOtherIp() { this->otherIp_ = nullptr;};
    inline string getOtherIp() const { DARABONBA_PTR_GET_DEFAULT(otherIp_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setOtherIp(string otherIp) { DARABONBA_PTR_SET_VALUE(otherIp_, otherIp) };


    // otherPort Field Functions 
    bool hasOtherPort() const { return this->otherPort_ != nullptr;};
    void deleteOtherPort() { this->otherPort_ = nullptr;};
    inline string getOtherPort() const { DARABONBA_PTR_GET_DEFAULT(otherPort_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setOtherPort(string otherPort) { DARABONBA_PTR_SET_VALUE(otherPort_, otherPort) };


    // otherRegion Field Functions 
    bool hasOtherRegion() const { return this->otherRegion_ != nullptr;};
    void deleteOtherRegion() { this->otherRegion_ = nullptr;};
    inline string getOtherRegion() const { DARABONBA_PTR_GET_DEFAULT(otherRegion_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setOtherRegion(string otherRegion) { DARABONBA_PTR_SET_VALUE(otherRegion_, otherRegion) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // thisIp Field Functions 
    bool hasThisIp() const { return this->thisIp_ != nullptr;};
    void deleteThisIp() { this->thisIp_ = nullptr;};
    inline string getThisIp() const { DARABONBA_PTR_GET_DEFAULT(thisIp_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setThisIp(string thisIp) { DARABONBA_PTR_SET_VALUE(thisIp_, thisIp) };


    // thisPort Field Functions 
    bool hasThisPort() const { return this->thisPort_ != nullptr;};
    void deleteThisPort() { this->thisPort_ = nullptr;};
    inline string getThisPort() const { DARABONBA_PTR_GET_DEFAULT(thisPort_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setThisPort(string thisPort) { DARABONBA_PTR_SET_VALUE(thisPort_, thisPort) };


    // thisRegion Field Functions 
    bool hasThisRegion() const { return this->thisRegion_ != nullptr;};
    void deleteThisRegion() { this->thisRegion_ = nullptr;};
    inline string getThisRegion() const { DARABONBA_PTR_GET_DEFAULT(thisRegion_, "") };
    inline GetTransitRouterFlowTopNShrinkRequest& setThisRegion(string thisRegion) { DARABONBA_PTR_SET_VALUE(thisRegion_, thisRegion) };


    // topN Field Functions 
    bool hasTopN() const { return this->topN_ != nullptr;};
    void deleteTopN() { this->topN_ = nullptr;};
    inline int32_t getTopN() const { DARABONBA_PTR_GET_DEFAULT(topN_, 0) };
    inline GetTransitRouterFlowTopNShrinkRequest& setTopN(int32_t topN) { DARABONBA_PTR_SET_VALUE(topN_, topN) };


    // useMultiAccount Field Functions 
    bool hasUseMultiAccount() const { return this->useMultiAccount_ != nullptr;};
    void deleteUseMultiAccount() { this->useMultiAccount_ = nullptr;};
    inline bool getUseMultiAccount() const { DARABONBA_PTR_GET_DEFAULT(useMultiAccount_, false) };
    inline GetTransitRouterFlowTopNShrinkRequest& setUseMultiAccount(bool useMultiAccount) { DARABONBA_PTR_SET_VALUE(useMultiAccount_, useMultiAccount) };


  protected:
    // The IDs of the member accounts.
    shared_ptr<string> accountIdsShrink_ {};
    // The ID of the CEN bandwidth plan.
    shared_ptr<string> bandwithPackageId_ {};
    // The beginning of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. The maximum time range that you can query is 24 hours.
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // The CEN instance ID.
    shared_ptr<string> cenId_ {};
    // The direction of the inter-region traffic in the local regions or for the local IP addresses. Valid values:
    // 
    // *   **in**: inbound traffic
    // *   **out**: outbound traffic
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // The end of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. The maximum time range that you can query is 24 hours.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The dimension for ranking inter-region traffic data. The value of this parameter is case-sensitive. Valid values:
    // 
    // *   **1Tuple**: queries the rankings of inter-region traffic data for the local regions, Cloud Enterprise Network (CEN) instances, and IP addresses.
    // *   **2Tuple**: queries the rankings of inter-region traffic data for the local and remote regions, and the local and remote IP addresses.
    // *   **5Tuple**: queries the rankings of inter-region traffic data for the local and remote IP addresses, local and remote ports, and protocols.
    // *   **Cen**: queries the rankings of inter-region traffic data for CEN instances.
    // *   **RegionPair**: queries the rankings of inter-region traffic data for the local and remote regions.
    // *   **Port**: queries the rankings of inter-region traffic data for the local and remote ports.
    // *   **Protocol**: queries the rankings of inter-region traffic data for the protocols.
    // 
    // This parameter is required.
    shared_ptr<string> groupBy_ {};
    // The metric for ranking inter-region traffic data. Default value: Bytes. This value specifies that inter-region traffic data is ranked by traffic volume.
    shared_ptr<string> orderBy_ {};
    // The remote IP address.
    shared_ptr<string> otherIp_ {};
    // The remote port.
    shared_ptr<string> otherPort_ {};
    // The remote region.
    shared_ptr<string> otherRegion_ {};
    // The protocol number.
    // 
    // >  All protocols are supported. This parameter is required only if you set **GroupBy** to **5Tuple** or **Protocol**.
    shared_ptr<string> protocol_ {};
    // The order for ranking inter-region traffic data. Valid values:
    // 
    // *   **desc**: descending order
    // *   **asc**: ascending order
    shared_ptr<string> sort_ {};
    // The local IP address.
    shared_ptr<string> thisIp_ {};
    // The local port.
    shared_ptr<string> thisPort_ {};
    // The local region where the **local IP address** resides.
    shared_ptr<string> thisRegion_ {};
    // Specifies the maximum number of data entries to display. Default value: **10**. Maximum value: 100.
    shared_ptr<int32_t> topN_ {};
    // Specifies whether to enable the multi-account management feature. Default value: **false**. This value specifies that the multi-account management feature is disabled.
    // 
    // >  By default, the multi-account management feature is not available. If you want to use this feature, contact your account manager to apply for permissions.
    shared_ptr<bool> useMultiAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
