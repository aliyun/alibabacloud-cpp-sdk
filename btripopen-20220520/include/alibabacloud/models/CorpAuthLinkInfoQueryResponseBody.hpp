// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CORPAUTHLINKINFOQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CORPAUTHLINKINFOQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CorpAuthLinkInfoQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CorpAuthLinkInfoQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CorpAuthLinkInfoQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CorpAuthLinkInfoQueryResponseBody() = default ;
    CorpAuthLinkInfoQueryResponseBody(const CorpAuthLinkInfoQueryResponseBody &) = default ;
    CorpAuthLinkInfoQueryResponseBody(CorpAuthLinkInfoQueryResponseBody &&) = default ;
    CorpAuthLinkInfoQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CorpAuthLinkInfoQueryResponseBody() = default ;
    CorpAuthLinkInfoQueryResponseBody& operator=(const CorpAuthLinkInfoQueryResponseBody &) = default ;
    CorpAuthLinkInfoQueryResponseBody& operator=(CorpAuthLinkInfoQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(link_corps, linkCorps_);
        DARABONBA_PTR_TO_JSON(org_corp, orgCorp_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(link_corps, linkCorps_);
        DARABONBA_PTR_FROM_JSON(org_corp, orgCorp_);
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
      class OrgCorp : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrgCorp& obj) { 
          DARABONBA_PTR_TO_JSON(corp_name, corpName_);
          DARABONBA_PTR_TO_JSON(open_corp_id, openCorpId_);
          DARABONBA_PTR_TO_JSON(true_corp_id, trueCorpId_);
        };
        friend void from_json(const Darabonba::Json& j, OrgCorp& obj) { 
          DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
          DARABONBA_PTR_FROM_JSON(open_corp_id, openCorpId_);
          DARABONBA_PTR_FROM_JSON(true_corp_id, trueCorpId_);
        };
        OrgCorp() = default ;
        OrgCorp(const OrgCorp &) = default ;
        OrgCorp(OrgCorp &&) = default ;
        OrgCorp(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OrgCorp() = default ;
        OrgCorp& operator=(const OrgCorp &) = default ;
        OrgCorp& operator=(OrgCorp &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->corpName_ == nullptr
        && this->openCorpId_ == nullptr && this->trueCorpId_ == nullptr; };
        // corpName Field Functions 
        bool hasCorpName() const { return this->corpName_ != nullptr;};
        void deleteCorpName() { this->corpName_ = nullptr;};
        inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
        inline OrgCorp& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


        // openCorpId Field Functions 
        bool hasOpenCorpId() const { return this->openCorpId_ != nullptr;};
        void deleteOpenCorpId() { this->openCorpId_ = nullptr;};
        inline string getOpenCorpId() const { DARABONBA_PTR_GET_DEFAULT(openCorpId_, "") };
        inline OrgCorp& setOpenCorpId(string openCorpId) { DARABONBA_PTR_SET_VALUE(openCorpId_, openCorpId) };


        // trueCorpId Field Functions 
        bool hasTrueCorpId() const { return this->trueCorpId_ != nullptr;};
        void deleteTrueCorpId() { this->trueCorpId_ = nullptr;};
        inline string getTrueCorpId() const { DARABONBA_PTR_GET_DEFAULT(trueCorpId_, "") };
        inline OrgCorp& setTrueCorpId(string trueCorpId) { DARABONBA_PTR_SET_VALUE(trueCorpId_, trueCorpId) };


      protected:
        shared_ptr<string> corpName_ {};
        shared_ptr<string> openCorpId_ {};
        shared_ptr<string> trueCorpId_ {};
      };

      class LinkCorps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LinkCorps& obj) { 
          DARABONBA_PTR_TO_JSON(corp_name, corpName_);
          DARABONBA_PTR_TO_JSON(open_corp_id, openCorpId_);
          DARABONBA_PTR_TO_JSON(true_corp_id, trueCorpId_);
        };
        friend void from_json(const Darabonba::Json& j, LinkCorps& obj) { 
          DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
          DARABONBA_PTR_FROM_JSON(open_corp_id, openCorpId_);
          DARABONBA_PTR_FROM_JSON(true_corp_id, trueCorpId_);
        };
        LinkCorps() = default ;
        LinkCorps(const LinkCorps &) = default ;
        LinkCorps(LinkCorps &&) = default ;
        LinkCorps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LinkCorps() = default ;
        LinkCorps& operator=(const LinkCorps &) = default ;
        LinkCorps& operator=(LinkCorps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->corpName_ == nullptr
        && this->openCorpId_ == nullptr && this->trueCorpId_ == nullptr; };
        // corpName Field Functions 
        bool hasCorpName() const { return this->corpName_ != nullptr;};
        void deleteCorpName() { this->corpName_ = nullptr;};
        inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
        inline LinkCorps& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


        // openCorpId Field Functions 
        bool hasOpenCorpId() const { return this->openCorpId_ != nullptr;};
        void deleteOpenCorpId() { this->openCorpId_ = nullptr;};
        inline string getOpenCorpId() const { DARABONBA_PTR_GET_DEFAULT(openCorpId_, "") };
        inline LinkCorps& setOpenCorpId(string openCorpId) { DARABONBA_PTR_SET_VALUE(openCorpId_, openCorpId) };


        // trueCorpId Field Functions 
        bool hasTrueCorpId() const { return this->trueCorpId_ != nullptr;};
        void deleteTrueCorpId() { this->trueCorpId_ = nullptr;};
        inline string getTrueCorpId() const { DARABONBA_PTR_GET_DEFAULT(trueCorpId_, "") };
        inline LinkCorps& setTrueCorpId(string trueCorpId) { DARABONBA_PTR_SET_VALUE(trueCorpId_, trueCorpId) };


      protected:
        shared_ptr<string> corpName_ {};
        shared_ptr<string> openCorpId_ {};
        shared_ptr<string> trueCorpId_ {};
      };

      virtual bool empty() const override { return this->linkCorps_ == nullptr
        && this->orgCorp_ == nullptr; };
      // linkCorps Field Functions 
      bool hasLinkCorps() const { return this->linkCorps_ != nullptr;};
      void deleteLinkCorps() { this->linkCorps_ = nullptr;};
      inline const vector<Module::LinkCorps> & getLinkCorps() const { DARABONBA_PTR_GET_CONST(linkCorps_, vector<Module::LinkCorps>) };
      inline vector<Module::LinkCorps> getLinkCorps() { DARABONBA_PTR_GET(linkCorps_, vector<Module::LinkCorps>) };
      inline Module& setLinkCorps(const vector<Module::LinkCorps> & linkCorps) { DARABONBA_PTR_SET_VALUE(linkCorps_, linkCorps) };
      inline Module& setLinkCorps(vector<Module::LinkCorps> && linkCorps) { DARABONBA_PTR_SET_RVALUE(linkCorps_, linkCorps) };


      // orgCorp Field Functions 
      bool hasOrgCorp() const { return this->orgCorp_ != nullptr;};
      void deleteOrgCorp() { this->orgCorp_ = nullptr;};
      inline const Module::OrgCorp & getOrgCorp() const { DARABONBA_PTR_GET_CONST(orgCorp_, Module::OrgCorp) };
      inline Module::OrgCorp getOrgCorp() { DARABONBA_PTR_GET(orgCorp_, Module::OrgCorp) };
      inline Module& setOrgCorp(const Module::OrgCorp & orgCorp) { DARABONBA_PTR_SET_VALUE(orgCorp_, orgCorp) };
      inline Module& setOrgCorp(Module::OrgCorp && orgCorp) { DARABONBA_PTR_SET_RVALUE(orgCorp_, orgCorp) };


    protected:
      shared_ptr<vector<Module::LinkCorps>> linkCorps_ {};
      shared_ptr<Module::OrgCorp> orgCorp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CorpAuthLinkInfoQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CorpAuthLinkInfoQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CorpAuthLinkInfoQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CorpAuthLinkInfoQueryResponseBody::Module) };
    inline CorpAuthLinkInfoQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CorpAuthLinkInfoQueryResponseBody::Module) };
    inline CorpAuthLinkInfoQueryResponseBody& setModule(const CorpAuthLinkInfoQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CorpAuthLinkInfoQueryResponseBody& setModule(CorpAuthLinkInfoQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CorpAuthLinkInfoQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CorpAuthLinkInfoQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<CorpAuthLinkInfoQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
