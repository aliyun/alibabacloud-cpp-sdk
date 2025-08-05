// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBMONITORRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBMONITORRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeJobMonitorRuleResponseBodyMonitorRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeJobMonitorRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobMonitorRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MonitorRules, monitorRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Topics, topics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobMonitorRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MonitorRules, monitorRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Topics, topics_);
    };
    DescribeJobMonitorRuleResponseBody() = default ;
    DescribeJobMonitorRuleResponseBody(const DescribeJobMonitorRuleResponseBody &) = default ;
    DescribeJobMonitorRuleResponseBody(DescribeJobMonitorRuleResponseBody &&) = default ;
    DescribeJobMonitorRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobMonitorRuleResponseBody() = default ;
    DescribeJobMonitorRuleResponseBody& operator=(const DescribeJobMonitorRuleResponseBody &) = default ;
    DescribeJobMonitorRuleResponseBody& operator=(DescribeJobMonitorRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->dtsJobId_ != nullptr && this->dynamicMessage_ != nullptr && this->errCode_ != nullptr && this->errMessage_ != nullptr && this->httpStatusCode_ != nullptr
        && this->monitorRules_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->topics_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeJobMonitorRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeJobMonitorRuleResponseBody& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeJobMonitorRuleResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeJobMonitorRuleResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeJobMonitorRuleResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeJobMonitorRuleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // monitorRules Field Functions 
    bool hasMonitorRules() const { return this->monitorRules_ != nullptr;};
    void deleteMonitorRules() { this->monitorRules_ = nullptr;};
    inline const vector<DescribeJobMonitorRuleResponseBodyMonitorRules> & monitorRules() const { DARABONBA_PTR_GET_CONST(monitorRules_, vector<DescribeJobMonitorRuleResponseBodyMonitorRules>) };
    inline vector<DescribeJobMonitorRuleResponseBodyMonitorRules> monitorRules() { DARABONBA_PTR_GET(monitorRules_, vector<DescribeJobMonitorRuleResponseBodyMonitorRules>) };
    inline DescribeJobMonitorRuleResponseBody& setMonitorRules(const vector<DescribeJobMonitorRuleResponseBodyMonitorRules> & monitorRules) { DARABONBA_PTR_SET_VALUE(monitorRules_, monitorRules) };
    inline DescribeJobMonitorRuleResponseBody& setMonitorRules(vector<DescribeJobMonitorRuleResponseBodyMonitorRules> && monitorRules) { DARABONBA_PTR_SET_RVALUE(monitorRules_, monitorRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJobMonitorRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeJobMonitorRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<string> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
    inline vector<string> topics() { DARABONBA_PTR_GET(topics_, vector<string>) };
    inline DescribeJobMonitorRuleResponseBody& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline DescribeJobMonitorRuleResponseBody& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


  protected:
    // The error code. This parameter will be removed in the future.
    std::shared_ptr<string> code_ = nullptr;
    // The ID of the data migration, data synchronization, or change tracking task.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The dynamic part in the error message. This parameter is used to replace the **%s** variable in the **ErrMessage** parameter.
    // 
    // >  If the specified **DtsJobId** parameter is invalid, **The Value of Input Parameter %s is not valid** is returned for **ErrMessage** and **DtsJobId** is returned for **DynamicMessage**.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // The error code returned if the call failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the call failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The monitoring rules of the DTS task.
    std::shared_ptr<vector<DescribeJobMonitorRuleResponseBodyMonitorRules>> monitorRules_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful. Valid values:
    // 
    // *   **true**: The call was successful.
    // *   **false**:The call failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The topics of all subtasks in the distributed change tracking task.
    std::shared_ptr<vector<string>> topics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
