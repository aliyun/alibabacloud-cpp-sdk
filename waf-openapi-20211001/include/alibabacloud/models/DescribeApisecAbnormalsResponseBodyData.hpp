// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECABNORMALSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECABNORMALSRESPONSEBODYDATA_HPP_
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
  class DescribeApisecAbnormalsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecAbnormalsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalEventNumber, abnormalEventNumber_);
      DARABONBA_PTR_TO_JSON(AbnormalId, abnormalId_);
      DARABONBA_PTR_TO_JSON(AbnormalInfo, abnormalInfo_);
      DARABONBA_PTR_TO_JSON(AbnormalLevel, abnormalLevel_);
      DARABONBA_PTR_TO_JSON(AbnormalTag, abnormalTag_);
      DARABONBA_PTR_TO_JSON(AbnromalStatus, abnromalStatus_);
      DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiTag, apiTag_);
      DARABONBA_PTR_TO_JSON(DiscoverTime, discoverTime_);
      DARABONBA_PTR_TO_JSON(Examples, examples_);
      DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_TO_JSON(Follow, follow_);
      DARABONBA_PTR_TO_JSON(IgnoreTime, ignoreTime_);
      DARABONBA_PTR_TO_JSON(LastestTime, lastestTime_);
      DARABONBA_PTR_TO_JSON(LatestDiscoverTime, latestDiscoverTime_);
      DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecAbnormalsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalEventNumber, abnormalEventNumber_);
      DARABONBA_PTR_FROM_JSON(AbnormalId, abnormalId_);
      DARABONBA_PTR_FROM_JSON(AbnormalInfo, abnormalInfo_);
      DARABONBA_PTR_FROM_JSON(AbnormalLevel, abnormalLevel_);
      DARABONBA_PTR_FROM_JSON(AbnormalTag, abnormalTag_);
      DARABONBA_PTR_FROM_JSON(AbnromalStatus, abnromalStatus_);
      DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiTag, apiTag_);
      DARABONBA_PTR_FROM_JSON(DiscoverTime, discoverTime_);
      DARABONBA_PTR_FROM_JSON(Examples, examples_);
      DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_FROM_JSON(Follow, follow_);
      DARABONBA_PTR_FROM_JSON(IgnoreTime, ignoreTime_);
      DARABONBA_PTR_FROM_JSON(LastestTime, lastestTime_);
      DARABONBA_PTR_FROM_JSON(LatestDiscoverTime, latestDiscoverTime_);
      DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    DescribeApisecAbnormalsResponseBodyData() = default ;
    DescribeApisecAbnormalsResponseBodyData(const DescribeApisecAbnormalsResponseBodyData &) = default ;
    DescribeApisecAbnormalsResponseBodyData(DescribeApisecAbnormalsResponseBodyData &&) = default ;
    DescribeApisecAbnormalsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecAbnormalsResponseBodyData() = default ;
    DescribeApisecAbnormalsResponseBodyData& operator=(const DescribeApisecAbnormalsResponseBodyData &) = default ;
    DescribeApisecAbnormalsResponseBodyData& operator=(DescribeApisecAbnormalsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalEventNumber_ == nullptr
        && return this->abnormalId_ == nullptr && return this->abnormalInfo_ == nullptr && return this->abnormalLevel_ == nullptr && return this->abnormalTag_ == nullptr && return this->abnromalStatus_ == nullptr
        && return this->apiFormat_ == nullptr && return this->apiId_ == nullptr && return this->apiTag_ == nullptr && return this->discoverTime_ == nullptr && return this->examples_ == nullptr
        && return this->firstTime_ == nullptr && return this->follow_ == nullptr && return this->ignoreTime_ == nullptr && return this->lastestTime_ == nullptr && return this->latestDiscoverTime_ == nullptr
        && return this->matchedHost_ == nullptr && return this->note_ == nullptr && return this->origin_ == nullptr && return this->userStatus_ == nullptr; };
    // abnormalEventNumber Field Functions 
    bool hasAbnormalEventNumber() const { return this->abnormalEventNumber_ != nullptr;};
    void deleteAbnormalEventNumber() { this->abnormalEventNumber_ = nullptr;};
    inline int64_t abnormalEventNumber() const { DARABONBA_PTR_GET_DEFAULT(abnormalEventNumber_, 0L) };
    inline DescribeApisecAbnormalsResponseBodyData& setAbnormalEventNumber(int64_t abnormalEventNumber) { DARABONBA_PTR_SET_VALUE(abnormalEventNumber_, abnormalEventNumber) };


    // abnormalId Field Functions 
    bool hasAbnormalId() const { return this->abnormalId_ != nullptr;};
    void deleteAbnormalId() { this->abnormalId_ = nullptr;};
    inline string abnormalId() const { DARABONBA_PTR_GET_DEFAULT(abnormalId_, "") };
    inline DescribeApisecAbnormalsResponseBodyData& setAbnormalId(string abnormalId) { DARABONBA_PTR_SET_VALUE(abnormalId_, abnormalId) };


    // abnormalInfo Field Functions 
    bool hasAbnormalInfo() const { return this->abnormalInfo_ != nullptr;};
    void deleteAbnormalInfo() { this->abnormalInfo_ = nullptr;};
    inline string abnormalInfo() const { DARABONBA_PTR_GET_DEFAULT(abnormalInfo_, "") };
    inline DescribeApisecAbnormalsResponseBodyData& setAbnormalInfo(string abnormalInfo) { DARABONBA_PTR_SET_VALUE(abnormalInfo_, abnormalInfo) };


    // abnormalLevel Field Functions 
    bool hasAbnormalLevel() const { return this->abnormalLevel_ != nullptr;};
    void deleteAbnormalLevel() { this->abnormalLevel_ = nullptr;};
    inline string abnormalLevel() const { DARABONBA_PTR_GET_DEFAULT(abnormalLevel_, "") };
    inline DescribeApisecAbnormalsResponseBodyData& setAbnormalLevel(string abnormalLevel) { DARABONBA_PTR_SET_VALUE(abnormalLevel_, abnormalLevel) };


    // abnormalTag Field Functions 
    bool hasAbnormalTag() const { return this->abnormalTag_ != nullptr;};
    void deleteAbnormalTag() { this->abnormalTag_ = nullptr;};
    inline string abnormalTag() const { DARABONBA_PTR_GET_DEFAULT(abnormalTag_, "") };
    inline DescribeApisecAbnormalsResponseBodyData& setAbnormalTag(string abnormalTag) { DARABONBA_PTR_SET_VALUE(abnormalTag_, abnormalTag) };


    // abnromalStatus Field Functions 
    bool hasAbnromalStatus() const { return this->abnromalStatus_ != nullptr;};
    void deleteAbnromalStatus() { this->abnromalStatus_ = nullptr;};
    inline string abnromalStatus() const { DARABONBA_PTR_GET_DEFAULT(abnromalStatus_, "") };
    inline DescribeApisecAbnormalsResponseBodyData& setAbnromalStatus(string abnromalStatus) { DARABONBA_PTR_SET_VALUE(abnromalStatus_, abnromalStatus) };


    // apiFormat Field Functions 
    bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
    void deleteApiFormat() { this->apiFormat_ = nullptr;};
    inline string apiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
    inline DescribeApisecAbnormalsResponseBodyData& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApisecAbnormalsResponseBodyData& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiTag Field Functions 
    bool hasApiTag() const { return this->apiTag_ != nullptr;};
    void deleteApiTag() { this->apiTag_ = nullptr;};
    inline string apiTag() const { DARABONBA_PTR_GET_DEFAULT(apiTag_, "") };
    inline DescribeApisecAbnormalsResponseBodyData& setApiTag(string apiTag) { DARABONBA_PTR_SET_VALUE(apiTag_, apiTag) };


    // discoverTime Field Functions 
    bool hasDiscoverTime() const { return this->discoverTime_ != nullptr;};
    void deleteDiscoverTime() { this->discoverTime_ = nullptr;};
    inline int64_t discoverTime() const { DARABONBA_PTR_GET_DEFAULT(discoverTime_, 0L) };
    inline DescribeApisecAbnormalsResponseBodyData& setDiscoverTime(int64_t discoverTime) { DARABONBA_PTR_SET_VALUE(discoverTime_, discoverTime) };


    // examples Field Functions 
    bool hasExamples() const { return this->examples_ != nullptr;};
    void deleteExamples() { this->examples_ = nullptr;};
    inline const vector<string> & examples() const { DARABONBA_PTR_GET_CONST(examples_, vector<string>) };
    inline vector<string> examples() { DARABONBA_PTR_GET(examples_, vector<string>) };
    inline DescribeApisecAbnormalsResponseBodyData& setExamples(const vector<string> & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
    inline DescribeApisecAbnormalsResponseBodyData& setExamples(vector<string> && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int64_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
    inline DescribeApisecAbnormalsResponseBodyData& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // follow Field Functions 
    bool hasFollow() const { return this->follow_ != nullptr;};
    void deleteFollow() { this->follow_ = nullptr;};
    inline int64_t follow() const { DARABONBA_PTR_GET_DEFAULT(follow_, 0L) };
    inline DescribeApisecAbnormalsResponseBodyData& setFollow(int64_t follow) { DARABONBA_PTR_SET_VALUE(follow_, follow) };


    // ignoreTime Field Functions 
    bool hasIgnoreTime() const { return this->ignoreTime_ != nullptr;};
    void deleteIgnoreTime() { this->ignoreTime_ = nullptr;};
    inline int64_t ignoreTime() const { DARABONBA_PTR_GET_DEFAULT(ignoreTime_, 0L) };
    inline DescribeApisecAbnormalsResponseBodyData& setIgnoreTime(int64_t ignoreTime) { DARABONBA_PTR_SET_VALUE(ignoreTime_, ignoreTime) };


    // lastestTime Field Functions 
    bool hasLastestTime() const { return this->lastestTime_ != nullptr;};
    void deleteLastestTime() { this->lastestTime_ = nullptr;};
    inline int64_t lastestTime() const { DARABONBA_PTR_GET_DEFAULT(lastestTime_, 0L) };
    inline DescribeApisecAbnormalsResponseBodyData& setLastestTime(int64_t lastestTime) { DARABONBA_PTR_SET_VALUE(lastestTime_, lastestTime) };


    // latestDiscoverTime Field Functions 
    bool hasLatestDiscoverTime() const { return this->latestDiscoverTime_ != nullptr;};
    void deleteLatestDiscoverTime() { this->latestDiscoverTime_ = nullptr;};
    inline int64_t latestDiscoverTime() const { DARABONBA_PTR_GET_DEFAULT(latestDiscoverTime_, 0L) };
    inline DescribeApisecAbnormalsResponseBodyData& setLatestDiscoverTime(int64_t latestDiscoverTime) { DARABONBA_PTR_SET_VALUE(latestDiscoverTime_, latestDiscoverTime) };


    // matchedHost Field Functions 
    bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
    void deleteMatchedHost() { this->matchedHost_ = nullptr;};
    inline string matchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
    inline DescribeApisecAbnormalsResponseBodyData& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline DescribeApisecAbnormalsResponseBodyData& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline DescribeApisecAbnormalsResponseBodyData& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline string userStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, "") };
    inline DescribeApisecAbnormalsResponseBodyData& setUserStatus(string userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


  protected:
    // The number of risk-related security events.
    std::shared_ptr<int64_t> abnormalEventNumber_ = nullptr;
    // The ID of the risk.
    std::shared_ptr<string> abnormalId_ = nullptr;
    // The details of the risk. The value is a string that consists of multiple parameters in the JSON format. Valid values:
    // 
    // * **rule**: risk-related rule
    // * **data_type**: sensitive data type
    // * **custom_rule_name**: custom rule name
    // * **rule_name**: built-in rule name
    std::shared_ptr<string> abnormalInfo_ = nullptr;
    // The level of the risk. Valid values:
    // 
    // * **high**
    // * **medium**
    // * **low**
    std::shared_ptr<string> abnormalLevel_ = nullptr;
    // The type of the risk.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of risks.
    std::shared_ptr<string> abnormalTag_ = nullptr;
    // The status of the risk.
    std::shared_ptr<string> abnromalStatus_ = nullptr;
    // The risk-related API.
    std::shared_ptr<string> apiFormat_ = nullptr;
    // The ID of the risk-related API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The business purpose of the API.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the business purposes of APIs.
    std::shared_ptr<string> apiTag_ = nullptr;
    // The time at which the risk was first detected. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> discoverTime_ = nullptr;
    // The risk-related samples.
    std::shared_ptr<vector<string>> examples_ = nullptr;
    // The time at which the API was first detected. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> firstTime_ = nullptr;
    // Indicates whether the API is followed. Valid values:
    // 
    // *   **1**: yes
    // *   **0**(default): no
    std::shared_ptr<int64_t> follow_ = nullptr;
    // The time at which the risk was marked as ignored. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> ignoreTime_ = nullptr;
    // The time at which the API was last accessed. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> lastestTime_ = nullptr;
    // The time at which the risk was last detected. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> latestDiscoverTime_ = nullptr;
    // The domain name or IP address of the API.
    std::shared_ptr<string> matchedHost_ = nullptr;
    // The remarks.
    std::shared_ptr<string> note_ = nullptr;
    // The source of the risk type. Valid values:
    // 
    // *   **custom**
    // *   **default**
    std::shared_ptr<string> origin_ = nullptr;
    // The status of the risk. Valid values:
    // 
    // * **toBeConfirmed**
    // * **confirmed**
    // * **toBeFixed**
    // * **fixed**
    // * **ignored**
    std::shared_ptr<string> userStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
