// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SparkOperatorInfo.hpp>
#include <alibabacloud/models/Adb4MysqlSparkDiagnosisInfo.hpp>
#include <alibabacloud/models/OperatorNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkSQLDiagnosisAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkSQLDiagnosisAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DiagnosisInfos, diagnosisInfos_);
      DARABONBA_PTR_TO_JSON(ElapsedTime, elapsedTime_);
      DARABONBA_PTR_TO_JSON(InnerQueryId, innerQueryId_);
      DARABONBA_PTR_TO_JSON(OperatorListSortedByMetrics, operatorListSortedByMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Root, root_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkSQLDiagnosisAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DiagnosisInfos, diagnosisInfos_);
      DARABONBA_PTR_FROM_JSON(ElapsedTime, elapsedTime_);
      DARABONBA_PTR_FROM_JSON(InnerQueryId, innerQueryId_);
      DARABONBA_PTR_FROM_JSON(OperatorListSortedByMetrics, operatorListSortedByMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Root, root_);
    };
    DescribeSparkSQLDiagnosisAttributeResponseBody() = default ;
    DescribeSparkSQLDiagnosisAttributeResponseBody(const DescribeSparkSQLDiagnosisAttributeResponseBody &) = default ;
    DescribeSparkSQLDiagnosisAttributeResponseBody(DescribeSparkSQLDiagnosisAttributeResponseBody &&) = default ;
    DescribeSparkSQLDiagnosisAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkSQLDiagnosisAttributeResponseBody() = default ;
    DescribeSparkSQLDiagnosisAttributeResponseBody& operator=(const DescribeSparkSQLDiagnosisAttributeResponseBody &) = default ;
    DescribeSparkSQLDiagnosisAttributeResponseBody& operator=(DescribeSparkSQLDiagnosisAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperatorListSortedByMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperatorListSortedByMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(OperatorListSortedByExclusiveTime, operatorListSortedByExclusiveTime_);
        DARABONBA_PTR_TO_JSON(OperatorListSortedByMaxMemory, operatorListSortedByMaxMemory_);
      };
      friend void from_json(const Darabonba::Json& j, OperatorListSortedByMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(OperatorListSortedByExclusiveTime, operatorListSortedByExclusiveTime_);
        DARABONBA_PTR_FROM_JSON(OperatorListSortedByMaxMemory, operatorListSortedByMaxMemory_);
      };
      OperatorListSortedByMetrics() = default ;
      OperatorListSortedByMetrics(const OperatorListSortedByMetrics &) = default ;
      OperatorListSortedByMetrics(OperatorListSortedByMetrics &&) = default ;
      OperatorListSortedByMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperatorListSortedByMetrics() = default ;
      OperatorListSortedByMetrics& operator=(const OperatorListSortedByMetrics &) = default ;
      OperatorListSortedByMetrics& operator=(OperatorListSortedByMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->operatorListSortedByExclusiveTime_ == nullptr
        && this->operatorListSortedByMaxMemory_ == nullptr; };
      // operatorListSortedByExclusiveTime Field Functions 
      bool hasOperatorListSortedByExclusiveTime() const { return this->operatorListSortedByExclusiveTime_ != nullptr;};
      void deleteOperatorListSortedByExclusiveTime() { this->operatorListSortedByExclusiveTime_ = nullptr;};
      inline const vector<SparkOperatorInfo> & getOperatorListSortedByExclusiveTime() const { DARABONBA_PTR_GET_CONST(operatorListSortedByExclusiveTime_, vector<SparkOperatorInfo>) };
      inline vector<SparkOperatorInfo> getOperatorListSortedByExclusiveTime() { DARABONBA_PTR_GET(operatorListSortedByExclusiveTime_, vector<SparkOperatorInfo>) };
      inline OperatorListSortedByMetrics& setOperatorListSortedByExclusiveTime(const vector<SparkOperatorInfo> & operatorListSortedByExclusiveTime) { DARABONBA_PTR_SET_VALUE(operatorListSortedByExclusiveTime_, operatorListSortedByExclusiveTime) };
      inline OperatorListSortedByMetrics& setOperatorListSortedByExclusiveTime(vector<SparkOperatorInfo> && operatorListSortedByExclusiveTime) { DARABONBA_PTR_SET_RVALUE(operatorListSortedByExclusiveTime_, operatorListSortedByExclusiveTime) };


      // operatorListSortedByMaxMemory Field Functions 
      bool hasOperatorListSortedByMaxMemory() const { return this->operatorListSortedByMaxMemory_ != nullptr;};
      void deleteOperatorListSortedByMaxMemory() { this->operatorListSortedByMaxMemory_ = nullptr;};
      inline const vector<SparkOperatorInfo> & getOperatorListSortedByMaxMemory() const { DARABONBA_PTR_GET_CONST(operatorListSortedByMaxMemory_, vector<SparkOperatorInfo>) };
      inline vector<SparkOperatorInfo> getOperatorListSortedByMaxMemory() { DARABONBA_PTR_GET(operatorListSortedByMaxMemory_, vector<SparkOperatorInfo>) };
      inline OperatorListSortedByMetrics& setOperatorListSortedByMaxMemory(const vector<SparkOperatorInfo> & operatorListSortedByMaxMemory) { DARABONBA_PTR_SET_VALUE(operatorListSortedByMaxMemory_, operatorListSortedByMaxMemory) };
      inline OperatorListSortedByMetrics& setOperatorListSortedByMaxMemory(vector<SparkOperatorInfo> && operatorListSortedByMaxMemory) { DARABONBA_PTR_SET_RVALUE(operatorListSortedByMaxMemory_, operatorListSortedByMaxMemory) };


    protected:
      // The operators sorted by the execution duration.
      shared_ptr<vector<SparkOperatorInfo>> operatorListSortedByExclusiveTime_ {};
      // The operators sorted by the maximum memory used.
      shared_ptr<vector<SparkOperatorInfo>> operatorListSortedByMaxMemory_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->appId_ == nullptr && this->diagnosisInfos_ == nullptr && this->elapsedTime_ == nullptr && this->innerQueryId_ == nullptr && this->operatorListSortedByMetrics_ == nullptr
        && this->requestId_ == nullptr && this->root_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // diagnosisInfos Field Functions 
    bool hasDiagnosisInfos() const { return this->diagnosisInfos_ != nullptr;};
    void deleteDiagnosisInfos() { this->diagnosisInfos_ = nullptr;};
    inline const vector<Adb4MysqlSparkDiagnosisInfo> & getDiagnosisInfos() const { DARABONBA_PTR_GET_CONST(diagnosisInfos_, vector<Adb4MysqlSparkDiagnosisInfo>) };
    inline vector<Adb4MysqlSparkDiagnosisInfo> getDiagnosisInfos() { DARABONBA_PTR_GET(diagnosisInfos_, vector<Adb4MysqlSparkDiagnosisInfo>) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setDiagnosisInfos(const vector<Adb4MysqlSparkDiagnosisInfo> & diagnosisInfos) { DARABONBA_PTR_SET_VALUE(diagnosisInfos_, diagnosisInfos) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setDiagnosisInfos(vector<Adb4MysqlSparkDiagnosisInfo> && diagnosisInfos) { DARABONBA_PTR_SET_RVALUE(diagnosisInfos_, diagnosisInfos) };


    // elapsedTime Field Functions 
    bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
    void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
    inline int64_t getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


    // innerQueryId Field Functions 
    bool hasInnerQueryId() const { return this->innerQueryId_ != nullptr;};
    void deleteInnerQueryId() { this->innerQueryId_ = nullptr;};
    inline int64_t getInnerQueryId() const { DARABONBA_PTR_GET_DEFAULT(innerQueryId_, 0L) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setInnerQueryId(int64_t innerQueryId) { DARABONBA_PTR_SET_VALUE(innerQueryId_, innerQueryId) };


    // operatorListSortedByMetrics Field Functions 
    bool hasOperatorListSortedByMetrics() const { return this->operatorListSortedByMetrics_ != nullptr;};
    void deleteOperatorListSortedByMetrics() { this->operatorListSortedByMetrics_ = nullptr;};
    inline const DescribeSparkSQLDiagnosisAttributeResponseBody::OperatorListSortedByMetrics & getOperatorListSortedByMetrics() const { DARABONBA_PTR_GET_CONST(operatorListSortedByMetrics_, DescribeSparkSQLDiagnosisAttributeResponseBody::OperatorListSortedByMetrics) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody::OperatorListSortedByMetrics getOperatorListSortedByMetrics() { DARABONBA_PTR_GET(operatorListSortedByMetrics_, DescribeSparkSQLDiagnosisAttributeResponseBody::OperatorListSortedByMetrics) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setOperatorListSortedByMetrics(const DescribeSparkSQLDiagnosisAttributeResponseBody::OperatorListSortedByMetrics & operatorListSortedByMetrics) { DARABONBA_PTR_SET_VALUE(operatorListSortedByMetrics_, operatorListSortedByMetrics) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setOperatorListSortedByMetrics(DescribeSparkSQLDiagnosisAttributeResponseBody::OperatorListSortedByMetrics && operatorListSortedByMetrics) { DARABONBA_PTR_SET_RVALUE(operatorListSortedByMetrics_, operatorListSortedByMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // root Field Functions 
    bool hasRoot() const { return this->root_ != nullptr;};
    void deleteRoot() { this->root_ = nullptr;};
    inline const OperatorNode & getRoot() const { DARABONBA_PTR_GET_CONST(root_, OperatorNode) };
    inline OperatorNode getRoot() { DARABONBA_PTR_GET(root_, OperatorNode) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setRoot(const OperatorNode & root) { DARABONBA_PTR_SET_VALUE(root_, root) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setRoot(OperatorNode && root) { DARABONBA_PTR_SET_RVALUE(root_, root) };


  protected:
    // The information about the request denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The application ID.
    // 
    // >  You can call the [ListSparkApps](https://help.aliyun.com/document_detail/612475.html) operation to query a list of Spark application IDs.
    shared_ptr<string> appId_ {};
    // The queried diagnostic information.
    shared_ptr<vector<Adb4MysqlSparkDiagnosisInfo>> diagnosisInfos_ {};
    // The execution duration of the query. Unit: milliseconds.
    shared_ptr<int64_t> elapsedTime_ {};
    // The ID of the query executed within the Spark application.
    shared_ptr<int64_t> innerQueryId_ {};
    // The operators sorted by metrics.
    shared_ptr<DescribeSparkSQLDiagnosisAttributeResponseBody::OperatorListSortedByMetrics> operatorListSortedByMetrics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The Spark execution plan tree.
    shared_ptr<OperatorNode> root_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
