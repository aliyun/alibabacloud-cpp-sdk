// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTSRESPONSEBODY_HPP_
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
  class ListScriptsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scripts, scripts_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scripts, scripts_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListScriptsResponseBody() = default ;
    ListScriptsResponseBody(const ListScriptsResponseBody &) = default ;
    ListScriptsResponseBody(ListScriptsResponseBody &&) = default ;
    ListScriptsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptsResponseBody() = default ;
    ListScriptsResponseBody& operator=(const ListScriptsResponseBody &) = default ;
    ListScriptsResponseBody& operator=(ListScriptsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Scripts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scripts& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Scripts& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Scripts() = default ;
      Scripts(const Scripts &) = default ;
      Scripts(Scripts &&) = default ;
      Scripts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Scripts() = default ;
      Scripts& operator=(const Scripts &) = default ;
      Scripts& operator=(Scripts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
          DARABONBA_PTR_TO_JSON(AgentLlm, agentLlm_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DebugStatus, debugStatus_);
          DARABONBA_PTR_TO_JSON(EmotionEnable, emotionEnable_);
          DARABONBA_PTR_TO_JSON(Industry, industry_);
          DARABONBA_PTR_TO_JSON(IsDebugDrafted, isDebugDrafted_);
          DARABONBA_PTR_TO_JSON(IsDrafted, isDrafted_);
          DARABONBA_PTR_TO_JSON(IsPreset, isPreset_);
          DARABONBA_PTR_TO_JSON(LongWaitEnable, longWaitEnable_);
          DARABONBA_PTR_TO_JSON(MiniPlaybackEnable, miniPlaybackEnable_);
          DARABONBA_PTR_TO_JSON(NewBargeInEnable, newBargeInEnable_);
          DARABONBA_PTR_TO_JSON(NluAccessType, nluAccessType_);
          DARABONBA_PTR_TO_JSON(NluEngine, nluEngine_);
          DARABONBA_PTR_TO_JSON(NluProfile, nluProfile_);
          DARABONBA_PTR_TO_JSON(RejectReason, rejectReason_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
          DARABONBA_PTR_TO_JSON(ScriptDescription, scriptDescription_);
          DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(agentId, agentId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
          DARABONBA_PTR_FROM_JSON(AgentLlm, agentLlm_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DebugStatus, debugStatus_);
          DARABONBA_PTR_FROM_JSON(EmotionEnable, emotionEnable_);
          DARABONBA_PTR_FROM_JSON(Industry, industry_);
          DARABONBA_PTR_FROM_JSON(IsDebugDrafted, isDebugDrafted_);
          DARABONBA_PTR_FROM_JSON(IsDrafted, isDrafted_);
          DARABONBA_PTR_FROM_JSON(IsPreset, isPreset_);
          DARABONBA_PTR_FROM_JSON(LongWaitEnable, longWaitEnable_);
          DARABONBA_PTR_FROM_JSON(MiniPlaybackEnable, miniPlaybackEnable_);
          DARABONBA_PTR_FROM_JSON(NewBargeInEnable, newBargeInEnable_);
          DARABONBA_PTR_FROM_JSON(NluAccessType, nluAccessType_);
          DARABONBA_PTR_FROM_JSON(NluEngine, nluEngine_);
          DARABONBA_PTR_FROM_JSON(NluProfile, nluProfile_);
          DARABONBA_PTR_FROM_JSON(RejectReason, rejectReason_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
          DARABONBA_PTR_FROM_JSON(ScriptDescription, scriptDescription_);
          DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NluProfile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NluProfile& obj) { 
            DARABONBA_PTR_TO_JSON(FcFunction, fcFunction_);
            DARABONBA_PTR_TO_JSON(FcHttpTriggerUrl, fcHttpTriggerUrl_);
            DARABONBA_PTR_TO_JSON(FcRegion, fcRegion_);
          };
          friend void from_json(const Darabonba::Json& j, NluProfile& obj) { 
            DARABONBA_PTR_FROM_JSON(FcFunction, fcFunction_);
            DARABONBA_PTR_FROM_JSON(FcHttpTriggerUrl, fcHttpTriggerUrl_);
            DARABONBA_PTR_FROM_JSON(FcRegion, fcRegion_);
          };
          NluProfile() = default ;
          NluProfile(const NluProfile &) = default ;
          NluProfile(NluProfile &&) = default ;
          NluProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NluProfile() = default ;
          NluProfile& operator=(const NluProfile &) = default ;
          NluProfile& operator=(NluProfile &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fcFunction_ == nullptr
        && this->fcHttpTriggerUrl_ == nullptr && this->fcRegion_ == nullptr; };
          // fcFunction Field Functions 
          bool hasFcFunction() const { return this->fcFunction_ != nullptr;};
          void deleteFcFunction() { this->fcFunction_ = nullptr;};
          inline string getFcFunction() const { DARABONBA_PTR_GET_DEFAULT(fcFunction_, "") };
          inline NluProfile& setFcFunction(string fcFunction) { DARABONBA_PTR_SET_VALUE(fcFunction_, fcFunction) };


          // fcHttpTriggerUrl Field Functions 
          bool hasFcHttpTriggerUrl() const { return this->fcHttpTriggerUrl_ != nullptr;};
          void deleteFcHttpTriggerUrl() { this->fcHttpTriggerUrl_ = nullptr;};
          inline string getFcHttpTriggerUrl() const { DARABONBA_PTR_GET_DEFAULT(fcHttpTriggerUrl_, "") };
          inline NluProfile& setFcHttpTriggerUrl(string fcHttpTriggerUrl) { DARABONBA_PTR_SET_VALUE(fcHttpTriggerUrl_, fcHttpTriggerUrl) };


          // fcRegion Field Functions 
          bool hasFcRegion() const { return this->fcRegion_ != nullptr;};
          void deleteFcRegion() { this->fcRegion_ = nullptr;};
          inline string getFcRegion() const { DARABONBA_PTR_GET_DEFAULT(fcRegion_, "") };
          inline NluProfile& setFcRegion(string fcRegion) { DARABONBA_PTR_SET_VALUE(fcRegion_, fcRegion) };


        protected:
          shared_ptr<string> fcFunction_ {};
          shared_ptr<string> fcHttpTriggerUrl_ {};
          shared_ptr<string> fcRegion_ {};
        };

        virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->agentLlm_ == nullptr && this->createTime_ == nullptr && this->debugStatus_ == nullptr && this->emotionEnable_ == nullptr && this->industry_ == nullptr
        && this->isDebugDrafted_ == nullptr && this->isDrafted_ == nullptr && this->isPreset_ == nullptr && this->longWaitEnable_ == nullptr && this->miniPlaybackEnable_ == nullptr
        && this->newBargeInEnable_ == nullptr && this->nluAccessType_ == nullptr && this->nluEngine_ == nullptr && this->nluProfile_ == nullptr && this->rejectReason_ == nullptr
        && this->scene_ == nullptr && this->scriptDescription_ == nullptr && this->scriptId_ == nullptr && this->scriptName_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr && this->agentId_ == nullptr; };
        // agentKey Field Functions 
        bool hasAgentKey() const { return this->agentKey_ != nullptr;};
        void deleteAgentKey() { this->agentKey_ = nullptr;};
        inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
        inline List& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


        // agentLlm Field Functions 
        bool hasAgentLlm() const { return this->agentLlm_ != nullptr;};
        void deleteAgentLlm() { this->agentLlm_ = nullptr;};
        inline bool getAgentLlm() const { DARABONBA_PTR_GET_DEFAULT(agentLlm_, false) };
        inline List& setAgentLlm(bool agentLlm) { DARABONBA_PTR_SET_VALUE(agentLlm_, agentLlm) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline List& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // debugStatus Field Functions 
        bool hasDebugStatus() const { return this->debugStatus_ != nullptr;};
        void deleteDebugStatus() { this->debugStatus_ = nullptr;};
        inline string getDebugStatus() const { DARABONBA_PTR_GET_DEFAULT(debugStatus_, "") };
        inline List& setDebugStatus(string debugStatus) { DARABONBA_PTR_SET_VALUE(debugStatus_, debugStatus) };


        // emotionEnable Field Functions 
        bool hasEmotionEnable() const { return this->emotionEnable_ != nullptr;};
        void deleteEmotionEnable() { this->emotionEnable_ = nullptr;};
        inline bool getEmotionEnable() const { DARABONBA_PTR_GET_DEFAULT(emotionEnable_, false) };
        inline List& setEmotionEnable(bool emotionEnable) { DARABONBA_PTR_SET_VALUE(emotionEnable_, emotionEnable) };


        // industry Field Functions 
        bool hasIndustry() const { return this->industry_ != nullptr;};
        void deleteIndustry() { this->industry_ = nullptr;};
        inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
        inline List& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


        // isDebugDrafted Field Functions 
        bool hasIsDebugDrafted() const { return this->isDebugDrafted_ != nullptr;};
        void deleteIsDebugDrafted() { this->isDebugDrafted_ = nullptr;};
        inline bool getIsDebugDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDebugDrafted_, false) };
        inline List& setIsDebugDrafted(bool isDebugDrafted) { DARABONBA_PTR_SET_VALUE(isDebugDrafted_, isDebugDrafted) };


        // isDrafted Field Functions 
        bool hasIsDrafted() const { return this->isDrafted_ != nullptr;};
        void deleteIsDrafted() { this->isDrafted_ = nullptr;};
        inline bool getIsDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDrafted_, false) };
        inline List& setIsDrafted(bool isDrafted) { DARABONBA_PTR_SET_VALUE(isDrafted_, isDrafted) };


        // isPreset Field Functions 
        bool hasIsPreset() const { return this->isPreset_ != nullptr;};
        void deleteIsPreset() { this->isPreset_ = nullptr;};
        inline bool getIsPreset() const { DARABONBA_PTR_GET_DEFAULT(isPreset_, false) };
        inline List& setIsPreset(bool isPreset) { DARABONBA_PTR_SET_VALUE(isPreset_, isPreset) };


        // longWaitEnable Field Functions 
        bool hasLongWaitEnable() const { return this->longWaitEnable_ != nullptr;};
        void deleteLongWaitEnable() { this->longWaitEnable_ = nullptr;};
        inline bool getLongWaitEnable() const { DARABONBA_PTR_GET_DEFAULT(longWaitEnable_, false) };
        inline List& setLongWaitEnable(bool longWaitEnable) { DARABONBA_PTR_SET_VALUE(longWaitEnable_, longWaitEnable) };


        // miniPlaybackEnable Field Functions 
        bool hasMiniPlaybackEnable() const { return this->miniPlaybackEnable_ != nullptr;};
        void deleteMiniPlaybackEnable() { this->miniPlaybackEnable_ = nullptr;};
        inline bool getMiniPlaybackEnable() const { DARABONBA_PTR_GET_DEFAULT(miniPlaybackEnable_, false) };
        inline List& setMiniPlaybackEnable(bool miniPlaybackEnable) { DARABONBA_PTR_SET_VALUE(miniPlaybackEnable_, miniPlaybackEnable) };


        // newBargeInEnable Field Functions 
        bool hasNewBargeInEnable() const { return this->newBargeInEnable_ != nullptr;};
        void deleteNewBargeInEnable() { this->newBargeInEnable_ = nullptr;};
        inline bool getNewBargeInEnable() const { DARABONBA_PTR_GET_DEFAULT(newBargeInEnable_, false) };
        inline List& setNewBargeInEnable(bool newBargeInEnable) { DARABONBA_PTR_SET_VALUE(newBargeInEnable_, newBargeInEnable) };


        // nluAccessType Field Functions 
        bool hasNluAccessType() const { return this->nluAccessType_ != nullptr;};
        void deleteNluAccessType() { this->nluAccessType_ = nullptr;};
        inline string getNluAccessType() const { DARABONBA_PTR_GET_DEFAULT(nluAccessType_, "") };
        inline List& setNluAccessType(string nluAccessType) { DARABONBA_PTR_SET_VALUE(nluAccessType_, nluAccessType) };


        // nluEngine Field Functions 
        bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
        void deleteNluEngine() { this->nluEngine_ = nullptr;};
        inline string getNluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
        inline List& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


        // nluProfile Field Functions 
        bool hasNluProfile() const { return this->nluProfile_ != nullptr;};
        void deleteNluProfile() { this->nluProfile_ = nullptr;};
        inline const List::NluProfile & getNluProfile() const { DARABONBA_PTR_GET_CONST(nluProfile_, List::NluProfile) };
        inline List::NluProfile getNluProfile() { DARABONBA_PTR_GET(nluProfile_, List::NluProfile) };
        inline List& setNluProfile(const List::NluProfile & nluProfile) { DARABONBA_PTR_SET_VALUE(nluProfile_, nluProfile) };
        inline List& setNluProfile(List::NluProfile && nluProfile) { DARABONBA_PTR_SET_RVALUE(nluProfile_, nluProfile) };


        // rejectReason Field Functions 
        bool hasRejectReason() const { return this->rejectReason_ != nullptr;};
        void deleteRejectReason() { this->rejectReason_ = nullptr;};
        inline string getRejectReason() const { DARABONBA_PTR_GET_DEFAULT(rejectReason_, "") };
        inline List& setRejectReason(string rejectReason) { DARABONBA_PTR_SET_VALUE(rejectReason_, rejectReason) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline List& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // scriptDescription Field Functions 
        bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
        void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
        inline string getScriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
        inline List& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


        // scriptId Field Functions 
        bool hasScriptId() const { return this->scriptId_ != nullptr;};
        void deleteScriptId() { this->scriptId_ = nullptr;};
        inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
        inline List& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


        // scriptName Field Functions 
        bool hasScriptName() const { return this->scriptName_ != nullptr;};
        void deleteScriptName() { this->scriptName_ = nullptr;};
        inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
        inline List& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline List& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
        inline List& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      protected:
        shared_ptr<string> agentKey_ {};
        shared_ptr<bool> agentLlm_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> debugStatus_ {};
        shared_ptr<bool> emotionEnable_ {};
        shared_ptr<string> industry_ {};
        shared_ptr<bool> isDebugDrafted_ {};
        shared_ptr<bool> isDrafted_ {};
        shared_ptr<bool> isPreset_ {};
        shared_ptr<bool> longWaitEnable_ {};
        shared_ptr<bool> miniPlaybackEnable_ {};
        shared_ptr<bool> newBargeInEnable_ {};
        shared_ptr<string> nluAccessType_ {};
        shared_ptr<string> nluEngine_ {};
        shared_ptr<List::NluProfile> nluProfile_ {};
        shared_ptr<string> rejectReason_ {};
        shared_ptr<string> scene_ {};
        shared_ptr<string> scriptDescription_ {};
        shared_ptr<string> scriptId_ {};
        shared_ptr<string> scriptName_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<int64_t> agentId_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Scripts::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Scripts::List>) };
      inline vector<Scripts::List> getList() { DARABONBA_PTR_GET(list_, vector<Scripts::List>) };
      inline Scripts& setList(const vector<Scripts::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Scripts& setList(vector<Scripts::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Scripts& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Scripts& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Scripts& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Scripts::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->scripts_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListScriptsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListScriptsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListScriptsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScriptsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scripts Field Functions 
    bool hasScripts() const { return this->scripts_ != nullptr;};
    void deleteScripts() { this->scripts_ = nullptr;};
    inline const ListScriptsResponseBody::Scripts & getScripts() const { DARABONBA_PTR_GET_CONST(scripts_, ListScriptsResponseBody::Scripts) };
    inline ListScriptsResponseBody::Scripts getScripts() { DARABONBA_PTR_GET(scripts_, ListScriptsResponseBody::Scripts) };
    inline ListScriptsResponseBody& setScripts(const ListScriptsResponseBody::Scripts & scripts) { DARABONBA_PTR_SET_VALUE(scripts_, scripts) };
    inline ListScriptsResponseBody& setScripts(ListScriptsResponseBody::Scripts && scripts) { DARABONBA_PTR_SET_RVALUE(scripts_, scripts) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListScriptsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<ListScriptsResponseBody::Scripts> scripts_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
