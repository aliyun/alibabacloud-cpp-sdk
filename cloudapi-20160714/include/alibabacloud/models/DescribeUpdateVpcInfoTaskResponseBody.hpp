// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPDATEVPCINFOTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPDATEVPCINFOTASKRESPONSEBODY_HPP_
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
  class DescribeUpdateVpcInfoTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpdateVpcInfoTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiUpdateVpcInfoResults, apiUpdateVpcInfoResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpdateVpcInfoTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiUpdateVpcInfoResults, apiUpdateVpcInfoResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUpdateVpcInfoTaskResponseBody() = default ;
    DescribeUpdateVpcInfoTaskResponseBody(const DescribeUpdateVpcInfoTaskResponseBody &) = default ;
    DescribeUpdateVpcInfoTaskResponseBody(DescribeUpdateVpcInfoTaskResponseBody &&) = default ;
    DescribeUpdateVpcInfoTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpdateVpcInfoTaskResponseBody() = default ;
    DescribeUpdateVpcInfoTaskResponseBody& operator=(const DescribeUpdateVpcInfoTaskResponseBody &) = default ;
    DescribeUpdateVpcInfoTaskResponseBody& operator=(DescribeUpdateVpcInfoTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiUpdateVpcInfoResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiUpdateVpcInfoResults& obj) { 
        DARABONBA_PTR_TO_JSON(ApiUpdateVpcInfoResult, apiUpdateVpcInfoResult_);
      };
      friend void from_json(const Darabonba::Json& j, ApiUpdateVpcInfoResults& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiUpdateVpcInfoResult, apiUpdateVpcInfoResult_);
      };
      ApiUpdateVpcInfoResults() = default ;
      ApiUpdateVpcInfoResults(const ApiUpdateVpcInfoResults &) = default ;
      ApiUpdateVpcInfoResults(ApiUpdateVpcInfoResults &&) = default ;
      ApiUpdateVpcInfoResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiUpdateVpcInfoResults() = default ;
      ApiUpdateVpcInfoResults& operator=(const ApiUpdateVpcInfoResults &) = default ;
      ApiUpdateVpcInfoResults& operator=(ApiUpdateVpcInfoResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiUpdateVpcInfoResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiUpdateVpcInfoResult& obj) { 
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(ApiUid, apiUid_);
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(StageId, stageId_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
          DARABONBA_PTR_TO_JSON(UpdateStatus, updateStatus_);
        };
        friend void from_json(const Darabonba::Json& j, ApiUpdateVpcInfoResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(ApiUid, apiUid_);
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(StageId, stageId_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
          DARABONBA_PTR_FROM_JSON(UpdateStatus, updateStatus_);
        };
        ApiUpdateVpcInfoResult() = default ;
        ApiUpdateVpcInfoResult(const ApiUpdateVpcInfoResult &) = default ;
        ApiUpdateVpcInfoResult(ApiUpdateVpcInfoResult &&) = default ;
        ApiUpdateVpcInfoResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiUpdateVpcInfoResult() = default ;
        ApiUpdateVpcInfoResult& operator=(const ApiUpdateVpcInfoResult &) = default ;
        ApiUpdateVpcInfoResult& operator=(ApiUpdateVpcInfoResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiName_ == nullptr
        && this->apiUid_ == nullptr && this->errorMsg_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->stageId_ == nullptr
        && this->stageName_ == nullptr && this->updateStatus_ == nullptr; };
        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiUpdateVpcInfoResult& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // apiUid Field Functions 
        bool hasApiUid() const { return this->apiUid_ != nullptr;};
        void deleteApiUid() { this->apiUid_ = nullptr;};
        inline string getApiUid() const { DARABONBA_PTR_GET_DEFAULT(apiUid_, "") };
        inline ApiUpdateVpcInfoResult& setApiUid(string apiUid) { DARABONBA_PTR_SET_VALUE(apiUid_, apiUid) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline ApiUpdateVpcInfoResult& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiUpdateVpcInfoResult& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ApiUpdateVpcInfoResult& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // stageId Field Functions 
        bool hasStageId() const { return this->stageId_ != nullptr;};
        void deleteStageId() { this->stageId_ = nullptr;};
        inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
        inline ApiUpdateVpcInfoResult& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline ApiUpdateVpcInfoResult& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


        // updateStatus Field Functions 
        bool hasUpdateStatus() const { return this->updateStatus_ != nullptr;};
        void deleteUpdateStatus() { this->updateStatus_ = nullptr;};
        inline string getUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(updateStatus_, "") };
        inline ApiUpdateVpcInfoResult& setUpdateStatus(string updateStatus) { DARABONBA_PTR_SET_VALUE(updateStatus_, updateStatus) };


      protected:
        shared_ptr<string> apiName_ {};
        shared_ptr<string> apiUid_ {};
        shared_ptr<string> errorMsg_ {};
        shared_ptr<string> groupId_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<string> stageId_ {};
        shared_ptr<string> stageName_ {};
        shared_ptr<string> updateStatus_ {};
      };

      virtual bool empty() const override { return this->apiUpdateVpcInfoResult_ == nullptr; };
      // apiUpdateVpcInfoResult Field Functions 
      bool hasApiUpdateVpcInfoResult() const { return this->apiUpdateVpcInfoResult_ != nullptr;};
      void deleteApiUpdateVpcInfoResult() { this->apiUpdateVpcInfoResult_ = nullptr;};
      inline const vector<ApiUpdateVpcInfoResults::ApiUpdateVpcInfoResult> & getApiUpdateVpcInfoResult() const { DARABONBA_PTR_GET_CONST(apiUpdateVpcInfoResult_, vector<ApiUpdateVpcInfoResults::ApiUpdateVpcInfoResult>) };
      inline vector<ApiUpdateVpcInfoResults::ApiUpdateVpcInfoResult> getApiUpdateVpcInfoResult() { DARABONBA_PTR_GET(apiUpdateVpcInfoResult_, vector<ApiUpdateVpcInfoResults::ApiUpdateVpcInfoResult>) };
      inline ApiUpdateVpcInfoResults& setApiUpdateVpcInfoResult(const vector<ApiUpdateVpcInfoResults::ApiUpdateVpcInfoResult> & apiUpdateVpcInfoResult) { DARABONBA_PTR_SET_VALUE(apiUpdateVpcInfoResult_, apiUpdateVpcInfoResult) };
      inline ApiUpdateVpcInfoResults& setApiUpdateVpcInfoResult(vector<ApiUpdateVpcInfoResults::ApiUpdateVpcInfoResult> && apiUpdateVpcInfoResult) { DARABONBA_PTR_SET_RVALUE(apiUpdateVpcInfoResult_, apiUpdateVpcInfoResult) };


    protected:
      shared_ptr<vector<ApiUpdateVpcInfoResults::ApiUpdateVpcInfoResult>> apiUpdateVpcInfoResult_ {};
    };

    virtual bool empty() const override { return this->apiUpdateVpcInfoResults_ == nullptr
        && this->requestId_ == nullptr; };
    // apiUpdateVpcInfoResults Field Functions 
    bool hasApiUpdateVpcInfoResults() const { return this->apiUpdateVpcInfoResults_ != nullptr;};
    void deleteApiUpdateVpcInfoResults() { this->apiUpdateVpcInfoResults_ = nullptr;};
    inline const DescribeUpdateVpcInfoTaskResponseBody::ApiUpdateVpcInfoResults & getApiUpdateVpcInfoResults() const { DARABONBA_PTR_GET_CONST(apiUpdateVpcInfoResults_, DescribeUpdateVpcInfoTaskResponseBody::ApiUpdateVpcInfoResults) };
    inline DescribeUpdateVpcInfoTaskResponseBody::ApiUpdateVpcInfoResults getApiUpdateVpcInfoResults() { DARABONBA_PTR_GET(apiUpdateVpcInfoResults_, DescribeUpdateVpcInfoTaskResponseBody::ApiUpdateVpcInfoResults) };
    inline DescribeUpdateVpcInfoTaskResponseBody& setApiUpdateVpcInfoResults(const DescribeUpdateVpcInfoTaskResponseBody::ApiUpdateVpcInfoResults & apiUpdateVpcInfoResults) { DARABONBA_PTR_SET_VALUE(apiUpdateVpcInfoResults_, apiUpdateVpcInfoResults) };
    inline DescribeUpdateVpcInfoTaskResponseBody& setApiUpdateVpcInfoResults(DescribeUpdateVpcInfoTaskResponseBody::ApiUpdateVpcInfoResults && apiUpdateVpcInfoResults) { DARABONBA_PTR_SET_RVALUE(apiUpdateVpcInfoResults_, apiUpdateVpcInfoResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpdateVpcInfoTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeUpdateVpcInfoTaskResponseBody::ApiUpdateVpcInfoResults> apiUpdateVpcInfoResults_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
