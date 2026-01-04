// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6EGRESSONLYRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6EGRESSONLYRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIpv6EgressOnlyRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6EgressOnlyRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6EgressOnlyRules, ipv6EgressOnlyRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6EgressOnlyRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6EgressOnlyRules, ipv6EgressOnlyRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIpv6EgressOnlyRulesResponseBody() = default ;
    DescribeIpv6EgressOnlyRulesResponseBody(const DescribeIpv6EgressOnlyRulesResponseBody &) = default ;
    DescribeIpv6EgressOnlyRulesResponseBody(DescribeIpv6EgressOnlyRulesResponseBody &&) = default ;
    DescribeIpv6EgressOnlyRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6EgressOnlyRulesResponseBody() = default ;
    DescribeIpv6EgressOnlyRulesResponseBody& operator=(const DescribeIpv6EgressOnlyRulesResponseBody &) = default ;
    DescribeIpv6EgressOnlyRulesResponseBody& operator=(DescribeIpv6EgressOnlyRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ipv6EgressOnlyRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6EgressOnlyRules& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6EgressOnlyRule, ipv6EgressOnlyRule_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6EgressOnlyRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6EgressOnlyRule, ipv6EgressOnlyRule_);
      };
      Ipv6EgressOnlyRules() = default ;
      Ipv6EgressOnlyRules(const Ipv6EgressOnlyRules &) = default ;
      Ipv6EgressOnlyRules(Ipv6EgressOnlyRules &&) = default ;
      Ipv6EgressOnlyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6EgressOnlyRules() = default ;
      Ipv6EgressOnlyRules& operator=(const Ipv6EgressOnlyRules &) = default ;
      Ipv6EgressOnlyRules& operator=(Ipv6EgressOnlyRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv6EgressOnlyRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6EgressOnlyRule& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Ipv6EgressOnlyRuleId, ipv6EgressOnlyRuleId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6EgressOnlyRule& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Ipv6EgressOnlyRuleId, ipv6EgressOnlyRuleId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Ipv6EgressOnlyRule() = default ;
        Ipv6EgressOnlyRule(const Ipv6EgressOnlyRule &) = default ;
        Ipv6EgressOnlyRule(Ipv6EgressOnlyRule &&) = default ;
        Ipv6EgressOnlyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6EgressOnlyRule() = default ;
        Ipv6EgressOnlyRule& operator=(const Ipv6EgressOnlyRule &) = default ;
        Ipv6EgressOnlyRule& operator=(Ipv6EgressOnlyRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->ipv6EgressOnlyRuleId_ == nullptr && this->name_ == nullptr && this->status_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Ipv6EgressOnlyRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Ipv6EgressOnlyRule& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline Ipv6EgressOnlyRule& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ipv6EgressOnlyRuleId Field Functions 
        bool hasIpv6EgressOnlyRuleId() const { return this->ipv6EgressOnlyRuleId_ != nullptr;};
        void deleteIpv6EgressOnlyRuleId() { this->ipv6EgressOnlyRuleId_ = nullptr;};
        inline string getIpv6EgressOnlyRuleId() const { DARABONBA_PTR_GET_DEFAULT(ipv6EgressOnlyRuleId_, "") };
        inline Ipv6EgressOnlyRule& setIpv6EgressOnlyRuleId(string ipv6EgressOnlyRuleId) { DARABONBA_PTR_SET_VALUE(ipv6EgressOnlyRuleId_, ipv6EgressOnlyRuleId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Ipv6EgressOnlyRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Ipv6EgressOnlyRule& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The description of the egress-only rule.
        shared_ptr<string> description_ {};
        // The ID of the instance to which the egress-only rule applies.
        shared_ptr<string> instanceId_ {};
        // The type of the instance to which the egress-only rule applies.
        shared_ptr<string> instanceType_ {};
        // The ID of the egress-only rule.
        shared_ptr<string> ipv6EgressOnlyRuleId_ {};
        // The name of the egress-only rule.
        shared_ptr<string> name_ {};
        // The status of the egress-only rule.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->ipv6EgressOnlyRule_ == nullptr; };
      // ipv6EgressOnlyRule Field Functions 
      bool hasIpv6EgressOnlyRule() const { return this->ipv6EgressOnlyRule_ != nullptr;};
      void deleteIpv6EgressOnlyRule() { this->ipv6EgressOnlyRule_ = nullptr;};
      inline const vector<Ipv6EgressOnlyRules::Ipv6EgressOnlyRule> & getIpv6EgressOnlyRule() const { DARABONBA_PTR_GET_CONST(ipv6EgressOnlyRule_, vector<Ipv6EgressOnlyRules::Ipv6EgressOnlyRule>) };
      inline vector<Ipv6EgressOnlyRules::Ipv6EgressOnlyRule> getIpv6EgressOnlyRule() { DARABONBA_PTR_GET(ipv6EgressOnlyRule_, vector<Ipv6EgressOnlyRules::Ipv6EgressOnlyRule>) };
      inline Ipv6EgressOnlyRules& setIpv6EgressOnlyRule(const vector<Ipv6EgressOnlyRules::Ipv6EgressOnlyRule> & ipv6EgressOnlyRule) { DARABONBA_PTR_SET_VALUE(ipv6EgressOnlyRule_, ipv6EgressOnlyRule) };
      inline Ipv6EgressOnlyRules& setIpv6EgressOnlyRule(vector<Ipv6EgressOnlyRules::Ipv6EgressOnlyRule> && ipv6EgressOnlyRule) { DARABONBA_PTR_SET_RVALUE(ipv6EgressOnlyRule_, ipv6EgressOnlyRule) };


    protected:
      shared_ptr<vector<Ipv6EgressOnlyRules::Ipv6EgressOnlyRule>> ipv6EgressOnlyRule_ {};
    };

    virtual bool empty() const override { return this->ipv6EgressOnlyRules_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ipv6EgressOnlyRules Field Functions 
    bool hasIpv6EgressOnlyRules() const { return this->ipv6EgressOnlyRules_ != nullptr;};
    void deleteIpv6EgressOnlyRules() { this->ipv6EgressOnlyRules_ = nullptr;};
    inline const DescribeIpv6EgressOnlyRulesResponseBody::Ipv6EgressOnlyRules & getIpv6EgressOnlyRules() const { DARABONBA_PTR_GET_CONST(ipv6EgressOnlyRules_, DescribeIpv6EgressOnlyRulesResponseBody::Ipv6EgressOnlyRules) };
    inline DescribeIpv6EgressOnlyRulesResponseBody::Ipv6EgressOnlyRules getIpv6EgressOnlyRules() { DARABONBA_PTR_GET(ipv6EgressOnlyRules_, DescribeIpv6EgressOnlyRulesResponseBody::Ipv6EgressOnlyRules) };
    inline DescribeIpv6EgressOnlyRulesResponseBody& setIpv6EgressOnlyRules(const DescribeIpv6EgressOnlyRulesResponseBody::Ipv6EgressOnlyRules & ipv6EgressOnlyRules) { DARABONBA_PTR_SET_VALUE(ipv6EgressOnlyRules_, ipv6EgressOnlyRules) };
    inline DescribeIpv6EgressOnlyRulesResponseBody& setIpv6EgressOnlyRules(DescribeIpv6EgressOnlyRulesResponseBody::Ipv6EgressOnlyRules && ipv6EgressOnlyRules) { DARABONBA_PTR_SET_RVALUE(ipv6EgressOnlyRules_, ipv6EgressOnlyRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIpv6EgressOnlyRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIpv6EgressOnlyRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpv6EgressOnlyRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIpv6EgressOnlyRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the egress-only rules.
    shared_ptr<DescribeIpv6EgressOnlyRulesResponseBody::Ipv6EgressOnlyRules> ipv6EgressOnlyRules_ {};
    // The number of the returned page. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Maximum value: **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
