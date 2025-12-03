// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABOLISHAPITASKRESPONSEBODYAPIABOLISHRESULTSAPIABOLISHRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABOLISHAPITASKRESPONSEBODYAPIABOLISHRESULTSAPIABOLISHRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult& obj) { 
      DARABONBA_PTR_TO_JSON(AbolishStatus, abolishStatus_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiUid, apiUid_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AbolishStatus, abolishStatus_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiUid, apiUid_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult() = default ;
    DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult(const DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult &) = default ;
    DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult(DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult &&) = default ;
    DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult() = default ;
    DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult& operator=(const DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult &) = default ;
    DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult& operator=(DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abolishStatus_ == nullptr
        && return this->apiName_ == nullptr && return this->apiUid_ == nullptr && return this->errorMsg_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr
        && return this->stageId_ == nullptr && return this->stageName_ == nullptr; };
    // abolishStatus Field Functions 
    bool hasAbolishStatus() const { return this->abolishStatus_ != nullptr;};
    void deleteAbolishStatus() { this->abolishStatus_ = nullptr;};
    inline string abolishStatus() const { DARABONBA_PTR_GET_DEFAULT(abolishStatus_, "") };
    inline DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult& setAbolishStatus(string abolishStatus) { DARABONBA_PTR_SET_VALUE(abolishStatus_, abolishStatus) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiUid Field Functions 
    bool hasApiUid() const { return this->apiUid_ != nullptr;};
    void deleteApiUid() { this->apiUid_ = nullptr;};
    inline string apiUid() const { DARABONBA_PTR_GET_DEFAULT(apiUid_, "") };
    inline DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult& setApiUid(string apiUid) { DARABONBA_PTR_SET_VALUE(apiUid_, apiUid) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The unpublishing status.
    std::shared_ptr<string> abolishStatus_ = nullptr;
    // The name of the API.
    std::shared_ptr<string> apiName_ = nullptr;
    // The ID of the API.
    std::shared_ptr<string> apiUid_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the runtime environment.
    std::shared_ptr<string> stageId_ = nullptr;
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
