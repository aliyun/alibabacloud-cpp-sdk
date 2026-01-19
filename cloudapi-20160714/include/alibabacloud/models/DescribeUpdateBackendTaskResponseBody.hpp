// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPDATEBACKENDTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPDATEBACKENDTASKRESPONSEBODY_HPP_
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
  class DescribeUpdateBackendTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpdateBackendTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiUpdateBackendResults, apiUpdateBackendResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpdateBackendTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiUpdateBackendResults, apiUpdateBackendResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUpdateBackendTaskResponseBody() = default ;
    DescribeUpdateBackendTaskResponseBody(const DescribeUpdateBackendTaskResponseBody &) = default ;
    DescribeUpdateBackendTaskResponseBody(DescribeUpdateBackendTaskResponseBody &&) = default ;
    DescribeUpdateBackendTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpdateBackendTaskResponseBody() = default ;
    DescribeUpdateBackendTaskResponseBody& operator=(const DescribeUpdateBackendTaskResponseBody &) = default ;
    DescribeUpdateBackendTaskResponseBody& operator=(DescribeUpdateBackendTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiUpdateBackendResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiUpdateBackendResults& obj) { 
        DARABONBA_PTR_TO_JSON(ApiUpdateBackendResult, apiUpdateBackendResult_);
      };
      friend void from_json(const Darabonba::Json& j, ApiUpdateBackendResults& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiUpdateBackendResult, apiUpdateBackendResult_);
      };
      ApiUpdateBackendResults() = default ;
      ApiUpdateBackendResults(const ApiUpdateBackendResults &) = default ;
      ApiUpdateBackendResults(ApiUpdateBackendResults &&) = default ;
      ApiUpdateBackendResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiUpdateBackendResults() = default ;
      ApiUpdateBackendResults& operator=(const ApiUpdateBackendResults &) = default ;
      ApiUpdateBackendResults& operator=(ApiUpdateBackendResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiUpdateBackendResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiUpdateBackendResult& obj) { 
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(ApiUid, apiUid_);
          DARABONBA_PTR_TO_JSON(BackendId, backendId_);
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(StageId, stageId_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
          DARABONBA_PTR_TO_JSON(UpdateStatus, updateStatus_);
        };
        friend void from_json(const Darabonba::Json& j, ApiUpdateBackendResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(ApiUid, apiUid_);
          DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(StageId, stageId_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
          DARABONBA_PTR_FROM_JSON(UpdateStatus, updateStatus_);
        };
        ApiUpdateBackendResult() = default ;
        ApiUpdateBackendResult(const ApiUpdateBackendResult &) = default ;
        ApiUpdateBackendResult(ApiUpdateBackendResult &&) = default ;
        ApiUpdateBackendResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiUpdateBackendResult() = default ;
        ApiUpdateBackendResult& operator=(const ApiUpdateBackendResult &) = default ;
        ApiUpdateBackendResult& operator=(ApiUpdateBackendResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiName_ == nullptr
        && this->apiUid_ == nullptr && this->backendId_ == nullptr && this->errorMsg_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->stageId_ == nullptr && this->stageName_ == nullptr && this->updateStatus_ == nullptr; };
        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiUpdateBackendResult& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // apiUid Field Functions 
        bool hasApiUid() const { return this->apiUid_ != nullptr;};
        void deleteApiUid() { this->apiUid_ = nullptr;};
        inline string getApiUid() const { DARABONBA_PTR_GET_DEFAULT(apiUid_, "") };
        inline ApiUpdateBackendResult& setApiUid(string apiUid) { DARABONBA_PTR_SET_VALUE(apiUid_, apiUid) };


        // backendId Field Functions 
        bool hasBackendId() const { return this->backendId_ != nullptr;};
        void deleteBackendId() { this->backendId_ = nullptr;};
        inline string getBackendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
        inline ApiUpdateBackendResult& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline ApiUpdateBackendResult& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiUpdateBackendResult& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ApiUpdateBackendResult& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // stageId Field Functions 
        bool hasStageId() const { return this->stageId_ != nullptr;};
        void deleteStageId() { this->stageId_ = nullptr;};
        inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
        inline ApiUpdateBackendResult& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline ApiUpdateBackendResult& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


        // updateStatus Field Functions 
        bool hasUpdateStatus() const { return this->updateStatus_ != nullptr;};
        void deleteUpdateStatus() { this->updateStatus_ = nullptr;};
        inline string getUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(updateStatus_, "") };
        inline ApiUpdateBackendResult& setUpdateStatus(string updateStatus) { DARABONBA_PTR_SET_VALUE(updateStatus_, updateStatus) };


      protected:
        shared_ptr<string> apiName_ {};
        shared_ptr<string> apiUid_ {};
        shared_ptr<string> backendId_ {};
        shared_ptr<string> errorMsg_ {};
        shared_ptr<string> groupId_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<string> stageId_ {};
        shared_ptr<string> stageName_ {};
        shared_ptr<string> updateStatus_ {};
      };

      virtual bool empty() const override { return this->apiUpdateBackendResult_ == nullptr; };
      // apiUpdateBackendResult Field Functions 
      bool hasApiUpdateBackendResult() const { return this->apiUpdateBackendResult_ != nullptr;};
      void deleteApiUpdateBackendResult() { this->apiUpdateBackendResult_ = nullptr;};
      inline const vector<ApiUpdateBackendResults::ApiUpdateBackendResult> & getApiUpdateBackendResult() const { DARABONBA_PTR_GET_CONST(apiUpdateBackendResult_, vector<ApiUpdateBackendResults::ApiUpdateBackendResult>) };
      inline vector<ApiUpdateBackendResults::ApiUpdateBackendResult> getApiUpdateBackendResult() { DARABONBA_PTR_GET(apiUpdateBackendResult_, vector<ApiUpdateBackendResults::ApiUpdateBackendResult>) };
      inline ApiUpdateBackendResults& setApiUpdateBackendResult(const vector<ApiUpdateBackendResults::ApiUpdateBackendResult> & apiUpdateBackendResult) { DARABONBA_PTR_SET_VALUE(apiUpdateBackendResult_, apiUpdateBackendResult) };
      inline ApiUpdateBackendResults& setApiUpdateBackendResult(vector<ApiUpdateBackendResults::ApiUpdateBackendResult> && apiUpdateBackendResult) { DARABONBA_PTR_SET_RVALUE(apiUpdateBackendResult_, apiUpdateBackendResult) };


    protected:
      shared_ptr<vector<ApiUpdateBackendResults::ApiUpdateBackendResult>> apiUpdateBackendResult_ {};
    };

    virtual bool empty() const override { return this->apiUpdateBackendResults_ == nullptr
        && this->requestId_ == nullptr; };
    // apiUpdateBackendResults Field Functions 
    bool hasApiUpdateBackendResults() const { return this->apiUpdateBackendResults_ != nullptr;};
    void deleteApiUpdateBackendResults() { this->apiUpdateBackendResults_ = nullptr;};
    inline const DescribeUpdateBackendTaskResponseBody::ApiUpdateBackendResults & getApiUpdateBackendResults() const { DARABONBA_PTR_GET_CONST(apiUpdateBackendResults_, DescribeUpdateBackendTaskResponseBody::ApiUpdateBackendResults) };
    inline DescribeUpdateBackendTaskResponseBody::ApiUpdateBackendResults getApiUpdateBackendResults() { DARABONBA_PTR_GET(apiUpdateBackendResults_, DescribeUpdateBackendTaskResponseBody::ApiUpdateBackendResults) };
    inline DescribeUpdateBackendTaskResponseBody& setApiUpdateBackendResults(const DescribeUpdateBackendTaskResponseBody::ApiUpdateBackendResults & apiUpdateBackendResults) { DARABONBA_PTR_SET_VALUE(apiUpdateBackendResults_, apiUpdateBackendResults) };
    inline DescribeUpdateBackendTaskResponseBody& setApiUpdateBackendResults(DescribeUpdateBackendTaskResponseBody::ApiUpdateBackendResults && apiUpdateBackendResults) { DARABONBA_PTR_SET_RVALUE(apiUpdateBackendResults_, apiUpdateBackendResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpdateBackendTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeUpdateBackendTaskResponseBody::ApiUpdateBackendResults> apiUpdateBackendResults_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
