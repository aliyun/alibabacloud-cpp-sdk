// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECAPIRESOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECAPIRESOURCESRESPONSEBODYDATA_HPP_
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
  class DescribeApisecApiResourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecApiResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalNum, abnormalNum_);
      DARABONBA_PTR_TO_JSON(AllCnt, allCnt_);
      DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiInfo, apiInfo_);
      DARABONBA_PTR_TO_JSON(ApiMethod, apiMethod_);
      DARABONBA_PTR_TO_JSON(ApiSensitive, apiSensitive_);
      DARABONBA_PTR_TO_JSON(ApiSensitiveRequest, apiSensitiveRequest_);
      DARABONBA_PTR_TO_JSON(ApiSensitiveResponse, apiSensitiveResponse_);
      DARABONBA_PTR_TO_JSON(ApiStatus, apiStatus_);
      DARABONBA_PTR_TO_JSON(ApiTag, apiTag_);
      DARABONBA_PTR_TO_JSON(ApiType, apiType_);
      DARABONBA_PTR_TO_JSON(AuthFlag, authFlag_);
      DARABONBA_PTR_TO_JSON(BotCnt, botCnt_);
      DARABONBA_PTR_TO_JSON(CrossBorderCnt, crossBorderCnt_);
      DARABONBA_PTR_TO_JSON(EventNum, eventNum_);
      DARABONBA_PTR_TO_JSON(Examples, examples_);
      DARABONBA_PTR_TO_JSON(FarthestTs, farthestTs_);
      DARABONBA_PTR_TO_JSON(Follow, follow_);
      DARABONBA_PTR_TO_JSON(LastestTs, lastestTs_);
      DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecApiResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalNum, abnormalNum_);
      DARABONBA_PTR_FROM_JSON(AllCnt, allCnt_);
      DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiInfo, apiInfo_);
      DARABONBA_PTR_FROM_JSON(ApiMethod, apiMethod_);
      DARABONBA_PTR_FROM_JSON(ApiSensitive, apiSensitive_);
      DARABONBA_PTR_FROM_JSON(ApiSensitiveRequest, apiSensitiveRequest_);
      DARABONBA_PTR_FROM_JSON(ApiSensitiveResponse, apiSensitiveResponse_);
      DARABONBA_PTR_FROM_JSON(ApiStatus, apiStatus_);
      DARABONBA_PTR_FROM_JSON(ApiTag, apiTag_);
      DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
      DARABONBA_PTR_FROM_JSON(AuthFlag, authFlag_);
      DARABONBA_PTR_FROM_JSON(BotCnt, botCnt_);
      DARABONBA_PTR_FROM_JSON(CrossBorderCnt, crossBorderCnt_);
      DARABONBA_PTR_FROM_JSON(EventNum, eventNum_);
      DARABONBA_PTR_FROM_JSON(Examples, examples_);
      DARABONBA_PTR_FROM_JSON(FarthestTs, farthestTs_);
      DARABONBA_PTR_FROM_JSON(Follow, follow_);
      DARABONBA_PTR_FROM_JSON(LastestTs, lastestTs_);
      DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    DescribeApisecApiResourcesResponseBodyData() = default ;
    DescribeApisecApiResourcesResponseBodyData(const DescribeApisecApiResourcesResponseBodyData &) = default ;
    DescribeApisecApiResourcesResponseBodyData(DescribeApisecApiResourcesResponseBodyData &&) = default ;
    DescribeApisecApiResourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecApiResourcesResponseBodyData() = default ;
    DescribeApisecApiResourcesResponseBodyData& operator=(const DescribeApisecApiResourcesResponseBodyData &) = default ;
    DescribeApisecApiResourcesResponseBodyData& operator=(DescribeApisecApiResourcesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalNum_ == nullptr
        && return this->allCnt_ == nullptr && return this->apiFormat_ == nullptr && return this->apiId_ == nullptr && return this->apiInfo_ == nullptr && return this->apiMethod_ == nullptr
        && return this->apiSensitive_ == nullptr && return this->apiSensitiveRequest_ == nullptr && return this->apiSensitiveResponse_ == nullptr && return this->apiStatus_ == nullptr && return this->apiTag_ == nullptr
        && return this->apiType_ == nullptr && return this->authFlag_ == nullptr && return this->botCnt_ == nullptr && return this->crossBorderCnt_ == nullptr && return this->eventNum_ == nullptr
        && return this->examples_ == nullptr && return this->farthestTs_ == nullptr && return this->follow_ == nullptr && return this->lastestTs_ == nullptr && return this->matchedHost_ == nullptr
        && return this->note_ == nullptr && return this->resources_ == nullptr; };
    // abnormalNum Field Functions 
    bool hasAbnormalNum() const { return this->abnormalNum_ != nullptr;};
    void deleteAbnormalNum() { this->abnormalNum_ = nullptr;};
    inline int64_t abnormalNum() const { DARABONBA_PTR_GET_DEFAULT(abnormalNum_, 0L) };
    inline DescribeApisecApiResourcesResponseBodyData& setAbnormalNum(int64_t abnormalNum) { DARABONBA_PTR_SET_VALUE(abnormalNum_, abnormalNum) };


    // allCnt Field Functions 
    bool hasAllCnt() const { return this->allCnt_ != nullptr;};
    void deleteAllCnt() { this->allCnt_ = nullptr;};
    inline int64_t allCnt() const { DARABONBA_PTR_GET_DEFAULT(allCnt_, 0L) };
    inline DescribeApisecApiResourcesResponseBodyData& setAllCnt(int64_t allCnt) { DARABONBA_PTR_SET_VALUE(allCnt_, allCnt) };


    // apiFormat Field Functions 
    bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
    void deleteApiFormat() { this->apiFormat_ = nullptr;};
    inline string apiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
    inline DescribeApisecApiResourcesResponseBodyData& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApisecApiResourcesResponseBodyData& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiInfo Field Functions 
    bool hasApiInfo() const { return this->apiInfo_ != nullptr;};
    void deleteApiInfo() { this->apiInfo_ = nullptr;};
    inline string apiInfo() const { DARABONBA_PTR_GET_DEFAULT(apiInfo_, "") };
    inline DescribeApisecApiResourcesResponseBodyData& setApiInfo(string apiInfo) { DARABONBA_PTR_SET_VALUE(apiInfo_, apiInfo) };


    // apiMethod Field Functions 
    bool hasApiMethod() const { return this->apiMethod_ != nullptr;};
    void deleteApiMethod() { this->apiMethod_ = nullptr;};
    inline string apiMethod() const { DARABONBA_PTR_GET_DEFAULT(apiMethod_, "") };
    inline DescribeApisecApiResourcesResponseBodyData& setApiMethod(string apiMethod) { DARABONBA_PTR_SET_VALUE(apiMethod_, apiMethod) };


    // apiSensitive Field Functions 
    bool hasApiSensitive() const { return this->apiSensitive_ != nullptr;};
    void deleteApiSensitive() { this->apiSensitive_ = nullptr;};
    inline string apiSensitive() const { DARABONBA_PTR_GET_DEFAULT(apiSensitive_, "") };
    inline DescribeApisecApiResourcesResponseBodyData& setApiSensitive(string apiSensitive) { DARABONBA_PTR_SET_VALUE(apiSensitive_, apiSensitive) };


    // apiSensitiveRequest Field Functions 
    bool hasApiSensitiveRequest() const { return this->apiSensitiveRequest_ != nullptr;};
    void deleteApiSensitiveRequest() { this->apiSensitiveRequest_ = nullptr;};
    inline string apiSensitiveRequest() const { DARABONBA_PTR_GET_DEFAULT(apiSensitiveRequest_, "") };
    inline DescribeApisecApiResourcesResponseBodyData& setApiSensitiveRequest(string apiSensitiveRequest) { DARABONBA_PTR_SET_VALUE(apiSensitiveRequest_, apiSensitiveRequest) };


    // apiSensitiveResponse Field Functions 
    bool hasApiSensitiveResponse() const { return this->apiSensitiveResponse_ != nullptr;};
    void deleteApiSensitiveResponse() { this->apiSensitiveResponse_ = nullptr;};
    inline string apiSensitiveResponse() const { DARABONBA_PTR_GET_DEFAULT(apiSensitiveResponse_, "") };
    inline DescribeApisecApiResourcesResponseBodyData& setApiSensitiveResponse(string apiSensitiveResponse) { DARABONBA_PTR_SET_VALUE(apiSensitiveResponse_, apiSensitiveResponse) };


    // apiStatus Field Functions 
    bool hasApiStatus() const { return this->apiStatus_ != nullptr;};
    void deleteApiStatus() { this->apiStatus_ = nullptr;};
    inline string apiStatus() const { DARABONBA_PTR_GET_DEFAULT(apiStatus_, "") };
    inline DescribeApisecApiResourcesResponseBodyData& setApiStatus(string apiStatus) { DARABONBA_PTR_SET_VALUE(apiStatus_, apiStatus) };


    // apiTag Field Functions 
    bool hasApiTag() const { return this->apiTag_ != nullptr;};
    void deleteApiTag() { this->apiTag_ = nullptr;};
    inline string apiTag() const { DARABONBA_PTR_GET_DEFAULT(apiTag_, "") };
    inline DescribeApisecApiResourcesResponseBodyData& setApiTag(string apiTag) { DARABONBA_PTR_SET_VALUE(apiTag_, apiTag) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string apiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline DescribeApisecApiResourcesResponseBodyData& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // authFlag Field Functions 
    bool hasAuthFlag() const { return this->authFlag_ != nullptr;};
    void deleteAuthFlag() { this->authFlag_ = nullptr;};
    inline string authFlag() const { DARABONBA_PTR_GET_DEFAULT(authFlag_, "") };
    inline DescribeApisecApiResourcesResponseBodyData& setAuthFlag(string authFlag) { DARABONBA_PTR_SET_VALUE(authFlag_, authFlag) };


    // botCnt Field Functions 
    bool hasBotCnt() const { return this->botCnt_ != nullptr;};
    void deleteBotCnt() { this->botCnt_ = nullptr;};
    inline int64_t botCnt() const { DARABONBA_PTR_GET_DEFAULT(botCnt_, 0L) };
    inline DescribeApisecApiResourcesResponseBodyData& setBotCnt(int64_t botCnt) { DARABONBA_PTR_SET_VALUE(botCnt_, botCnt) };


    // crossBorderCnt Field Functions 
    bool hasCrossBorderCnt() const { return this->crossBorderCnt_ != nullptr;};
    void deleteCrossBorderCnt() { this->crossBorderCnt_ = nullptr;};
    inline int64_t crossBorderCnt() const { DARABONBA_PTR_GET_DEFAULT(crossBorderCnt_, 0L) };
    inline DescribeApisecApiResourcesResponseBodyData& setCrossBorderCnt(int64_t crossBorderCnt) { DARABONBA_PTR_SET_VALUE(crossBorderCnt_, crossBorderCnt) };


    // eventNum Field Functions 
    bool hasEventNum() const { return this->eventNum_ != nullptr;};
    void deleteEventNum() { this->eventNum_ = nullptr;};
    inline int64_t eventNum() const { DARABONBA_PTR_GET_DEFAULT(eventNum_, 0L) };
    inline DescribeApisecApiResourcesResponseBodyData& setEventNum(int64_t eventNum) { DARABONBA_PTR_SET_VALUE(eventNum_, eventNum) };


    // examples Field Functions 
    bool hasExamples() const { return this->examples_ != nullptr;};
    void deleteExamples() { this->examples_ = nullptr;};
    inline const vector<string> & examples() const { DARABONBA_PTR_GET_CONST(examples_, vector<string>) };
    inline vector<string> examples() { DARABONBA_PTR_GET(examples_, vector<string>) };
    inline DescribeApisecApiResourcesResponseBodyData& setExamples(const vector<string> & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
    inline DescribeApisecApiResourcesResponseBodyData& setExamples(vector<string> && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


    // farthestTs Field Functions 
    bool hasFarthestTs() const { return this->farthestTs_ != nullptr;};
    void deleteFarthestTs() { this->farthestTs_ = nullptr;};
    inline int64_t farthestTs() const { DARABONBA_PTR_GET_DEFAULT(farthestTs_, 0L) };
    inline DescribeApisecApiResourcesResponseBodyData& setFarthestTs(int64_t farthestTs) { DARABONBA_PTR_SET_VALUE(farthestTs_, farthestTs) };


    // follow Field Functions 
    bool hasFollow() const { return this->follow_ != nullptr;};
    void deleteFollow() { this->follow_ = nullptr;};
    inline int32_t follow() const { DARABONBA_PTR_GET_DEFAULT(follow_, 0) };
    inline DescribeApisecApiResourcesResponseBodyData& setFollow(int32_t follow) { DARABONBA_PTR_SET_VALUE(follow_, follow) };


    // lastestTs Field Functions 
    bool hasLastestTs() const { return this->lastestTs_ != nullptr;};
    void deleteLastestTs() { this->lastestTs_ = nullptr;};
    inline int64_t lastestTs() const { DARABONBA_PTR_GET_DEFAULT(lastestTs_, 0L) };
    inline DescribeApisecApiResourcesResponseBodyData& setLastestTs(int64_t lastestTs) { DARABONBA_PTR_SET_VALUE(lastestTs_, lastestTs) };


    // matchedHost Field Functions 
    bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
    void deleteMatchedHost() { this->matchedHost_ = nullptr;};
    inline string matchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
    inline DescribeApisecApiResourcesResponseBodyData& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline DescribeApisecApiResourcesResponseBodyData& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<string> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
    inline vector<string> resources() { DARABONBA_PTR_GET(resources_, vector<string>) };
    inline DescribeApisecApiResourcesResponseBodyData& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeApisecApiResourcesResponseBodyData& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The number of API-related risks.
    std::shared_ptr<int64_t> abnormalNum_ = nullptr;
    // The total number of calls to this API in the previous 30 days.
    std::shared_ptr<int64_t> allCnt_ = nullptr;
    // The API.
    std::shared_ptr<string> apiFormat_ = nullptr;
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The API-related information. The value of this parameter is a JSON string that contains multiple parameters. The value includes the following parameters:
    // 
    // * **param_num**: the number of API parameters
    // * **request_method**: the request method
    // * **protocol**: the request protocol
    // * **api_url**: the request URL
    // * **poc_payload**: the request
    // * **request**: the sample request
    // * **response**: the sample response
    // * **param**: the request parameters
    std::shared_ptr<string> apiInfo_ = nullptr;
    // The request method of the API. Valid values:
    // 
    // * **GET**
    // * **POST**
    // * **HEAD**
    // * **PUT**
    // * **DELETE**
    // * **CONNECT**
    // * **PATCH**
    // * **OPTIONS**
    std::shared_ptr<string> apiMethod_ = nullptr;
    // The API-related sensitive information. The value of this parameter is a JSON string that contains multiple parameters. The value includes the following parameters:
    // 
    // * **request_sensitive_list**: the sensitive data type in the request
    // * **response_sensitive_list**: the sensitive data type in the response
    // * **sensitive_list**: sensitive data types
    // * **sensitive_level**: sensitivity level
    std::shared_ptr<string> apiSensitive_ = nullptr;
    // The sensitive data type in the request.
    std::shared_ptr<string> apiSensitiveRequest_ = nullptr;
    // The sensitive data type in the response.
    std::shared_ptr<string> apiSensitiveResponse_ = nullptr;
    // The API status. Valid values:
    // 
    // *   **NewbornInterface**: The API is newly added.
    // *   **OfflineInterface**: The API is inactive.
    // *   **normal**: The API is normal.
    std::shared_ptr<string> apiStatus_ = nullptr;
    // The business purpose of the API.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the business purposes of APIs.
    std::shared_ptr<string> apiTag_ = nullptr;
    // The service object. Valid values:
    // 
    // *   **PublicAPI**: public services
    // *   **ThirdpartAPI**: cooperation with third-party partners
    // *   **InternalAPI**: internal office
    std::shared_ptr<string> apiType_ = nullptr;
    // Indicates whether authentication is required. Valid values:
    // 
    // * **0**: Authentication is required.
    // * **1**: Authentication is not required.
    std::shared_ptr<string> authFlag_ = nullptr;
    // The number of bot-initiated requests in the previous 30 days.
    std::shared_ptr<int64_t> botCnt_ = nullptr;
    // The number of the cross-border requests in the previous 30 days.
    std::shared_ptr<int64_t> crossBorderCnt_ = nullptr;
    // The number of API-related security events.
    std::shared_ptr<int64_t> eventNum_ = nullptr;
    // The sample APIs.
    std::shared_ptr<vector<string>> examples_ = nullptr;
    // The time when the API asset was first detected. This value is a UNIX timestamp in UTC. Unit: seconds.
    std::shared_ptr<int64_t> farthestTs_ = nullptr;
    // Specifies whether to follow the API. Valid values:
    // 
    // *   **1**: follows the API.
    // *   **0**: does not follow the API.
    std::shared_ptr<int32_t> follow_ = nullptr;
    // The time at which the API was last accessed. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> lastestTs_ = nullptr;
    // The domain name or IP address of the API.
    std::shared_ptr<string> matchedHost_ = nullptr;
    // The remarks.
    std::shared_ptr<string> note_ = nullptr;
    // The list of protection objects corresponding to this asset.
    std::shared_ptr<vector<string>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
