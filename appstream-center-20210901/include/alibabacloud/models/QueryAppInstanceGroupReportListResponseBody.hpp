// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPINSTANCEGROUPREPORTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPINSTANCEGROUPREPORTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class QueryAppInstanceGroupReportListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAppInstanceGroupReportListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IndexData, indexData_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAppInstanceGroupReportListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IndexData, indexData_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryAppInstanceGroupReportListResponseBody() = default ;
    QueryAppInstanceGroupReportListResponseBody(const QueryAppInstanceGroupReportListResponseBody &) = default ;
    QueryAppInstanceGroupReportListResponseBody(QueryAppInstanceGroupReportListResponseBody &&) = default ;
    QueryAppInstanceGroupReportListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAppInstanceGroupReportListResponseBody() = default ;
    QueryAppInstanceGroupReportListResponseBody& operator=(const QueryAppInstanceGroupReportListResponseBody &) = default ;
    QueryAppInstanceGroupReportListResponseBody& operator=(QueryAppInstanceGroupReportListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IndexData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IndexData& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, IndexData& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      IndexData() = default ;
      IndexData(const IndexData &) = default ;
      IndexData(IndexData &&) = default ;
      IndexData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IndexData() = default ;
      IndexData& operator=(const IndexData &) = default ;
      IndexData& operator=(IndexData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceGroupName_ == nullptr && this->status_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline IndexData& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceGroupName Field Functions 
      bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
      void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
      inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
      inline IndexData& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IndexData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the app instance group.
      shared_ptr<string> appInstanceGroupId_ {};
      // The name of the app instance group.
      shared_ptr<string> appInstanceGroupName_ {};
      // The current status of the app instance group.
      // 
      // Valid values:
      // 
      // - `DEPLOYING`: Deploying.
      // - `DEPLOYED`: Deployed but not published.
      // - `PUBLISHED`: Published and available to provide services based on the current configurations.
      // - `STOPPING`: Stopping.
      // - `STOPPED`: Stopped.
      // - `MAINTAINING`: Maintaining.
      // - `FAILED`: Deployment or running failed.
      // - `MAINTAIN_FAILED`: Maintenance failed.
      // - `DELETING`: Deleting.
      // - `DELETED`: Deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->indexData_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAppInstanceGroupReportListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // indexData Field Functions 
    bool hasIndexData() const { return this->indexData_ != nullptr;};
    void deleteIndexData() { this->indexData_ = nullptr;};
    inline const vector<QueryAppInstanceGroupReportListResponseBody::IndexData> & getIndexData() const { DARABONBA_PTR_GET_CONST(indexData_, vector<QueryAppInstanceGroupReportListResponseBody::IndexData>) };
    inline vector<QueryAppInstanceGroupReportListResponseBody::IndexData> getIndexData() { DARABONBA_PTR_GET(indexData_, vector<QueryAppInstanceGroupReportListResponseBody::IndexData>) };
    inline QueryAppInstanceGroupReportListResponseBody& setIndexData(const vector<QueryAppInstanceGroupReportListResponseBody::IndexData> & indexData) { DARABONBA_PTR_SET_VALUE(indexData_, indexData) };
    inline QueryAppInstanceGroupReportListResponseBody& setIndexData(vector<QueryAppInstanceGroupReportListResponseBody::IndexData> && indexData) { DARABONBA_PTR_SET_RVALUE(indexData_, indexData) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAppInstanceGroupReportListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryAppInstanceGroupReportListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAppInstanceGroupReportListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAppInstanceGroupReportListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The business status code. A value of `200` indicates that the request is processed. Other values indicate that the processing failed.
    shared_ptr<string> code_ {};
    // The list of app instance group report data.
    shared_ptr<vector<QueryAppInstanceGroupReportListResponseBody::IndexData>> indexData_ {};
    // The description of the request processing result. If the request is successful, `success` is usually returned.
    shared_ptr<string> message_ {};
    // The page number corresponding to the current response.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page used in the current response.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier of the current request, which can be used to troubleshoot request issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
