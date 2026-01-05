// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECABNORMALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECABNORMALSRESPONSEBODY_HPP_
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
  class DescribeApisecAbnormalsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecAbnormalsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecAbnormalsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisecAbnormalsResponseBody() = default ;
    DescribeApisecAbnormalsResponseBody(const DescribeApisecAbnormalsResponseBody &) = default ;
    DescribeApisecAbnormalsResponseBody(DescribeApisecAbnormalsResponseBody &&) = default ;
    DescribeApisecAbnormalsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecAbnormalsResponseBody() = default ;
    DescribeApisecAbnormalsResponseBody& operator=(const DescribeApisecAbnormalsResponseBody &) = default ;
    DescribeApisecAbnormalsResponseBody& operator=(DescribeApisecAbnormalsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      virtual bool empty() const override { return this->abnormalEventNumber_ == nullptr
        && this->abnormalId_ == nullptr && this->abnormalInfo_ == nullptr && this->abnormalLevel_ == nullptr && this->abnormalTag_ == nullptr && this->abnromalStatus_ == nullptr
        && this->apiFormat_ == nullptr && this->apiId_ == nullptr && this->apiTag_ == nullptr && this->discoverTime_ == nullptr && this->examples_ == nullptr
        && this->firstTime_ == nullptr && this->follow_ == nullptr && this->ignoreTime_ == nullptr && this->lastestTime_ == nullptr && this->latestDiscoverTime_ == nullptr
        && this->matchedHost_ == nullptr && this->note_ == nullptr && this->origin_ == nullptr && this->userStatus_ == nullptr; };
      // abnormalEventNumber Field Functions 
      bool hasAbnormalEventNumber() const { return this->abnormalEventNumber_ != nullptr;};
      void deleteAbnormalEventNumber() { this->abnormalEventNumber_ = nullptr;};
      inline int64_t getAbnormalEventNumber() const { DARABONBA_PTR_GET_DEFAULT(abnormalEventNumber_, 0L) };
      inline Data& setAbnormalEventNumber(int64_t abnormalEventNumber) { DARABONBA_PTR_SET_VALUE(abnormalEventNumber_, abnormalEventNumber) };


      // abnormalId Field Functions 
      bool hasAbnormalId() const { return this->abnormalId_ != nullptr;};
      void deleteAbnormalId() { this->abnormalId_ = nullptr;};
      inline string getAbnormalId() const { DARABONBA_PTR_GET_DEFAULT(abnormalId_, "") };
      inline Data& setAbnormalId(string abnormalId) { DARABONBA_PTR_SET_VALUE(abnormalId_, abnormalId) };


      // abnormalInfo Field Functions 
      bool hasAbnormalInfo() const { return this->abnormalInfo_ != nullptr;};
      void deleteAbnormalInfo() { this->abnormalInfo_ = nullptr;};
      inline string getAbnormalInfo() const { DARABONBA_PTR_GET_DEFAULT(abnormalInfo_, "") };
      inline Data& setAbnormalInfo(string abnormalInfo) { DARABONBA_PTR_SET_VALUE(abnormalInfo_, abnormalInfo) };


      // abnormalLevel Field Functions 
      bool hasAbnormalLevel() const { return this->abnormalLevel_ != nullptr;};
      void deleteAbnormalLevel() { this->abnormalLevel_ = nullptr;};
      inline string getAbnormalLevel() const { DARABONBA_PTR_GET_DEFAULT(abnormalLevel_, "") };
      inline Data& setAbnormalLevel(string abnormalLevel) { DARABONBA_PTR_SET_VALUE(abnormalLevel_, abnormalLevel) };


      // abnormalTag Field Functions 
      bool hasAbnormalTag() const { return this->abnormalTag_ != nullptr;};
      void deleteAbnormalTag() { this->abnormalTag_ = nullptr;};
      inline string getAbnormalTag() const { DARABONBA_PTR_GET_DEFAULT(abnormalTag_, "") };
      inline Data& setAbnormalTag(string abnormalTag) { DARABONBA_PTR_SET_VALUE(abnormalTag_, abnormalTag) };


      // abnromalStatus Field Functions 
      bool hasAbnromalStatus() const { return this->abnromalStatus_ != nullptr;};
      void deleteAbnromalStatus() { this->abnromalStatus_ = nullptr;};
      inline string getAbnromalStatus() const { DARABONBA_PTR_GET_DEFAULT(abnromalStatus_, "") };
      inline Data& setAbnromalStatus(string abnromalStatus) { DARABONBA_PTR_SET_VALUE(abnromalStatus_, abnromalStatus) };


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


      // discoverTime Field Functions 
      bool hasDiscoverTime() const { return this->discoverTime_ != nullptr;};
      void deleteDiscoverTime() { this->discoverTime_ = nullptr;};
      inline int64_t getDiscoverTime() const { DARABONBA_PTR_GET_DEFAULT(discoverTime_, 0L) };
      inline Data& setDiscoverTime(int64_t discoverTime) { DARABONBA_PTR_SET_VALUE(discoverTime_, discoverTime) };


      // examples Field Functions 
      bool hasExamples() const { return this->examples_ != nullptr;};
      void deleteExamples() { this->examples_ = nullptr;};
      inline const vector<string> & getExamples() const { DARABONBA_PTR_GET_CONST(examples_, vector<string>) };
      inline vector<string> getExamples() { DARABONBA_PTR_GET(examples_, vector<string>) };
      inline Data& setExamples(const vector<string> & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
      inline Data& setExamples(vector<string> && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline Data& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // follow Field Functions 
      bool hasFollow() const { return this->follow_ != nullptr;};
      void deleteFollow() { this->follow_ = nullptr;};
      inline int64_t getFollow() const { DARABONBA_PTR_GET_DEFAULT(follow_, 0L) };
      inline Data& setFollow(int64_t follow) { DARABONBA_PTR_SET_VALUE(follow_, follow) };


      // ignoreTime Field Functions 
      bool hasIgnoreTime() const { return this->ignoreTime_ != nullptr;};
      void deleteIgnoreTime() { this->ignoreTime_ = nullptr;};
      inline int64_t getIgnoreTime() const { DARABONBA_PTR_GET_DEFAULT(ignoreTime_, 0L) };
      inline Data& setIgnoreTime(int64_t ignoreTime) { DARABONBA_PTR_SET_VALUE(ignoreTime_, ignoreTime) };


      // lastestTime Field Functions 
      bool hasLastestTime() const { return this->lastestTime_ != nullptr;};
      void deleteLastestTime() { this->lastestTime_ = nullptr;};
      inline int64_t getLastestTime() const { DARABONBA_PTR_GET_DEFAULT(lastestTime_, 0L) };
      inline Data& setLastestTime(int64_t lastestTime) { DARABONBA_PTR_SET_VALUE(lastestTime_, lastestTime) };


      // latestDiscoverTime Field Functions 
      bool hasLatestDiscoverTime() const { return this->latestDiscoverTime_ != nullptr;};
      void deleteLatestDiscoverTime() { this->latestDiscoverTime_ = nullptr;};
      inline int64_t getLatestDiscoverTime() const { DARABONBA_PTR_GET_DEFAULT(latestDiscoverTime_, 0L) };
      inline Data& setLatestDiscoverTime(int64_t latestDiscoverTime) { DARABONBA_PTR_SET_VALUE(latestDiscoverTime_, latestDiscoverTime) };


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


      // userStatus Field Functions 
      bool hasUserStatus() const { return this->userStatus_ != nullptr;};
      void deleteUserStatus() { this->userStatus_ = nullptr;};
      inline string getUserStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, "") };
      inline Data& setUserStatus(string userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


    protected:
      // The number of risk-related security events.
      shared_ptr<int64_t> abnormalEventNumber_ {};
      // The ID of the risk.
      shared_ptr<string> abnormalId_ {};
      // The details of the risk. The value is a string that consists of multiple parameters in the JSON format. Valid values:
      // 
      // * **rule**: risk-related rule
      // * **data_type**: sensitive data type
      // * **custom_rule_name**: custom rule name
      // * **rule_name**: built-in rule name
      shared_ptr<string> abnormalInfo_ {};
      // The level of the risk. Valid values:
      // 
      // * **high**
      // * **medium**
      // * **low**
      shared_ptr<string> abnormalLevel_ {};
      // The type of the risk.
      // 
      // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of risks.
      shared_ptr<string> abnormalTag_ {};
      // The status of the risk.
      shared_ptr<string> abnromalStatus_ {};
      // The risk-related API.
      shared_ptr<string> apiFormat_ {};
      // The ID of the risk-related API.
      shared_ptr<string> apiId_ {};
      // The business purpose of the API.
      // 
      // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the business purposes of APIs.
      shared_ptr<string> apiTag_ {};
      // The time at which the risk was first detected. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> discoverTime_ {};
      // The risk-related samples.
      shared_ptr<vector<string>> examples_ {};
      // The time at which the API was first detected. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> firstTime_ {};
      // Indicates whether the API is followed. Valid values:
      // 
      // *   **1**: yes
      // *   **0**(default): no
      shared_ptr<int64_t> follow_ {};
      // The time at which the risk was marked as ignored. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> ignoreTime_ {};
      // The time at which the API was last accessed. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> lastestTime_ {};
      // The time at which the risk was last detected. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> latestDiscoverTime_ {};
      // The domain name or IP address of the API.
      shared_ptr<string> matchedHost_ {};
      // The remarks.
      shared_ptr<string> note_ {};
      // The source of the risk type. Valid values:
      // 
      // *   **custom**
      // *   **default**
      shared_ptr<string> origin_ {};
      // The status of the risk. Valid values:
      // 
      // * **toBeConfirmed**
      // * **confirmed**
      // * **toBeFixed**
      // * **fixed**
      // * **ignored**
      shared_ptr<string> userStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeApisecAbnormalsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeApisecAbnormalsResponseBody::Data>) };
    inline vector<DescribeApisecAbnormalsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeApisecAbnormalsResponseBody::Data>) };
    inline DescribeApisecAbnormalsResponseBody& setData(const vector<DescribeApisecAbnormalsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApisecAbnormalsResponseBody& setData(vector<DescribeApisecAbnormalsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecAbnormalsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeApisecAbnormalsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The risks.
    shared_ptr<vector<DescribeApisecAbnormalsResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
