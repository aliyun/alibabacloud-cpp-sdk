// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANNELCORPCREATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANNELCORPCREATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ChannelCorpCreateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChannelCorpCreateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ChannelCorpCreateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    ChannelCorpCreateResponseBody() = default ;
    ChannelCorpCreateResponseBody(const ChannelCorpCreateResponseBody &) = default ;
    ChannelCorpCreateResponseBody(ChannelCorpCreateResponseBody &&) = default ;
    ChannelCorpCreateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChannelCorpCreateResponseBody() = default ;
    ChannelCorpCreateResponseBody& operator=(const ChannelCorpCreateResponseBody &) = default ;
    ChannelCorpCreateResponseBody& operator=(ChannelCorpCreateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(administrator_name, administratorName_);
        DARABONBA_PTR_TO_JSON(administrator_phone, administratorPhone_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(corp_name, corpName_);
        DARABONBA_PTR_TO_JSON(open_agent_id, openAgentId_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(administrator_name, administratorName_);
        DARABONBA_PTR_FROM_JSON(administrator_phone, administratorPhone_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
        DARABONBA_PTR_FROM_JSON(open_agent_id, openAgentId_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->administratorName_ == nullptr
        && this->administratorPhone_ == nullptr && this->corpId_ == nullptr && this->corpName_ == nullptr && this->openAgentId_ == nullptr && this->userId_ == nullptr; };
      // administratorName Field Functions 
      bool hasAdministratorName() const { return this->administratorName_ != nullptr;};
      void deleteAdministratorName() { this->administratorName_ = nullptr;};
      inline string getAdministratorName() const { DARABONBA_PTR_GET_DEFAULT(administratorName_, "") };
      inline Module& setAdministratorName(string administratorName) { DARABONBA_PTR_SET_VALUE(administratorName_, administratorName) };


      // administratorPhone Field Functions 
      bool hasAdministratorPhone() const { return this->administratorPhone_ != nullptr;};
      void deleteAdministratorPhone() { this->administratorPhone_ = nullptr;};
      inline string getAdministratorPhone() const { DARABONBA_PTR_GET_DEFAULT(administratorPhone_, "") };
      inline Module& setAdministratorPhone(string administratorPhone) { DARABONBA_PTR_SET_VALUE(administratorPhone_, administratorPhone) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Module& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // corpName Field Functions 
      bool hasCorpName() const { return this->corpName_ != nullptr;};
      void deleteCorpName() { this->corpName_ = nullptr;};
      inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
      inline Module& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


      // openAgentId Field Functions 
      bool hasOpenAgentId() const { return this->openAgentId_ != nullptr;};
      void deleteOpenAgentId() { this->openAgentId_ = nullptr;};
      inline string getOpenAgentId() const { DARABONBA_PTR_GET_DEFAULT(openAgentId_, "") };
      inline Module& setOpenAgentId(string openAgentId) { DARABONBA_PTR_SET_VALUE(openAgentId_, openAgentId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Module& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> administratorName_ {};
      shared_ptr<string> administratorPhone_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> corpName_ {};
      shared_ptr<string> openAgentId_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ChannelCorpCreateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ChannelCorpCreateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ChannelCorpCreateResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ChannelCorpCreateResponseBody::Module) };
    inline ChannelCorpCreateResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ChannelCorpCreateResponseBody::Module) };
    inline ChannelCorpCreateResponseBody& setModule(const ChannelCorpCreateResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ChannelCorpCreateResponseBody& setModule(ChannelCorpCreateResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChannelCorpCreateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ChannelCorpCreateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ChannelCorpCreateResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ChannelCorpCreateResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
