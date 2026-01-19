// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYAPITASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYAPITASKRESPONSEBODY_HPP_
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
  class DescribeDeployApiTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployApiTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeployedResults, deployedResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployApiTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployedResults, deployedResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDeployApiTaskResponseBody() = default ;
    DescribeDeployApiTaskResponseBody(const DescribeDeployApiTaskResponseBody &) = default ;
    DescribeDeployApiTaskResponseBody(DescribeDeployApiTaskResponseBody &&) = default ;
    DescribeDeployApiTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployApiTaskResponseBody() = default ;
    DescribeDeployApiTaskResponseBody& operator=(const DescribeDeployApiTaskResponseBody &) = default ;
    DescribeDeployApiTaskResponseBody& operator=(DescribeDeployApiTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeployedResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeployedResults& obj) { 
        DARABONBA_PTR_TO_JSON(DeployedResult, deployedResult_);
      };
      friend void from_json(const Darabonba::Json& j, DeployedResults& obj) { 
        DARABONBA_PTR_FROM_JSON(DeployedResult, deployedResult_);
      };
      DeployedResults() = default ;
      DeployedResults(const DeployedResults &) = default ;
      DeployedResults(DeployedResults &&) = default ;
      DeployedResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeployedResults() = default ;
      DeployedResults& operator=(const DeployedResults &) = default ;
      DeployedResults& operator=(DeployedResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeployedResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeployedResult& obj) { 
          DARABONBA_PTR_TO_JSON(ApiUid, apiUid_);
          DARABONBA_PTR_TO_JSON(DeployedStatus, deployedStatus_);
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
        };
        friend void from_json(const Darabonba::Json& j, DeployedResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiUid, apiUid_);
          DARABONBA_PTR_FROM_JSON(DeployedStatus, deployedStatus_);
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
        };
        DeployedResult() = default ;
        DeployedResult(const DeployedResult &) = default ;
        DeployedResult(DeployedResult &&) = default ;
        DeployedResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeployedResult() = default ;
        DeployedResult& operator=(const DeployedResult &) = default ;
        DeployedResult& operator=(DeployedResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiUid_ == nullptr
        && this->deployedStatus_ == nullptr && this->errorMsg_ == nullptr && this->groupId_ == nullptr && this->stageName_ == nullptr; };
        // apiUid Field Functions 
        bool hasApiUid() const { return this->apiUid_ != nullptr;};
        void deleteApiUid() { this->apiUid_ = nullptr;};
        inline string getApiUid() const { DARABONBA_PTR_GET_DEFAULT(apiUid_, "") };
        inline DeployedResult& setApiUid(string apiUid) { DARABONBA_PTR_SET_VALUE(apiUid_, apiUid) };


        // deployedStatus Field Functions 
        bool hasDeployedStatus() const { return this->deployedStatus_ != nullptr;};
        void deleteDeployedStatus() { this->deployedStatus_ = nullptr;};
        inline string getDeployedStatus() const { DARABONBA_PTR_GET_DEFAULT(deployedStatus_, "") };
        inline DeployedResult& setDeployedStatus(string deployedStatus) { DARABONBA_PTR_SET_VALUE(deployedStatus_, deployedStatus) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline DeployedResult& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline DeployedResult& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline DeployedResult& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


      protected:
        // The ID of the API.
        shared_ptr<string> apiUid_ {};
        // The deployment status of the API.
        shared_ptr<string> deployedStatus_ {};
        // The error message.
        shared_ptr<string> errorMsg_ {};
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The runtime environment of the API. Valid values:
        // 
        // *   **RELEASE**
        // *   **TEST**
        shared_ptr<string> stageName_ {};
      };

      virtual bool empty() const override { return this->deployedResult_ == nullptr; };
      // deployedResult Field Functions 
      bool hasDeployedResult() const { return this->deployedResult_ != nullptr;};
      void deleteDeployedResult() { this->deployedResult_ = nullptr;};
      inline const vector<DeployedResults::DeployedResult> & getDeployedResult() const { DARABONBA_PTR_GET_CONST(deployedResult_, vector<DeployedResults::DeployedResult>) };
      inline vector<DeployedResults::DeployedResult> getDeployedResult() { DARABONBA_PTR_GET(deployedResult_, vector<DeployedResults::DeployedResult>) };
      inline DeployedResults& setDeployedResult(const vector<DeployedResults::DeployedResult> & deployedResult) { DARABONBA_PTR_SET_VALUE(deployedResult_, deployedResult) };
      inline DeployedResults& setDeployedResult(vector<DeployedResults::DeployedResult> && deployedResult) { DARABONBA_PTR_SET_RVALUE(deployedResult_, deployedResult) };


    protected:
      shared_ptr<vector<DeployedResults::DeployedResult>> deployedResult_ {};
    };

    virtual bool empty() const override { return this->deployedResults_ == nullptr
        && this->requestId_ == nullptr; };
    // deployedResults Field Functions 
    bool hasDeployedResults() const { return this->deployedResults_ != nullptr;};
    void deleteDeployedResults() { this->deployedResults_ = nullptr;};
    inline const DescribeDeployApiTaskResponseBody::DeployedResults & getDeployedResults() const { DARABONBA_PTR_GET_CONST(deployedResults_, DescribeDeployApiTaskResponseBody::DeployedResults) };
    inline DescribeDeployApiTaskResponseBody::DeployedResults getDeployedResults() { DARABONBA_PTR_GET(deployedResults_, DescribeDeployApiTaskResponseBody::DeployedResults) };
    inline DescribeDeployApiTaskResponseBody& setDeployedResults(const DescribeDeployApiTaskResponseBody::DeployedResults & deployedResults) { DARABONBA_PTR_SET_VALUE(deployedResults_, deployedResults) };
    inline DescribeDeployApiTaskResponseBody& setDeployedResults(DescribeDeployApiTaskResponseBody::DeployedResults && deployedResults) { DARABONBA_PTR_SET_RVALUE(deployedResults_, deployedResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeployApiTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<DescribeDeployApiTaskResponseBody::DeployedResults> deployedResults_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
