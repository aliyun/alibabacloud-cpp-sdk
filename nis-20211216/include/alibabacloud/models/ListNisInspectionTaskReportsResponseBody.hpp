// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNISINSPECTIONTASKREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNISINSPECTIONTASKREPORTSRESPONSEBODY_HPP_
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
  class ListNisInspectionTaskReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNisInspectionTaskReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionReportList, inspectionReportList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNisInspectionTaskReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionReportList, inspectionReportList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNisInspectionTaskReportsResponseBody() = default ;
    ListNisInspectionTaskReportsResponseBody(const ListNisInspectionTaskReportsResponseBody &) = default ;
    ListNisInspectionTaskReportsResponseBody(ListNisInspectionTaskReportsResponseBody &&) = default ;
    ListNisInspectionTaskReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNisInspectionTaskReportsResponseBody() = default ;
    ListNisInspectionTaskReportsResponseBody& operator=(const ListNisInspectionTaskReportsResponseBody &) = default ;
    ListNisInspectionTaskReportsResponseBody& operator=(ListNisInspectionTaskReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InspectionReportList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InspectionReportList& obj) { 
        DARABONBA_PTR_TO_JSON(InspectionReportId, inspectionReportId_);
      };
      friend void from_json(const Darabonba::Json& j, InspectionReportList& obj) { 
        DARABONBA_PTR_FROM_JSON(InspectionReportId, inspectionReportId_);
      };
      InspectionReportList() = default ;
      InspectionReportList(const InspectionReportList &) = default ;
      InspectionReportList(InspectionReportList &&) = default ;
      InspectionReportList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InspectionReportList() = default ;
      InspectionReportList& operator=(const InspectionReportList &) = default ;
      InspectionReportList& operator=(InspectionReportList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inspectionReportId_ == nullptr; };
      // inspectionReportId Field Functions 
      bool hasInspectionReportId() const { return this->inspectionReportId_ != nullptr;};
      void deleteInspectionReportId() { this->inspectionReportId_ = nullptr;};
      inline string getInspectionReportId() const { DARABONBA_PTR_GET_DEFAULT(inspectionReportId_, "") };
      inline InspectionReportList& setInspectionReportId(string inspectionReportId) { DARABONBA_PTR_SET_VALUE(inspectionReportId_, inspectionReportId) };


    protected:
      shared_ptr<string> inspectionReportId_ {};
    };

    virtual bool empty() const override { return this->inspectionReportList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // inspectionReportList Field Functions 
    bool hasInspectionReportList() const { return this->inspectionReportList_ != nullptr;};
    void deleteInspectionReportList() { this->inspectionReportList_ = nullptr;};
    inline const vector<ListNisInspectionTaskReportsResponseBody::InspectionReportList> & getInspectionReportList() const { DARABONBA_PTR_GET_CONST(inspectionReportList_, vector<ListNisInspectionTaskReportsResponseBody::InspectionReportList>) };
    inline vector<ListNisInspectionTaskReportsResponseBody::InspectionReportList> getInspectionReportList() { DARABONBA_PTR_GET(inspectionReportList_, vector<ListNisInspectionTaskReportsResponseBody::InspectionReportList>) };
    inline ListNisInspectionTaskReportsResponseBody& setInspectionReportList(const vector<ListNisInspectionTaskReportsResponseBody::InspectionReportList> & inspectionReportList) { DARABONBA_PTR_SET_VALUE(inspectionReportList_, inspectionReportList) };
    inline ListNisInspectionTaskReportsResponseBody& setInspectionReportList(vector<ListNisInspectionTaskReportsResponseBody::InspectionReportList> && inspectionReportList) { DARABONBA_PTR_SET_RVALUE(inspectionReportList_, inspectionReportList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNisInspectionTaskReportsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNisInspectionTaskReportsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNisInspectionTaskReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNisInspectionTaskReportsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListNisInspectionTaskReportsResponseBody::InspectionReportList>> inspectionReportList_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
