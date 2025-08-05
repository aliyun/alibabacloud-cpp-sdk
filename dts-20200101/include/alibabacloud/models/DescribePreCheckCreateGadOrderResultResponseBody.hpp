// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKCREATEGADORDERRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKCREATEGADORDERRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckCreateGadOrderResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckCreateGadOrderResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PreCheckItems, preCheckItems_);
      DARABONBA_PTR_TO_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckCreateGadOrderResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PreCheckItems, preCheckItems_);
      DARABONBA_PTR_FROM_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribePreCheckCreateGadOrderResultResponseBody() = default ;
    DescribePreCheckCreateGadOrderResultResponseBody(const DescribePreCheckCreateGadOrderResultResponseBody &) = default ;
    DescribePreCheckCreateGadOrderResultResponseBody(DescribePreCheckCreateGadOrderResultResponseBody &&) = default ;
    DescribePreCheckCreateGadOrderResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckCreateGadOrderResultResponseBody() = default ;
    DescribePreCheckCreateGadOrderResultResponseBody& operator=(const DescribePreCheckCreateGadOrderResultResponseBody &) = default ;
    DescribePreCheckCreateGadOrderResultResponseBody& operator=(DescribePreCheckCreateGadOrderResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dynamicCode_ != nullptr
        && this->dynamicMessage_ != nullptr && this->errCode_ != nullptr && this->errMessage_ != nullptr && this->httpStatusCode_ != nullptr && this->instanceId_ != nullptr
        && this->preCheckItems_ != nullptr && this->preCheckResult_ != nullptr && this->regionId_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr
        && this->taskId_ != nullptr; };
    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string dynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // preCheckItems Field Functions 
    bool hasPreCheckItems() const { return this->preCheckItems_ != nullptr;};
    void deletePreCheckItems() { this->preCheckItems_ = nullptr;};
    inline const DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems & preCheckItems() const { DARABONBA_PTR_GET_CONST(preCheckItems_, DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems) };
    inline DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems preCheckItems() { DARABONBA_PTR_GET(preCheckItems_, DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems) };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setPreCheckItems(const DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems & preCheckItems) { DARABONBA_PTR_SET_VALUE(preCheckItems_, preCheckItems) };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setPreCheckItems(DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems && preCheckItems) { DARABONBA_PTR_SET_RVALUE(preCheckItems_, preCheckItems) };


    // preCheckResult Field Functions 
    bool hasPreCheckResult() const { return this->preCheckResult_ != nullptr;};
    void deletePreCheckResult() { this->preCheckResult_ = nullptr;};
    inline bool preCheckResult() const { DARABONBA_PTR_GET_DEFAULT(preCheckResult_, false) };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setPreCheckResult(bool preCheckResult) { DARABONBA_PTR_SET_VALUE(preCheckResult_, preCheckResult) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> dynamicCode_ = nullptr;
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    std::shared_ptr<string> errCode_ = nullptr;
    std::shared_ptr<string> errMessage_ = nullptr;
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItems> preCheckItems_ = nullptr;
    std::shared_ptr<bool> preCheckResult_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
