// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONCUSTOMRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONCUSTOMRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListApplicationCustomRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationCustomRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCustomRules, applicationCustomRules_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationCustomRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCustomRules, applicationCustomRules_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationCustomRulesResponseBody() = default ;
    ListApplicationCustomRulesResponseBody(const ListApplicationCustomRulesResponseBody &) = default ;
    ListApplicationCustomRulesResponseBody(ListApplicationCustomRulesResponseBody &&) = default ;
    ListApplicationCustomRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationCustomRulesResponseBody() = default ;
    ListApplicationCustomRulesResponseBody& operator=(const ListApplicationCustomRulesResponseBody &) = default ;
    ListApplicationCustomRulesResponseBody& operator=(ListApplicationCustomRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationCustomRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationCustomRules& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationCustomRuleId, applicationCustomRuleId_);
        DARABONBA_PTR_TO_JSON(ApplicationCustomRuleName, applicationCustomRuleName_);
        DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
        DARABONBA_PTR_TO_JSON(Applications, applications_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationCustomRules& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationCustomRuleId, applicationCustomRuleId_);
        DARABONBA_PTR_FROM_JSON(ApplicationCustomRuleName, applicationCustomRuleName_);
        DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
        DARABONBA_PTR_FROM_JSON(Applications, applications_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      };
      ApplicationCustomRules() = default ;
      ApplicationCustomRules(const ApplicationCustomRules &) = default ;
      ApplicationCustomRules(ApplicationCustomRules &&) = default ;
      ApplicationCustomRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationCustomRules() = default ;
      ApplicationCustomRules& operator=(const ApplicationCustomRules &) = default ;
      ApplicationCustomRules& operator=(ApplicationCustomRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Applications : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Applications& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        };
        friend void from_json(const Darabonba::Json& j, Applications& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        };
        Applications() = default ;
        Applications(const Applications &) = default ;
        Applications(Applications &&) = default ;
        Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Applications() = default ;
        Applications& operator=(const Applications &) = default ;
        Applications& operator=(Applications &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationName_ == nullptr; };
        // applicationId Field Functions 
        bool hasApplicationId() const { return this->applicationId_ != nullptr;};
        void deleteApplicationId() { this->applicationId_ = nullptr;};
        inline int64_t getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
        inline Applications& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


        // applicationName Field Functions 
        bool hasApplicationName() const { return this->applicationName_ != nullptr;};
        void deleteApplicationName() { this->applicationName_ = nullptr;};
        inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
        inline Applications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      protected:
        shared_ptr<int64_t> applicationId_ {};
        shared_ptr<string> applicationName_ {};
      };

      virtual bool empty() const override { return this->applicationCustomRuleId_ == nullptr
        && this->applicationCustomRuleName_ == nullptr && this->applicationTemplateId_ == nullptr && this->applications_ == nullptr && this->priority_ == nullptr && this->ruleAction_ == nullptr; };
      // applicationCustomRuleId Field Functions 
      bool hasApplicationCustomRuleId() const { return this->applicationCustomRuleId_ != nullptr;};
      void deleteApplicationCustomRuleId() { this->applicationCustomRuleId_ = nullptr;};
      inline string getApplicationCustomRuleId() const { DARABONBA_PTR_GET_DEFAULT(applicationCustomRuleId_, "") };
      inline ApplicationCustomRules& setApplicationCustomRuleId(string applicationCustomRuleId) { DARABONBA_PTR_SET_VALUE(applicationCustomRuleId_, applicationCustomRuleId) };


      // applicationCustomRuleName Field Functions 
      bool hasApplicationCustomRuleName() const { return this->applicationCustomRuleName_ != nullptr;};
      void deleteApplicationCustomRuleName() { this->applicationCustomRuleName_ = nullptr;};
      inline string getApplicationCustomRuleName() const { DARABONBA_PTR_GET_DEFAULT(applicationCustomRuleName_, "") };
      inline ApplicationCustomRules& setApplicationCustomRuleName(string applicationCustomRuleName) { DARABONBA_PTR_SET_VALUE(applicationCustomRuleName_, applicationCustomRuleName) };


      // applicationTemplateId Field Functions 
      bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
      void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
      inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
      inline ApplicationCustomRules& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


      // applications Field Functions 
      bool hasApplications() const { return this->applications_ != nullptr;};
      void deleteApplications() { this->applications_ = nullptr;};
      inline const vector<ApplicationCustomRules::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ApplicationCustomRules::Applications>) };
      inline vector<ApplicationCustomRules::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<ApplicationCustomRules::Applications>) };
      inline ApplicationCustomRules& setApplications(const vector<ApplicationCustomRules::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
      inline ApplicationCustomRules& setApplications(vector<ApplicationCustomRules::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
      inline ApplicationCustomRules& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // ruleAction Field Functions 
      bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
      void deleteRuleAction() { this->ruleAction_ = nullptr;};
      inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
      inline ApplicationCustomRules& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    protected:
      shared_ptr<string> applicationCustomRuleId_ {};
      shared_ptr<string> applicationCustomRuleName_ {};
      shared_ptr<string> applicationTemplateId_ {};
      shared_ptr<vector<ApplicationCustomRules::Applications>> applications_ {};
      shared_ptr<int64_t> priority_ {};
      shared_ptr<string> ruleAction_ {};
    };

    virtual bool empty() const override { return this->applicationCustomRules_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applicationCustomRules Field Functions 
    bool hasApplicationCustomRules() const { return this->applicationCustomRules_ != nullptr;};
    void deleteApplicationCustomRules() { this->applicationCustomRules_ = nullptr;};
    inline const vector<ListApplicationCustomRulesResponseBody::ApplicationCustomRules> & getApplicationCustomRules() const { DARABONBA_PTR_GET_CONST(applicationCustomRules_, vector<ListApplicationCustomRulesResponseBody::ApplicationCustomRules>) };
    inline vector<ListApplicationCustomRulesResponseBody::ApplicationCustomRules> getApplicationCustomRules() { DARABONBA_PTR_GET(applicationCustomRules_, vector<ListApplicationCustomRulesResponseBody::ApplicationCustomRules>) };
    inline ListApplicationCustomRulesResponseBody& setApplicationCustomRules(const vector<ListApplicationCustomRulesResponseBody::ApplicationCustomRules> & applicationCustomRules) { DARABONBA_PTR_SET_VALUE(applicationCustomRules_, applicationCustomRules) };
    inline ListApplicationCustomRulesResponseBody& setApplicationCustomRules(vector<ListApplicationCustomRulesResponseBody::ApplicationCustomRules> && applicationCustomRules) { DARABONBA_PTR_SET_RVALUE(applicationCustomRules_, applicationCustomRules) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListApplicationCustomRulesResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListApplicationCustomRulesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationCustomRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApplicationCustomRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListApplicationCustomRulesResponseBody::ApplicationCustomRules>> applicationCustomRules_ {};
    shared_ptr<int64_t> pageNo_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
