// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStackGroupsResponseBodyStackGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackGroups, stackGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackGroups, stackGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListStackGroupsResponseBody() = default ;
    ListStackGroupsResponseBody(const ListStackGroupsResponseBody &) = default ;
    ListStackGroupsResponseBody(ListStackGroupsResponseBody &&) = default ;
    ListStackGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackGroupsResponseBody() = default ;
    ListStackGroupsResponseBody& operator=(const ListStackGroupsResponseBody &) = default ;
    ListStackGroupsResponseBody& operator=(ListStackGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->stackGroups_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStackGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListStackGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackGroups Field Functions 
    bool hasStackGroups() const { return this->stackGroups_ != nullptr;};
    void deleteStackGroups() { this->stackGroups_ = nullptr;};
    inline const vector<ListStackGroupsResponseBodyStackGroups> & stackGroups() const { DARABONBA_PTR_GET_CONST(stackGroups_, vector<ListStackGroupsResponseBodyStackGroups>) };
    inline vector<ListStackGroupsResponseBodyStackGroups> stackGroups() { DARABONBA_PTR_GET(stackGroups_, vector<ListStackGroupsResponseBodyStackGroups>) };
    inline ListStackGroupsResponseBody& setStackGroups(const vector<ListStackGroupsResponseBodyStackGroups> & stackGroups) { DARABONBA_PTR_SET_VALUE(stackGroups_, stackGroups) };
    inline ListStackGroupsResponseBody& setStackGroups(vector<ListStackGroupsResponseBodyStackGroups> && stackGroups) { DARABONBA_PTR_SET_RVALUE(stackGroups_, stackGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListStackGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The stack groups.
    std::shared_ptr<vector<ListStackGroupsResponseBodyStackGroups>> stackGroups_ = nullptr;
    // The total number of stack groups.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
