// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHISTORYLISTBYBIZTYPERESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_GETHISTORYLISTBYBIZTYPERESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetHistoryListByBizTypeResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHistoryListByBizTypeResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(bizType, bizType_);
      DARABONBA_ANY_TO_JSON(extraMessage, extraMessage_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(llmAnswer, llmAnswer_);
      DARABONBA_PTR_TO_JSON(llmPrompt, llmPrompt_);
      DARABONBA_PTR_TO_JSON(llmType, llmType_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(userQuery, userQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GetHistoryListByBizTypeResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(bizType, bizType_);
      DARABONBA_ANY_FROM_JSON(extraMessage, extraMessage_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(llmAnswer, llmAnswer_);
      DARABONBA_PTR_FROM_JSON(llmPrompt, llmPrompt_);
      DARABONBA_PTR_FROM_JSON(llmType, llmType_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(userQuery, userQuery_);
    };
    GetHistoryListByBizTypeResponseBodyDataRecords() = default ;
    GetHistoryListByBizTypeResponseBodyDataRecords(const GetHistoryListByBizTypeResponseBodyDataRecords &) = default ;
    GetHistoryListByBizTypeResponseBodyDataRecords(GetHistoryListByBizTypeResponseBodyDataRecords &&) = default ;
    GetHistoryListByBizTypeResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHistoryListByBizTypeResponseBodyDataRecords() = default ;
    GetHistoryListByBizTypeResponseBodyDataRecords& operator=(const GetHistoryListByBizTypeResponseBodyDataRecords &) = default ;
    GetHistoryListByBizTypeResponseBodyDataRecords& operator=(GetHistoryListByBizTypeResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->bizType_ == nullptr && return this->extraMessage_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr
        && return this->llmAnswer_ == nullptr && return this->llmPrompt_ == nullptr && return this->llmType_ == nullptr && return this->sessionId_ == nullptr && return this->userQuery_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetHistoryListByBizTypeResponseBodyDataRecords& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline GetHistoryListByBizTypeResponseBodyDataRecords& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // extraMessage Field Functions 
    bool hasExtraMessage() const { return this->extraMessage_ != nullptr;};
    void deleteExtraMessage() { this->extraMessage_ = nullptr;};
    inline     const Darabonba::Json & extraMessage() const { DARABONBA_GET(extraMessage_) };
    Darabonba::Json & extraMessage() { DARABONBA_GET(extraMessage_) };
    inline GetHistoryListByBizTypeResponseBodyDataRecords& setExtraMessage(const Darabonba::Json & extraMessage) { DARABONBA_SET_VALUE(extraMessage_, extraMessage) };
    inline GetHistoryListByBizTypeResponseBodyDataRecords& setExtraMessage(Darabonba::Json & extraMessage) { DARABONBA_SET_RVALUE(extraMessage_, extraMessage) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetHistoryListByBizTypeResponseBodyDataRecords& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetHistoryListByBizTypeResponseBodyDataRecords& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetHistoryListByBizTypeResponseBodyDataRecords& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // llmAnswer Field Functions 
    bool hasLlmAnswer() const { return this->llmAnswer_ != nullptr;};
    void deleteLlmAnswer() { this->llmAnswer_ = nullptr;};
    inline string llmAnswer() const { DARABONBA_PTR_GET_DEFAULT(llmAnswer_, "") };
    inline GetHistoryListByBizTypeResponseBodyDataRecords& setLlmAnswer(string llmAnswer) { DARABONBA_PTR_SET_VALUE(llmAnswer_, llmAnswer) };


    // llmPrompt Field Functions 
    bool hasLlmPrompt() const { return this->llmPrompt_ != nullptr;};
    void deleteLlmPrompt() { this->llmPrompt_ = nullptr;};
    inline string llmPrompt() const { DARABONBA_PTR_GET_DEFAULT(llmPrompt_, "") };
    inline GetHistoryListByBizTypeResponseBodyDataRecords& setLlmPrompt(string llmPrompt) { DARABONBA_PTR_SET_VALUE(llmPrompt_, llmPrompt) };


    // llmType Field Functions 
    bool hasLlmType() const { return this->llmType_ != nullptr;};
    void deleteLlmType() { this->llmType_ = nullptr;};
    inline string llmType() const { DARABONBA_PTR_GET_DEFAULT(llmType_, "") };
    inline GetHistoryListByBizTypeResponseBodyDataRecords& setLlmType(string llmType) { DARABONBA_PTR_SET_VALUE(llmType_, llmType) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetHistoryListByBizTypeResponseBodyDataRecords& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // userQuery Field Functions 
    bool hasUserQuery() const { return this->userQuery_ != nullptr;};
    void deleteUserQuery() { this->userQuery_ = nullptr;};
    inline string userQuery() const { DARABONBA_PTR_GET_DEFAULT(userQuery_, "") };
    inline GetHistoryListByBizTypeResponseBodyDataRecords& setUserQuery(string userQuery) { DARABONBA_PTR_SET_VALUE(userQuery_, userQuery) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    Darabonba::Json extraMessage_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> llmAnswer_ = nullptr;
    std::shared_ptr<string> llmPrompt_ = nullptr;
    std::shared_ptr<string> llmType_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> userQuery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
