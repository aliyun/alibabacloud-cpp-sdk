// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHRPATASKDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHRPATASKDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class PushRpaTaskDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushRpaTaskDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunKp, aliyunKp_);
      DARABONBA_PTR_TO_JSON(ApiType, apiType_);
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(InputData, inputData_);
      DARABONBA_PTR_TO_JSON(InputHtml, inputHtml_);
      DARABONBA_PTR_TO_JSON(InputScreenshot, inputScreenshot_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ModelDetailId, modelDetailId_);
      DARABONBA_PTR_TO_JSON(OriginalRequest, originalRequest_);
      DARABONBA_PTR_TO_JSON(OutputData, outputData_);
      DARABONBA_PTR_TO_JSON(OutputHtml, outputHtml_);
      DARABONBA_PTR_TO_JSON(OutputScreenshot, outputScreenshot_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskDetailId, taskDetailId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_TO_JSON(UserBid, userBid_);
      DARABONBA_PTR_TO_JSON(UserCallerParentId, userCallerParentId_);
      DARABONBA_PTR_TO_JSON(UserCallerType, userCallerType_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(UserKp, userKp_);
      DARABONBA_PTR_TO_JSON(UserSecurityToken, userSecurityToken_);
    };
    friend void from_json(const Darabonba::Json& j, PushRpaTaskDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunKp, aliyunKp_);
      DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(InputData, inputData_);
      DARABONBA_PTR_FROM_JSON(InputHtml, inputHtml_);
      DARABONBA_PTR_FROM_JSON(InputScreenshot, inputScreenshot_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ModelDetailId, modelDetailId_);
      DARABONBA_PTR_FROM_JSON(OriginalRequest, originalRequest_);
      DARABONBA_PTR_FROM_JSON(OutputData, outputData_);
      DARABONBA_PTR_FROM_JSON(OutputHtml, outputHtml_);
      DARABONBA_PTR_FROM_JSON(OutputScreenshot, outputScreenshot_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskDetailId, taskDetailId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(UserBid, userBid_);
      DARABONBA_PTR_FROM_JSON(UserCallerParentId, userCallerParentId_);
      DARABONBA_PTR_FROM_JSON(UserCallerType, userCallerType_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(UserKp, userKp_);
      DARABONBA_PTR_FROM_JSON(UserSecurityToken, userSecurityToken_);
    };
    PushRpaTaskDetailRequest() = default ;
    PushRpaTaskDetailRequest(const PushRpaTaskDetailRequest &) = default ;
    PushRpaTaskDetailRequest(PushRpaTaskDetailRequest &&) = default ;
    PushRpaTaskDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushRpaTaskDetailRequest() = default ;
    PushRpaTaskDetailRequest& operator=(const PushRpaTaskDetailRequest &) = default ;
    PushRpaTaskDetailRequest& operator=(PushRpaTaskDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunKp_ == nullptr
        && return this->apiType_ == nullptr && return this->bid_ == nullptr && return this->inputData_ == nullptr && return this->inputHtml_ == nullptr && return this->inputScreenshot_ == nullptr
        && return this->lang_ == nullptr && return this->modelDetailId_ == nullptr && return this->originalRequest_ == nullptr && return this->outputData_ == nullptr && return this->outputHtml_ == nullptr
        && return this->outputScreenshot_ == nullptr && return this->status_ == nullptr && return this->taskDetailId_ == nullptr && return this->taskId_ == nullptr && return this->userAccessKeyId_ == nullptr
        && return this->userBid_ == nullptr && return this->userCallerParentId_ == nullptr && return this->userCallerType_ == nullptr && return this->userClientIp_ == nullptr && return this->userKp_ == nullptr
        && return this->userSecurityToken_ == nullptr; };
    // aliyunKp Field Functions 
    bool hasAliyunKp() const { return this->aliyunKp_ != nullptr;};
    void deleteAliyunKp() { this->aliyunKp_ = nullptr;};
    inline string aliyunKp() const { DARABONBA_PTR_GET_DEFAULT(aliyunKp_, "") };
    inline PushRpaTaskDetailRequest& setAliyunKp(string aliyunKp) { DARABONBA_PTR_SET_VALUE(aliyunKp_, aliyunKp) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string apiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline PushRpaTaskDetailRequest& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline PushRpaTaskDetailRequest& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // inputData Field Functions 
    bool hasInputData() const { return this->inputData_ != nullptr;};
    void deleteInputData() { this->inputData_ = nullptr;};
    inline string inputData() const { DARABONBA_PTR_GET_DEFAULT(inputData_, "") };
    inline PushRpaTaskDetailRequest& setInputData(string inputData) { DARABONBA_PTR_SET_VALUE(inputData_, inputData) };


    // inputHtml Field Functions 
    bool hasInputHtml() const { return this->inputHtml_ != nullptr;};
    void deleteInputHtml() { this->inputHtml_ = nullptr;};
    inline string inputHtml() const { DARABONBA_PTR_GET_DEFAULT(inputHtml_, "") };
    inline PushRpaTaskDetailRequest& setInputHtml(string inputHtml) { DARABONBA_PTR_SET_VALUE(inputHtml_, inputHtml) };


    // inputScreenshot Field Functions 
    bool hasInputScreenshot() const { return this->inputScreenshot_ != nullptr;};
    void deleteInputScreenshot() { this->inputScreenshot_ = nullptr;};
    inline string inputScreenshot() const { DARABONBA_PTR_GET_DEFAULT(inputScreenshot_, "") };
    inline PushRpaTaskDetailRequest& setInputScreenshot(string inputScreenshot) { DARABONBA_PTR_SET_VALUE(inputScreenshot_, inputScreenshot) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline PushRpaTaskDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // modelDetailId Field Functions 
    bool hasModelDetailId() const { return this->modelDetailId_ != nullptr;};
    void deleteModelDetailId() { this->modelDetailId_ = nullptr;};
    inline int64_t modelDetailId() const { DARABONBA_PTR_GET_DEFAULT(modelDetailId_, 0L) };
    inline PushRpaTaskDetailRequest& setModelDetailId(int64_t modelDetailId) { DARABONBA_PTR_SET_VALUE(modelDetailId_, modelDetailId) };


    // originalRequest Field Functions 
    bool hasOriginalRequest() const { return this->originalRequest_ != nullptr;};
    void deleteOriginalRequest() { this->originalRequest_ = nullptr;};
    inline string originalRequest() const { DARABONBA_PTR_GET_DEFAULT(originalRequest_, "") };
    inline PushRpaTaskDetailRequest& setOriginalRequest(string originalRequest) { DARABONBA_PTR_SET_VALUE(originalRequest_, originalRequest) };


    // outputData Field Functions 
    bool hasOutputData() const { return this->outputData_ != nullptr;};
    void deleteOutputData() { this->outputData_ = nullptr;};
    inline string outputData() const { DARABONBA_PTR_GET_DEFAULT(outputData_, "") };
    inline PushRpaTaskDetailRequest& setOutputData(string outputData) { DARABONBA_PTR_SET_VALUE(outputData_, outputData) };


    // outputHtml Field Functions 
    bool hasOutputHtml() const { return this->outputHtml_ != nullptr;};
    void deleteOutputHtml() { this->outputHtml_ = nullptr;};
    inline string outputHtml() const { DARABONBA_PTR_GET_DEFAULT(outputHtml_, "") };
    inline PushRpaTaskDetailRequest& setOutputHtml(string outputHtml) { DARABONBA_PTR_SET_VALUE(outputHtml_, outputHtml) };


    // outputScreenshot Field Functions 
    bool hasOutputScreenshot() const { return this->outputScreenshot_ != nullptr;};
    void deleteOutputScreenshot() { this->outputScreenshot_ = nullptr;};
    inline string outputScreenshot() const { DARABONBA_PTR_GET_DEFAULT(outputScreenshot_, "") };
    inline PushRpaTaskDetailRequest& setOutputScreenshot(string outputScreenshot) { DARABONBA_PTR_SET_VALUE(outputScreenshot_, outputScreenshot) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline PushRpaTaskDetailRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskDetailId Field Functions 
    bool hasTaskDetailId() const { return this->taskDetailId_ != nullptr;};
    void deleteTaskDetailId() { this->taskDetailId_ = nullptr;};
    inline int64_t taskDetailId() const { DARABONBA_PTR_GET_DEFAULT(taskDetailId_, 0L) };
    inline PushRpaTaskDetailRequest& setTaskDetailId(int64_t taskDetailId) { DARABONBA_PTR_SET_VALUE(taskDetailId_, taskDetailId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline PushRpaTaskDetailRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // userAccessKeyId Field Functions 
    bool hasUserAccessKeyId() const { return this->userAccessKeyId_ != nullptr;};
    void deleteUserAccessKeyId() { this->userAccessKeyId_ = nullptr;};
    inline string userAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(userAccessKeyId_, "") };
    inline PushRpaTaskDetailRequest& setUserAccessKeyId(string userAccessKeyId) { DARABONBA_PTR_SET_VALUE(userAccessKeyId_, userAccessKeyId) };


    // userBid Field Functions 
    bool hasUserBid() const { return this->userBid_ != nullptr;};
    void deleteUserBid() { this->userBid_ = nullptr;};
    inline string userBid() const { DARABONBA_PTR_GET_DEFAULT(userBid_, "") };
    inline PushRpaTaskDetailRequest& setUserBid(string userBid) { DARABONBA_PTR_SET_VALUE(userBid_, userBid) };


    // userCallerParentId Field Functions 
    bool hasUserCallerParentId() const { return this->userCallerParentId_ != nullptr;};
    void deleteUserCallerParentId() { this->userCallerParentId_ = nullptr;};
    inline int64_t userCallerParentId() const { DARABONBA_PTR_GET_DEFAULT(userCallerParentId_, 0L) };
    inline PushRpaTaskDetailRequest& setUserCallerParentId(int64_t userCallerParentId) { DARABONBA_PTR_SET_VALUE(userCallerParentId_, userCallerParentId) };


    // userCallerType Field Functions 
    bool hasUserCallerType() const { return this->userCallerType_ != nullptr;};
    void deleteUserCallerType() { this->userCallerType_ = nullptr;};
    inline string userCallerType() const { DARABONBA_PTR_GET_DEFAULT(userCallerType_, "") };
    inline PushRpaTaskDetailRequest& setUserCallerType(string userCallerType) { DARABONBA_PTR_SET_VALUE(userCallerType_, userCallerType) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline PushRpaTaskDetailRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // userKp Field Functions 
    bool hasUserKp() const { return this->userKp_ != nullptr;};
    void deleteUserKp() { this->userKp_ = nullptr;};
    inline string userKp() const { DARABONBA_PTR_GET_DEFAULT(userKp_, "") };
    inline PushRpaTaskDetailRequest& setUserKp(string userKp) { DARABONBA_PTR_SET_VALUE(userKp_, userKp) };


    // userSecurityToken Field Functions 
    bool hasUserSecurityToken() const { return this->userSecurityToken_ != nullptr;};
    void deleteUserSecurityToken() { this->userSecurityToken_ = nullptr;};
    inline string userSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(userSecurityToken_, "") };
    inline PushRpaTaskDetailRequest& setUserSecurityToken(string userSecurityToken) { DARABONBA_PTR_SET_VALUE(userSecurityToken_, userSecurityToken) };


  protected:
    // aliyunKp
    std::shared_ptr<string> aliyunKp_ = nullptr;
    // apiType
    std::shared_ptr<string> apiType_ = nullptr;
    // bid
    std::shared_ptr<string> bid_ = nullptr;
    // inputData
    std::shared_ptr<string> inputData_ = nullptr;
    // inputHtml
    std::shared_ptr<string> inputHtml_ = nullptr;
    // inputScreenshot
    std::shared_ptr<string> inputScreenshot_ = nullptr;
    // lang
    std::shared_ptr<string> lang_ = nullptr;
    // modelDetailId
    std::shared_ptr<int64_t> modelDetailId_ = nullptr;
    // originalRequest
    std::shared_ptr<string> originalRequest_ = nullptr;
    // outputData
    std::shared_ptr<string> outputData_ = nullptr;
    // outputHtml
    std::shared_ptr<string> outputHtml_ = nullptr;
    // outputScreenshot
    std::shared_ptr<string> outputScreenshot_ = nullptr;
    // status
    std::shared_ptr<int32_t> status_ = nullptr;
    // taskDetailId
    std::shared_ptr<int64_t> taskDetailId_ = nullptr;
    // taskId
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // userAccessKeyId
    std::shared_ptr<string> userAccessKeyId_ = nullptr;
    // userBid
    std::shared_ptr<string> userBid_ = nullptr;
    // userCallerParentId
    std::shared_ptr<int64_t> userCallerParentId_ = nullptr;
    // userCallerType
    std::shared_ptr<string> userCallerType_ = nullptr;
    // userClientIp
    std::shared_ptr<string> userClientIp_ = nullptr;
    // userKp
    std::shared_ptr<string> userKp_ = nullptr;
    // userSecurityToken
    std::shared_ptr<string> userSecurityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
