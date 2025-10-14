// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAICoachTaskSessionHistoryResponseBodyConversationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachTaskSessionHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachTaskSessionHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(conversationList, conversationList_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(pauseDuration, pauseDuration_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachTaskSessionHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(conversationList, conversationList_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(pauseDuration, pauseDuration_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
    };
    GetAICoachTaskSessionHistoryResponseBody() = default ;
    GetAICoachTaskSessionHistoryResponseBody(const GetAICoachTaskSessionHistoryResponseBody &) = default ;
    GetAICoachTaskSessionHistoryResponseBody(GetAICoachTaskSessionHistoryResponseBody &&) = default ;
    GetAICoachTaskSessionHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachTaskSessionHistoryResponseBody() = default ;
    GetAICoachTaskSessionHistoryResponseBody& operator=(const GetAICoachTaskSessionHistoryResponseBody &) = default ;
    GetAICoachTaskSessionHistoryResponseBody& operator=(GetAICoachTaskSessionHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationList_ == nullptr
        && return this->duration_ == nullptr && return this->endTime_ == nullptr && return this->pauseDuration_ == nullptr && return this->requestId_ == nullptr && return this->scriptName_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->total_ == nullptr && return this->uid_ == nullptr; };
    // conversationList Field Functions 
    bool hasConversationList() const { return this->conversationList_ != nullptr;};
    void deleteConversationList() { this->conversationList_ = nullptr;};
    inline const vector<GetAICoachTaskSessionHistoryResponseBodyConversationList> & conversationList() const { DARABONBA_PTR_GET_CONST(conversationList_, vector<GetAICoachTaskSessionHistoryResponseBodyConversationList>) };
    inline vector<GetAICoachTaskSessionHistoryResponseBodyConversationList> conversationList() { DARABONBA_PTR_GET(conversationList_, vector<GetAICoachTaskSessionHistoryResponseBodyConversationList>) };
    inline GetAICoachTaskSessionHistoryResponseBody& setConversationList(const vector<GetAICoachTaskSessionHistoryResponseBodyConversationList> & conversationList) { DARABONBA_PTR_SET_VALUE(conversationList_, conversationList) };
    inline GetAICoachTaskSessionHistoryResponseBody& setConversationList(vector<GetAICoachTaskSessionHistoryResponseBodyConversationList> && conversationList) { DARABONBA_PTR_SET_RVALUE(conversationList_, conversationList) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetAICoachTaskSessionHistoryResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetAICoachTaskSessionHistoryResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pauseDuration Field Functions 
    bool hasPauseDuration() const { return this->pauseDuration_ != nullptr;};
    void deletePauseDuration() { this->pauseDuration_ = nullptr;};
    inline int64_t pauseDuration() const { DARABONBA_PTR_GET_DEFAULT(pauseDuration_, 0L) };
    inline GetAICoachTaskSessionHistoryResponseBody& setPauseDuration(int64_t pauseDuration) { DARABONBA_PTR_SET_VALUE(pauseDuration_, pauseDuration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAICoachTaskSessionHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline GetAICoachTaskSessionHistoryResponseBody& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetAICoachTaskSessionHistoryResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAICoachTaskSessionHistoryResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetAICoachTaskSessionHistoryResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetAICoachTaskSessionHistoryResponseBody& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<vector<GetAICoachTaskSessionHistoryResponseBodyConversationList>> conversationList_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> pauseDuration_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> scriptName_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
