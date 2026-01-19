// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABOLISHAPITASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABOLISHAPITASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAbolishApiTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAbolishApiTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiAbolishResults, apiAbolishResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAbolishApiTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiAbolishResults, apiAbolishResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAbolishApiTaskResponseBody() = default ;
    DescribeAbolishApiTaskResponseBody(const DescribeAbolishApiTaskResponseBody &) = default ;
    DescribeAbolishApiTaskResponseBody(DescribeAbolishApiTaskResponseBody &&) = default ;
    DescribeAbolishApiTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAbolishApiTaskResponseBody() = default ;
    DescribeAbolishApiTaskResponseBody& operator=(const DescribeAbolishApiTaskResponseBody &) = default ;
    DescribeAbolishApiTaskResponseBody& operator=(DescribeAbolishApiTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiAbolishResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiAbolishResults& obj) { 
        DARABONBA_PTR_TO_JSON(ApiAbolishResult, apiAbolishResult_);
      };
      friend void from_json(const Darabonba::Json& j, ApiAbolishResults& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiAbolishResult, apiAbolishResult_);
      };
      ApiAbolishResults() = default ;
      ApiAbolishResults(const ApiAbolishResults &) = default ;
      ApiAbolishResults(ApiAbolishResults &&) = default ;
      ApiAbolishResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiAbolishResults() = default ;
      ApiAbolishResults& operator=(const ApiAbolishResults &) = default ;
      ApiAbolishResults& operator=(ApiAbolishResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiAbolishResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiAbolishResult& obj) { 
          DARABONBA_PTR_TO_JSON(AbolishStatus, abolishStatus_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(ApiUid, apiUid_);
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(StageId, stageId_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
        };
        friend void from_json(const Darabonba::Json& j, ApiAbolishResult& obj) { 
          DARABONBA_PTR_FROM_JSON(AbolishStatus, abolishStatus_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(ApiUid, apiUid_);
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(StageId, stageId_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
        };
        ApiAbolishResult() = default ;
        ApiAbolishResult(const ApiAbolishResult &) = default ;
        ApiAbolishResult(ApiAbolishResult &&) = default ;
        ApiAbolishResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiAbolishResult() = default ;
        ApiAbolishResult& operator=(const ApiAbolishResult &) = default ;
        ApiAbolishResult& operator=(ApiAbolishResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->abolishStatus_ == nullptr
        && this->apiName_ == nullptr && this->apiUid_ == nullptr && this->errorMsg_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->stageId_ == nullptr && this->stageName_ == nullptr; };
        // abolishStatus Field Functions 
        bool hasAbolishStatus() const { return this->abolishStatus_ != nullptr;};
        void deleteAbolishStatus() { this->abolishStatus_ = nullptr;};
        inline string getAbolishStatus() const { DARABONBA_PTR_GET_DEFAULT(abolishStatus_, "") };
        inline ApiAbolishResult& setAbolishStatus(string abolishStatus) { DARABONBA_PTR_SET_VALUE(abolishStatus_, abolishStatus) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiAbolishResult& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // apiUid Field Functions 
        bool hasApiUid() const { return this->apiUid_ != nullptr;};
        void deleteApiUid() { this->apiUid_ = nullptr;};
        inline string getApiUid() const { DARABONBA_PTR_GET_DEFAULT(apiUid_, "") };
        inline ApiAbolishResult& setApiUid(string apiUid) { DARABONBA_PTR_SET_VALUE(apiUid_, apiUid) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline ApiAbolishResult& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiAbolishResult& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ApiAbolishResult& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // stageId Field Functions 
        bool hasStageId() const { return this->stageId_ != nullptr;};
        void deleteStageId() { this->stageId_ = nullptr;};
        inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
        inline ApiAbolishResult& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline ApiAbolishResult& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


      protected:
        // The unpublishing status.
        shared_ptr<string> abolishStatus_ {};
        // The name of the API.
        shared_ptr<string> apiName_ {};
        // The ID of the API.
        shared_ptr<string> apiUid_ {};
        // The error message.
        shared_ptr<string> errorMsg_ {};
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The name of the API group.
        shared_ptr<string> groupName_ {};
        // The ID of the runtime environment.
        shared_ptr<string> stageId_ {};
        // The name of the runtime environment. Valid values:
        // 
        // *   **RELEASE**
        // *   **TEST**
        shared_ptr<string> stageName_ {};
      };

      virtual bool empty() const override { return this->apiAbolishResult_ == nullptr; };
      // apiAbolishResult Field Functions 
      bool hasApiAbolishResult() const { return this->apiAbolishResult_ != nullptr;};
      void deleteApiAbolishResult() { this->apiAbolishResult_ = nullptr;};
      inline const vector<ApiAbolishResults::ApiAbolishResult> & getApiAbolishResult() const { DARABONBA_PTR_GET_CONST(apiAbolishResult_, vector<ApiAbolishResults::ApiAbolishResult>) };
      inline vector<ApiAbolishResults::ApiAbolishResult> getApiAbolishResult() { DARABONBA_PTR_GET(apiAbolishResult_, vector<ApiAbolishResults::ApiAbolishResult>) };
      inline ApiAbolishResults& setApiAbolishResult(const vector<ApiAbolishResults::ApiAbolishResult> & apiAbolishResult) { DARABONBA_PTR_SET_VALUE(apiAbolishResult_, apiAbolishResult) };
      inline ApiAbolishResults& setApiAbolishResult(vector<ApiAbolishResults::ApiAbolishResult> && apiAbolishResult) { DARABONBA_PTR_SET_RVALUE(apiAbolishResult_, apiAbolishResult) };


    protected:
      shared_ptr<vector<ApiAbolishResults::ApiAbolishResult>> apiAbolishResult_ {};
    };

    virtual bool empty() const override { return this->apiAbolishResults_ == nullptr
        && this->requestId_ == nullptr; };
    // apiAbolishResults Field Functions 
    bool hasApiAbolishResults() const { return this->apiAbolishResults_ != nullptr;};
    void deleteApiAbolishResults() { this->apiAbolishResults_ = nullptr;};
    inline const DescribeAbolishApiTaskResponseBody::ApiAbolishResults & getApiAbolishResults() const { DARABONBA_PTR_GET_CONST(apiAbolishResults_, DescribeAbolishApiTaskResponseBody::ApiAbolishResults) };
    inline DescribeAbolishApiTaskResponseBody::ApiAbolishResults getApiAbolishResults() { DARABONBA_PTR_GET(apiAbolishResults_, DescribeAbolishApiTaskResponseBody::ApiAbolishResults) };
    inline DescribeAbolishApiTaskResponseBody& setApiAbolishResults(const DescribeAbolishApiTaskResponseBody::ApiAbolishResults & apiAbolishResults) { DARABONBA_PTR_SET_VALUE(apiAbolishResults_, apiAbolishResults) };
    inline DescribeAbolishApiTaskResponseBody& setApiAbolishResults(DescribeAbolishApiTaskResponseBody::ApiAbolishResults && apiAbolishResults) { DARABONBA_PTR_SET_RVALUE(apiAbolishResults_, apiAbolishResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAbolishApiTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result returned.
    shared_ptr<DescribeAbolishApiTaskResponseBody::ApiAbolishResults> apiAbolishResults_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
