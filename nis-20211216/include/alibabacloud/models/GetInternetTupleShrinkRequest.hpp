// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERNETTUPLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINTERNETTUPLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetInternetTupleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInternetTupleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(CloudIp, cloudIp_);
      DARABONBA_PTR_TO_JSON(CloudIpList, cloudIpListShrink_);
      DARABONBA_PTR_TO_JSON(CloudIsp, cloudIsp_);
      DARABONBA_PTR_TO_JSON(CloudPort, cloudPort_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceListShrink_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OtherCity, otherCity_);
      DARABONBA_PTR_TO_JSON(OtherCountry, otherCountry_);
      DARABONBA_PTR_TO_JSON(OtherIp, otherIp_);
      DARABONBA_PTR_TO_JSON(OtherIsp, otherIsp_);
      DARABONBA_PTR_TO_JSON(OtherPort, otherPort_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(TopN, topN_);
      DARABONBA_PTR_TO_JSON(TupleType, tupleType_);
      DARABONBA_PTR_TO_JSON(UseMultiAccount, useMultiAccount_);
    };
    friend void from_json(const Darabonba::Json& j, GetInternetTupleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(CloudIp, cloudIp_);
      DARABONBA_PTR_FROM_JSON(CloudIpList, cloudIpListShrink_);
      DARABONBA_PTR_FROM_JSON(CloudIsp, cloudIsp_);
      DARABONBA_PTR_FROM_JSON(CloudPort, cloudPort_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceListShrink_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OtherCity, otherCity_);
      DARABONBA_PTR_FROM_JSON(OtherCountry, otherCountry_);
      DARABONBA_PTR_FROM_JSON(OtherIp, otherIp_);
      DARABONBA_PTR_FROM_JSON(OtherIsp, otherIsp_);
      DARABONBA_PTR_FROM_JSON(OtherPort, otherPort_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(TopN, topN_);
      DARABONBA_PTR_FROM_JSON(TupleType, tupleType_);
      DARABONBA_PTR_FROM_JSON(UseMultiAccount, useMultiAccount_);
    };
    GetInternetTupleShrinkRequest() = default ;
    GetInternetTupleShrinkRequest(const GetInternetTupleShrinkRequest &) = default ;
    GetInternetTupleShrinkRequest(GetInternetTupleShrinkRequest &&) = default ;
    GetInternetTupleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInternetTupleShrinkRequest() = default ;
    GetInternetTupleShrinkRequest& operator=(const GetInternetTupleShrinkRequest &) = default ;
    GetInternetTupleShrinkRequest& operator=(GetInternetTupleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIds_ == nullptr
        && return this->beginTime_ == nullptr && return this->cloudIp_ == nullptr && return this->cloudIpListShrink_ == nullptr && return this->cloudIsp_ == nullptr && return this->cloudPort_ == nullptr
        && return this->direction_ == nullptr && return this->endTime_ == nullptr && return this->instanceId_ == nullptr && return this->instanceListShrink_ == nullptr && return this->orderBy_ == nullptr
        && return this->otherCity_ == nullptr && return this->otherCountry_ == nullptr && return this->otherIp_ == nullptr && return this->otherIsp_ == nullptr && return this->otherPort_ == nullptr
        && return this->protocol_ == nullptr && return this->regionId_ == nullptr && return this->sort_ == nullptr && return this->topN_ == nullptr && return this->tupleType_ == nullptr
        && return this->useMultiAccount_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<int64_t> & accountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<int64_t>) };
    inline vector<int64_t> accountIds() { DARABONBA_PTR_GET(accountIds_, vector<int64_t>) };
    inline GetInternetTupleShrinkRequest& setAccountIds(const vector<int64_t> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline GetInternetTupleShrinkRequest& setAccountIds(vector<int64_t> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetInternetTupleShrinkRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // cloudIp Field Functions 
    bool hasCloudIp() const { return this->cloudIp_ != nullptr;};
    void deleteCloudIp() { this->cloudIp_ = nullptr;};
    inline string cloudIp() const { DARABONBA_PTR_GET_DEFAULT(cloudIp_, "") };
    inline GetInternetTupleShrinkRequest& setCloudIp(string cloudIp) { DARABONBA_PTR_SET_VALUE(cloudIp_, cloudIp) };


    // cloudIpListShrink Field Functions 
    bool hasCloudIpListShrink() const { return this->cloudIpListShrink_ != nullptr;};
    void deleteCloudIpListShrink() { this->cloudIpListShrink_ = nullptr;};
    inline string cloudIpListShrink() const { DARABONBA_PTR_GET_DEFAULT(cloudIpListShrink_, "") };
    inline GetInternetTupleShrinkRequest& setCloudIpListShrink(string cloudIpListShrink) { DARABONBA_PTR_SET_VALUE(cloudIpListShrink_, cloudIpListShrink) };


    // cloudIsp Field Functions 
    bool hasCloudIsp() const { return this->cloudIsp_ != nullptr;};
    void deleteCloudIsp() { this->cloudIsp_ = nullptr;};
    inline string cloudIsp() const { DARABONBA_PTR_GET_DEFAULT(cloudIsp_, "") };
    inline GetInternetTupleShrinkRequest& setCloudIsp(string cloudIsp) { DARABONBA_PTR_SET_VALUE(cloudIsp_, cloudIsp) };


    // cloudPort Field Functions 
    bool hasCloudPort() const { return this->cloudPort_ != nullptr;};
    void deleteCloudPort() { this->cloudPort_ = nullptr;};
    inline string cloudPort() const { DARABONBA_PTR_GET_DEFAULT(cloudPort_, "") };
    inline GetInternetTupleShrinkRequest& setCloudPort(string cloudPort) { DARABONBA_PTR_SET_VALUE(cloudPort_, cloudPort) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline GetInternetTupleShrinkRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetInternetTupleShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInternetTupleShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceListShrink Field Functions 
    bool hasInstanceListShrink() const { return this->instanceListShrink_ != nullptr;};
    void deleteInstanceListShrink() { this->instanceListShrink_ = nullptr;};
    inline string instanceListShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceListShrink_, "") };
    inline GetInternetTupleShrinkRequest& setInstanceListShrink(string instanceListShrink) { DARABONBA_PTR_SET_VALUE(instanceListShrink_, instanceListShrink) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetInternetTupleShrinkRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // otherCity Field Functions 
    bool hasOtherCity() const { return this->otherCity_ != nullptr;};
    void deleteOtherCity() { this->otherCity_ = nullptr;};
    inline string otherCity() const { DARABONBA_PTR_GET_DEFAULT(otherCity_, "") };
    inline GetInternetTupleShrinkRequest& setOtherCity(string otherCity) { DARABONBA_PTR_SET_VALUE(otherCity_, otherCity) };


    // otherCountry Field Functions 
    bool hasOtherCountry() const { return this->otherCountry_ != nullptr;};
    void deleteOtherCountry() { this->otherCountry_ = nullptr;};
    inline string otherCountry() const { DARABONBA_PTR_GET_DEFAULT(otherCountry_, "") };
    inline GetInternetTupleShrinkRequest& setOtherCountry(string otherCountry) { DARABONBA_PTR_SET_VALUE(otherCountry_, otherCountry) };


    // otherIp Field Functions 
    bool hasOtherIp() const { return this->otherIp_ != nullptr;};
    void deleteOtherIp() { this->otherIp_ = nullptr;};
    inline string otherIp() const { DARABONBA_PTR_GET_DEFAULT(otherIp_, "") };
    inline GetInternetTupleShrinkRequest& setOtherIp(string otherIp) { DARABONBA_PTR_SET_VALUE(otherIp_, otherIp) };


    // otherIsp Field Functions 
    bool hasOtherIsp() const { return this->otherIsp_ != nullptr;};
    void deleteOtherIsp() { this->otherIsp_ = nullptr;};
    inline string otherIsp() const { DARABONBA_PTR_GET_DEFAULT(otherIsp_, "") };
    inline GetInternetTupleShrinkRequest& setOtherIsp(string otherIsp) { DARABONBA_PTR_SET_VALUE(otherIsp_, otherIsp) };


    // otherPort Field Functions 
    bool hasOtherPort() const { return this->otherPort_ != nullptr;};
    void deleteOtherPort() { this->otherPort_ = nullptr;};
    inline string otherPort() const { DARABONBA_PTR_GET_DEFAULT(otherPort_, "") };
    inline GetInternetTupleShrinkRequest& setOtherPort(string otherPort) { DARABONBA_PTR_SET_VALUE(otherPort_, otherPort) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetInternetTupleShrinkRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInternetTupleShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline GetInternetTupleShrinkRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // topN Field Functions 
    bool hasTopN() const { return this->topN_ != nullptr;};
    void deleteTopN() { this->topN_ = nullptr;};
    inline int32_t topN() const { DARABONBA_PTR_GET_DEFAULT(topN_, 0) };
    inline GetInternetTupleShrinkRequest& setTopN(int32_t topN) { DARABONBA_PTR_SET_VALUE(topN_, topN) };


    // tupleType Field Functions 
    bool hasTupleType() const { return this->tupleType_ != nullptr;};
    void deleteTupleType() { this->tupleType_ = nullptr;};
    inline int32_t tupleType() const { DARABONBA_PTR_GET_DEFAULT(tupleType_, 0) };
    inline GetInternetTupleShrinkRequest& setTupleType(int32_t tupleType) { DARABONBA_PTR_SET_VALUE(tupleType_, tupleType) };


    // useMultiAccount Field Functions 
    bool hasUseMultiAccount() const { return this->useMultiAccount_ != nullptr;};
    void deleteUseMultiAccount() { this->useMultiAccount_ = nullptr;};
    inline bool useMultiAccount() const { DARABONBA_PTR_GET_DEFAULT(useMultiAccount_, false) };
    inline GetInternetTupleShrinkRequest& setUseMultiAccount(bool useMultiAccount) { DARABONBA_PTR_SET_VALUE(useMultiAccount_, useMultiAccount) };


  protected:
    // The IDs of member accounts.
    std::shared_ptr<vector<int64_t>> accountIds_ = nullptr;
    // The beginning of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // The local IP address.
    std::shared_ptr<string> cloudIp_ = nullptr;
    // The local IP addresses for filtering.
    std::shared_ptr<string> cloudIpListShrink_ = nullptr;
    // The local Internet service provider (ISP).
    // 
    // >  In most cases, the value is Alibaba or Alibaba Cloud.
    std::shared_ptr<string> cloudIsp_ = nullptr;
    // The local port.
    // 
    // >  This parameter is required only if you set GroupBy to CloudPort.
    std::shared_ptr<string> cloudPort_ = nullptr;
    // The direction of the Internet traffic that you want to query. Valid values:
    // 
    // *   **in**: inbound
    // *   **out**: outbound
    // 
    // This parameter is required.
    std::shared_ptr<string> direction_ = nullptr;
    // The end of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ID of the Alibaba Cloud instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance IDs for filtering.
    std::shared_ptr<string> instanceListShrink_ = nullptr;
    // The metric for data ranking. Default value: **ByteCount**. This value indicates that Internet traffic data is ranked by traffic volume.
    // 
    // Valid values:
    // 
    // *   Rtt
    // *   ByteCount
    // *   PacketCount
    // *   RetransmitRate
    std::shared_ptr<string> orderBy_ = nullptr;
    // The remote city.
    // 
    // >  This parameter is required only if you set **TupleType** to **2** or **5**.
    std::shared_ptr<string> otherCity_ = nullptr;
    // The remote country.
    // 
    // >  This parameter is required only if you set **TupleType** to **2** or **5**.
    std::shared_ptr<string> otherCountry_ = nullptr;
    // The remote IP address.
    // 
    // > This parameter is required only when you set **TupleType** to **2** or **5**.
    std::shared_ptr<string> otherIp_ = nullptr;
    // The remote ISP.
    // 
    // > This parameter is required if you want to view the information about the remote ISP.
    std::shared_ptr<string> otherIsp_ = nullptr;
    // The remote port.
    // 
    // > This parameter is required only when you set **TupleType** to **5**.
    std::shared_ptr<string> otherPort_ = nullptr;
    // The protocol number.
    // 
    // > All protocols are supported. This parameter is required only when you set **TupleType** to **5**.
    std::shared_ptr<string> protocol_ = nullptr;
    // The ID of the region for which you want to query the Internet traffic.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The order in which instances are ranked by Internet traffic. Valid values:
    // 
    // *   **desc**: the descending order
    // *   **asc**: the ascending order
    std::shared_ptr<string> sort_ = nullptr;
    // Specifies top-N traffic data to display. Default value: **10**. This value specifies to display top-10 traffic data by default. Max value: **100**.
    std::shared_ptr<int32_t> topN_ = nullptr;
    // The type of the tuple. Valid values:
    // 
    // *   **1**: 1-tuple
    // *   **2**: 2-tuple
    // *   **5**: 5-tuple
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> tupleType_ = nullptr;
    // Specifies whether to enable the multi-account management feature. Default value: **false**. This value specifies that the multi-account management feature is disabled.
    // 
    // >  By default, the multi-account management feature is not available. If you want to use this feature, contact your account manager to apply for permissions.
    std::shared_ptr<bool> useMultiAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
