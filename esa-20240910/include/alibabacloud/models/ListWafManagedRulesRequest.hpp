// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFMANAGEDRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFMANAGEDRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafManagedRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafManagedRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ManagedRuleset, managedRuleset_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgs_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafManagedRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ManagedRuleset, managedRuleset_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgs_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ListWafManagedRulesRequest() = default ;
    ListWafManagedRulesRequest(const ListWafManagedRulesRequest &) = default ;
    ListWafManagedRulesRequest(ListWafManagedRulesRequest &&) = default ;
    ListWafManagedRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafManagedRulesRequest() = default ;
    ListWafManagedRulesRequest& operator=(const ListWafManagedRulesRequest &) = default ;
    ListWafManagedRulesRequest& operator=(ListWafManagedRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryArgs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryArgs& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(IdNameLike, idNameLike_);
        DARABONBA_PTR_TO_JSON(ProtectionLevels, protectionLevels_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, QueryArgs& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(IdNameLike, idNameLike_);
        DARABONBA_PTR_FROM_JSON(ProtectionLevels, protectionLevels_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      QueryArgs() = default ;
      QueryArgs(const QueryArgs &) = default ;
      QueryArgs(QueryArgs &&) = default ;
      QueryArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryArgs() = default ;
      QueryArgs& operator=(const QueryArgs &) = default ;
      QueryArgs& operator=(QueryArgs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->idNameLike_ == nullptr && this->protectionLevels_ == nullptr && this->status_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline QueryArgs& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // idNameLike Field Functions 
      bool hasIdNameLike() const { return this->idNameLike_ != nullptr;};
      void deleteIdNameLike() { this->idNameLike_ = nullptr;};
      inline string getIdNameLike() const { DARABONBA_PTR_GET_DEFAULT(idNameLike_, "") };
      inline QueryArgs& setIdNameLike(string idNameLike) { DARABONBA_PTR_SET_VALUE(idNameLike_, idNameLike) };


      // protectionLevels Field Functions 
      bool hasProtectionLevels() const { return this->protectionLevels_ != nullptr;};
      void deleteProtectionLevels() { this->protectionLevels_ = nullptr;};
      inline const vector<int32_t> & getProtectionLevels() const { DARABONBA_PTR_GET_CONST(protectionLevels_, vector<int32_t>) };
      inline vector<int32_t> getProtectionLevels() { DARABONBA_PTR_GET(protectionLevels_, vector<int32_t>) };
      inline QueryArgs& setProtectionLevels(const vector<int32_t> & protectionLevels) { DARABONBA_PTR_SET_VALUE(protectionLevels_, protectionLevels) };
      inline QueryArgs& setProtectionLevels(vector<int32_t> && protectionLevels) { DARABONBA_PTR_SET_RVALUE(protectionLevels_, protectionLevels) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline QueryArgs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Action.
      shared_ptr<string> action_ {};
      // Fuzzy search for rule ID or rule name.
      shared_ptr<string> idNameLike_ {};
      // List of rule protection levels.
      shared_ptr<vector<int32_t>> protectionLevels_ {};
      // Status.
      shared_ptr<string> status_ {};
    };

    class ManagedRuleset : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ManagedRuleset& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(AttackType, attackType_);
        DARABONBA_PTR_TO_JSON(ManagedRules, managedRules_);
        DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
      };
      friend void from_json(const Darabonba::Json& j, ManagedRuleset& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
        DARABONBA_PTR_FROM_JSON(ManagedRules, managedRules_);
        DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
      };
      ManagedRuleset() = default ;
      ManagedRuleset(const ManagedRuleset &) = default ;
      ManagedRuleset(ManagedRuleset &&) = default ;
      ManagedRuleset(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ManagedRuleset() = default ;
      ManagedRuleset& operator=(const ManagedRuleset &) = default ;
      ManagedRuleset& operator=(ManagedRuleset &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ManagedRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ManagedRules& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ManagedRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ManagedRules() = default ;
        ManagedRules(const ManagedRules &) = default ;
        ManagedRules(ManagedRules &&) = default ;
        ManagedRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ManagedRules() = default ;
        ManagedRules& operator=(const ManagedRules &) = default ;
        ManagedRules& operator=(ManagedRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->id_ == nullptr && this->status_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline ManagedRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ManagedRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ManagedRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> action_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->action_ == nullptr
        && this->attackType_ == nullptr && this->managedRules_ == nullptr && this->protectionLevel_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline ManagedRuleset& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // attackType Field Functions 
      bool hasAttackType() const { return this->attackType_ != nullptr;};
      void deleteAttackType() { this->attackType_ = nullptr;};
      inline int32_t getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0) };
      inline ManagedRuleset& setAttackType(int32_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


      // managedRules Field Functions 
      bool hasManagedRules() const { return this->managedRules_ != nullptr;};
      void deleteManagedRules() { this->managedRules_ = nullptr;};
      inline const vector<ManagedRuleset::ManagedRules> & getManagedRules() const { DARABONBA_PTR_GET_CONST(managedRules_, vector<ManagedRuleset::ManagedRules>) };
      inline vector<ManagedRuleset::ManagedRules> getManagedRules() { DARABONBA_PTR_GET(managedRules_, vector<ManagedRuleset::ManagedRules>) };
      inline ManagedRuleset& setManagedRules(const vector<ManagedRuleset::ManagedRules> & managedRules) { DARABONBA_PTR_SET_VALUE(managedRules_, managedRules) };
      inline ManagedRuleset& setManagedRules(vector<ManagedRuleset::ManagedRules> && managedRules) { DARABONBA_PTR_SET_RVALUE(managedRules_, managedRules) };


      // protectionLevel Field Functions 
      bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
      void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
      inline int32_t getProtectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, 0) };
      inline ManagedRuleset& setProtectionLevel(int32_t protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<int32_t> attackType_ {};
      shared_ptr<vector<ManagedRuleset::ManagedRules>> managedRules_ {};
      shared_ptr<int32_t> protectionLevel_ {};
    };

    virtual bool empty() const override { return this->attackType_ == nullptr
        && this->id_ == nullptr && this->instanceId_ == nullptr && this->language_ == nullptr && this->managedRuleset_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->protectionLevel_ == nullptr && this->queryArgs_ == nullptr && this->siteId_ == nullptr; };
    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline int32_t getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0) };
    inline ListWafManagedRulesRequest& setAttackType(int32_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListWafManagedRulesRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListWafManagedRulesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListWafManagedRulesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // managedRuleset Field Functions 
    bool hasManagedRuleset() const { return this->managedRuleset_ != nullptr;};
    void deleteManagedRuleset() { this->managedRuleset_ = nullptr;};
    inline const ListWafManagedRulesRequest::ManagedRuleset & getManagedRuleset() const { DARABONBA_PTR_GET_CONST(managedRuleset_, ListWafManagedRulesRequest::ManagedRuleset) };
    inline ListWafManagedRulesRequest::ManagedRuleset getManagedRuleset() { DARABONBA_PTR_GET(managedRuleset_, ListWafManagedRulesRequest::ManagedRuleset) };
    inline ListWafManagedRulesRequest& setManagedRuleset(const ListWafManagedRulesRequest::ManagedRuleset & managedRuleset) { DARABONBA_PTR_SET_VALUE(managedRuleset_, managedRuleset) };
    inline ListWafManagedRulesRequest& setManagedRuleset(ListWafManagedRulesRequest::ManagedRuleset && managedRuleset) { DARABONBA_PTR_SET_RVALUE(managedRuleset_, managedRuleset) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWafManagedRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWafManagedRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // protectionLevel Field Functions 
    bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
    void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
    inline int32_t getProtectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, 0) };
    inline ListWafManagedRulesRequest& setProtectionLevel(int32_t protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


    // queryArgs Field Functions 
    bool hasQueryArgs() const { return this->queryArgs_ != nullptr;};
    void deleteQueryArgs() { this->queryArgs_ = nullptr;};
    inline const ListWafManagedRulesRequest::QueryArgs & getQueryArgs() const { DARABONBA_PTR_GET_CONST(queryArgs_, ListWafManagedRulesRequest::QueryArgs) };
    inline ListWafManagedRulesRequest::QueryArgs getQueryArgs() { DARABONBA_PTR_GET(queryArgs_, ListWafManagedRulesRequest::QueryArgs) };
    inline ListWafManagedRulesRequest& setQueryArgs(const ListWafManagedRulesRequest::QueryArgs & queryArgs) { DARABONBA_PTR_SET_VALUE(queryArgs_, queryArgs) };
    inline ListWafManagedRulesRequest& setQueryArgs(ListWafManagedRulesRequest::QueryArgs && queryArgs) { DARABONBA_PTR_SET_RVALUE(queryArgs_, queryArgs) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListWafManagedRulesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Attack type of the vulnerability protection event. Values:
    // - SQL injection
    // - Cross-site scripting
    // - Code execution
    // - CRLF
    // - Local file inclusion
    // - Remote file inclusion
    // - Webshell
    // - Cross-site request forgery
    // - Other
    // - SEMA
    // 
    // This parameter is required.
    shared_ptr<int32_t> attackType_ {};
    // ID of the WAF rule.
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> instanceId_ {};
    // Language type, which will be used to return the response. Value range:
    // 
    // - **en**: English.
    // - **zh**: Chinese.
    shared_ptr<string> language_ {};
    shared_ptr<ListWafManagedRulesRequest::ManagedRuleset> managedRuleset_ {};
    // Query page number.
    shared_ptr<int32_t> pageNumber_ {};
    // Query page size.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int32_t> protectionLevel_ {};
    // Query conditions.
    shared_ptr<ListWafManagedRulesRequest::QueryArgs> queryArgs_ {};
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
