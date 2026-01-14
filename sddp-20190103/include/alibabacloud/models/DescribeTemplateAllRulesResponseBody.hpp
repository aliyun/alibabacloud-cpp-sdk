// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATEALLRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATEALLRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeTemplateAllRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplateAllRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplateAllRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    DescribeTemplateAllRulesResponseBody() = default ;
    DescribeTemplateAllRulesResponseBody(const DescribeTemplateAllRulesResponseBody &) = default ;
    DescribeTemplateAllRulesResponseBody(DescribeTemplateAllRulesResponseBody &&) = default ;
    DescribeTemplateAllRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplateAllRulesResponseBody() = default ;
    DescribeTemplateAllRulesResponseBody& operator=(const DescribeTemplateAllRulesResponseBody &) = default ;
    DescribeTemplateAllRulesResponseBody& operator=(DescribeTemplateAllRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline RuleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // Unique ID of the model.
      shared_ptr<int64_t> id_ {};
      // Model name.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTemplateAllRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<DescribeTemplateAllRulesResponseBody::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<DescribeTemplateAllRulesResponseBody::RuleList>) };
    inline vector<DescribeTemplateAllRulesResponseBody::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<DescribeTemplateAllRulesResponseBody::RuleList>) };
    inline DescribeTemplateAllRulesResponseBody& setRuleList(const vector<DescribeTemplateAllRulesResponseBody::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeTemplateAllRulesResponseBody& setRuleList(vector<DescribeTemplateAllRulesResponseBody::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


  protected:
    // The unique identifier generated by Alibaba Cloud for this request.
    shared_ptr<string> requestId_ {};
    // List of model objects.
    shared_ptr<vector<DescribeTemplateAllRulesResponseBody::RuleList>> ruleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
