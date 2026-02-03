// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNISINSPECTIONTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNISINSPECTIONTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class ListNisInspectionTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNisInspectionTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionTaskList, inspectionTaskList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNisInspectionTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionTaskList, inspectionTaskList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNisInspectionTasksResponseBody() = default ;
    ListNisInspectionTasksResponseBody(const ListNisInspectionTasksResponseBody &) = default ;
    ListNisInspectionTasksResponseBody(ListNisInspectionTasksResponseBody &&) = default ;
    ListNisInspectionTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNisInspectionTasksResponseBody() = default ;
    ListNisInspectionTasksResponseBody& operator=(const ListNisInspectionTasksResponseBody &) = default ;
    ListNisInspectionTasksResponseBody& operator=(ListNisInspectionTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InspectionTaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InspectionTaskList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InspectionName, inspectionName_);
        DARABONBA_PTR_TO_JSON(InspectionProject, inspectionProject_);
        DARABONBA_PTR_TO_JSON(InspectionTaskId, inspectionTaskId_);
        DARABONBA_PTR_TO_JSON(LastUpdateReportId, lastUpdateReportId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, InspectionTaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InspectionName, inspectionName_);
        DARABONBA_PTR_FROM_JSON(InspectionProject, inspectionProject_);
        DARABONBA_PTR_FROM_JSON(InspectionTaskId, inspectionTaskId_);
        DARABONBA_PTR_FROM_JSON(LastUpdateReportId, lastUpdateReportId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      InspectionTaskList() = default ;
      InspectionTaskList(const InspectionTaskList &) = default ;
      InspectionTaskList(InspectionTaskList &&) = default ;
      InspectionTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InspectionTaskList() = default ;
      InspectionTaskList& operator=(const InspectionTaskList &) = default ;
      InspectionTaskList& operator=(InspectionTaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->inspectionName_ == nullptr && this->inspectionProject_ == nullptr && this->inspectionTaskId_ == nullptr && this->lastUpdateReportId_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline InspectionTaskList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // inspectionName Field Functions 
      bool hasInspectionName() const { return this->inspectionName_ != nullptr;};
      void deleteInspectionName() { this->inspectionName_ = nullptr;};
      inline string getInspectionName() const { DARABONBA_PTR_GET_DEFAULT(inspectionName_, "") };
      inline InspectionTaskList& setInspectionName(string inspectionName) { DARABONBA_PTR_SET_VALUE(inspectionName_, inspectionName) };


      // inspectionProject Field Functions 
      bool hasInspectionProject() const { return this->inspectionProject_ != nullptr;};
      void deleteInspectionProject() { this->inspectionProject_ = nullptr;};
      inline string getInspectionProject() const { DARABONBA_PTR_GET_DEFAULT(inspectionProject_, "") };
      inline InspectionTaskList& setInspectionProject(string inspectionProject) { DARABONBA_PTR_SET_VALUE(inspectionProject_, inspectionProject) };


      // inspectionTaskId Field Functions 
      bool hasInspectionTaskId() const { return this->inspectionTaskId_ != nullptr;};
      void deleteInspectionTaskId() { this->inspectionTaskId_ = nullptr;};
      inline string getInspectionTaskId() const { DARABONBA_PTR_GET_DEFAULT(inspectionTaskId_, "") };
      inline InspectionTaskList& setInspectionTaskId(string inspectionTaskId) { DARABONBA_PTR_SET_VALUE(inspectionTaskId_, inspectionTaskId) };


      // lastUpdateReportId Field Functions 
      bool hasLastUpdateReportId() const { return this->lastUpdateReportId_ != nullptr;};
      void deleteLastUpdateReportId() { this->lastUpdateReportId_ = nullptr;};
      inline string getLastUpdateReportId() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateReportId_, "") };
      inline InspectionTaskList& setLastUpdateReportId(string lastUpdateReportId) { DARABONBA_PTR_SET_VALUE(lastUpdateReportId_, lastUpdateReportId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InspectionTaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> inspectionName_ {};
      shared_ptr<string> inspectionProject_ {};
      shared_ptr<string> inspectionTaskId_ {};
      shared_ptr<string> lastUpdateReportId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->inspectionTaskList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // inspectionTaskList Field Functions 
    bool hasInspectionTaskList() const { return this->inspectionTaskList_ != nullptr;};
    void deleteInspectionTaskList() { this->inspectionTaskList_ = nullptr;};
    inline const vector<ListNisInspectionTasksResponseBody::InspectionTaskList> & getInspectionTaskList() const { DARABONBA_PTR_GET_CONST(inspectionTaskList_, vector<ListNisInspectionTasksResponseBody::InspectionTaskList>) };
    inline vector<ListNisInspectionTasksResponseBody::InspectionTaskList> getInspectionTaskList() { DARABONBA_PTR_GET(inspectionTaskList_, vector<ListNisInspectionTasksResponseBody::InspectionTaskList>) };
    inline ListNisInspectionTasksResponseBody& setInspectionTaskList(const vector<ListNisInspectionTasksResponseBody::InspectionTaskList> & inspectionTaskList) { DARABONBA_PTR_SET_VALUE(inspectionTaskList_, inspectionTaskList) };
    inline ListNisInspectionTasksResponseBody& setInspectionTaskList(vector<ListNisInspectionTasksResponseBody::InspectionTaskList> && inspectionTaskList) { DARABONBA_PTR_SET_RVALUE(inspectionTaskList_, inspectionTaskList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNisInspectionTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNisInspectionTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNisInspectionTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNisInspectionTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListNisInspectionTasksResponseBody::InspectionTaskList>> inspectionTaskList_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
