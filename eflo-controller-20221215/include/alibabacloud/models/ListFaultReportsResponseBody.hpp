// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFAULTREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFAULTREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListFaultReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFaultReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Reports, reports_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFaultReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Reports, reports_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFaultReportsResponseBody() = default ;
    ListFaultReportsResponseBody(const ListFaultReportsResponseBody &) = default ;
    ListFaultReportsResponseBody(ListFaultReportsResponseBody &&) = default ;
    ListFaultReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFaultReportsResponseBody() = default ;
    ListFaultReportsResponseBody& operator=(const ListFaultReportsResponseBody &) = default ;
    ListFaultReportsResponseBody& operator=(ListFaultReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Reports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Reports& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DiagnosisType, diagnosisType_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(ReportId, reportId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Reports& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DiagnosisType, diagnosisType_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Reports() = default ;
      Reports(const Reports &) = default ;
      Reports(Reports &&) = default ;
      Reports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Reports() = default ;
      Reports& operator=(const Reports &) = default ;
      Reports& operator=(Reports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->diagnosisType_ == nullptr && this->finishTime_ == nullptr && this->nodeId_ == nullptr && this->reportId_ == nullptr
        && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Reports& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Reports& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // diagnosisType Field Functions 
      bool hasDiagnosisType() const { return this->diagnosisType_ != nullptr;};
      void deleteDiagnosisType() { this->diagnosisType_ = nullptr;};
      inline string getDiagnosisType() const { DARABONBA_PTR_GET_DEFAULT(diagnosisType_, "") };
      inline Reports& setDiagnosisType(string diagnosisType) { DARABONBA_PTR_SET_VALUE(diagnosisType_, diagnosisType) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline Reports& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Reports& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline Reports& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Reports& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the fault report was created. The time is in the YYYY-MM-DD HH:mm:ss format.
      shared_ptr<string> createTime_ {};
      // The description of the fault report.
      shared_ptr<string> description_ {};
      // The diagnosis type.
      shared_ptr<string> diagnosisType_ {};
      // The time when the fault report was resolved. The time is in the YYYY-MM-DD HH:mm:ss format.
      shared_ptr<string> finishTime_ {};
      // The node ID.
      shared_ptr<string> nodeId_ {};
      // The fault report ID.
      shared_ptr<string> reportId_ {};
      // The status of the fault report.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->nextToken_ == nullptr && this->reports_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListFaultReportsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFaultReportsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline const vector<ListFaultReportsResponseBody::Reports> & getReports() const { DARABONBA_PTR_GET_CONST(reports_, vector<ListFaultReportsResponseBody::Reports>) };
    inline vector<ListFaultReportsResponseBody::Reports> getReports() { DARABONBA_PTR_GET(reports_, vector<ListFaultReportsResponseBody::Reports>) };
    inline ListFaultReportsResponseBody& setReports(const vector<ListFaultReportsResponseBody::Reports> & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
    inline ListFaultReportsResponseBody& setReports(vector<ListFaultReportsResponseBody::Reports> && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFaultReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The fault report details.
    shared_ptr<vector<ListFaultReportsResponseBody::Reports>> reports_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
