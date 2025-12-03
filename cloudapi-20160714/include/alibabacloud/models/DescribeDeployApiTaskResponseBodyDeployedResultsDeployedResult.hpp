// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYAPITASKRESPONSEBODYDEPLOYEDRESULTSDEPLOYEDRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYAPITASKRESPONSEBODYDEPLOYEDRESULTSDEPLOYEDRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult& obj) { 
      DARABONBA_PTR_TO_JSON(ApiUid, apiUid_);
      DARABONBA_PTR_TO_JSON(DeployedStatus, deployedStatus_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiUid, apiUid_);
      DARABONBA_PTR_FROM_JSON(DeployedStatus, deployedStatus_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult() = default ;
    DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult(const DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult &) = default ;
    DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult(DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult &&) = default ;
    DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult() = default ;
    DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult& operator=(const DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult &) = default ;
    DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult& operator=(DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiUid_ == nullptr
        && return this->deployedStatus_ == nullptr && return this->errorMsg_ == nullptr && return this->groupId_ == nullptr && return this->stageName_ == nullptr; };
    // apiUid Field Functions 
    bool hasApiUid() const { return this->apiUid_ != nullptr;};
    void deleteApiUid() { this->apiUid_ = nullptr;};
    inline string apiUid() const { DARABONBA_PTR_GET_DEFAULT(apiUid_, "") };
    inline DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult& setApiUid(string apiUid) { DARABONBA_PTR_SET_VALUE(apiUid_, apiUid) };


    // deployedStatus Field Functions 
    bool hasDeployedStatus() const { return this->deployedStatus_ != nullptr;};
    void deleteDeployedStatus() { this->deployedStatus_ = nullptr;};
    inline string deployedStatus() const { DARABONBA_PTR_GET_DEFAULT(deployedStatus_, "") };
    inline DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult& setDeployedStatus(string deployedStatus) { DARABONBA_PTR_SET_VALUE(deployedStatus_, deployedStatus) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The ID of the API.
    std::shared_ptr<string> apiUid_ = nullptr;
    // The deployment status of the API.
    std::shared_ptr<string> deployedStatus_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The runtime environment of the API. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
