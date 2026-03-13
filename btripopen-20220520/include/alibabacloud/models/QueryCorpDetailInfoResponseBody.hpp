// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCORPDETAILINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCORPDETAILINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryCorpDetailInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCorpDetailInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCorpDetailInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    QueryCorpDetailInfoResponseBody() = default ;
    QueryCorpDetailInfoResponseBody(const QueryCorpDetailInfoResponseBody &) = default ;
    QueryCorpDetailInfoResponseBody(QueryCorpDetailInfoResponseBody &&) = default ;
    QueryCorpDetailInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCorpDetailInfoResponseBody() = default ;
    QueryCorpDetailInfoResponseBody& operator=(const QueryCorpDetailInfoResponseBody &) = default ;
    QueryCorpDetailInfoResponseBody& operator=(QueryCorpDetailInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(corp_name, corpName_);
        DARABONBA_PTR_TO_JSON(open_agent_id, openAgentId_);
        DARABONBA_PTR_TO_JSON(super_admin_name, superAdminName_);
        DARABONBA_PTR_TO_JSON(super_admin_phone, superAdminPhone_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
        DARABONBA_PTR_FROM_JSON(open_agent_id, openAgentId_);
        DARABONBA_PTR_FROM_JSON(super_admin_name, superAdminName_);
        DARABONBA_PTR_FROM_JSON(super_admin_phone, superAdminPhone_);
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
      virtual bool empty() const override { return this->corpId_ == nullptr
        && this->corpName_ == nullptr && this->openAgentId_ == nullptr && this->superAdminName_ == nullptr && this->superAdminPhone_ == nullptr && this->userId_ == nullptr; };
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


      // superAdminName Field Functions 
      bool hasSuperAdminName() const { return this->superAdminName_ != nullptr;};
      void deleteSuperAdminName() { this->superAdminName_ = nullptr;};
      inline string getSuperAdminName() const { DARABONBA_PTR_GET_DEFAULT(superAdminName_, "") };
      inline Module& setSuperAdminName(string superAdminName) { DARABONBA_PTR_SET_VALUE(superAdminName_, superAdminName) };


      // superAdminPhone Field Functions 
      bool hasSuperAdminPhone() const { return this->superAdminPhone_ != nullptr;};
      void deleteSuperAdminPhone() { this->superAdminPhone_ = nullptr;};
      inline string getSuperAdminPhone() const { DARABONBA_PTR_GET_DEFAULT(superAdminPhone_, "") };
      inline Module& setSuperAdminPhone(string superAdminPhone) { DARABONBA_PTR_SET_VALUE(superAdminPhone_, superAdminPhone) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Module& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> corpId_ {};
      shared_ptr<string> corpName_ {};
      shared_ptr<string> openAgentId_ {};
      shared_ptr<string> superAdminName_ {};
      shared_ptr<string> superAdminPhone_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCorpDetailInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCorpDetailInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const QueryCorpDetailInfoResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, QueryCorpDetailInfoResponseBody::Module) };
    inline QueryCorpDetailInfoResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, QueryCorpDetailInfoResponseBody::Module) };
    inline QueryCorpDetailInfoResponseBody& setModule(const QueryCorpDetailInfoResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryCorpDetailInfoResponseBody& setModule(QueryCorpDetailInfoResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCorpDetailInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCorpDetailInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline QueryCorpDetailInfoResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<QueryCorpDetailInfoResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
