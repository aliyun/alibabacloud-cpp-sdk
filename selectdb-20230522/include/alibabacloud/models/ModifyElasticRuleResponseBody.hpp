// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class ModifyElasticRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElasticRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElasticRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyElasticRuleResponseBody() = default ;
    ModifyElasticRuleResponseBody(const ModifyElasticRuleResponseBody &) = default ;
    ModifyElasticRuleResponseBody(ModifyElasticRuleResponseBody &&) = default ;
    ModifyElasticRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyElasticRuleResponseBody() = default ;
    ModifyElasticRuleResponseBody& operator=(const ModifyElasticRuleResponseBody &) = default ;
    ModifyElasticRuleResponseBody& operator=(ModifyElasticRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterClass, clusterClass_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_TO_JSON(ElasticRuleStartTime, elasticRuleStartTime_);
        DARABONBA_PTR_TO_JSON(ExecutionPeriod, executionPeriod_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterClass, clusterClass_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_FROM_JSON(ElasticRuleStartTime, elasticRuleStartTime_);
        DARABONBA_PTR_FROM_JSON(ExecutionPeriod, executionPeriod_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
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
      virtual bool empty() const override { return this->clusterClass_ == nullptr
        && this->clusterId_ == nullptr && this->dbInstanceId_ == nullptr && this->elasticRuleStartTime_ == nullptr && this->executionPeriod_ == nullptr && this->ruleId_ == nullptr; };
      // clusterClass Field Functions 
      bool hasClusterClass() const { return this->clusterClass_ != nullptr;};
      void deleteClusterClass() { this->clusterClass_ = nullptr;};
      inline string getClusterClass() const { DARABONBA_PTR_GET_DEFAULT(clusterClass_, "") };
      inline Data& setClusterClass(string clusterClass) { DARABONBA_PTR_SET_VALUE(clusterClass_, clusterClass) };


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


      // elasticRuleStartTime Field Functions 
      bool hasElasticRuleStartTime() const { return this->elasticRuleStartTime_ != nullptr;};
      void deleteElasticRuleStartTime() { this->elasticRuleStartTime_ = nullptr;};
      inline string getElasticRuleStartTime() const { DARABONBA_PTR_GET_DEFAULT(elasticRuleStartTime_, "") };
      inline Data& setElasticRuleStartTime(string elasticRuleStartTime) { DARABONBA_PTR_SET_VALUE(elasticRuleStartTime_, elasticRuleStartTime) };


      // executionPeriod Field Functions 
      bool hasExecutionPeriod() const { return this->executionPeriod_ != nullptr;};
      void deleteExecutionPeriod() { this->executionPeriod_ = nullptr;};
      inline string getExecutionPeriod() const { DARABONBA_PTR_GET_DEFAULT(executionPeriod_, "") };
      inline Data& setExecutionPeriod(string executionPeriod) { DARABONBA_PTR_SET_VALUE(executionPeriod_, executionPeriod) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline Data& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    protected:
      // The rule for computing resources of the required cluster.
      shared_ptr<string> clusterClass_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The instance ID.
      shared_ptr<string> dbInstanceId_ {};
      // The time when the scheduled scaling rule is executed.
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

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyElasticRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifyElasticRuleResponseBody::Data) };
    inline ModifyElasticRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifyElasticRuleResponseBody::Data) };
    inline ModifyElasticRuleResponseBody& setData(const ModifyElasticRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyElasticRuleResponseBody& setData(ModifyElasticRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyElasticRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<ModifyElasticRuleResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
