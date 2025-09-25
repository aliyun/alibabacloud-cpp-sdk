// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RealtimeDialogAssistResponseBodyDataAssistScripts.hpp>
#include <alibabacloud/models/RealtimeDialogAssistResponseBodyDataAssistSop.hpp>
#include <alibabacloud/models/RealtimeDialogAssistResponseBodyDataConversationModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RealtimeDialogAssistResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealtimeDialogAssistResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(analysisProcess, analysisProcess_);
      DARABONBA_PTR_TO_JSON(assistScripts, assistScripts_);
      DARABONBA_PTR_TO_JSON(assistSop, assistSop_);
      DARABONBA_PTR_TO_JSON(conversationModel, conversationModel_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, RealtimeDialogAssistResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisProcess, analysisProcess_);
      DARABONBA_PTR_FROM_JSON(assistScripts, assistScripts_);
      DARABONBA_PTR_FROM_JSON(assistSop, assistSop_);
      DARABONBA_PTR_FROM_JSON(conversationModel, conversationModel_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    RealtimeDialogAssistResponseBodyData() = default ;
    RealtimeDialogAssistResponseBodyData(const RealtimeDialogAssistResponseBodyData &) = default ;
    RealtimeDialogAssistResponseBodyData(RealtimeDialogAssistResponseBodyData &&) = default ;
    RealtimeDialogAssistResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealtimeDialogAssistResponseBodyData() = default ;
    RealtimeDialogAssistResponseBodyData& operator=(const RealtimeDialogAssistResponseBodyData &) = default ;
    RealtimeDialogAssistResponseBodyData& operator=(RealtimeDialogAssistResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysisProcess_ != nullptr
        && this->assistScripts_ != nullptr && this->assistSop_ != nullptr && this->conversationModel_ != nullptr && this->requestId_ != nullptr && this->sessionId_ != nullptr; };
    // analysisProcess Field Functions 
    bool hasAnalysisProcess() const { return this->analysisProcess_ != nullptr;};
    void deleteAnalysisProcess() { this->analysisProcess_ = nullptr;};
    inline string analysisProcess() const { DARABONBA_PTR_GET_DEFAULT(analysisProcess_, "") };
    inline RealtimeDialogAssistResponseBodyData& setAnalysisProcess(string analysisProcess) { DARABONBA_PTR_SET_VALUE(analysisProcess_, analysisProcess) };


    // assistScripts Field Functions 
    bool hasAssistScripts() const { return this->assistScripts_ != nullptr;};
    void deleteAssistScripts() { this->assistScripts_ = nullptr;};
    inline const vector<Models::RealtimeDialogAssistResponseBodyDataAssistScripts> & assistScripts() const { DARABONBA_PTR_GET_CONST(assistScripts_, vector<Models::RealtimeDialogAssistResponseBodyDataAssistScripts>) };
    inline vector<Models::RealtimeDialogAssistResponseBodyDataAssistScripts> assistScripts() { DARABONBA_PTR_GET(assistScripts_, vector<Models::RealtimeDialogAssistResponseBodyDataAssistScripts>) };
    inline RealtimeDialogAssistResponseBodyData& setAssistScripts(const vector<Models::RealtimeDialogAssistResponseBodyDataAssistScripts> & assistScripts) { DARABONBA_PTR_SET_VALUE(assistScripts_, assistScripts) };
    inline RealtimeDialogAssistResponseBodyData& setAssistScripts(vector<Models::RealtimeDialogAssistResponseBodyDataAssistScripts> && assistScripts) { DARABONBA_PTR_SET_RVALUE(assistScripts_, assistScripts) };


    // assistSop Field Functions 
    bool hasAssistSop() const { return this->assistSop_ != nullptr;};
    void deleteAssistSop() { this->assistSop_ = nullptr;};
    inline const vector<Models::RealtimeDialogAssistResponseBodyDataAssistSop> & assistSop() const { DARABONBA_PTR_GET_CONST(assistSop_, vector<Models::RealtimeDialogAssistResponseBodyDataAssistSop>) };
    inline vector<Models::RealtimeDialogAssistResponseBodyDataAssistSop> assistSop() { DARABONBA_PTR_GET(assistSop_, vector<Models::RealtimeDialogAssistResponseBodyDataAssistSop>) };
    inline RealtimeDialogAssistResponseBodyData& setAssistSop(const vector<Models::RealtimeDialogAssistResponseBodyDataAssistSop> & assistSop) { DARABONBA_PTR_SET_VALUE(assistSop_, assistSop) };
    inline RealtimeDialogAssistResponseBodyData& setAssistSop(vector<Models::RealtimeDialogAssistResponseBodyDataAssistSop> && assistSop) { DARABONBA_PTR_SET_RVALUE(assistSop_, assistSop) };


    // conversationModel Field Functions 
    bool hasConversationModel() const { return this->conversationModel_ != nullptr;};
    void deleteConversationModel() { this->conversationModel_ = nullptr;};
    inline const vector<Models::RealtimeDialogAssistResponseBodyDataConversationModel> & conversationModel() const { DARABONBA_PTR_GET_CONST(conversationModel_, vector<Models::RealtimeDialogAssistResponseBodyDataConversationModel>) };
    inline vector<Models::RealtimeDialogAssistResponseBodyDataConversationModel> conversationModel() { DARABONBA_PTR_GET(conversationModel_, vector<Models::RealtimeDialogAssistResponseBodyDataConversationModel>) };
    inline RealtimeDialogAssistResponseBodyData& setConversationModel(const vector<Models::RealtimeDialogAssistResponseBodyDataConversationModel> & conversationModel) { DARABONBA_PTR_SET_VALUE(conversationModel_, conversationModel) };
    inline RealtimeDialogAssistResponseBodyData& setConversationModel(vector<Models::RealtimeDialogAssistResponseBodyDataConversationModel> && conversationModel) { DARABONBA_PTR_SET_RVALUE(conversationModel_, conversationModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RealtimeDialogAssistResponseBodyData& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RealtimeDialogAssistResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<string> analysisProcess_ = nullptr;
    std::shared_ptr<vector<Models::RealtimeDialogAssistResponseBodyDataAssistScripts>> assistScripts_ = nullptr;
    std::shared_ptr<vector<Models::RealtimeDialogAssistResponseBodyDataAssistSop>> assistSop_ = nullptr;
    std::shared_ptr<vector<Models::RealtimeDialogAssistResponseBodyDataConversationModel>> conversationModel_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
