// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBPRECISEACCESSRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBPRECISEACCESSRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebPreciseAccessRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebPreciseAccessRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PreciseAccessConfigList, preciseAccessConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebPreciseAccessRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PreciseAccessConfigList, preciseAccessConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWebPreciseAccessRuleResponseBody() = default ;
    DescribeWebPreciseAccessRuleResponseBody(const DescribeWebPreciseAccessRuleResponseBody &) = default ;
    DescribeWebPreciseAccessRuleResponseBody(DescribeWebPreciseAccessRuleResponseBody &&) = default ;
    DescribeWebPreciseAccessRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebPreciseAccessRuleResponseBody() = default ;
    DescribeWebPreciseAccessRuleResponseBody& operator=(const DescribeWebPreciseAccessRuleResponseBody &) = default ;
    DescribeWebPreciseAccessRuleResponseBody& operator=(DescribeWebPreciseAccessRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PreciseAccessConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PreciseAccessConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
      };
      friend void from_json(const Darabonba::Json& j, PreciseAccessConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
      };
      PreciseAccessConfigList() = default ;
      PreciseAccessConfigList(const PreciseAccessConfigList &) = default ;
      PreciseAccessConfigList(PreciseAccessConfigList &&) = default ;
      PreciseAccessConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PreciseAccessConfigList() = default ;
      PreciseAccessConfigList& operator=(const PreciseAccessConfigList &) = default ;
      PreciseAccessConfigList& operator=(PreciseAccessConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(ConditionList, conditionList_);
          DARABONBA_PTR_TO_JSON(ExpirePeriod, expirePeriod_);
          DARABONBA_PTR_TO_JSON(Expires, expires_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
        };
        friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(ConditionList, conditionList_);
          DARABONBA_PTR_FROM_JSON(ExpirePeriod, expirePeriod_);
          DARABONBA_PTR_FROM_JSON(Expires, expires_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
        };
        RuleList() = default ;
        RuleList(const RuleList &) = default ;
        RuleList(RuleList &&) = default ;
        RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleList() = default ;
        RuleList& operator=(const RuleList &) = default ;
        RuleList& operator=(RuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConditionList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConditionList& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(ContentList, contentList_);
            DARABONBA_PTR_TO_JSON(Field, field_);
            DARABONBA_PTR_TO_JSON(HeaderName, headerName_);
            DARABONBA_PTR_TO_JSON(MatchMethod, matchMethod_);
          };
          friend void from_json(const Darabonba::Json& j, ConditionList& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(ContentList, contentList_);
            DARABONBA_PTR_FROM_JSON(Field, field_);
            DARABONBA_PTR_FROM_JSON(HeaderName, headerName_);
            DARABONBA_PTR_FROM_JSON(MatchMethod, matchMethod_);
          };
          ConditionList() = default ;
          ConditionList(const ConditionList &) = default ;
          ConditionList(ConditionList &&) = default ;
          ConditionList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConditionList() = default ;
          ConditionList& operator=(const ConditionList &) = default ;
          ConditionList& operator=(ConditionList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->contentList_ == nullptr && this->field_ == nullptr && this->headerName_ == nullptr && this->matchMethod_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline ConditionList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // contentList Field Functions 
          bool hasContentList() const { return this->contentList_ != nullptr;};
          void deleteContentList() { this->contentList_ = nullptr;};
          inline const vector<string> & getContentList() const { DARABONBA_PTR_GET_CONST(contentList_, vector<string>) };
          inline vector<string> getContentList() { DARABONBA_PTR_GET(contentList_, vector<string>) };
          inline ConditionList& setContentList(const vector<string> & contentList) { DARABONBA_PTR_SET_VALUE(contentList_, contentList) };
          inline ConditionList& setContentList(vector<string> && contentList) { DARABONBA_PTR_SET_RVALUE(contentList_, contentList) };


          // field Field Functions 
          bool hasField() const { return this->field_ != nullptr;};
          void deleteField() { this->field_ = nullptr;};
          inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
          inline ConditionList& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


          // headerName Field Functions 
          bool hasHeaderName() const { return this->headerName_ != nullptr;};
          void deleteHeaderName() { this->headerName_ = nullptr;};
          inline string getHeaderName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
          inline ConditionList& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


          // matchMethod Field Functions 
          bool hasMatchMethod() const { return this->matchMethod_ != nullptr;};
          void deleteMatchMethod() { this->matchMethod_ = nullptr;};
          inline string getMatchMethod() const { DARABONBA_PTR_GET_DEFAULT(matchMethod_, "") };
          inline ConditionList& setMatchMethod(string matchMethod) { DARABONBA_PTR_SET_VALUE(matchMethod_, matchMethod) };


        protected:
          // The match content.
          shared_ptr<string> content_ {};
          // The match conditions of the rule. The value is a JSON string. The value contains the following fields:
          // 
          // > If you specify multiple match conditions, the logical relation between these conditions is AND.
          // 
          // - **field**: The match field. This parameter is of the string type.
          // 
          // - **match_method**: The match method. This parameter is of the string type.
          // 
          //   > For more information about the valid values of **field** and **match_method**, see the "Additional information about field and match_method" section in this topic.
          // 
          // - **content**: The match content. This parameter is of the string type.
          // 
          // - **header_name**: The name of the header field. This parameter is of the string type. This parameter is required only when **field** is set to **header**.
          shared_ptr<vector<string>> contentList_ {};
          // The match field.
          shared_ptr<string> field_ {};
          // The name of the custom HTTP header field.
          // 
          // > This parameter is required only when **Field** is set to **header**.
          shared_ptr<string> headerName_ {};
          // The logical operator.
          shared_ptr<string> matchMethod_ {};
        };

        virtual bool empty() const override { return this->action_ == nullptr
        && this->conditionList_ == nullptr && this->expirePeriod_ == nullptr && this->expires_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline RuleList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // conditionList Field Functions 
        bool hasConditionList() const { return this->conditionList_ != nullptr;};
        void deleteConditionList() { this->conditionList_ = nullptr;};
        inline const vector<RuleList::ConditionList> & getConditionList() const { DARABONBA_PTR_GET_CONST(conditionList_, vector<RuleList::ConditionList>) };
        inline vector<RuleList::ConditionList> getConditionList() { DARABONBA_PTR_GET(conditionList_, vector<RuleList::ConditionList>) };
        inline RuleList& setConditionList(const vector<RuleList::ConditionList> & conditionList) { DARABONBA_PTR_SET_VALUE(conditionList_, conditionList) };
        inline RuleList& setConditionList(vector<RuleList::ConditionList> && conditionList) { DARABONBA_PTR_SET_RVALUE(conditionList_, conditionList) };


        // expirePeriod Field Functions 
        bool hasExpirePeriod() const { return this->expirePeriod_ != nullptr;};
        void deleteExpirePeriod() { this->expirePeriod_ = nullptr;};
        inline int64_t getExpirePeriod() const { DARABONBA_PTR_GET_DEFAULT(expirePeriod_, 0L) };
        inline RuleList& setExpirePeriod(int64_t expirePeriod) { DARABONBA_PTR_SET_VALUE(expirePeriod_, expirePeriod) };


        // expires Field Functions 
        bool hasExpires() const { return this->expires_ != nullptr;};
        void deleteExpires() { this->expires_ = nullptr;};
        inline int64_t getExpires() const { DARABONBA_PTR_GET_DEFAULT(expires_, 0L) };
        inline RuleList& setExpires(int64_t expires) { DARABONBA_PTR_SET_VALUE(expires_, expires) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline RuleList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      protected:
        // The action that is performed on requests that match the rule. Valid values:
        // 
        // - **accept**: allows the requests.
        // 
        // - **block**: blocks the requests.
        // 
        // - **challenge**: triggers a JavaScript Challenge for the requests.
        shared_ptr<string> action_ {};
        // The list of match conditions.
        shared_ptr<vector<RuleList::ConditionList>> conditionList_ {};
        // The validity period of the rule. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> expirePeriod_ {};
        // The validity period of the rule. Unit: seconds. This parameter is required only when the **action** of the rule is **block**. Requests that match the rule are blocked within the validity period. A value of **0** indicates that the rule is permanently valid.
        shared_ptr<int64_t> expires_ {};
        // The name of the rule.
        shared_ptr<string> name_ {};
        // The source of the rule. Valid values:
        // 
        // - **manual** (default): The rule is manually created.
        // 
        // - **clover**: The rule is automatically generated.
        shared_ptr<string> owner_ {};
      };

      virtual bool empty() const override { return this->domain_ == nullptr
        && this->ruleList_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline PreciseAccessConfigList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // ruleList Field Functions 
      bool hasRuleList() const { return this->ruleList_ != nullptr;};
      void deleteRuleList() { this->ruleList_ = nullptr;};
      inline const vector<PreciseAccessConfigList::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<PreciseAccessConfigList::RuleList>) };
      inline vector<PreciseAccessConfigList::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<PreciseAccessConfigList::RuleList>) };
      inline PreciseAccessConfigList& setRuleList(const vector<PreciseAccessConfigList::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
      inline PreciseAccessConfigList& setRuleList(vector<PreciseAccessConfigList::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    protected:
      // The domain name of the website.
      shared_ptr<string> domain_ {};
      // The list of rules.
      shared_ptr<vector<PreciseAccessConfigList::RuleList>> ruleList_ {};
    };

    virtual bool empty() const override { return this->preciseAccessConfigList_ == nullptr
        && this->requestId_ == nullptr; };
    // preciseAccessConfigList Field Functions 
    bool hasPreciseAccessConfigList() const { return this->preciseAccessConfigList_ != nullptr;};
    void deletePreciseAccessConfigList() { this->preciseAccessConfigList_ = nullptr;};
    inline const vector<DescribeWebPreciseAccessRuleResponseBody::PreciseAccessConfigList> & getPreciseAccessConfigList() const { DARABONBA_PTR_GET_CONST(preciseAccessConfigList_, vector<DescribeWebPreciseAccessRuleResponseBody::PreciseAccessConfigList>) };
    inline vector<DescribeWebPreciseAccessRuleResponseBody::PreciseAccessConfigList> getPreciseAccessConfigList() { DARABONBA_PTR_GET(preciseAccessConfigList_, vector<DescribeWebPreciseAccessRuleResponseBody::PreciseAccessConfigList>) };
    inline DescribeWebPreciseAccessRuleResponseBody& setPreciseAccessConfigList(const vector<DescribeWebPreciseAccessRuleResponseBody::PreciseAccessConfigList> & preciseAccessConfigList) { DARABONBA_PTR_SET_VALUE(preciseAccessConfigList_, preciseAccessConfigList) };
    inline DescribeWebPreciseAccessRuleResponseBody& setPreciseAccessConfigList(vector<DescribeWebPreciseAccessRuleResponseBody::PreciseAccessConfigList> && preciseAccessConfigList) { DARABONBA_PTR_SET_RVALUE(preciseAccessConfigList_, preciseAccessConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebPreciseAccessRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The precise access control rules for the website.
    shared_ptr<vector<DescribeWebPreciseAccessRuleResponseBody::PreciseAccessConfigList>> preciseAccessConfigList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
