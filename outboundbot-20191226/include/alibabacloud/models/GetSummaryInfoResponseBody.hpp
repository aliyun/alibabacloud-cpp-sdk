// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUMMARYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUMMARYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetSummaryInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSummaryInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentBotInstanceSummaryList, agentBotInstanceSummaryList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSummaryInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentBotInstanceSummaryList, agentBotInstanceSummaryList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSummaryInfoResponseBody() = default ;
    GetSummaryInfoResponseBody(const GetSummaryInfoResponseBody &) = default ;
    GetSummaryInfoResponseBody(GetSummaryInfoResponseBody &&) = default ;
    GetSummaryInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSummaryInfoResponseBody() = default ;
    GetSummaryInfoResponseBody& operator=(const GetSummaryInfoResponseBody &) = default ;
    GetSummaryInfoResponseBody& operator=(GetSummaryInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AgentBotInstanceSummaryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentBotInstanceSummaryList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(TotalCallCount, totalCallCount_);
        DARABONBA_PTR_TO_JSON(TotalCallTime, totalCallTime_);
        DARABONBA_PTR_TO_JSON(UsedRecordingStorageSpace, usedRecordingStorageSpace_);
      };
      friend void from_json(const Darabonba::Json& j, AgentBotInstanceSummaryList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(TotalCallCount, totalCallCount_);
        DARABONBA_PTR_FROM_JSON(TotalCallTime, totalCallTime_);
        DARABONBA_PTR_FROM_JSON(UsedRecordingStorageSpace, usedRecordingStorageSpace_);
      };
      AgentBotInstanceSummaryList() = default ;
      AgentBotInstanceSummaryList(const AgentBotInstanceSummaryList &) = default ;
      AgentBotInstanceSummaryList(AgentBotInstanceSummaryList &&) = default ;
      AgentBotInstanceSummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgentBotInstanceSummaryList() = default ;
      AgentBotInstanceSummaryList& operator=(const AgentBotInstanceSummaryList &) = default ;
      AgentBotInstanceSummaryList& operator=(AgentBotInstanceSummaryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->totalCallCount_ == nullptr && this->totalCallTime_ == nullptr && this->usedRecordingStorageSpace_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AgentBotInstanceSummaryList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // totalCallCount Field Functions 
      bool hasTotalCallCount() const { return this->totalCallCount_ != nullptr;};
      void deleteTotalCallCount() { this->totalCallCount_ = nullptr;};
      inline int64_t getTotalCallCount() const { DARABONBA_PTR_GET_DEFAULT(totalCallCount_, 0L) };
      inline AgentBotInstanceSummaryList& setTotalCallCount(int64_t totalCallCount) { DARABONBA_PTR_SET_VALUE(totalCallCount_, totalCallCount) };


      // totalCallTime Field Functions 
      bool hasTotalCallTime() const { return this->totalCallTime_ != nullptr;};
      void deleteTotalCallTime() { this->totalCallTime_ = nullptr;};
      inline int64_t getTotalCallTime() const { DARABONBA_PTR_GET_DEFAULT(totalCallTime_, 0L) };
      inline AgentBotInstanceSummaryList& setTotalCallTime(int64_t totalCallTime) { DARABONBA_PTR_SET_VALUE(totalCallTime_, totalCallTime) };


      // usedRecordingStorageSpace Field Functions 
      bool hasUsedRecordingStorageSpace() const { return this->usedRecordingStorageSpace_ != nullptr;};
      void deleteUsedRecordingStorageSpace() { this->usedRecordingStorageSpace_ = nullptr;};
      inline int32_t getUsedRecordingStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(usedRecordingStorageSpace_, 0) };
      inline AgentBotInstanceSummaryList& setUsedRecordingStorageSpace(int32_t usedRecordingStorageSpace) { DARABONBA_PTR_SET_VALUE(usedRecordingStorageSpace_, usedRecordingStorageSpace) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> totalCallCount_ {};
      shared_ptr<int64_t> totalCallTime_ {};
      shared_ptr<int32_t> usedRecordingStorageSpace_ {};
    };

    virtual bool empty() const override { return this->agentBotInstanceSummaryList_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // agentBotInstanceSummaryList Field Functions 
    bool hasAgentBotInstanceSummaryList() const { return this->agentBotInstanceSummaryList_ != nullptr;};
    void deleteAgentBotInstanceSummaryList() { this->agentBotInstanceSummaryList_ = nullptr;};
    inline const vector<GetSummaryInfoResponseBody::AgentBotInstanceSummaryList> & getAgentBotInstanceSummaryList() const { DARABONBA_PTR_GET_CONST(agentBotInstanceSummaryList_, vector<GetSummaryInfoResponseBody::AgentBotInstanceSummaryList>) };
    inline vector<GetSummaryInfoResponseBody::AgentBotInstanceSummaryList> getAgentBotInstanceSummaryList() { DARABONBA_PTR_GET(agentBotInstanceSummaryList_, vector<GetSummaryInfoResponseBody::AgentBotInstanceSummaryList>) };
    inline GetSummaryInfoResponseBody& setAgentBotInstanceSummaryList(const vector<GetSummaryInfoResponseBody::AgentBotInstanceSummaryList> & agentBotInstanceSummaryList) { DARABONBA_PTR_SET_VALUE(agentBotInstanceSummaryList_, agentBotInstanceSummaryList) };
    inline GetSummaryInfoResponseBody& setAgentBotInstanceSummaryList(vector<GetSummaryInfoResponseBody::AgentBotInstanceSummaryList> && agentBotInstanceSummaryList) { DARABONBA_PTR_SET_RVALUE(agentBotInstanceSummaryList_, agentBotInstanceSummaryList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSummaryInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSummaryInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSummaryInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSummaryInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSummaryInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<GetSummaryInfoResponseBody::AgentBotInstanceSummaryList>> agentBotInstanceSummaryList_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
