// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPSNOTICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPSNOTICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListOpsNoticesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpsNoticesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OpsNotices, opsNotices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpsNoticesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OpsNotices, opsNotices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOpsNoticesResponseBody() = default ;
    ListOpsNoticesResponseBody(const ListOpsNoticesResponseBody &) = default ;
    ListOpsNoticesResponseBody(ListOpsNoticesResponseBody &&) = default ;
    ListOpsNoticesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpsNoticesResponseBody() = default ;
    ListOpsNoticesResponseBody& operator=(const ListOpsNoticesResponseBody &) = default ;
    ListOpsNoticesResponseBody& operator=(ListOpsNoticesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OpsNotices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpsNotices& obj) { 
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(NoticeId, noticeId_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(ServiceVersions, serviceVersions_);
        DARABONBA_PTR_TO_JSON(Severity, severity_);
        DARABONBA_PTR_TO_JSON(Solutions, solutions_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, OpsNotices& obj) { 
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(NoticeId, noticeId_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(ServiceVersions, serviceVersions_);
        DARABONBA_PTR_FROM_JSON(Severity, severity_);
        DARABONBA_PTR_FROM_JSON(Solutions, solutions_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      OpsNotices() = default ;
      OpsNotices(const OpsNotices &) = default ;
      OpsNotices(OpsNotices &&) = default ;
      OpsNotices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpsNotices() = default ;
      OpsNotices& operator=(const OpsNotices &) = default ;
      OpsNotices& operator=(OpsNotices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->category_ == nullptr && this->content_ == nullptr && this->noticeId_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr
        && this->serviceVersions_ == nullptr && this->severity_ == nullptr && this->solutions_ == nullptr && this->startTime_ == nullptr && this->success_ == nullptr
        && this->type_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
      inline OpsNotices& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline OpsNotices& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline OpsNotices& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // noticeId Field Functions 
      bool hasNoticeId() const { return this->noticeId_ != nullptr;};
      void deleteNoticeId() { this->noticeId_ = nullptr;};
      inline string getNoticeId() const { DARABONBA_PTR_GET_DEFAULT(noticeId_, "") };
      inline OpsNotices& setNoticeId(string noticeId) { DARABONBA_PTR_SET_VALUE(noticeId_, noticeId) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline OpsNotices& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline OpsNotices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // serviceVersions Field Functions 
      bool hasServiceVersions() const { return this->serviceVersions_ != nullptr;};
      void deleteServiceVersions() { this->serviceVersions_ = nullptr;};
      inline const vector<string> & getServiceVersions() const { DARABONBA_PTR_GET_CONST(serviceVersions_, vector<string>) };
      inline vector<string> getServiceVersions() { DARABONBA_PTR_GET(serviceVersions_, vector<string>) };
      inline OpsNotices& setServiceVersions(const vector<string> & serviceVersions) { DARABONBA_PTR_SET_VALUE(serviceVersions_, serviceVersions) };
      inline OpsNotices& setServiceVersions(vector<string> && serviceVersions) { DARABONBA_PTR_SET_RVALUE(serviceVersions_, serviceVersions) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline OpsNotices& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // solutions Field Functions 
      bool hasSolutions() const { return this->solutions_ != nullptr;};
      void deleteSolutions() { this->solutions_ = nullptr;};
      inline string getSolutions() const { DARABONBA_PTR_GET_DEFAULT(solutions_, "") };
      inline OpsNotices& setSolutions(string solutions) { DARABONBA_PTR_SET_VALUE(solutions_, solutions) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline OpsNotices& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
      inline OpsNotices& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OpsNotices& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The O\\&M item properties.
      shared_ptr<string> attributes_ {};
      // The category. Valid values:
      // 
      // - Availability
      // 
      // - Cost
      // 
      // - Performance
      // 
      // - Recovery
      // 
      // - Security
      shared_ptr<string> category_ {};
      // The content.
      shared_ptr<string> content_ {};
      // The O\\&M notice ID.
      shared_ptr<string> noticeId_ {};
      // The service ID.
      shared_ptr<string> serviceId_ {};
      // The service name.
      shared_ptr<string> serviceName_ {};
      // The service versions.
      shared_ptr<vector<string>> serviceVersions_ {};
      // The severity level. Valid values:
      // 
      // - Critical
      // 
      // - High
      // 
      // - Medium
      // 
      // - Low
      shared_ptr<string> severity_ {};
      // The solution.
      shared_ptr<string> solutions_ {};
      // The start time.
      shared_ptr<string> startTime_ {};
      // Indicates whether the request was successful.
      shared_ptr<string> success_ {};
      // The type. Valid values:
      // 
      // - ServiceInstanceUpgrade: upgrade
      // 
      // - VulnerabilityFix: vulnerability
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->opsNotices_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOpsNoticesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOpsNoticesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // opsNotices Field Functions 
    bool hasOpsNotices() const { return this->opsNotices_ != nullptr;};
    void deleteOpsNotices() { this->opsNotices_ = nullptr;};
    inline const vector<ListOpsNoticesResponseBody::OpsNotices> & getOpsNotices() const { DARABONBA_PTR_GET_CONST(opsNotices_, vector<ListOpsNoticesResponseBody::OpsNotices>) };
    inline vector<ListOpsNoticesResponseBody::OpsNotices> getOpsNotices() { DARABONBA_PTR_GET(opsNotices_, vector<ListOpsNoticesResponseBody::OpsNotices>) };
    inline ListOpsNoticesResponseBody& setOpsNotices(const vector<ListOpsNoticesResponseBody::OpsNotices> & opsNotices) { DARABONBA_PTR_SET_VALUE(opsNotices_, opsNotices) };
    inline ListOpsNoticesResponseBody& setOpsNotices(vector<ListOpsNoticesResponseBody::OpsNotices> && opsNotices) { DARABONBA_PTR_SET_RVALUE(opsNotices_, opsNotices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOpsNoticesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOpsNoticesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token to start the next page of results. If this parameter is not returned, all results have been returned.
    shared_ptr<string> nextToken_ {};
    // The O\\&M notices.
    shared_ptr<vector<ListOpsNoticesResponseBody::OpsNotices>> opsNotices_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
