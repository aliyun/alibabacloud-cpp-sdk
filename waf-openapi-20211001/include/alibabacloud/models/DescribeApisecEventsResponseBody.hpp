// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECEVENTSRESPONSEBODY_HPP_
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
  class DescribeApisecEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisecEventsResponseBody() = default ;
    DescribeApisecEventsResponseBody(const DescribeApisecEventsResponseBody &) = default ;
    DescribeApisecEventsResponseBody(DescribeApisecEventsResponseBody &&) = default ;
    DescribeApisecEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecEventsResponseBody() = default ;
    DescribeApisecEventsResponseBody& operator=(const DescribeApisecEventsResponseBody &) = default ;
    DescribeApisecEventsResponseBody& operator=(DescribeApisecEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AllCnt, allCnt_);
        DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
        DARABONBA_PTR_TO_JSON(ApiId, apiId_);
        DARABONBA_PTR_TO_JSON(ApiTag, apiTag_);
        DARABONBA_PTR_TO_JSON(AttackClient, attackClient_);
        DARABONBA_PTR_TO_JSON(AttackCntInfo, attackCntInfo_);
        DARABONBA_PTR_TO_JSON(AttackIp, attackIp_);
        DARABONBA_PTR_TO_JSON(AttackIpInfo, attackIpInfo_);
        DARABONBA_PTR_TO_JSON(AttackIps, attackIps_);
        DARABONBA_PTR_TO_JSON(AttackerList, attackerList_);
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AllCnt, allCnt_);
        DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
        DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
        DARABONBA_PTR_FROM_JSON(ApiTag, apiTag_);
        DARABONBA_PTR_FROM_JSON(AttackClient, attackClient_);
        DARABONBA_PTR_FROM_JSON(AttackCntInfo, attackCntInfo_);
        DARABONBA_PTR_FROM_JSON(AttackIp, attackIp_);
        DARABONBA_PTR_FROM_JSON(AttackIpInfo, attackIpInfo_);
        DARABONBA_PTR_FROM_JSON(AttackIps, attackIps_);
        DARABONBA_PTR_FROM_JSON(AttackerList, attackerList_);
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allCnt_ == nullptr
        && this->apiFormat_ == nullptr && this->apiId_ == nullptr && this->apiTag_ == nullptr && this->attackClient_ == nullptr && this->attackCntInfo_ == nullptr
        && this->attackIp_ == nullptr && this->attackIpInfo_ == nullptr && this->attackIps_ == nullptr && this->attackerList_ == nullptr && this->endTs_ == nullptr
        && this->eventId_ == nullptr && this->eventInfo_ == nullptr && this->eventLevel_ == nullptr && this->eventTag_ == nullptr && this->follow_ == nullptr
        && this->matchedHost_ == nullptr && this->note_ == nullptr && this->origin_ == nullptr && this->remoteCountry_ == nullptr && this->remoteRegion_ == nullptr
        && this->requestData_ == nullptr && this->responseData_ == nullptr && this->startTs_ == nullptr && this->userStatus_ == nullptr; };
      // allCnt Field Functions 
      bool hasAllCnt() const { return this->allCnt_ != nullptr;};
      void deleteAllCnt() { this->allCnt_ = nullptr;};
      inline int64_t getAllCnt() const { DARABONBA_PTR_GET_DEFAULT(allCnt_, 0L) };
      inline Data& setAllCnt(int64_t allCnt) { DARABONBA_PTR_SET_VALUE(allCnt_, allCnt) };


      // apiFormat Field Functions 
      bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
      void deleteApiFormat() { this->apiFormat_ = nullptr;};
      inline string getApiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
      inline Data& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
      inline Data& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // apiTag Field Functions 
      bool hasApiTag() const { return this->apiTag_ != nullptr;};
      void deleteApiTag() { this->apiTag_ = nullptr;};
      inline string getApiTag() const { DARABONBA_PTR_GET_DEFAULT(apiTag_, "") };
      inline Data& setApiTag(string apiTag) { DARABONBA_PTR_SET_VALUE(apiTag_, apiTag) };


      // attackClient Field Functions 
      bool hasAttackClient() const { return this->attackClient_ != nullptr;};
      void deleteAttackClient() { this->attackClient_ = nullptr;};
      inline string getAttackClient() const { DARABONBA_PTR_GET_DEFAULT(attackClient_, "") };
      inline Data& setAttackClient(string attackClient) { DARABONBA_PTR_SET_VALUE(attackClient_, attackClient) };


      // attackCntInfo Field Functions 
      bool hasAttackCntInfo() const { return this->attackCntInfo_ != nullptr;};
      void deleteAttackCntInfo() { this->attackCntInfo_ = nullptr;};
      inline string getAttackCntInfo() const { DARABONBA_PTR_GET_DEFAULT(attackCntInfo_, "") };
      inline Data& setAttackCntInfo(string attackCntInfo) { DARABONBA_PTR_SET_VALUE(attackCntInfo_, attackCntInfo) };


      // attackIp Field Functions 
      bool hasAttackIp() const { return this->attackIp_ != nullptr;};
      void deleteAttackIp() { this->attackIp_ = nullptr;};
      inline string getAttackIp() const { DARABONBA_PTR_GET_DEFAULT(attackIp_, "") };
      inline Data& setAttackIp(string attackIp) { DARABONBA_PTR_SET_VALUE(attackIp_, attackIp) };


      // attackIpInfo Field Functions 
      bool hasAttackIpInfo() const { return this->attackIpInfo_ != nullptr;};
      void deleteAttackIpInfo() { this->attackIpInfo_ = nullptr;};
      inline string getAttackIpInfo() const { DARABONBA_PTR_GET_DEFAULT(attackIpInfo_, "") };
      inline Data& setAttackIpInfo(string attackIpInfo) { DARABONBA_PTR_SET_VALUE(attackIpInfo_, attackIpInfo) };


      // attackIps Field Functions 
      bool hasAttackIps() const { return this->attackIps_ != nullptr;};
      void deleteAttackIps() { this->attackIps_ = nullptr;};
      inline const vector<string> & getAttackIps() const { DARABONBA_PTR_GET_CONST(attackIps_, vector<string>) };
      inline vector<string> getAttackIps() { DARABONBA_PTR_GET(attackIps_, vector<string>) };
      inline Data& setAttackIps(const vector<string> & attackIps) { DARABONBA_PTR_SET_VALUE(attackIps_, attackIps) };
      inline Data& setAttackIps(vector<string> && attackIps) { DARABONBA_PTR_SET_RVALUE(attackIps_, attackIps) };


      // attackerList Field Functions 
      bool hasAttackerList() const { return this->attackerList_ != nullptr;};
      void deleteAttackerList() { this->attackerList_ = nullptr;};
      inline const vector<string> & getAttackerList() const { DARABONBA_PTR_GET_CONST(attackerList_, vector<string>) };
      inline vector<string> getAttackerList() { DARABONBA_PTR_GET(attackerList_, vector<string>) };
      inline Data& setAttackerList(const vector<string> & attackerList) { DARABONBA_PTR_SET_VALUE(attackerList_, attackerList) };
      inline Data& setAttackerList(vector<string> && attackerList) { DARABONBA_PTR_SET_RVALUE(attackerList_, attackerList) };


      // endTs Field Functions 
      bool hasEndTs() const { return this->endTs_ != nullptr;};
      void deleteEndTs() { this->endTs_ = nullptr;};
      inline int64_t getEndTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, 0L) };
      inline Data& setEndTs(int64_t endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Data& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventInfo Field Functions 
      bool hasEventInfo() const { return this->eventInfo_ != nullptr;};
      void deleteEventInfo() { this->eventInfo_ = nullptr;};
      inline string getEventInfo() const { DARABONBA_PTR_GET_DEFAULT(eventInfo_, "") };
      inline Data& setEventInfo(string eventInfo) { DARABONBA_PTR_SET_VALUE(eventInfo_, eventInfo) };


      // eventLevel Field Functions 
      bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
      void deleteEventLevel() { this->eventLevel_ = nullptr;};
      inline string getEventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
      inline Data& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


      // eventTag Field Functions 
      bool hasEventTag() const { return this->eventTag_ != nullptr;};
      void deleteEventTag() { this->eventTag_ = nullptr;};
      inline string getEventTag() const { DARABONBA_PTR_GET_DEFAULT(eventTag_, "") };
      inline Data& setEventTag(string eventTag) { DARABONBA_PTR_SET_VALUE(eventTag_, eventTag) };


      // follow Field Functions 
      bool hasFollow() const { return this->follow_ != nullptr;};
      void deleteFollow() { this->follow_ = nullptr;};
      inline int32_t getFollow() const { DARABONBA_PTR_GET_DEFAULT(follow_, 0) };
      inline Data& setFollow(int32_t follow) { DARABONBA_PTR_SET_VALUE(follow_, follow) };


      // matchedHost Field Functions 
      bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
      void deleteMatchedHost() { this->matchedHost_ = nullptr;};
      inline string getMatchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
      inline Data& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


      // note Field Functions 
      bool hasNote() const { return this->note_ != nullptr;};
      void deleteNote() { this->note_ = nullptr;};
      inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
      inline Data& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


      // origin Field Functions 
      bool hasOrigin() const { return this->origin_ != nullptr;};
      void deleteOrigin() { this->origin_ = nullptr;};
      inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
      inline Data& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


      // remoteCountry Field Functions 
      bool hasRemoteCountry() const { return this->remoteCountry_ != nullptr;};
      void deleteRemoteCountry() { this->remoteCountry_ = nullptr;};
      inline string getRemoteCountry() const { DARABONBA_PTR_GET_DEFAULT(remoteCountry_, "") };
      inline Data& setRemoteCountry(string remoteCountry) { DARABONBA_PTR_SET_VALUE(remoteCountry_, remoteCountry) };


      // remoteRegion Field Functions 
      bool hasRemoteRegion() const { return this->remoteRegion_ != nullptr;};
      void deleteRemoteRegion() { this->remoteRegion_ = nullptr;};
      inline string getRemoteRegion() const { DARABONBA_PTR_GET_DEFAULT(remoteRegion_, "") };
      inline Data& setRemoteRegion(string remoteRegion) { DARABONBA_PTR_SET_VALUE(remoteRegion_, remoteRegion) };


      // requestData Field Functions 
      bool hasRequestData() const { return this->requestData_ != nullptr;};
      void deleteRequestData() { this->requestData_ = nullptr;};
      inline string getRequestData() const { DARABONBA_PTR_GET_DEFAULT(requestData_, "") };
      inline Data& setRequestData(string requestData) { DARABONBA_PTR_SET_VALUE(requestData_, requestData) };


      // responseData Field Functions 
      bool hasResponseData() const { return this->responseData_ != nullptr;};
      void deleteResponseData() { this->responseData_ = nullptr;};
      inline string getResponseData() const { DARABONBA_PTR_GET_DEFAULT(responseData_, "") };
      inline Data& setResponseData(string responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };


      // startTs Field Functions 
      bool hasStartTs() const { return this->startTs_ != nullptr;};
      void deleteStartTs() { this->startTs_ = nullptr;};
      inline int64_t getStartTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
      inline Data& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


      // userStatus Field Functions 
      bool hasUserStatus() const { return this->userStatus_ != nullptr;};
      void deleteUserStatus() { this->userStatus_ = nullptr;};
      inline string getUserStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, "") };
      inline Data& setUserStatus(string userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


    protected:
      // The total number of attacks in the security event.
      shared_ptr<int64_t> allCnt_ {};
      // The path of the API that is associated with the security event.
      shared_ptr<string> apiFormat_ {};
      // The ID of the API that is associated with the security event.
      shared_ptr<string> apiId_ {};
      // The business purpose of the API.
      // 
      // > Call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported business purposes.
      shared_ptr<string> apiTag_ {};
      // The type of client that initiated the attack, such as a browser or automation tool.
      shared_ptr<string> attackClient_ {};
      // The attack count over time. The value is a JSON string in which each key is a UNIX timestamp in seconds and each value is the number of attacks at that time.
      shared_ptr<string> attackCntInfo_ {};
      // The IP address of the attacker. >Notice: This parameter is deprecated. Use the AttackIps parameter instead.
      shared_ptr<string> attackIp_ {};
      // The information about the attacker IP address. The value is a JSON string that contains the following fields:
      // 
      // - **ip**: the IP address.
      // 
      // - **country_id**: the country.
      // 
      // - **region_id**: the region.
      // 
      // - **cnt**: the number of attacks.
      shared_ptr<string> attackIpInfo_ {};
      // The list of attacker IP addresses.
      shared_ptr<vector<string>> attackIps_ {};
      // The list of attackers that are associated with the security event.
      shared_ptr<vector<string>> attackerList_ {};
      // The end time of the event. This value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> endTs_ {};
      // The ID of the security event.
      shared_ptr<string> eventId_ {};
      // The details of the security event. The value is a JSON string that contains the following fields:
      // 
      // - **ip_info**: the information about the attacker IP address. For more information, see the **AttackIpInfo** response parameter.
      // 
      // - **rule_id**: the ID of the rule that corresponds to the event.
      // 
      // - **rule_tag**: the information about the rule that corresponds to the event.
      shared_ptr<string> eventInfo_ {};
      // The severity level of the event. Valid values:
      // 
      // - **high**: high severity.
      // 
      // - **medium**: medium severity.
      // 
      // - **low**: low severity.
      shared_ptr<string> eventLevel_ {};
      // The event type.
      // 
      // > Call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported event types.
      shared_ptr<string> eventTag_ {};
      // Indicates whether the event is followed. Valid values:
      // 
      // - **1**: The event is followed.
      // 
      // - **0**: The event is not followed.
      shared_ptr<int32_t> follow_ {};
      // The domain name or IP address that is protected by WAF.
      shared_ptr<string> matchedHost_ {};
      // The remarks that are added to the security event.
      shared_ptr<string> note_ {};
      // The source of the event type. Valid values:
      // 
      // - **custom**: a user-defined event type.
      // 
      // - **default**: a built-in event type.
      shared_ptr<string> origin_ {};
      // The country where the attacker IP address is located.
      shared_ptr<string> remoteCountry_ {};
      // The region where the attacker IP address is located.
      shared_ptr<string> remoteRegion_ {};
      // A sample of the API request data. The value is a JSON string.
      shared_ptr<string> requestData_ {};
      // A sample of the API response data. The value is a JSON string.
      shared_ptr<string> responseData_ {};
      // The start time of the event. This value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> startTs_ {};
      // The handling status of the event. Valid values:
      // 
      // - **toBeConfirmed**: pending confirmation.
      // 
      // - **confirmed**: confirmed but not yet handled.
      // 
      // - **actioned**: handled.
      // 
      // - **ignored**: ignored.
      shared_ptr<string> userStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeApisecEventsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeApisecEventsResponseBody::Data>) };
    inline vector<DescribeApisecEventsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeApisecEventsResponseBody::Data>) };
    inline DescribeApisecEventsResponseBody& setData(const vector<DescribeApisecEventsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApisecEventsResponseBody& setData(vector<DescribeApisecEventsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeApisecEventsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of security events.
    shared_ptr<vector<DescribeApisecEventsResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
