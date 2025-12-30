// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTREQUEST_HPP_
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
  class RealtimeDialogAssistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealtimeDialogAssistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analysis, analysis_);
      DARABONBA_PTR_TO_JSON(bizType, bizType_);
      DARABONBA_PTR_TO_JSON(conversationModel, conversationModel_);
      DARABONBA_PTR_TO_JSON(dialogMemoryTurns, dialogMemoryTurns_);
      DARABONBA_PTR_TO_JSON(hangUpDialog, hangUpDialog_);
      DARABONBA_ANY_TO_JSON(metaData, metaData_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, RealtimeDialogAssistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(bizType, bizType_);
      DARABONBA_PTR_FROM_JSON(conversationModel, conversationModel_);
      DARABONBA_PTR_FROM_JSON(dialogMemoryTurns, dialogMemoryTurns_);
      DARABONBA_PTR_FROM_JSON(hangUpDialog, hangUpDialog_);
      DARABONBA_ANY_FROM_JSON(metaData, metaData_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    RealtimeDialogAssistRequest() = default ;
    RealtimeDialogAssistRequest(const RealtimeDialogAssistRequest &) = default ;
    RealtimeDialogAssistRequest(RealtimeDialogAssistRequest &&) = default ;
    RealtimeDialogAssistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealtimeDialogAssistRequest() = default ;
    RealtimeDialogAssistRequest& operator=(const RealtimeDialogAssistRequest &) = default ;
    RealtimeDialogAssistRequest& operator=(RealtimeDialogAssistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConversationModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConversationModel& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(customerId, customerId_);
        DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
        DARABONBA_PTR_TO_JSON(customerServiceType, customerServiceType_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ConversationModel& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(customerId, customerId_);
        DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
        DARABONBA_PTR_FROM_JSON(customerServiceType, customerServiceType_);
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
      virtual bool empty() const override { return this->content_ == nullptr
        && this->customerId_ == nullptr && this->customerServiceId_ == nullptr && this->customerServiceType_ == nullptr && this->role_ == nullptr && this->type_ == nullptr; };
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
      // This parameter is required.
      shared_ptr<string> content_ {};
      shared_ptr<string> customerId_ {};
      shared_ptr<string> customerServiceId_ {};
      shared_ptr<string> customerServiceType_ {};
      // This parameter is required.
      shared_ptr<int32_t> role_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->analysis_ == nullptr
        && this->bizType_ == nullptr && this->conversationModel_ == nullptr && this->dialogMemoryTurns_ == nullptr && this->hangUpDialog_ == nullptr && this->metaData_ == nullptr
        && this->requestId_ == nullptr && this->sessionId_ == nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline bool getAnalysis() const { DARABONBA_PTR_GET_DEFAULT(analysis_, false) };
    inline RealtimeDialogAssistRequest& setAnalysis(bool analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline RealtimeDialogAssistRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // conversationModel Field Functions 
    bool hasConversationModel() const { return this->conversationModel_ != nullptr;};
    void deleteConversationModel() { this->conversationModel_ = nullptr;};
    inline const vector<RealtimeDialogAssistRequest::ConversationModel> & getConversationModel() const { DARABONBA_PTR_GET_CONST(conversationModel_, vector<RealtimeDialogAssistRequest::ConversationModel>) };
    inline vector<RealtimeDialogAssistRequest::ConversationModel> getConversationModel() { DARABONBA_PTR_GET(conversationModel_, vector<RealtimeDialogAssistRequest::ConversationModel>) };
    inline RealtimeDialogAssistRequest& setConversationModel(const vector<RealtimeDialogAssistRequest::ConversationModel> & conversationModel) { DARABONBA_PTR_SET_VALUE(conversationModel_, conversationModel) };
    inline RealtimeDialogAssistRequest& setConversationModel(vector<RealtimeDialogAssistRequest::ConversationModel> && conversationModel) { DARABONBA_PTR_SET_RVALUE(conversationModel_, conversationModel) };


    // dialogMemoryTurns Field Functions 
    bool hasDialogMemoryTurns() const { return this->dialogMemoryTurns_ != nullptr;};
    void deleteDialogMemoryTurns() { this->dialogMemoryTurns_ = nullptr;};
    inline int32_t getDialogMemoryTurns() const { DARABONBA_PTR_GET_DEFAULT(dialogMemoryTurns_, 0) };
    inline RealtimeDialogAssistRequest& setDialogMemoryTurns(int32_t dialogMemoryTurns) { DARABONBA_PTR_SET_VALUE(dialogMemoryTurns_, dialogMemoryTurns) };


    // hangUpDialog Field Functions 
    bool hasHangUpDialog() const { return this->hangUpDialog_ != nullptr;};
    void deleteHangUpDialog() { this->hangUpDialog_ = nullptr;};
    inline bool getHangUpDialog() const { DARABONBA_PTR_GET_DEFAULT(hangUpDialog_, false) };
    inline RealtimeDialogAssistRequest& setHangUpDialog(bool hangUpDialog) { DARABONBA_PTR_SET_VALUE(hangUpDialog_, hangUpDialog) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline     const Darabonba::Json & getMetaData() const { DARABONBA_GET(metaData_) };
    Darabonba::Json & getMetaData() { DARABONBA_GET(metaData_) };
    inline RealtimeDialogAssistRequest& setMetaData(const Darabonba::Json & metaData) { DARABONBA_SET_VALUE(metaData_, metaData) };
    inline RealtimeDialogAssistRequest& setMetaData(Darabonba::Json && metaData) { DARABONBA_SET_RVALUE(metaData_, metaData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RealtimeDialogAssistRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RealtimeDialogAssistRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    shared_ptr<bool> analysis_ {};
    // This parameter is required.
    shared_ptr<string> bizType_ {};
    // This parameter is required.
    shared_ptr<vector<RealtimeDialogAssistRequest::ConversationModel>> conversationModel_ {};
    shared_ptr<int32_t> dialogMemoryTurns_ {};
    shared_ptr<bool> hangUpDialog_ {};
    // metaData
    Darabonba::Json metaData_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
