// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFRULESETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFRULESETSRESPONSEBODY_HPP_
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
  class ListWafRulesetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafRulesetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rulesets, rulesets_);
      DARABONBA_PTR_TO_JSON(SiteUsage, siteUsage_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafRulesetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rulesets, rulesets_);
      DARABONBA_PTR_FROM_JSON(SiteUsage, siteUsage_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListWafRulesetsResponseBody() = default ;
    ListWafRulesetsResponseBody(const ListWafRulesetsResponseBody &) = default ;
    ListWafRulesetsResponseBody(ListWafRulesetsResponseBody &&) = default ;
    ListWafRulesetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafRulesetsResponseBody() = default ;
    ListWafRulesetsResponseBody& operator=(const ListWafRulesetsResponseBody &) = default ;
    ListWafRulesetsResponseBody& operator=(ListWafRulesetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rulesets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rulesets& obj) { 
        DARABONBA_PTR_TO_JSON(Fields, fields_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Phase, phase_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(Types, types_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Rulesets& obj) { 
        DARABONBA_PTR_FROM_JSON(Fields, fields_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Phase, phase_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(Types, types_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Rulesets() = default ;
      Rulesets(const Rulesets &) = default ;
      Rulesets(Rulesets &&) = default ;
      Rulesets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rulesets() = default ;
      Rulesets& operator=(const Rulesets &) = default ;
      Rulesets& operator=(Rulesets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fields_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->phase_ == nullptr && this->status_ == nullptr && this->target_ == nullptr
        && this->types_ == nullptr && this->updateTime_ == nullptr; };
      // fields Field Functions 
      bool hasFields() const { return this->fields_ != nullptr;};
      void deleteFields() { this->fields_ = nullptr;};
      inline const vector<string> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<string>) };
      inline vector<string> getFields() { DARABONBA_PTR_GET(fields_, vector<string>) };
      inline Rulesets& setFields(const vector<string> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
      inline Rulesets& setFields(vector<string> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Rulesets& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Rulesets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
      inline Rulesets& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Rulesets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline Rulesets& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // types Field Functions 
      bool hasTypes() const { return this->types_ != nullptr;};
      void deleteTypes() { this->types_ = nullptr;};
      inline const vector<string> & getTypes() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
      inline vector<string> getTypes() { DARABONBA_PTR_GET(types_, vector<string>) };
      inline Rulesets& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
      inline Rulesets& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Rulesets& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // List of match objects.
      shared_ptr<vector<string>> fields_ {};
      // ID of the WAF rule set.
      shared_ptr<int64_t> id_ {};
      // Name of the rule set.
      shared_ptr<string> name_ {};
      // WAF operation phase.
      shared_ptr<string> phase_ {};
      // Status of the rule set.
      shared_ptr<string> status_ {};
      // Protection target type in http_bot.
      shared_ptr<string> target_ {};
      // List of rule types.
      shared_ptr<vector<string>> types_ {};
      // Last modification time of the rule set.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->instanceUsage_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->rulesets_ == nullptr && this->siteUsage_ == nullptr
        && this->totalCount_ == nullptr; };
    // instanceUsage Field Functions 
    bool hasInstanceUsage() const { return this->instanceUsage_ != nullptr;};
    void deleteInstanceUsage() { this->instanceUsage_ = nullptr;};
    inline int64_t getInstanceUsage() const { DARABONBA_PTR_GET_DEFAULT(instanceUsage_, 0L) };
    inline ListWafRulesetsResponseBody& setInstanceUsage(int64_t instanceUsage) { DARABONBA_PTR_SET_VALUE(instanceUsage_, instanceUsage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWafRulesetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWafRulesetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWafRulesetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rulesets Field Functions 
    bool hasRulesets() const { return this->rulesets_ != nullptr;};
    void deleteRulesets() { this->rulesets_ = nullptr;};
    inline const vector<ListWafRulesetsResponseBody::Rulesets> & getRulesets() const { DARABONBA_PTR_GET_CONST(rulesets_, vector<ListWafRulesetsResponseBody::Rulesets>) };
    inline vector<ListWafRulesetsResponseBody::Rulesets> getRulesets() { DARABONBA_PTR_GET(rulesets_, vector<ListWafRulesetsResponseBody::Rulesets>) };
    inline ListWafRulesetsResponseBody& setRulesets(const vector<ListWafRulesetsResponseBody::Rulesets> & rulesets) { DARABONBA_PTR_SET_VALUE(rulesets_, rulesets) };
    inline ListWafRulesetsResponseBody& setRulesets(vector<ListWafRulesetsResponseBody::Rulesets> && rulesets) { DARABONBA_PTR_SET_RVALUE(rulesets_, rulesets) };


    // siteUsage Field Functions 
    bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
    void deleteSiteUsage() { this->siteUsage_ = nullptr;};
    inline int64_t getSiteUsage() const { DARABONBA_PTR_GET_DEFAULT(siteUsage_, 0L) };
    inline ListWafRulesetsResponseBody& setSiteUsage(int64_t siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListWafRulesetsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Number of WAF rule sets used by the instance in this WAF operation phase.
    shared_ptr<int64_t> instanceUsage_ {};
    // Current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // List of rule set information, containing detailed information about the rule sets.
    shared_ptr<vector<ListWafRulesetsResponseBody::Rulesets>> rulesets_ {};
    // Number of WAF rule sets used by the site in this WAF operation phase.
    shared_ptr<int64_t> siteUsage_ {};
    // Total number of filtered records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
