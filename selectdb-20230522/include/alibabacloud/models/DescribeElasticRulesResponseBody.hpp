// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeElasticRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticRulesResponseBody() = default ;
    DescribeElasticRulesResponseBody(const DescribeElasticRulesResponseBody &) = default ;
    DescribeElasticRulesResponseBody(DescribeElasticRulesResponseBody &&) = default ;
    DescribeElasticRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticRulesResponseBody() = default ;
    DescribeElasticRulesResponseBody& operator=(const DescribeElasticRulesResponseBody &) = default ;
    DescribeElasticRulesResponseBody& operator=(DescribeElasticRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterClass, clusterClass_);
          DARABONBA_PTR_TO_JSON(ElasticRuleStartTime, elasticRuleStartTime_);
          DARABONBA_PTR_TO_JSON(ExecutionPeriod, executionPeriod_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterClass, clusterClass_);
          DARABONBA_PTR_FROM_JSON(ElasticRuleStartTime, elasticRuleStartTime_);
          DARABONBA_PTR_FROM_JSON(ExecutionPeriod, executionPeriod_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        };
        Rules() = default ;
        Rules(const Rules &) = default ;
        Rules(Rules &&) = default ;
        Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rules() = default ;
        Rules& operator=(const Rules &) = default ;
        Rules& operator=(Rules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterClass_ == nullptr
        && this->elasticRuleStartTime_ == nullptr && this->executionPeriod_ == nullptr && this->ruleId_ == nullptr; };
        // clusterClass Field Functions 
        bool hasClusterClass() const { return this->clusterClass_ != nullptr;};
        void deleteClusterClass() { this->clusterClass_ = nullptr;};
        inline string getClusterClass() const { DARABONBA_PTR_GET_DEFAULT(clusterClass_, "") };
        inline Rules& setClusterClass(string clusterClass) { DARABONBA_PTR_SET_VALUE(clusterClass_, clusterClass) };


        // elasticRuleStartTime Field Functions 
        bool hasElasticRuleStartTime() const { return this->elasticRuleStartTime_ != nullptr;};
        void deleteElasticRuleStartTime() { this->elasticRuleStartTime_ = nullptr;};
        inline string getElasticRuleStartTime() const { DARABONBA_PTR_GET_DEFAULT(elasticRuleStartTime_, "") };
        inline Rules& setElasticRuleStartTime(string elasticRuleStartTime) { DARABONBA_PTR_SET_VALUE(elasticRuleStartTime_, elasticRuleStartTime) };


        // executionPeriod Field Functions 
        bool hasExecutionPeriod() const { return this->executionPeriod_ != nullptr;};
        void deleteExecutionPeriod() { this->executionPeriod_ = nullptr;};
        inline string getExecutionPeriod() const { DARABONBA_PTR_GET_DEFAULT(executionPeriod_, "") };
        inline Rules& setExecutionPeriod(string executionPeriod) { DARABONBA_PTR_SET_VALUE(executionPeriod_, executionPeriod) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline Rules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      protected:
        // The rule for computing resources of the required cluster.
        shared_ptr<string> clusterClass_ {};
        // The time when you want to execute the scheduled scaling rule.
        shared_ptr<string> elasticRuleStartTime_ {};
        // The execution cycle.
        // 
        // Valid value:
        // 
        // *   Day
        shared_ptr<string> executionPeriod_ {};
        // The rule ID.
        shared_ptr<int64_t> ruleId_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->dbInstanceId_ == nullptr && this->rules_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // dbInstanceId Field Functions 
      bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
      void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
      inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
      inline Data& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Data::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Data::Rules>) };
      inline vector<Data::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Data::Rules>) };
      inline Data& setRules(const vector<Data::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Data& setRules(vector<Data::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The instance ID.
      shared_ptr<string> dbInstanceId_ {};
      // The details of the rules.
      shared_ptr<vector<Data::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeElasticRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeElasticRulesResponseBody::Data) };
    inline DescribeElasticRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeElasticRulesResponseBody::Data) };
    inline DescribeElasticRulesResponseBody& setData(const DescribeElasticRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeElasticRulesResponseBody& setData(DescribeElasticRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeElasticRulesResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
