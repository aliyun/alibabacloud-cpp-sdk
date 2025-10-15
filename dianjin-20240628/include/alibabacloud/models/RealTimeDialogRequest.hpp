// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RealTimeDialogRequestConversationModel.hpp>
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
    virtual bool empty() const override { return this->analysis_ == nullptr
        && return this->bizType_ == nullptr && return this->conversationModel_ == nullptr && return this->dialogMemoryTurns_ == nullptr && return this->metaData_ == nullptr && return this->opType_ == nullptr
        && return this->recommend_ == nullptr && return this->scriptContentPlayed_ == nullptr && return this->sessionId_ == nullptr && return this->stream_ == nullptr && return this->userVad_ == nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline bool analysis() const { DARABONBA_PTR_GET_DEFAULT(analysis_, false) };
    inline RealTimeDialogRequest& setAnalysis(bool analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline RealTimeDialogRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // conversationModel Field Functions 
    bool hasConversationModel() const { return this->conversationModel_ != nullptr;};
    void deleteConversationModel() { this->conversationModel_ = nullptr;};
    inline const vector<RealTimeDialogRequestConversationModel> & conversationModel() const { DARABONBA_PTR_GET_CONST(conversationModel_, vector<RealTimeDialogRequestConversationModel>) };
    inline vector<RealTimeDialogRequestConversationModel> conversationModel() { DARABONBA_PTR_GET(conversationModel_, vector<RealTimeDialogRequestConversationModel>) };
    inline RealTimeDialogRequest& setConversationModel(const vector<RealTimeDialogRequestConversationModel> & conversationModel) { DARABONBA_PTR_SET_VALUE(conversationModel_, conversationModel) };
    inline RealTimeDialogRequest& setConversationModel(vector<RealTimeDialogRequestConversationModel> && conversationModel) { DARABONBA_PTR_SET_RVALUE(conversationModel_, conversationModel) };


    // dialogMemoryTurns Field Functions 
    bool hasDialogMemoryTurns() const { return this->dialogMemoryTurns_ != nullptr;};
    void deleteDialogMemoryTurns() { this->dialogMemoryTurns_ = nullptr;};
    inline int32_t dialogMemoryTurns() const { DARABONBA_PTR_GET_DEFAULT(dialogMemoryTurns_, 0) };
    inline RealTimeDialogRequest& setDialogMemoryTurns(int32_t dialogMemoryTurns) { DARABONBA_PTR_SET_VALUE(dialogMemoryTurns_, dialogMemoryTurns) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline     const Darabonba::Json & metaData() const { DARABONBA_GET(metaData_) };
    Darabonba::Json & metaData() { DARABONBA_GET(metaData_) };
    inline RealTimeDialogRequest& setMetaData(const Darabonba::Json & metaData) { DARABONBA_SET_VALUE(metaData_, metaData) };
    inline RealTimeDialogRequest& setMetaData(Darabonba::Json & metaData) { DARABONBA_SET_RVALUE(metaData_, metaData) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline RealTimeDialogRequest& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // recommend Field Functions 
    bool hasRecommend() const { return this->recommend_ != nullptr;};
    void deleteRecommend() { this->recommend_ = nullptr;};
    inline bool recommend() const { DARABONBA_PTR_GET_DEFAULT(recommend_, false) };
    inline RealTimeDialogRequest& setRecommend(bool recommend) { DARABONBA_PTR_SET_VALUE(recommend_, recommend) };


    // scriptContentPlayed Field Functions 
    bool hasScriptContentPlayed() const { return this->scriptContentPlayed_ != nullptr;};
    void deleteScriptContentPlayed() { this->scriptContentPlayed_ = nullptr;};
    inline string scriptContentPlayed() const { DARABONBA_PTR_GET_DEFAULT(scriptContentPlayed_, "") };
    inline RealTimeDialogRequest& setScriptContentPlayed(string scriptContentPlayed) { DARABONBA_PTR_SET_VALUE(scriptContentPlayed_, scriptContentPlayed) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RealTimeDialogRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RealTimeDialogRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // userVad Field Functions 
    bool hasUserVad() const { return this->userVad_ != nullptr;};
    void deleteUserVad() { this->userVad_ = nullptr;};
    inline bool userVad() const { DARABONBA_PTR_GET_DEFAULT(userVad_, false) };
    inline RealTimeDialogRequest& setUserVad(bool userVad) { DARABONBA_PTR_SET_VALUE(userVad_, userVad) };


  protected:
    std::shared_ptr<bool> analysis_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<RealTimeDialogRequestConversationModel>> conversationModel_ = nullptr;
    std::shared_ptr<int32_t> dialogMemoryTurns_ = nullptr;
    Darabonba::Json metaData_ = nullptr;
    std::shared_ptr<string> opType_ = nullptr;
    std::shared_ptr<bool> recommend_ = nullptr;
    std::shared_ptr<string> scriptContentPlayed_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
    std::shared_ptr<bool> userVad_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
