// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPluginStatusResponseBodyInstancePluginStatusSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ListPluginStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstancePluginStatusSet, instancePluginStatusSet_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstancePluginStatusSet, instancePluginStatusSet_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPluginStatusResponseBody() = default ;
    ListPluginStatusResponseBody(const ListPluginStatusResponseBody &) = default ;
    ListPluginStatusResponseBody(ListPluginStatusResponseBody &&) = default ;
    ListPluginStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginStatusResponseBody() = default ;
    ListPluginStatusResponseBody& operator=(const ListPluginStatusResponseBody &) = default ;
    ListPluginStatusResponseBody& operator=(ListPluginStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instancePluginStatusSet_ == nullptr
        && return this->nextToken_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // instancePluginStatusSet Field Functions 
    bool hasInstancePluginStatusSet() const { return this->instancePluginStatusSet_ != nullptr;};
    void deleteInstancePluginStatusSet() { this->instancePluginStatusSet_ = nullptr;};
    inline const ListPluginStatusResponseBodyInstancePluginStatusSet & instancePluginStatusSet() const { DARABONBA_PTR_GET_CONST(instancePluginStatusSet_, ListPluginStatusResponseBodyInstancePluginStatusSet) };
    inline ListPluginStatusResponseBodyInstancePluginStatusSet instancePluginStatusSet() { DARABONBA_PTR_GET(instancePluginStatusSet_, ListPluginStatusResponseBodyInstancePluginStatusSet) };
    inline ListPluginStatusResponseBody& setInstancePluginStatusSet(const ListPluginStatusResponseBodyInstancePluginStatusSet & instancePluginStatusSet) { DARABONBA_PTR_SET_VALUE(instancePluginStatusSet_, instancePluginStatusSet) };
    inline ListPluginStatusResponseBody& setInstancePluginStatusSet(ListPluginStatusResponseBodyInstancePluginStatusSet && instancePluginStatusSet) { DARABONBA_PTR_SET_RVALUE(instancePluginStatusSet_, instancePluginStatusSet) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPluginStatusResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListPluginStatusResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListPluginStatusResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPluginStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListPluginStatusResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The states of Cloud Assistant plug-ins on the instances.
    std::shared_ptr<ListPluginStatusResponseBodyInstancePluginStatusSet> instancePluginStatusSet_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
