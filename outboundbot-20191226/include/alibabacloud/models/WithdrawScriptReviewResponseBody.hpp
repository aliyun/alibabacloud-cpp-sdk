// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WITHDRAWSCRIPTREVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_WITHDRAWSCRIPTREVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class WithdrawScriptReviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WithdrawScriptReviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, WithdrawScriptReviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    WithdrawScriptReviewResponseBody() = default ;
    WithdrawScriptReviewResponseBody(const WithdrawScriptReviewResponseBody &) = default ;
    WithdrawScriptReviewResponseBody(WithdrawScriptReviewResponseBody &&) = default ;
    WithdrawScriptReviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WithdrawScriptReviewResponseBody() = default ;
    WithdrawScriptReviewResponseBody& operator=(const WithdrawScriptReviewResponseBody &) = default ;
    WithdrawScriptReviewResponseBody& operator=(WithdrawScriptReviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Script : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Script& obj) { 
        DARABONBA_PTR_TO_JSON(DebugStatus, debugStatus_);
        DARABONBA_PTR_TO_JSON(Industry, industry_);
        DARABONBA_PTR_TO_JSON(IsDebugDrafted, isDebugDrafted_);
        DARABONBA_PTR_TO_JSON(IsDrafted, isDrafted_);
        DARABONBA_PTR_TO_JSON(Scene, scene_);
        DARABONBA_PTR_TO_JSON(ScriptDescription, scriptDescription_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Script& obj) { 
        DARABONBA_PTR_FROM_JSON(DebugStatus, debugStatus_);
        DARABONBA_PTR_FROM_JSON(Industry, industry_);
        DARABONBA_PTR_FROM_JSON(IsDebugDrafted, isDebugDrafted_);
        DARABONBA_PTR_FROM_JSON(IsDrafted, isDrafted_);
        DARABONBA_PTR_FROM_JSON(Scene, scene_);
        DARABONBA_PTR_FROM_JSON(ScriptDescription, scriptDescription_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Script() = default ;
      Script(const Script &) = default ;
      Script(Script &&) = default ;
      Script(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Script() = default ;
      Script& operator=(const Script &) = default ;
      Script& operator=(Script &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->debugStatus_ == nullptr
        && this->industry_ == nullptr && this->isDebugDrafted_ == nullptr && this->isDrafted_ == nullptr && this->scene_ == nullptr && this->scriptDescription_ == nullptr
        && this->scriptId_ == nullptr && this->scriptName_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // debugStatus Field Functions 
      bool hasDebugStatus() const { return this->debugStatus_ != nullptr;};
      void deleteDebugStatus() { this->debugStatus_ = nullptr;};
      inline string getDebugStatus() const { DARABONBA_PTR_GET_DEFAULT(debugStatus_, "") };
      inline Script& setDebugStatus(string debugStatus) { DARABONBA_PTR_SET_VALUE(debugStatus_, debugStatus) };


      // industry Field Functions 
      bool hasIndustry() const { return this->industry_ != nullptr;};
      void deleteIndustry() { this->industry_ = nullptr;};
      inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
      inline Script& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


      // isDebugDrafted Field Functions 
      bool hasIsDebugDrafted() const { return this->isDebugDrafted_ != nullptr;};
      void deleteIsDebugDrafted() { this->isDebugDrafted_ = nullptr;};
      inline bool getIsDebugDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDebugDrafted_, false) };
      inline Script& setIsDebugDrafted(bool isDebugDrafted) { DARABONBA_PTR_SET_VALUE(isDebugDrafted_, isDebugDrafted) };


      // isDrafted Field Functions 
      bool hasIsDrafted() const { return this->isDrafted_ != nullptr;};
      void deleteIsDrafted() { this->isDrafted_ = nullptr;};
      inline bool getIsDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDrafted_, false) };
      inline Script& setIsDrafted(bool isDrafted) { DARABONBA_PTR_SET_VALUE(isDrafted_, isDrafted) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline Script& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // scriptDescription Field Functions 
      bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
      void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
      inline string getScriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
      inline Script& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline Script& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // scriptName Field Functions 
      bool hasScriptName() const { return this->scriptName_ != nullptr;};
      void deleteScriptName() { this->scriptName_ = nullptr;};
      inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
      inline Script& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Script& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Script& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> debugStatus_ {};
      shared_ptr<string> industry_ {};
      shared_ptr<bool> isDebugDrafted_ {};
      shared_ptr<bool> isDrafted_ {};
      shared_ptr<string> scene_ {};
      shared_ptr<string> scriptDescription_ {};
      shared_ptr<string> scriptId_ {};
      shared_ptr<string> scriptName_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->script_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline WithdrawScriptReviewResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline WithdrawScriptReviewResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline WithdrawScriptReviewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline WithdrawScriptReviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const WithdrawScriptReviewResponseBody::Script & getScript() const { DARABONBA_PTR_GET_CONST(script_, WithdrawScriptReviewResponseBody::Script) };
    inline WithdrawScriptReviewResponseBody::Script getScript() { DARABONBA_PTR_GET(script_, WithdrawScriptReviewResponseBody::Script) };
    inline WithdrawScriptReviewResponseBody& setScript(const WithdrawScriptReviewResponseBody::Script & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline WithdrawScriptReviewResponseBody& setScript(WithdrawScriptReviewResponseBody::Script && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline WithdrawScriptReviewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<WithdrawScriptReviewResponseBody::Script> script_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
