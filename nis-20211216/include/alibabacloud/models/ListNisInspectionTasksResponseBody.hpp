// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNISINSPECTIONTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNISINSPECTIONTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNisInspectionTasksResponseBodyInspectionTaskList.hpp>
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
    virtual bool empty() const override { return this->inspectionTaskList_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // inspectionTaskList Field Functions 
    bool hasInspectionTaskList() const { return this->inspectionTaskList_ != nullptr;};
    void deleteInspectionTaskList() { this->inspectionTaskList_ = nullptr;};
    inline const vector<ListNisInspectionTasksResponseBodyInspectionTaskList> & inspectionTaskList() const { DARABONBA_PTR_GET_CONST(inspectionTaskList_, vector<ListNisInspectionTasksResponseBodyInspectionTaskList>) };
    inline vector<ListNisInspectionTasksResponseBodyInspectionTaskList> inspectionTaskList() { DARABONBA_PTR_GET(inspectionTaskList_, vector<ListNisInspectionTasksResponseBodyInspectionTaskList>) };
    inline ListNisInspectionTasksResponseBody& setInspectionTaskList(const vector<ListNisInspectionTasksResponseBodyInspectionTaskList> & inspectionTaskList) { DARABONBA_PTR_SET_VALUE(inspectionTaskList_, inspectionTaskList) };
    inline ListNisInspectionTasksResponseBody& setInspectionTaskList(vector<ListNisInspectionTasksResponseBodyInspectionTaskList> && inspectionTaskList) { DARABONBA_PTR_SET_RVALUE(inspectionTaskList_, inspectionTaskList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNisInspectionTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNisInspectionTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNisInspectionTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNisInspectionTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListNisInspectionTasksResponseBodyInspectionTaskList>> inspectionTaskList_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
