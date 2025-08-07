// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECEVENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECEVENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecEventsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecEventsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AllCnt, allCnt_);
      DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiTag, apiTag_);
      DARABONBA_PTR_TO_JSON(AttackClient, attackClient_);
      DARABONBA_PTR_TO_JSON(AttackCntInfo, attackCntInfo_);
      DARABONBA_PTR_TO_JSON(AttackIp, attackIp_);
      DARABONBA_PTR_TO_JSON(AttackIpInfo, attackIpInfo_);
      DARABONBA_PTR_TO_JSON(AttackIps, attackIps_);
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventInfo, eventInfo_);
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(EventTag, eventTag_);
      DARABONBA_PTR_TO_JSON(Follow, follow_);
      DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(RemoteCountry, remoteCountry_);
      DARABONBA_PTR_TO_JSON(RemoteRegion, remoteRegion_);
      DARABONBA_PTR_TO_JSON(RequestData, requestData_);
      DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
      DARABONBA_PTR_TO_JSON(StartTs, startTs_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecEventsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AllCnt, allCnt_);
      DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiTag, apiTag_);
      DARABONBA_PTR_FROM_JSON(AttackClient, attackClient_);
      DARABONBA_PTR_FROM_JSON(AttackCntInfo, attackCntInfo_);
      DARABONBA_PTR_FROM_JSON(AttackIp, attackIp_);
      DARABONBA_PTR_FROM_JSON(AttackIpInfo, attackIpInfo_);
      DARABONBA_PTR_FROM_JSON(AttackIps, attackIps_);
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventInfo, eventInfo_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(EventTag, eventTag_);
      DARABONBA_PTR_FROM_JSON(Follow, follow_);
      DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(RemoteCountry, remoteCountry_);
      DARABONBA_PTR_FROM_JSON(RemoteRegion, remoteRegion_);
      DARABONBA_PTR_FROM_JSON(RequestData, requestData_);
      DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
      DARABONBA_PTR_FROM_JSON(StartTs, startTs_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    DescribeApisecEventsResponseBodyData() = default ;
    DescribeApisecEventsResponseBodyData(const DescribeApisecEventsResponseBodyData &) = default ;
    DescribeApisecEventsResponseBodyData(DescribeApisecEventsResponseBodyData &&) = default ;
    DescribeApisecEventsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecEventsResponseBodyData() = default ;
    DescribeApisecEventsResponseBodyData& operator=(const DescribeApisecEventsResponseBodyData &) = default ;
    DescribeApisecEventsResponseBodyData& operator=(DescribeApisecEventsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allCnt_ != nullptr
        && this->apiFormat_ != nullptr && this->apiId_ != nullptr && this->apiTag_ != nullptr && this->attackClient_ != nullptr && this->attackCntInfo_ != nullptr
        && this->attackIp_ != nullptr && this->attackIpInfo_ != nullptr && this->attackIps_ != nullptr && this->endTs_ != nullptr && this->eventId_ != nullptr
        && this->eventInfo_ != nullptr && this->eventLevel_ != nullptr && this->eventTag_ != nullptr && this->follow_ != nullptr && this->matchedHost_ != nullptr
        && this->note_ != nullptr && this->origin_ != nullptr && this->remoteCountry_ != nullptr && this->remoteRegion_ != nullptr && this->requestData_ != nullptr
        && this->responseData_ != nullptr && this->startTs_ != nullptr && this->userStatus_ != nullptr; };
    // allCnt Field Functions 
    bool hasAllCnt() const { return this->allCnt_ != nullptr;};
    void deleteAllCnt() { this->allCnt_ = nullptr;};
    inline int64_t allCnt() const { DARABONBA_PTR_GET_DEFAULT(allCnt_, 0L) };
    inline DescribeApisecEventsResponseBodyData& setAllCnt(int64_t allCnt) { DARABONBA_PTR_SET_VALUE(allCnt_, allCnt) };


    // apiFormat Field Functions 
    bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
    void deleteApiFormat() { this->apiFormat_ = nullptr;};
    inline string apiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
    inline DescribeApisecEventsResponseBodyData& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApisecEventsResponseBodyData& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiTag Field Functions 
    bool hasApiTag() const { return this->apiTag_ != nullptr;};
    void deleteApiTag() { this->apiTag_ = nullptr;};
    inline string apiTag() const { DARABONBA_PTR_GET_DEFAULT(apiTag_, "") };
    inline DescribeApisecEventsResponseBodyData& setApiTag(string apiTag) { DARABONBA_PTR_SET_VALUE(apiTag_, apiTag) };


    // attackClient Field Functions 
    bool hasAttackClient() const { return this->attackClient_ != nullptr;};
    void deleteAttackClient() { this->attackClient_ = nullptr;};
    inline string attackClient() const { DARABONBA_PTR_GET_DEFAULT(attackClient_, "") };
    inline DescribeApisecEventsResponseBodyData& setAttackClient(string attackClient) { DARABONBA_PTR_SET_VALUE(attackClient_, attackClient) };


    // attackCntInfo Field Functions 
    bool hasAttackCntInfo() const { return this->attackCntInfo_ != nullptr;};
    void deleteAttackCntInfo() { this->attackCntInfo_ = nullptr;};
    inline string attackCntInfo() const { DARABONBA_PTR_GET_DEFAULT(attackCntInfo_, "") };
    inline DescribeApisecEventsResponseBodyData& setAttackCntInfo(string attackCntInfo) { DARABONBA_PTR_SET_VALUE(attackCntInfo_, attackCntInfo) };


    // attackIp Field Functions 
    bool hasAttackIp() const { return this->attackIp_ != nullptr;};
    void deleteAttackIp() { this->attackIp_ = nullptr;};
    inline string attackIp() const { DARABONBA_PTR_GET_DEFAULT(attackIp_, "") };
    inline DescribeApisecEventsResponseBodyData& setAttackIp(string attackIp) { DARABONBA_PTR_SET_VALUE(attackIp_, attackIp) };


    // attackIpInfo Field Functions 
    bool hasAttackIpInfo() const { return this->attackIpInfo_ != nullptr;};
    void deleteAttackIpInfo() { this->attackIpInfo_ = nullptr;};
    inline string attackIpInfo() const { DARABONBA_PTR_GET_DEFAULT(attackIpInfo_, "") };
    inline DescribeApisecEventsResponseBodyData& setAttackIpInfo(string attackIpInfo) { DARABONBA_PTR_SET_VALUE(attackIpInfo_, attackIpInfo) };


    // attackIps Field Functions 
    bool hasAttackIps() const { return this->attackIps_ != nullptr;};
    void deleteAttackIps() { this->attackIps_ = nullptr;};
    inline const vector<string> & attackIps() const { DARABONBA_PTR_GET_CONST(attackIps_, vector<string>) };
    inline vector<string> attackIps() { DARABONBA_PTR_GET(attackIps_, vector<string>) };
    inline DescribeApisecEventsResponseBodyData& setAttackIps(const vector<string> & attackIps) { DARABONBA_PTR_SET_VALUE(attackIps_, attackIps) };
    inline DescribeApisecEventsResponseBodyData& setAttackIps(vector<string> && attackIps) { DARABONBA_PTR_SET_RVALUE(attackIps_, attackIps) };


    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline int64_t endTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, 0L) };
    inline DescribeApisecEventsResponseBodyData& setEndTs(int64_t endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeApisecEventsResponseBodyData& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventInfo Field Functions 
    bool hasEventInfo() const { return this->eventInfo_ != nullptr;};
    void deleteEventInfo() { this->eventInfo_ = nullptr;};
    inline string eventInfo() const { DARABONBA_PTR_GET_DEFAULT(eventInfo_, "") };
    inline DescribeApisecEventsResponseBodyData& setEventInfo(string eventInfo) { DARABONBA_PTR_SET_VALUE(eventInfo_, eventInfo) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline DescribeApisecEventsResponseBodyData& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventTag Field Functions 
    bool hasEventTag() const { return this->eventTag_ != nullptr;};
    void deleteEventTag() { this->eventTag_ = nullptr;};
    inline string eventTag() const { DARABONBA_PTR_GET_DEFAULT(eventTag_, "") };
    inline DescribeApisecEventsResponseBodyData& setEventTag(string eventTag) { DARABONBA_PTR_SET_VALUE(eventTag_, eventTag) };


    // follow Field Functions 
    bool hasFollow() const { return this->follow_ != nullptr;};
    void deleteFollow() { this->follow_ = nullptr;};
    inline int32_t follow() const { DARABONBA_PTR_GET_DEFAULT(follow_, 0) };
    inline DescribeApisecEventsResponseBodyData& setFollow(int32_t follow) { DARABONBA_PTR_SET_VALUE(follow_, follow) };


    // matchedHost Field Functions 
    bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
    void deleteMatchedHost() { this->matchedHost_ = nullptr;};
    inline string matchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
    inline DescribeApisecEventsResponseBodyData& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline DescribeApisecEventsResponseBodyData& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline DescribeApisecEventsResponseBodyData& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // remoteCountry Field Functions 
    bool hasRemoteCountry() const { return this->remoteCountry_ != nullptr;};
    void deleteRemoteCountry() { this->remoteCountry_ = nullptr;};
    inline string remoteCountry() const { DARABONBA_PTR_GET_DEFAULT(remoteCountry_, "") };
    inline DescribeApisecEventsResponseBodyData& setRemoteCountry(string remoteCountry) { DARABONBA_PTR_SET_VALUE(remoteCountry_, remoteCountry) };


    // remoteRegion Field Functions 
    bool hasRemoteRegion() const { return this->remoteRegion_ != nullptr;};
    void deleteRemoteRegion() { this->remoteRegion_ = nullptr;};
    inline string remoteRegion() const { DARABONBA_PTR_GET_DEFAULT(remoteRegion_, "") };
    inline DescribeApisecEventsResponseBodyData& setRemoteRegion(string remoteRegion) { DARABONBA_PTR_SET_VALUE(remoteRegion_, remoteRegion) };


    // requestData Field Functions 
    bool hasRequestData() const { return this->requestData_ != nullptr;};
    void deleteRequestData() { this->requestData_ = nullptr;};
    inline string requestData() const { DARABONBA_PTR_GET_DEFAULT(requestData_, "") };
    inline DescribeApisecEventsResponseBodyData& setRequestData(string requestData) { DARABONBA_PTR_SET_VALUE(requestData_, requestData) };


    // responseData Field Functions 
    bool hasResponseData() const { return this->responseData_ != nullptr;};
    void deleteResponseData() { this->responseData_ = nullptr;};
    inline string responseData() const { DARABONBA_PTR_GET_DEFAULT(responseData_, "") };
    inline DescribeApisecEventsResponseBodyData& setResponseData(string responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline int64_t startTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
    inline DescribeApisecEventsResponseBodyData& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline string userStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, "") };
    inline DescribeApisecEventsResponseBodyData& setUserStatus(string userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


  protected:
    // The number of attacks.
    // >Notice: The parameter has been deprecated, please use the Attackips parameter.
    std::shared_ptr<int64_t> allCnt_ = nullptr;
    // The API.
    std::shared_ptr<string> apiFormat_ = nullptr;
    // The ID of the API that is associated with the security event.
    std::shared_ptr<string> apiId_ = nullptr;
    // The business purpose of the API.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the business purposes of APIs.
    std::shared_ptr<string> apiTag_ = nullptr;
    // The client that is attacked.
    std::shared_ptr<string> attackClient_ = nullptr;
    // The information about the number of attacks. The value of this parameter is a JSON string that contains multiple parameters. Key indicates the timestamp in seconds, and Value indicates the number of attacks.
    std::shared_ptr<string> attackCntInfo_ = nullptr;
    // The source IP address of the attack.
    std::shared_ptr<string> attackIp_ = nullptr;
    // The information about the attack source IP address. The value of this parameter is a JSON string that contains multiple parameters. The value includes the following parameters:
    // 
    // *   **ip**: the IP address
    // *   **country_id**: the country ID
    // *   **region_id**: the region ID
    // *   **cnt**: the number of attacks
    std::shared_ptr<string> attackIpInfo_ = nullptr;
    // The source IP addresses of the attacks.
    std::shared_ptr<vector<string>> attackIps_ = nullptr;
    // The end of the time range to query. This value is a UNIX timestamp in UTC. Unit: seconds.
    std::shared_ptr<int64_t> endTs_ = nullptr;
    // The ID of the event.
    std::shared_ptr<string> eventId_ = nullptr;
    // The details of the event. The value of this parameter is a JSON string that contains multiple parameters. The value includes the following parameters:
    // 
    // *   **ip_info**: the information about the attack source IP address. This parameter corresponds to the **AttackIpInfo** response parameter.
    // *   **rule_id**: the ID of the rule corresponding to the event.
    // *   **rule_tag**: the information about the rule corresponding to the event.
    std::shared_ptr<string> eventInfo_ = nullptr;
    // The severity level of the event. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> eventLevel_ = nullptr;
    // The type of the event.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported event types.
    std::shared_ptr<string> eventTag_ = nullptr;
    // Indicates whether the API is followed. Valid values:
    // 
    // *   **1**: The API is followed.
    // *   **0**: The API is not followed.
    std::shared_ptr<int32_t> follow_ = nullptr;
    // The domain name or IP address of the API.
    std::shared_ptr<string> matchedHost_ = nullptr;
    // The remarks.
    std::shared_ptr<string> note_ = nullptr;
    // The source of the event type. Valid values:
    // 
    // *   **custom**
    // *   **default**
    std::shared_ptr<string> origin_ = nullptr;
    // The country to which the attack source IP address belongs.
    std::shared_ptr<string> remoteCountry_ = nullptr;
    // The region to which the attack source IP address belongs.
    std::shared_ptr<string> remoteRegion_ = nullptr;
    // The sample API request. The value of this parameter is a JSON string that contains multiple parameters.
    std::shared_ptr<string> requestData_ = nullptr;
    // The sample API response. The value of this parameter is a JSON string that contains multiple parameters.
    std::shared_ptr<string> responseData_ = nullptr;
    // The beginning of the time range to query. This value is a UNIX timestamp in UTC. Unit: seconds.
    std::shared_ptr<int64_t> startTs_ = nullptr;
    // The event status. Valid values:
    // 
    // *   **toBeConfirmed**
    // *   **confirmed**
    // *   **ignored**
    std::shared_ptr<string> userStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
