// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RealtimeDialogAssistRequestConversationModel.hpp>
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
    virtual bool empty() const override { this->analysis_ != nullptr
        && this->bizType_ != nullptr && this->conversationModel_ != nullptr && this->dialogMemoryTurns_ != nullptr && this->hangUpDialog_ != nullptr && this->metaData_ != nullptr
        && this->requestId_ != nullptr && this->sessionId_ != nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline bool analysis() const { DARABONBA_PTR_GET_DEFAULT(analysis_, false) };
    inline RealtimeDialogAssistRequest& setAnalysis(bool analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline RealtimeDialogAssistRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // conversationModel Field Functions 
    bool hasConversationModel() const { return this->conversationModel_ != nullptr;};
    void deleteConversationModel() { this->conversationModel_ = nullptr;};
    inline const vector<RealtimeDialogAssistRequestConversationModel> & conversationModel() const { DARABONBA_PTR_GET_CONST(conversationModel_, vector<RealtimeDialogAssistRequestConversationModel>) };
    inline vector<RealtimeDialogAssistRequestConversationModel> conversationModel() { DARABONBA_PTR_GET(conversationModel_, vector<RealtimeDialogAssistRequestConversationModel>) };
    inline RealtimeDialogAssistRequest& setConversationModel(const vector<RealtimeDialogAssistRequestConversationModel> & conversationModel) { DARABONBA_PTR_SET_VALUE(conversationModel_, conversationModel) };
    inline RealtimeDialogAssistRequest& setConversationModel(vector<RealtimeDialogAssistRequestConversationModel> && conversationModel) { DARABONBA_PTR_SET_RVALUE(conversationModel_, conversationModel) };


    // dialogMemoryTurns Field Functions 
    bool hasDialogMemoryTurns() const { return this->dialogMemoryTurns_ != nullptr;};
    void deleteDialogMemoryTurns() { this->dialogMemoryTurns_ = nullptr;};
    inline int32_t dialogMemoryTurns() const { DARABONBA_PTR_GET_DEFAULT(dialogMemoryTurns_, 0) };
    inline RealtimeDialogAssistRequest& setDialogMemoryTurns(int32_t dialogMemoryTurns) { DARABONBA_PTR_SET_VALUE(dialogMemoryTurns_, dialogMemoryTurns) };


    // hangUpDialog Field Functions 
    bool hasHangUpDialog() const { return this->hangUpDialog_ != nullptr;};
    void deleteHangUpDialog() { this->hangUpDialog_ = nullptr;};
    inline bool hangUpDialog() const { DARABONBA_PTR_GET_DEFAULT(hangUpDialog_, false) };
    inline RealtimeDialogAssistRequest& setHangUpDialog(bool hangUpDialog) { DARABONBA_PTR_SET_VALUE(hangUpDialog_, hangUpDialog) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline     const Darabonba::Json & metaData() const { DARABONBA_GET(metaData_) };
    Darabonba::Json & metaData() { DARABONBA_GET(metaData_) };
    inline RealtimeDialogAssistRequest& setMetaData(const Darabonba::Json & metaData) { DARABONBA_SET_VALUE(metaData_, metaData) };
    inline RealtimeDialogAssistRequest& setMetaData(Darabonba::Json & metaData) { DARABONBA_SET_RVALUE(metaData_, metaData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RealtimeDialogAssistRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RealtimeDialogAssistRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<bool> analysis_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<RealtimeDialogAssistRequestConversationModel>> conversationModel_ = nullptr;
    std::shared_ptr<int32_t> dialogMemoryTurns_ = nullptr;
    std::shared_ptr<bool> hangUpDialog_ = nullptr;
    // metaData
    Darabonba::Json metaData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
