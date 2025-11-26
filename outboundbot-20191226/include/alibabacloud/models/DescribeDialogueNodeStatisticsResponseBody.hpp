// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIALOGUENODESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIALOGUENODESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes.hpp>
#include <alibabacloud/models/DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeDialogueNodeStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDialogueNodeStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HangUpDialogueNodes, hangUpDialogueNodes_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NoAnswerDialogueNodes, noAnswerDialogueNodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCompleted, totalCompleted_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDialogueNodeStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HangUpDialogueNodes, hangUpDialogueNodes_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NoAnswerDialogueNodes, noAnswerDialogueNodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCompleted, totalCompleted_);
    };
    DescribeDialogueNodeStatisticsResponseBody() = default ;
    DescribeDialogueNodeStatisticsResponseBody(const DescribeDialogueNodeStatisticsResponseBody &) = default ;
    DescribeDialogueNodeStatisticsResponseBody(DescribeDialogueNodeStatisticsResponseBody &&) = default ;
    DescribeDialogueNodeStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDialogueNodeStatisticsResponseBody() = default ;
    DescribeDialogueNodeStatisticsResponseBody& operator=(const DescribeDialogueNodeStatisticsResponseBody &) = default ;
    DescribeDialogueNodeStatisticsResponseBody& operator=(DescribeDialogueNodeStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->groupId_ == nullptr && return this->hangUpDialogueNodes_ == nullptr && return this->httpStatusCode_ == nullptr && return this->instanceId_ == nullptr && return this->message_ == nullptr
        && return this->noAnswerDialogueNodes_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->totalCompleted_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDialogueNodeStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDialogueNodeStatisticsResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hangUpDialogueNodes Field Functions 
    bool hasHangUpDialogueNodes() const { return this->hangUpDialogueNodes_ != nullptr;};
    void deleteHangUpDialogueNodes() { this->hangUpDialogueNodes_ = nullptr;};
    inline const vector<DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes> & hangUpDialogueNodes() const { DARABONBA_PTR_GET_CONST(hangUpDialogueNodes_, vector<DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes>) };
    inline vector<DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes> hangUpDialogueNodes() { DARABONBA_PTR_GET(hangUpDialogueNodes_, vector<DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes>) };
    inline DescribeDialogueNodeStatisticsResponseBody& setHangUpDialogueNodes(const vector<DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes> & hangUpDialogueNodes) { DARABONBA_PTR_SET_VALUE(hangUpDialogueNodes_, hangUpDialogueNodes) };
    inline DescribeDialogueNodeStatisticsResponseBody& setHangUpDialogueNodes(vector<DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes> && hangUpDialogueNodes) { DARABONBA_PTR_SET_RVALUE(hangUpDialogueNodes_, hangUpDialogueNodes) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDialogueNodeStatisticsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDialogueNodeStatisticsResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDialogueNodeStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // noAnswerDialogueNodes Field Functions 
    bool hasNoAnswerDialogueNodes() const { return this->noAnswerDialogueNodes_ != nullptr;};
    void deleteNoAnswerDialogueNodes() { this->noAnswerDialogueNodes_ = nullptr;};
    inline const vector<DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes> & noAnswerDialogueNodes() const { DARABONBA_PTR_GET_CONST(noAnswerDialogueNodes_, vector<DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes>) };
    inline vector<DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes> noAnswerDialogueNodes() { DARABONBA_PTR_GET(noAnswerDialogueNodes_, vector<DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes>) };
    inline DescribeDialogueNodeStatisticsResponseBody& setNoAnswerDialogueNodes(const vector<DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes> & noAnswerDialogueNodes) { DARABONBA_PTR_SET_VALUE(noAnswerDialogueNodes_, noAnswerDialogueNodes) };
    inline DescribeDialogueNodeStatisticsResponseBody& setNoAnswerDialogueNodes(vector<DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes> && noAnswerDialogueNodes) { DARABONBA_PTR_SET_RVALUE(noAnswerDialogueNodes_, noAnswerDialogueNodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDialogueNodeStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDialogueNodeStatisticsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCompleted Field Functions 
    bool hasTotalCompleted() const { return this->totalCompleted_ != nullptr;};
    void deleteTotalCompleted() { this->totalCompleted_ = nullptr;};
    inline int32_t totalCompleted() const { DARABONBA_PTR_GET_DEFAULT(totalCompleted_, 0) };
    inline DescribeDialogueNodeStatisticsResponseBody& setTotalCompleted(int32_t totalCompleted) { DARABONBA_PTR_SET_VALUE(totalCompleted_, totalCompleted) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<vector<DescribeDialogueNodeStatisticsResponseBodyHangUpDialogueNodes>> hangUpDialogueNodes_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<DescribeDialogueNodeStatisticsResponseBodyNoAnswerDialogueNodes>> noAnswerDialogueNodes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int32_t> totalCompleted_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
