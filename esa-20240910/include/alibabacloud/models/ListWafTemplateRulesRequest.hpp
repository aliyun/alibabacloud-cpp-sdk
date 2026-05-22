// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFTEMPLATERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFTEMPLATERULESREQUEST_HPP_
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
  class ListWafTemplateRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafTemplateRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgs_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafTemplateRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgs_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ListWafTemplateRulesRequest() = default ;
    ListWafTemplateRulesRequest(const ListWafTemplateRulesRequest &) = default ;
    ListWafTemplateRulesRequest(ListWafTemplateRulesRequest &&) = default ;
    ListWafTemplateRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafTemplateRulesRequest() = default ;
    ListWafTemplateRulesRequest& operator=(const ListWafTemplateRulesRequest &) = default ;
    ListWafTemplateRulesRequest& operator=(ListWafTemplateRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryArgs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryArgs& obj) { 
        DARABONBA_PTR_TO_JSON(Kinds, kinds_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, QueryArgs& obj) { 
        DARABONBA_PTR_FROM_JSON(Kinds, kinds_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->kinds_ == nullptr
        && this->type_ == nullptr; };
      // kinds Field Functions 
      bool hasKinds() const { return this->kinds_ != nullptr;};
      void deleteKinds() { this->kinds_ = nullptr;};
      inline const vector<string> & getKinds() const { DARABONBA_PTR_GET_CONST(kinds_, vector<string>) };
      inline vector<string> getKinds() { DARABONBA_PTR_GET(kinds_, vector<string>) };
      inline QueryArgs& setKinds(const vector<string> & kinds) { DARABONBA_PTR_SET_VALUE(kinds_, kinds) };
      inline QueryArgs& setKinds(vector<string> && kinds) { DARABONBA_PTR_SET_RVALUE(kinds_, kinds) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline QueryArgs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<string>> kinds_ {};
      // Rule type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->phase_ == nullptr && this->queryArgs_ == nullptr && this->siteId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListWafTemplateRulesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListWafTemplateRulesRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // queryArgs Field Functions 
    bool hasQueryArgs() const { return this->queryArgs_ != nullptr;};
    void deleteQueryArgs() { this->queryArgs_ = nullptr;};
    inline const ListWafTemplateRulesRequest::QueryArgs & getQueryArgs() const { DARABONBA_PTR_GET_CONST(queryArgs_, ListWafTemplateRulesRequest::QueryArgs) };
    inline ListWafTemplateRulesRequest::QueryArgs getQueryArgs() { DARABONBA_PTR_GET(queryArgs_, ListWafTemplateRulesRequest::QueryArgs) };
    inline ListWafTemplateRulesRequest& setQueryArgs(const ListWafTemplateRulesRequest::QueryArgs & queryArgs) { DARABONBA_PTR_SET_VALUE(queryArgs_, queryArgs) };
    inline ListWafTemplateRulesRequest& setQueryArgs(ListWafTemplateRulesRequest::QueryArgs && queryArgs) { DARABONBA_PTR_SET_RVALUE(queryArgs_, queryArgs) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListWafTemplateRulesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    shared_ptr<string> instanceId_ {};
    // WAF operation phase, used to filter template rules for a specific phase.
    shared_ptr<string> phase_ {};
    // Query parameters, used to filter template rules based on conditions such as rule type.
    shared_ptr<ListWafTemplateRulesRequest::QueryArgs> queryArgs_ {};
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) API.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
