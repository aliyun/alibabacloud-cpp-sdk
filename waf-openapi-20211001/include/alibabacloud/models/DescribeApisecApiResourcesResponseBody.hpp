// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECAPIRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECAPIRESOURCESRESPONSEBODY_HPP_
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
  class DescribeApisecApiResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecApiResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecApiResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisecApiResourcesResponseBody() = default ;
    DescribeApisecApiResourcesResponseBody(const DescribeApisecApiResourcesResponseBody &) = default ;
    DescribeApisecApiResourcesResponseBody(DescribeApisecApiResourcesResponseBody &&) = default ;
    DescribeApisecApiResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecApiResourcesResponseBody() = default ;
    DescribeApisecApiResourcesResponseBody& operator=(const DescribeApisecApiResourcesResponseBody &) = default ;
    DescribeApisecApiResourcesResponseBody& operator=(DescribeApisecApiResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AbnormalNum, abnormalNum_);
        DARABONBA_PTR_TO_JSON(AccountEventNum, accountEventNum_);
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AbnormalNum, abnormalNum_);
        DARABONBA_PTR_FROM_JSON(AccountEventNum, accountEventNum_);
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
      virtual bool empty() const override { return this->abnormalNum_ == nullptr
        && this->accountEventNum_ == nullptr && this->allCnt_ == nullptr && this->apiFormat_ == nullptr && this->apiId_ == nullptr && this->apiInfo_ == nullptr
        && this->apiMethod_ == nullptr && this->apiSensitive_ == nullptr && this->apiSensitiveRequest_ == nullptr && this->apiSensitiveResponse_ == nullptr && this->apiStatus_ == nullptr
        && this->apiTag_ == nullptr && this->apiType_ == nullptr && this->authFlag_ == nullptr && this->botCnt_ == nullptr && this->crossBorderCnt_ == nullptr
        && this->eventNum_ == nullptr && this->examples_ == nullptr && this->farthestTs_ == nullptr && this->follow_ == nullptr && this->lastestTs_ == nullptr
        && this->matchedHost_ == nullptr && this->note_ == nullptr && this->resources_ == nullptr; };
      // abnormalNum Field Functions 
      bool hasAbnormalNum() const { return this->abnormalNum_ != nullptr;};
      void deleteAbnormalNum() { this->abnormalNum_ = nullptr;};
      inline int64_t getAbnormalNum() const { DARABONBA_PTR_GET_DEFAULT(abnormalNum_, 0L) };
      inline Data& setAbnormalNum(int64_t abnormalNum) { DARABONBA_PTR_SET_VALUE(abnormalNum_, abnormalNum) };


      // accountEventNum Field Functions 
      bool hasAccountEventNum() const { return this->accountEventNum_ != nullptr;};
      void deleteAccountEventNum() { this->accountEventNum_ = nullptr;};
      inline int64_t getAccountEventNum() const { DARABONBA_PTR_GET_DEFAULT(accountEventNum_, 0L) };
      inline Data& setAccountEventNum(int64_t accountEventNum) { DARABONBA_PTR_SET_VALUE(accountEventNum_, accountEventNum) };


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


      // apiInfo Field Functions 
      bool hasApiInfo() const { return this->apiInfo_ != nullptr;};
      void deleteApiInfo() { this->apiInfo_ = nullptr;};
      inline string getApiInfo() const { DARABONBA_PTR_GET_DEFAULT(apiInfo_, "") };
      inline Data& setApiInfo(string apiInfo) { DARABONBA_PTR_SET_VALUE(apiInfo_, apiInfo) };


      // apiMethod Field Functions 
      bool hasApiMethod() const { return this->apiMethod_ != nullptr;};
      void deleteApiMethod() { this->apiMethod_ = nullptr;};
      inline string getApiMethod() const { DARABONBA_PTR_GET_DEFAULT(apiMethod_, "") };
      inline Data& setApiMethod(string apiMethod) { DARABONBA_PTR_SET_VALUE(apiMethod_, apiMethod) };


      // apiSensitive Field Functions 
      bool hasApiSensitive() const { return this->apiSensitive_ != nullptr;};
      void deleteApiSensitive() { this->apiSensitive_ = nullptr;};
      inline string getApiSensitive() const { DARABONBA_PTR_GET_DEFAULT(apiSensitive_, "") };
      inline Data& setApiSensitive(string apiSensitive) { DARABONBA_PTR_SET_VALUE(apiSensitive_, apiSensitive) };


      // apiSensitiveRequest Field Functions 
      bool hasApiSensitiveRequest() const { return this->apiSensitiveRequest_ != nullptr;};
      void deleteApiSensitiveRequest() { this->apiSensitiveRequest_ = nullptr;};
      inline string getApiSensitiveRequest() const { DARABONBA_PTR_GET_DEFAULT(apiSensitiveRequest_, "") };
      inline Data& setApiSensitiveRequest(string apiSensitiveRequest) { DARABONBA_PTR_SET_VALUE(apiSensitiveRequest_, apiSensitiveRequest) };


      // apiSensitiveResponse Field Functions 
      bool hasApiSensitiveResponse() const { return this->apiSensitiveResponse_ != nullptr;};
      void deleteApiSensitiveResponse() { this->apiSensitiveResponse_ = nullptr;};
      inline string getApiSensitiveResponse() const { DARABONBA_PTR_GET_DEFAULT(apiSensitiveResponse_, "") };
      inline Data& setApiSensitiveResponse(string apiSensitiveResponse) { DARABONBA_PTR_SET_VALUE(apiSensitiveResponse_, apiSensitiveResponse) };


      // apiStatus Field Functions 
      bool hasApiStatus() const { return this->apiStatus_ != nullptr;};
      void deleteApiStatus() { this->apiStatus_ = nullptr;};
      inline string getApiStatus() const { DARABONBA_PTR_GET_DEFAULT(apiStatus_, "") };
      inline Data& setApiStatus(string apiStatus) { DARABONBA_PTR_SET_VALUE(apiStatus_, apiStatus) };


      // apiTag Field Functions 
      bool hasApiTag() const { return this->apiTag_ != nullptr;};
      void deleteApiTag() { this->apiTag_ = nullptr;};
      inline string getApiTag() const { DARABONBA_PTR_GET_DEFAULT(apiTag_, "") };
      inline Data& setApiTag(string apiTag) { DARABONBA_PTR_SET_VALUE(apiTag_, apiTag) };


      // apiType Field Functions 
      bool hasApiType() const { return this->apiType_ != nullptr;};
      void deleteApiType() { this->apiType_ = nullptr;};
      inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
      inline Data& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


      // authFlag Field Functions 
      bool hasAuthFlag() const { return this->authFlag_ != nullptr;};
      void deleteAuthFlag() { this->authFlag_ = nullptr;};
      inline string getAuthFlag() const { DARABONBA_PTR_GET_DEFAULT(authFlag_, "") };
      inline Data& setAuthFlag(string authFlag) { DARABONBA_PTR_SET_VALUE(authFlag_, authFlag) };


      // botCnt Field Functions 
      bool hasBotCnt() const { return this->botCnt_ != nullptr;};
      void deleteBotCnt() { this->botCnt_ = nullptr;};
      inline int64_t getBotCnt() const { DARABONBA_PTR_GET_DEFAULT(botCnt_, 0L) };
      inline Data& setBotCnt(int64_t botCnt) { DARABONBA_PTR_SET_VALUE(botCnt_, botCnt) };


      // crossBorderCnt Field Functions 
      bool hasCrossBorderCnt() const { return this->crossBorderCnt_ != nullptr;};
      void deleteCrossBorderCnt() { this->crossBorderCnt_ = nullptr;};
      inline int64_t getCrossBorderCnt() const { DARABONBA_PTR_GET_DEFAULT(crossBorderCnt_, 0L) };
      inline Data& setCrossBorderCnt(int64_t crossBorderCnt) { DARABONBA_PTR_SET_VALUE(crossBorderCnt_, crossBorderCnt) };


      // eventNum Field Functions 
      bool hasEventNum() const { return this->eventNum_ != nullptr;};
      void deleteEventNum() { this->eventNum_ = nullptr;};
      inline int64_t getEventNum() const { DARABONBA_PTR_GET_DEFAULT(eventNum_, 0L) };
      inline Data& setEventNum(int64_t eventNum) { DARABONBA_PTR_SET_VALUE(eventNum_, eventNum) };


      // examples Field Functions 
      bool hasExamples() const { return this->examples_ != nullptr;};
      void deleteExamples() { this->examples_ = nullptr;};
      inline const vector<string> & getExamples() const { DARABONBA_PTR_GET_CONST(examples_, vector<string>) };
      inline vector<string> getExamples() { DARABONBA_PTR_GET(examples_, vector<string>) };
      inline Data& setExamples(const vector<string> & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
      inline Data& setExamples(vector<string> && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


      // farthestTs Field Functions 
      bool hasFarthestTs() const { return this->farthestTs_ != nullptr;};
      void deleteFarthestTs() { this->farthestTs_ = nullptr;};
      inline int64_t getFarthestTs() const { DARABONBA_PTR_GET_DEFAULT(farthestTs_, 0L) };
      inline Data& setFarthestTs(int64_t farthestTs) { DARABONBA_PTR_SET_VALUE(farthestTs_, farthestTs) };


      // follow Field Functions 
      bool hasFollow() const { return this->follow_ != nullptr;};
      void deleteFollow() { this->follow_ = nullptr;};
      inline int32_t getFollow() const { DARABONBA_PTR_GET_DEFAULT(follow_, 0) };
      inline Data& setFollow(int32_t follow) { DARABONBA_PTR_SET_VALUE(follow_, follow) };


      // lastestTs Field Functions 
      bool hasLastestTs() const { return this->lastestTs_ != nullptr;};
      void deleteLastestTs() { this->lastestTs_ = nullptr;};
      inline int64_t getLastestTs() const { DARABONBA_PTR_GET_DEFAULT(lastestTs_, 0L) };
      inline Data& setLastestTs(int64_t lastestTs) { DARABONBA_PTR_SET_VALUE(lastestTs_, lastestTs) };


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


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline const vector<string> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
      inline vector<string> getResources() { DARABONBA_PTR_GET(resources_, vector<string>) };
      inline Data& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
      inline Data& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    protected:
      // The number of API-related risks.
      shared_ptr<int64_t> abnormalNum_ {};
      shared_ptr<int64_t> accountEventNum_ {};
      // The total number of calls to this API in the previous 30 days.
      shared_ptr<int64_t> allCnt_ {};
      // The API.
      shared_ptr<string> apiFormat_ {};
      // The ID of the API.
      shared_ptr<string> apiId_ {};
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
      shared_ptr<string> apiInfo_ {};
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
      shared_ptr<string> apiMethod_ {};
      // The API-related sensitive information. The value of this parameter is a JSON string that contains multiple parameters. The value includes the following parameters:
      // 
      // * **request_sensitive_list**: the sensitive data type in the request
      // * **response_sensitive_list**: the sensitive data type in the response
      // * **sensitive_list**: sensitive data types
      // * **sensitive_level**: sensitivity level
      shared_ptr<string> apiSensitive_ {};
      // The sensitive data type in the request.
      shared_ptr<string> apiSensitiveRequest_ {};
      // The sensitive data type in the response.
      shared_ptr<string> apiSensitiveResponse_ {};
      // The API status. Valid values:
      // 
      // *   **NewbornInterface**: The API is newly added.
      // *   **OfflineInterface**: The API is inactive.
      // *   **normal**: The API is normal.
      shared_ptr<string> apiStatus_ {};
      // The business purpose of the API.
      // 
      // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the business purposes of APIs.
      shared_ptr<string> apiTag_ {};
      // The service object. Valid values:
      // 
      // *   **PublicAPI**: public services
      // *   **ThirdpartAPI**: cooperation with third-party partners
      // *   **InternalAPI**: internal office
      shared_ptr<string> apiType_ {};
      // Indicates whether authentication is required. Valid values:
      // 
      // * **0**: Authentication is required.
      // * **1**: Authentication is not required.
      shared_ptr<string> authFlag_ {};
      // The number of bot-initiated requests in the previous 30 days.
      shared_ptr<int64_t> botCnt_ {};
      // The number of the cross-border requests in the previous 30 days.
      shared_ptr<int64_t> crossBorderCnt_ {};
      // The number of API-related security events.
      shared_ptr<int64_t> eventNum_ {};
      // The sample APIs.
      shared_ptr<vector<string>> examples_ {};
      // The time when the API asset was first detected. This value is a UNIX timestamp in UTC. Unit: seconds.
      shared_ptr<int64_t> farthestTs_ {};
      // Specifies whether to follow the API. Valid values:
      // 
      // *   **1**: follows the API.
      // *   **0**: does not follow the API.
      shared_ptr<int32_t> follow_ {};
      // The time at which the API was last accessed. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> lastestTs_ {};
      // The domain name or IP address of the API.
      shared_ptr<string> matchedHost_ {};
      // The remarks.
      shared_ptr<string> note_ {};
      // The list of protection objects corresponding to this asset.
      shared_ptr<vector<string>> resources_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeApisecApiResourcesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeApisecApiResourcesResponseBody::Data>) };
    inline vector<DescribeApisecApiResourcesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeApisecApiResourcesResponseBody::Data>) };
    inline DescribeApisecApiResourcesResponseBody& setData(const vector<DescribeApisecApiResourcesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApisecApiResourcesResponseBody& setData(vector<DescribeApisecApiResourcesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecApiResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeApisecApiResourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The API assets.
    shared_ptr<vector<DescribeApisecApiResourcesResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
