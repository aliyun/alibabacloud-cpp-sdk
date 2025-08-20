// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Adb4MysqlSparkDiagnosisInfo.hpp>
#include <alibabacloud/models/DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics.hpp>
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
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->appId_ != nullptr && this->diagnosisInfos_ != nullptr && this->elapsedTime_ != nullptr && this->innerQueryId_ != nullptr && this->operatorListSortedByMetrics_ != nullptr
        && this->requestId_ != nullptr && this->root_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // diagnosisInfos Field Functions 
    bool hasDiagnosisInfos() const { return this->diagnosisInfos_ != nullptr;};
    void deleteDiagnosisInfos() { this->diagnosisInfos_ = nullptr;};
    inline const vector<Adb4MysqlSparkDiagnosisInfo> & diagnosisInfos() const { DARABONBA_PTR_GET_CONST(diagnosisInfos_, vector<Adb4MysqlSparkDiagnosisInfo>) };
    inline vector<Adb4MysqlSparkDiagnosisInfo> diagnosisInfos() { DARABONBA_PTR_GET(diagnosisInfos_, vector<Adb4MysqlSparkDiagnosisInfo>) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setDiagnosisInfos(const vector<Adb4MysqlSparkDiagnosisInfo> & diagnosisInfos) { DARABONBA_PTR_SET_VALUE(diagnosisInfos_, diagnosisInfos) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setDiagnosisInfos(vector<Adb4MysqlSparkDiagnosisInfo> && diagnosisInfos) { DARABONBA_PTR_SET_RVALUE(diagnosisInfos_, diagnosisInfos) };


    // elapsedTime Field Functions 
    bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
    void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
    inline int64_t elapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


    // innerQueryId Field Functions 
    bool hasInnerQueryId() const { return this->innerQueryId_ != nullptr;};
    void deleteInnerQueryId() { this->innerQueryId_ = nullptr;};
    inline int64_t innerQueryId() const { DARABONBA_PTR_GET_DEFAULT(innerQueryId_, 0L) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setInnerQueryId(int64_t innerQueryId) { DARABONBA_PTR_SET_VALUE(innerQueryId_, innerQueryId) };


    // operatorListSortedByMetrics Field Functions 
    bool hasOperatorListSortedByMetrics() const { return this->operatorListSortedByMetrics_ != nullptr;};
    void deleteOperatorListSortedByMetrics() { this->operatorListSortedByMetrics_ = nullptr;};
    inline const DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics & operatorListSortedByMetrics() const { DARABONBA_PTR_GET_CONST(operatorListSortedByMetrics_, DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics operatorListSortedByMetrics() { DARABONBA_PTR_GET(operatorListSortedByMetrics_, DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setOperatorListSortedByMetrics(const DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics & operatorListSortedByMetrics) { DARABONBA_PTR_SET_VALUE(operatorListSortedByMetrics_, operatorListSortedByMetrics) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setOperatorListSortedByMetrics(DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics && operatorListSortedByMetrics) { DARABONBA_PTR_SET_RVALUE(operatorListSortedByMetrics_, operatorListSortedByMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // root Field Functions 
    bool hasRoot() const { return this->root_ != nullptr;};
    void deleteRoot() { this->root_ = nullptr;};
    inline const OperatorNode & root() const { DARABONBA_PTR_GET_CONST(root_, OperatorNode) };
    inline OperatorNode root() { DARABONBA_PTR_GET(root_, OperatorNode) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setRoot(const OperatorNode & root) { DARABONBA_PTR_SET_VALUE(root_, root) };
    inline DescribeSparkSQLDiagnosisAttributeResponseBody& setRoot(OperatorNode && root) { DARABONBA_PTR_SET_RVALUE(root_, root) };


  protected:
    // The information about the request denial.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The application ID.
    // 
    // >  You can call the [ListSparkApps](https://help.aliyun.com/document_detail/612475.html) operation to query a list of Spark application IDs.
    std::shared_ptr<string> appId_ = nullptr;
    // The queried diagnostic information.
    std::shared_ptr<vector<Adb4MysqlSparkDiagnosisInfo>> diagnosisInfos_ = nullptr;
    // The execution duration of the query. Unit: milliseconds.
    std::shared_ptr<int64_t> elapsedTime_ = nullptr;
    // The ID of the query executed within the Spark application.
    std::shared_ptr<int64_t> innerQueryId_ = nullptr;
    // The operators sorted by metrics.
    std::shared_ptr<DescribeSparkSQLDiagnosisAttributeResponseBodyOperatorListSortedByMetrics> operatorListSortedByMetrics_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The Spark execution plan tree.
    std::shared_ptr<OperatorNode> root_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
