// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERNETTUPLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINTERNETTUPLEREQUEST_HPP_
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
  class GetInternetTupleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInternetTupleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(CloudIp, cloudIp_);
      DARABONBA_PTR_TO_JSON(CloudIpList, cloudIpList_);
      DARABONBA_PTR_TO_JSON(CloudIsp, cloudIsp_);
      DARABONBA_PTR_TO_JSON(CloudPort, cloudPort_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
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
    friend void from_json(const Darabonba::Json& j, GetInternetTupleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(CloudIp, cloudIp_);
      DARABONBA_PTR_FROM_JSON(CloudIpList, cloudIpList_);
      DARABONBA_PTR_FROM_JSON(CloudIsp, cloudIsp_);
      DARABONBA_PTR_FROM_JSON(CloudPort, cloudPort_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
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
    GetInternetTupleRequest() = default ;
    GetInternetTupleRequest(const GetInternetTupleRequest &) = default ;
    GetInternetTupleRequest(GetInternetTupleRequest &&) = default ;
    GetInternetTupleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInternetTupleRequest() = default ;
    GetInternetTupleRequest& operator=(const GetInternetTupleRequest &) = default ;
    GetInternetTupleRequest& operator=(GetInternetTupleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->beginTime_ == nullptr && this->cloudIp_ == nullptr && this->cloudIpList_ == nullptr && this->cloudIsp_ == nullptr && this->cloudPort_ == nullptr
        && this->direction_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->instanceList_ == nullptr && this->orderBy_ == nullptr
        && this->otherCity_ == nullptr && this->otherCountry_ == nullptr && this->otherIp_ == nullptr && this->otherIsp_ == nullptr && this->otherPort_ == nullptr
        && this->protocol_ == nullptr && this->regionId_ == nullptr && this->sort_ == nullptr && this->topN_ == nullptr && this->tupleType_ == nullptr
        && this->useMultiAccount_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<int64_t> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<int64_t>) };
    inline vector<int64_t> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<int64_t>) };
    inline GetInternetTupleRequest& setAccountIds(const vector<int64_t> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline GetInternetTupleRequest& setAccountIds(vector<int64_t> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetInternetTupleRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // cloudIp Field Functions 
    bool hasCloudIp() const { return this->cloudIp_ != nullptr;};
    void deleteCloudIp() { this->cloudIp_ = nullptr;};
    inline string getCloudIp() const { DARABONBA_PTR_GET_DEFAULT(cloudIp_, "") };
    inline GetInternetTupleRequest& setCloudIp(string cloudIp) { DARABONBA_PTR_SET_VALUE(cloudIp_, cloudIp) };


    // cloudIpList Field Functions 
    bool hasCloudIpList() const { return this->cloudIpList_ != nullptr;};
    void deleteCloudIpList() { this->cloudIpList_ = nullptr;};
    inline const vector<string> & getCloudIpList() const { DARABONBA_PTR_GET_CONST(cloudIpList_, vector<string>) };
    inline vector<string> getCloudIpList() { DARABONBA_PTR_GET(cloudIpList_, vector<string>) };
    inline GetInternetTupleRequest& setCloudIpList(const vector<string> & cloudIpList) { DARABONBA_PTR_SET_VALUE(cloudIpList_, cloudIpList) };
    inline GetInternetTupleRequest& setCloudIpList(vector<string> && cloudIpList) { DARABONBA_PTR_SET_RVALUE(cloudIpList_, cloudIpList) };


    // cloudIsp Field Functions 
    bool hasCloudIsp() const { return this->cloudIsp_ != nullptr;};
    void deleteCloudIsp() { this->cloudIsp_ = nullptr;};
    inline string getCloudIsp() const { DARABONBA_PTR_GET_DEFAULT(cloudIsp_, "") };
    inline GetInternetTupleRequest& setCloudIsp(string cloudIsp) { DARABONBA_PTR_SET_VALUE(cloudIsp_, cloudIsp) };


    // cloudPort Field Functions 
    bool hasCloudPort() const { return this->cloudPort_ != nullptr;};
    void deleteCloudPort() { this->cloudPort_ = nullptr;};
    inline string getCloudPort() const { DARABONBA_PTR_GET_DEFAULT(cloudPort_, "") };
    inline GetInternetTupleRequest& setCloudPort(string cloudPort) { DARABONBA_PTR_SET_VALUE(cloudPort_, cloudPort) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline GetInternetTupleRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetInternetTupleRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInternetTupleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<string> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<string>) };
    inline vector<string> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<string>) };
    inline GetInternetTupleRequest& setInstanceList(const vector<string> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline GetInternetTupleRequest& setInstanceList(vector<string> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetInternetTupleRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // otherCity Field Functions 
    bool hasOtherCity() const { return this->otherCity_ != nullptr;};
    void deleteOtherCity() { this->otherCity_ = nullptr;};
    inline string getOtherCity() const { DARABONBA_PTR_GET_DEFAULT(otherCity_, "") };
    inline GetInternetTupleRequest& setOtherCity(string otherCity) { DARABONBA_PTR_SET_VALUE(otherCity_, otherCity) };


    // otherCountry Field Functions 
    bool hasOtherCountry() const { return this->otherCountry_ != nullptr;};
    void deleteOtherCountry() { this->otherCountry_ = nullptr;};
    inline string getOtherCountry() const { DARABONBA_PTR_GET_DEFAULT(otherCountry_, "") };
    inline GetInternetTupleRequest& setOtherCountry(string otherCountry) { DARABONBA_PTR_SET_VALUE(otherCountry_, otherCountry) };


    // otherIp Field Functions 
    bool hasOtherIp() const { return this->otherIp_ != nullptr;};
    void deleteOtherIp() { this->otherIp_ = nullptr;};
    inline string getOtherIp() const { DARABONBA_PTR_GET_DEFAULT(otherIp_, "") };
    inline GetInternetTupleRequest& setOtherIp(string otherIp) { DARABONBA_PTR_SET_VALUE(otherIp_, otherIp) };


    // otherIsp Field Functions 
    bool hasOtherIsp() const { return this->otherIsp_ != nullptr;};
    void deleteOtherIsp() { this->otherIsp_ = nullptr;};
    inline string getOtherIsp() const { DARABONBA_PTR_GET_DEFAULT(otherIsp_, "") };
    inline GetInternetTupleRequest& setOtherIsp(string otherIsp) { DARABONBA_PTR_SET_VALUE(otherIsp_, otherIsp) };


    // otherPort Field Functions 
    bool hasOtherPort() const { return this->otherPort_ != nullptr;};
    void deleteOtherPort() { this->otherPort_ = nullptr;};
    inline string getOtherPort() const { DARABONBA_PTR_GET_DEFAULT(otherPort_, "") };
    inline GetInternetTupleRequest& setOtherPort(string otherPort) { DARABONBA_PTR_SET_VALUE(otherPort_, otherPort) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetInternetTupleRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInternetTupleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline GetInternetTupleRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // topN Field Functions 
    bool hasTopN() const { return this->topN_ != nullptr;};
    void deleteTopN() { this->topN_ = nullptr;};
    inline int32_t getTopN() const { DARABONBA_PTR_GET_DEFAULT(topN_, 0) };
    inline GetInternetTupleRequest& setTopN(int32_t topN) { DARABONBA_PTR_SET_VALUE(topN_, topN) };


    // tupleType Field Functions 
    bool hasTupleType() const { return this->tupleType_ != nullptr;};
    void deleteTupleType() { this->tupleType_ = nullptr;};
    inline int32_t getTupleType() const { DARABONBA_PTR_GET_DEFAULT(tupleType_, 0) };
    inline GetInternetTupleRequest& setTupleType(int32_t tupleType) { DARABONBA_PTR_SET_VALUE(tupleType_, tupleType) };


    // useMultiAccount Field Functions 
    bool hasUseMultiAccount() const { return this->useMultiAccount_ != nullptr;};
    void deleteUseMultiAccount() { this->useMultiAccount_ = nullptr;};
    inline bool getUseMultiAccount() const { DARABONBA_PTR_GET_DEFAULT(useMultiAccount_, false) };
    inline GetInternetTupleRequest& setUseMultiAccount(bool useMultiAccount) { DARABONBA_PTR_SET_VALUE(useMultiAccount_, useMultiAccount) };


  protected:
    // The IDs of member accounts.
    shared_ptr<vector<int64_t>> accountIds_ {};
    // The beginning of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // The local IP address.
    shared_ptr<string> cloudIp_ {};
    // The local IP addresses for filtering.
    shared_ptr<vector<string>> cloudIpList_ {};
    // The local Internet service provider (ISP).
    // 
    // >  In most cases, the value is Alibaba or Alibaba Cloud.
    shared_ptr<string> cloudIsp_ {};
    // The local port.
    // 
    // >  This parameter is required only if you set GroupBy to CloudPort.
    shared_ptr<string> cloudPort_ {};
    // The direction of the Internet traffic that you want to query. Valid values:
    // 
    // *   **in**: inbound
    // *   **out**: outbound
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // The end of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the Alibaba Cloud instance.
    shared_ptr<string> instanceId_ {};
    // The instance IDs for filtering.
    shared_ptr<vector<string>> instanceList_ {};
    // The metric for data ranking. Default value: **ByteCount**. This value indicates that Internet traffic data is ranked by traffic volume.
    // 
    // Valid values:
    // 
    // *   Rtt
    // *   ByteCount
    // *   PacketCount
    // *   RetransmitRate
    shared_ptr<string> orderBy_ {};
    // The remote city.
    // 
    // >  This parameter is required only if you set **TupleType** to **2** or **5**.
    shared_ptr<string> otherCity_ {};
    // The remote country.
    // 
    // >  This parameter is required only if you set **TupleType** to **2** or **5**.
    shared_ptr<string> otherCountry_ {};
    // The remote IP address.
    // 
    // > This parameter is required only when you set **TupleType** to **2** or **5**.
    shared_ptr<string> otherIp_ {};
    // The remote ISP.
    // 
    // > This parameter is required if you want to view the information about the remote ISP.
    shared_ptr<string> otherIsp_ {};
    // The remote port.
    // 
    // > This parameter is required only when you set **TupleType** to **5**.
    shared_ptr<string> otherPort_ {};
    // The protocol number.
    // 
    // > All protocols are supported. This parameter is required only when you set **TupleType** to **5**.
    shared_ptr<string> protocol_ {};
    // The ID of the region for which you want to query the Internet traffic.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The order in which instances are ranked by Internet traffic. Valid values:
    // 
    // *   **desc**: the descending order
    // *   **asc**: the ascending order
    shared_ptr<string> sort_ {};
    // Specifies top-N traffic data to display. Default value: **10**. This value specifies to display top-10 traffic data by default. Max value: **100**.
    shared_ptr<int32_t> topN_ {};
    // The type of the tuple. Valid values:
    // 
    // *   **1**: 1-tuple
    // *   **2**: 2-tuple
    // *   **5**: 5-tuple
    // 
    // This parameter is required.
    shared_ptr<int32_t> tupleType_ {};
    // Specifies whether to enable the multi-account management feature. Default value: **false**. This value specifies that the multi-account management feature is disabled.
    // 
    // >  By default, the multi-account management feature is not available. If you want to use this feature, contact your account manager to apply for permissions.
    shared_ptr<bool> useMultiAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
