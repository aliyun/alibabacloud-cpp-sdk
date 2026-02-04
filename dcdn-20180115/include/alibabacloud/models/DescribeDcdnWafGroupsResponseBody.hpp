// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WafGroups, wafGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WafGroups, wafGroups_);
    };
    DescribeDcdnWafGroupsResponseBody() = default ;
    DescribeDcdnWafGroupsResponseBody(const DescribeDcdnWafGroupsResponseBody &) = default ;
    DescribeDcdnWafGroupsResponseBody(DescribeDcdnWafGroupsResponseBody &&) = default ;
    DescribeDcdnWafGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafGroupsResponseBody() = default ;
    DescribeDcdnWafGroupsResponseBody& operator=(const DescribeDcdnWafGroupsResponseBody &) = default ;
    DescribeDcdnWafGroupsResponseBody& operator=(DescribeDcdnWafGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WafGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WafGroups& obj) { 
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Policies, policies_);
        DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_TO_JSON(Subscribe, subscribe_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, WafGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Policies, policies_);
        DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_FROM_JSON(Subscribe, subscribe_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      WafGroups() = default ;
      WafGroups(const WafGroups &) = default ;
      WafGroups(WafGroups &&) = default ;
      WafGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WafGroups() = default ;
      WafGroups& operator=(const WafGroups &) = default ;
      WafGroups& operator=(WafGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Policies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Policies& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Policies& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Policies() = default ;
        Policies(const Policies &) = default ;
        Policies(Policies &&) = default ;
        Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Policies() = default ;
        Policies& operator=(const Policies &) = default ;
        Policies& operator=(Policies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Policies& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Policies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Policies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The ID of the policy.
        shared_ptr<int64_t> id_ {};
        // The name of the policy.
        shared_ptr<string> name_ {};
        // The type of the policy. Valid values:
        // 
        // *   **custom**: a custom policy
        // *   **default**: the default policy
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->policies_ == nullptr && this->ruleCount_ == nullptr && this->subscribe_ == nullptr
        && this->templateId_ == nullptr; };
      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline WafGroups& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline WafGroups& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline WafGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // policies Field Functions 
      bool hasPolicies() const { return this->policies_ != nullptr;};
      void deletePolicies() { this->policies_ = nullptr;};
      inline const vector<WafGroups::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<WafGroups::Policies>) };
      inline vector<WafGroups::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<WafGroups::Policies>) };
      inline WafGroups& setPolicies(const vector<WafGroups::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
      inline WafGroups& setPolicies(vector<WafGroups::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


      // ruleCount Field Functions 
      bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
      void deleteRuleCount() { this->ruleCount_ = nullptr;};
      inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
      inline WafGroups& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


      // subscribe Field Functions 
      bool hasSubscribe() const { return this->subscribe_ != nullptr;};
      void deleteSubscribe() { this->subscribe_ = nullptr;};
      inline string getSubscribe() const { DARABONBA_PTR_GET_DEFAULT(subscribe_, "") };
      inline WafGroups& setSubscribe(string subscribe) { DARABONBA_PTR_SET_VALUE(subscribe_, subscribe) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline WafGroups& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // The time when the WAF rule group was modified.
      shared_ptr<string> gmtModified_ {};
      // The ID of the custom WAF rule group.
      shared_ptr<int64_t> id_ {};
      // The name of the WAF rule.
      shared_ptr<string> name_ {};
      // The policy that is associated with the WAF rule group.
      shared_ptr<vector<WafGroups::Policies>> policies_ {};
      // The number of WAF rules.
      shared_ptr<int32_t> ruleCount_ {};
      // Indicates whether to enable subscription. Valid values:
      // 
      // *   **on**
      // *   **off**
      shared_ptr<string> subscribe_ {};
      // The ID of the template.
      shared_ptr<int64_t> templateId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->wafGroups_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDcdnWafGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDcdnWafGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDcdnWafGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // wafGroups Field Functions 
    bool hasWafGroups() const { return this->wafGroups_ != nullptr;};
    void deleteWafGroups() { this->wafGroups_ = nullptr;};
    inline const vector<DescribeDcdnWafGroupsResponseBody::WafGroups> & getWafGroups() const { DARABONBA_PTR_GET_CONST(wafGroups_, vector<DescribeDcdnWafGroupsResponseBody::WafGroups>) };
    inline vector<DescribeDcdnWafGroupsResponseBody::WafGroups> getWafGroups() { DARABONBA_PTR_GET(wafGroups_, vector<DescribeDcdnWafGroupsResponseBody::WafGroups>) };
    inline DescribeDcdnWafGroupsResponseBody& setWafGroups(const vector<DescribeDcdnWafGroupsResponseBody::WafGroups> & wafGroups) { DARABONBA_PTR_SET_VALUE(wafGroups_, wafGroups) };
    inline DescribeDcdnWafGroupsResponseBody& setWafGroups(vector<DescribeDcdnWafGroupsResponseBody::WafGroups> && wafGroups) { DARABONBA_PTR_SET_RVALUE(wafGroups_, wafGroups) };


  protected:
    // The page number of the returned page. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of WAF rule groups.
    shared_ptr<int32_t> totalCount_ {};
    // The list of WAF rule groups.
    shared_ptr<vector<DescribeDcdnWafGroupsResponseBody::WafGroups>> wafGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
