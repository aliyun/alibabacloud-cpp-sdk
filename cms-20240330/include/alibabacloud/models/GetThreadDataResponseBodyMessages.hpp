// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTHREADDATARESPONSEBODYMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_GETTHREADDATARESPONSEBODYMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetThreadDataResponseBodyMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetThreadDataResponseBodyMessages& obj) { 
      DARABONBA_PTR_TO_JSON(callerUid, callerUid_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(ownerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(parentMessageId, parentMessageId_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, GetThreadDataResponseBodyMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(callerUid, callerUid_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(ownerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(parentMessageId, parentMessageId_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    GetThreadDataResponseBodyMessages() = default ;
    GetThreadDataResponseBodyMessages(const GetThreadDataResponseBodyMessages &) = default ;
    GetThreadDataResponseBodyMessages(GetThreadDataResponseBodyMessages &&) = default ;
    GetThreadDataResponseBodyMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetThreadDataResponseBodyMessages() = default ;
    GetThreadDataResponseBodyMessages& operator=(const GetThreadDataResponseBodyMessages &) = default ;
    GetThreadDataResponseBodyMessages& operator=(GetThreadDataResponseBodyMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callerUid_ == nullptr
        && return this->digitalEmployeeName_ == nullptr && return this->items_ == nullptr && return this->messageId_ == nullptr && return this->ownerUid_ == nullptr && return this->parentMessageId_ == nullptr
        && return this->region_ == nullptr && return this->role_ == nullptr && return this->runId_ == nullptr && return this->threadId_ == nullptr && return this->timestamp_ == nullptr
        && return this->traceId_ == nullptr && return this->variables_ == nullptr; };
    // callerUid Field Functions 
    bool hasCallerUid() const { return this->callerUid_ != nullptr;};
    void deleteCallerUid() { this->callerUid_ = nullptr;};
    inline string callerUid() const { DARABONBA_PTR_GET_DEFAULT(callerUid_, "") };
    inline GetThreadDataResponseBodyMessages& setCallerUid(string callerUid) { DARABONBA_PTR_SET_VALUE(callerUid_, callerUid) };


    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline string digitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
    inline GetThreadDataResponseBodyMessages& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Darabonba::Json> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> items() { DARABONBA_PTR_GET(items_, vector<Darabonba::Json>) };
    inline GetThreadDataResponseBodyMessages& setItems(const vector<Darabonba::Json> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetThreadDataResponseBodyMessages& setItems(vector<Darabonba::Json> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline GetThreadDataResponseBodyMessages& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline string ownerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, "") };
    inline GetThreadDataResponseBodyMessages& setOwnerUid(string ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // parentMessageId Field Functions 
    bool hasParentMessageId() const { return this->parentMessageId_ != nullptr;};
    void deleteParentMessageId() { this->parentMessageId_ = nullptr;};
    inline string parentMessageId() const { DARABONBA_PTR_GET_DEFAULT(parentMessageId_, "") };
    inline GetThreadDataResponseBodyMessages& setParentMessageId(string parentMessageId) { DARABONBA_PTR_SET_VALUE(parentMessageId_, parentMessageId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetThreadDataResponseBodyMessages& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetThreadDataResponseBodyMessages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string runId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline GetThreadDataResponseBodyMessages& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline GetThreadDataResponseBodyMessages& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline GetThreadDataResponseBodyMessages& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetThreadDataResponseBodyMessages& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const map<string, string> & variables() const { DARABONBA_PTR_GET_CONST(variables_, map<string, string>) };
    inline map<string, string> variables() { DARABONBA_PTR_GET(variables_, map<string, string>) };
    inline GetThreadDataResponseBodyMessages& setVariables(const map<string, string> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline GetThreadDataResponseBodyMessages& setVariables(map<string, string> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<string> callerUid_ = nullptr;
    std::shared_ptr<string> digitalEmployeeName_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> items_ = nullptr;
    std::shared_ptr<string> messageId_ = nullptr;
    std::shared_ptr<string> ownerUid_ = nullptr;
    std::shared_ptr<string> parentMessageId_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> runId_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
    std::shared_ptr<string> timestamp_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
    std::shared_ptr<map<string, string>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
