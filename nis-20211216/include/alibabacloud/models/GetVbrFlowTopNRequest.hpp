// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVBRFLOWTOPNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVBRFLOWTOPNREQUEST_HPP_
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
  class GetVbrFlowTopNRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVbrFlowTopNRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CloudIp, cloudIp_);
      DARABONBA_PTR_TO_JSON(CloudPort, cloudPort_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OtherIp, otherIp_);
      DARABONBA_PTR_TO_JSON(OtherPort, otherPort_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(TopN, topN_);
      DARABONBA_PTR_TO_JSON(UseMultiAccount, useMultiAccount_);
      DARABONBA_PTR_TO_JSON(VirtualBorderRouterId, virtualBorderRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVbrFlowTopNRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CloudIp, cloudIp_);
      DARABONBA_PTR_FROM_JSON(CloudPort, cloudPort_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OtherIp, otherIp_);
      DARABONBA_PTR_FROM_JSON(OtherPort, otherPort_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(TopN, topN_);
      DARABONBA_PTR_FROM_JSON(UseMultiAccount, useMultiAccount_);
      DARABONBA_PTR_FROM_JSON(VirtualBorderRouterId, virtualBorderRouterId_);
    };
    GetVbrFlowTopNRequest() = default ;
    GetVbrFlowTopNRequest(const GetVbrFlowTopNRequest &) = default ;
    GetVbrFlowTopNRequest(GetVbrFlowTopNRequest &&) = default ;
    GetVbrFlowTopNRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVbrFlowTopNRequest() = default ;
    GetVbrFlowTopNRequest& operator=(const GetVbrFlowTopNRequest &) = default ;
    GetVbrFlowTopNRequest& operator=(GetVbrFlowTopNRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->attachmentId_ == nullptr && this->beginTime_ == nullptr && this->cenId_ == nullptr && this->cloudIp_ == nullptr && this->cloudPort_ == nullptr
        && this->direction_ == nullptr && this->endTime_ == nullptr && this->groupBy_ == nullptr && this->orderBy_ == nullptr && this->otherIp_ == nullptr
        && this->otherPort_ == nullptr && this->protocol_ == nullptr && this->regionId_ == nullptr && this->sort_ == nullptr && this->topN_ == nullptr
        && this->useMultiAccount_ == nullptr && this->virtualBorderRouterId_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<int64_t> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<int64_t>) };
    inline vector<int64_t> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<int64_t>) };
    inline GetVbrFlowTopNRequest& setAccountIds(const vector<int64_t> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline GetVbrFlowTopNRequest& setAccountIds(vector<int64_t> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // attachmentId Field Functions 
    bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
    void deleteAttachmentId() { this->attachmentId_ = nullptr;};
    inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
    inline GetVbrFlowTopNRequest& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetVbrFlowTopNRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline GetVbrFlowTopNRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cloudIp Field Functions 
    bool hasCloudIp() const { return this->cloudIp_ != nullptr;};
    void deleteCloudIp() { this->cloudIp_ = nullptr;};
    inline string getCloudIp() const { DARABONBA_PTR_GET_DEFAULT(cloudIp_, "") };
    inline GetVbrFlowTopNRequest& setCloudIp(string cloudIp) { DARABONBA_PTR_SET_VALUE(cloudIp_, cloudIp) };


    // cloudPort Field Functions 
    bool hasCloudPort() const { return this->cloudPort_ != nullptr;};
    void deleteCloudPort() { this->cloudPort_ = nullptr;};
    inline string getCloudPort() const { DARABONBA_PTR_GET_DEFAULT(cloudPort_, "") };
    inline GetVbrFlowTopNRequest& setCloudPort(string cloudPort) { DARABONBA_PTR_SET_VALUE(cloudPort_, cloudPort) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline GetVbrFlowTopNRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetVbrFlowTopNRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline GetVbrFlowTopNRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetVbrFlowTopNRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // otherIp Field Functions 
    bool hasOtherIp() const { return this->otherIp_ != nullptr;};
    void deleteOtherIp() { this->otherIp_ = nullptr;};
    inline string getOtherIp() const { DARABONBA_PTR_GET_DEFAULT(otherIp_, "") };
    inline GetVbrFlowTopNRequest& setOtherIp(string otherIp) { DARABONBA_PTR_SET_VALUE(otherIp_, otherIp) };


    // otherPort Field Functions 
    bool hasOtherPort() const { return this->otherPort_ != nullptr;};
    void deleteOtherPort() { this->otherPort_ = nullptr;};
    inline string getOtherPort() const { DARABONBA_PTR_GET_DEFAULT(otherPort_, "") };
    inline GetVbrFlowTopNRequest& setOtherPort(string otherPort) { DARABONBA_PTR_SET_VALUE(otherPort_, otherPort) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetVbrFlowTopNRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVbrFlowTopNRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline GetVbrFlowTopNRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // topN Field Functions 
    bool hasTopN() const { return this->topN_ != nullptr;};
    void deleteTopN() { this->topN_ = nullptr;};
    inline int32_t getTopN() const { DARABONBA_PTR_GET_DEFAULT(topN_, 0) };
    inline GetVbrFlowTopNRequest& setTopN(int32_t topN) { DARABONBA_PTR_SET_VALUE(topN_, topN) };


    // useMultiAccount Field Functions 
    bool hasUseMultiAccount() const { return this->useMultiAccount_ != nullptr;};
    void deleteUseMultiAccount() { this->useMultiAccount_ = nullptr;};
    inline bool getUseMultiAccount() const { DARABONBA_PTR_GET_DEFAULT(useMultiAccount_, false) };
    inline GetVbrFlowTopNRequest& setUseMultiAccount(bool useMultiAccount) { DARABONBA_PTR_SET_VALUE(useMultiAccount_, useMultiAccount) };


    // virtualBorderRouterId Field Functions 
    bool hasVirtualBorderRouterId() const { return this->virtualBorderRouterId_ != nullptr;};
    void deleteVirtualBorderRouterId() { this->virtualBorderRouterId_ = nullptr;};
    inline string getVirtualBorderRouterId() const { DARABONBA_PTR_GET_DEFAULT(virtualBorderRouterId_, "") };
    inline GetVbrFlowTopNRequest& setVirtualBorderRouterId(string virtualBorderRouterId) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterId_, virtualBorderRouterId) };


  protected:
    // The IDs of member accounts.
    shared_ptr<vector<int64_t>> accountIds_ {};
    // The CEN connection ID.
    shared_ptr<string> attachmentId_ {};
    // The beginning of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. The maximum time range that you can query is 24 hours.
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // The CEN instance ID.
    shared_ptr<string> cenId_ {};
    // The local IP address.
    shared_ptr<string> cloudIp_ {};
    // The local port.
    // 
    // >  This parameter is required only if you set **GroupBy** to **CloudPort**.
    shared_ptr<string> cloudPort_ {};
    // The direction of the hybrid cloud traffic in the local regions or for the local IP addresses. Valid values:
    // 
    // *   **in**: traffic from a data center to Alibaba Cloud
    // *   **out**: traffic from Alibaba Cloud to a data center
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // The end of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. The maximum time range that you can query is 24 hours.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The dimension for ranking hybrid cloud traffic data. The value of this parameter is case-sensitive. Valid values:
    // 
    // *   **1Tuple**: queries the rankings of hybrid cloud traffic data for the Cloud Enterprise Network (CEN) instances, CEN connections, virtual border routers (VBRs), and IP addresses.
    // *   **2Tuple**: queries the rankings of hybrid cloud traffic data for the local and remote IP addresses.
    // *   **5Tuple**: queries the rankings of hybrid cloud traffic data for the local and remote IP addresses, local and remote ports, and protocols.
    // *   **CloudPort**: queries the rankings of hybrid cloud traffic data for the local ports.
    // *   **OtherPort**: queries the rankings of hybrid cloud traffic data for the remote ports.
    // *   **Protocol**: queries the rankings of hybrid cloud traffic data for the protocols.
    // 
    // This parameter is required.
    shared_ptr<string> groupBy_ {};
    // The metric for ranking hybrid cloud traffic data. Default value: Bytes. This value specifies that hybrid cloud traffic data is ranked by traffic volumes.
    shared_ptr<string> orderBy_ {};
    // The remote IP address.
    shared_ptr<string> otherIp_ {};
    // The remote port.
    // 
    // >  This parameter is required only if you set **GroupBy** to **OtherPort**.
    shared_ptr<string> otherPort_ {};
    // The protocol number.
    // 
    // >  All protocols are supported. This parameter is required only if you set **GroupBy** to **5Tuple** or **Protocol**.
    shared_ptr<string> protocol_ {};
    // The local region.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The order for ranking hybrid cloud traffic data. Valid values:
    // 
    // *   **desc**: descending order
    // *   **asc**: ascending order
    shared_ptr<string> sort_ {};
    // Specifies top-N traffic data to display. Default value: **10**. This value specifies that top-10 traffic data is displayed by default. Maximum value: **100**.
    shared_ptr<int32_t> topN_ {};
    // Specifies whether to enable the multi-account management feature. Default value: **false**. This value specifies that the multi-account management feature is disabled.
    // 
    // >  By default, the multi-account management feature is not available. If you want to use this feature, contact your account manager to apply for permissions.
    shared_ptr<bool> useMultiAccount_ {};
    // The ID of the VBR that is associated with the Express Connect circuit.
    shared_ptr<string> virtualBorderRouterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
