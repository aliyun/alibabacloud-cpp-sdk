// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RealTimeDialogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealTimeDialogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analysis, analysis_);
      DARABONBA_PTR_TO_JSON(bizType, bizType_);
      DARABONBA_PTR_TO_JSON(conversationModel, conversationModel_);
      DARABONBA_PTR_TO_JSON(dialogMemoryTurns, dialogMemoryTurns_);
      DARABONBA_ANY_TO_JSON(metaData, metaData_);
      DARABONBA_PTR_TO_JSON(opType, opType_);
      DARABONBA_PTR_TO_JSON(recommend, recommend_);
      DARABONBA_PTR_TO_JSON(scriptContentPlayed, scriptContentPlayed_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(userVad, userVad_);
    };
    friend void from_json(const Darabonba::Json& j, RealTimeDialogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(bizType, bizType_);
      DARABONBA_PTR_FROM_JSON(conversationModel, conversationModel_);
      DARABONBA_PTR_FROM_JSON(dialogMemoryTurns, dialogMemoryTurns_);
      DARABONBA_ANY_FROM_JSON(metaData, metaData_);
      DARABONBA_PTR_FROM_JSON(opType, opType_);
      DARABONBA_PTR_FROM_JSON(recommend, recommend_);
      DARABONBA_PTR_FROM_JSON(scriptContentPlayed, scriptContentPlayed_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(userVad, userVad_);
    };
    RealTimeDialogRequest() = default ;
    RealTimeDialogRequest(const RealTimeDialogRequest &) = default ;
    RealTimeDialogRequest(RealTimeDialogRequest &&) = default ;
    RealTimeDialogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealTimeDialogRequest() = default ;
    RealTimeDialogRequest& operator=(const RealTimeDialogRequest &) = default ;
    RealTimeDialogRequest& operator=(RealTimeDialogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConversationModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConversationModel& obj) { 
        DARABONBA_PTR_TO_JSON(begin, begin_);
        DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(customerId, customerId_);
        DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
        DARABONBA_PTR_TO_JSON(customerServiceType, customerServiceType_);
        DARABONBA_PTR_TO_JSON(end, end_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ConversationModel& obj) { 
        DARABONBA_PTR_FROM_JSON(begin, begin_);
        DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(customerId, customerId_);
        DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
        DARABONBA_PTR_FROM_JSON(customerServiceType, customerServiceType_);
        DARABONBA_PTR_FROM_JSON(end, end_);
        DARABONBA_PTR_FROM_JSON(role, role_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      ConversationModel() = default ;
      ConversationModel(const ConversationModel &) = default ;
      ConversationModel(ConversationModel &&) = default ;
      ConversationModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConversationModel() = default ;
      ConversationModel& operator=(const ConversationModel &) = default ;
      ConversationModel& operator=(ConversationModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->begin_ == nullptr
        && this->beginTime_ == nullptr && this->content_ == nullptr && this->customerId_ == nullptr && this->customerServiceId_ == nullptr && this->customerServiceType_ == nullptr
        && this->end_ == nullptr && this->role_ == nullptr && this->type_ == nullptr; };
      // begin Field Functions 
      bool hasBegin() const { return this->begin_ != nullptr;};
      void deleteBegin() { this->begin_ = nullptr;};
      inline int32_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
      inline ConversationModel& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
      inline ConversationModel& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline ConversationModel& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // customerId Field Functions 
      bool hasCustomerId() const { return this->customerId_ != nullptr;};
      void deleteCustomerId() { this->customerId_ = nullptr;};
      inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
      inline ConversationModel& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


      // customerServiceId Field Functions 
      bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
      void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
      inline string getCustomerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
      inline ConversationModel& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


      // customerServiceType Field Functions 
      bool hasCustomerServiceType() const { return this->customerServiceType_ != nullptr;};
      void deleteCustomerServiceType() { this->customerServiceType_ = nullptr;};
      inline string getCustomerServiceType() const { DARABONBA_PTR_GET_DEFAULT(customerServiceType_, "") };
      inline ConversationModel& setCustomerServiceType(string customerServiceType) { DARABONBA_PTR_SET_VALUE(customerServiceType_, customerServiceType) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
      inline ConversationModel& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline int32_t getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
      inline ConversationModel& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ConversationModel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<int32_t> begin_ {};
      shared_ptr<string> beginTime_ {};
      // This parameter is required.
      shared_ptr<string> content_ {};
      shared_ptr<string> customerId_ {};
      shared_ptr<string> customerServiceId_ {};
      shared_ptr<string> customerServiceType_ {};
      shared_ptr<int32_t> end_ {};
      // This parameter is required.
      shared_ptr<int32_t> role_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->analysis_ == nullptr
        && this->bizType_ == nullptr && this->conversationModel_ == nullptr && this->dialogMemoryTurns_ == nullptr && this->metaData_ == nullptr && this->opType_ == nullptr
        && this->recommend_ == nullptr && this->scriptContentPlayed_ == nullptr && this->sessionId_ == nullptr && this->stream_ == nullptr && this->userVad_ == nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline bool getAnalysis() const { DARABONBA_PTR_GET_DEFAULT(analysis_, false) };
    inline RealTimeDialogRequest& setAnalysis(bool analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline RealTimeDialogRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // conversationModel Field Functions 
    bool hasConversationModel() const { return this->conversationModel_ != nullptr;};
    void deleteConversationModel() { this->conversationModel_ = nullptr;};
    inline const vector<RealTimeDialogRequest::ConversationModel> & getConversationModel() const { DARABONBA_PTR_GET_CONST(conversationModel_, vector<RealTimeDialogRequest::ConversationModel>) };
    inline vector<RealTimeDialogRequest::ConversationModel> getConversationModel() { DARABONBA_PTR_GET(conversationModel_, vector<RealTimeDialogRequest::ConversationModel>) };
    inline RealTimeDialogRequest& setConversationModel(const vector<RealTimeDialogRequest::ConversationModel> & conversationModel) { DARABONBA_PTR_SET_VALUE(conversationModel_, conversationModel) };
    inline RealTimeDialogRequest& setConversationModel(vector<RealTimeDialogRequest::ConversationModel> && conversationModel) { DARABONBA_PTR_SET_RVALUE(conversationModel_, conversationModel) };


    // dialogMemoryTurns Field Functions 
    bool hasDialogMemoryTurns() const { return this->dialogMemoryTurns_ != nullptr;};
    void deleteDialogMemoryTurns() { this->dialogMemoryTurns_ = nullptr;};
    inline int32_t getDialogMemoryTurns() const { DARABONBA_PTR_GET_DEFAULT(dialogMemoryTurns_, 0) };
    inline RealTimeDialogRequest& setDialogMemoryTurns(int32_t dialogMemoryTurns) { DARABONBA_PTR_SET_VALUE(dialogMemoryTurns_, dialogMemoryTurns) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline     const Darabonba::Json & getMetaData() const { DARABONBA_GET(metaData_) };
    Darabonba::Json & getMetaData() { DARABONBA_GET(metaData_) };
    inline RealTimeDialogRequest& setMetaData(const Darabonba::Json & metaData) { DARABONBA_SET_VALUE(metaData_, metaData) };
    inline RealTimeDialogRequest& setMetaData(Darabonba::Json && metaData) { DARABONBA_SET_RVALUE(metaData_, metaData) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline RealTimeDialogRequest& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // recommend Field Functions 
    bool hasRecommend() const { return this->recommend_ != nullptr;};
    void deleteRecommend() { this->recommend_ = nullptr;};
    inline bool getRecommend() const { DARABONBA_PTR_GET_DEFAULT(recommend_, false) };
    inline RealTimeDialogRequest& setRecommend(bool recommend) { DARABONBA_PTR_SET_VALUE(recommend_, recommend) };


    // scriptContentPlayed Field Functions 
    bool hasScriptContentPlayed() const { return this->scriptContentPlayed_ != nullptr;};
    void deleteScriptContentPlayed() { this->scriptContentPlayed_ = nullptr;};
    inline string getScriptContentPlayed() const { DARABONBA_PTR_GET_DEFAULT(scriptContentPlayed_, "") };
    inline RealTimeDialogRequest& setScriptContentPlayed(string scriptContentPlayed) { DARABONBA_PTR_SET_VALUE(scriptContentPlayed_, scriptContentPlayed) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RealTimeDialogRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RealTimeDialogRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // userVad Field Functions 
    bool hasUserVad() const { return this->userVad_ != nullptr;};
    void deleteUserVad() { this->userVad_ = nullptr;};
    inline bool getUserVad() const { DARABONBA_PTR_GET_DEFAULT(userVad_, false) };
    inline RealTimeDialogRequest& setUserVad(bool userVad) { DARABONBA_PTR_SET_VALUE(userVad_, userVad) };


  protected:
    shared_ptr<bool> analysis_ {};
    shared_ptr<string> bizType_ {};
    // This parameter is required.
    shared_ptr<vector<RealTimeDialogRequest::ConversationModel>> conversationModel_ {};
    shared_ptr<int32_t> dialogMemoryTurns_ {};
    Darabonba::Json metaData_ {};
    shared_ptr<string> opType_ {};
    shared_ptr<bool> recommend_ {};
    shared_ptr<string> scriptContentPlayed_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    shared_ptr<bool> stream_ {};
    shared_ptr<bool> userVad_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
