// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListLoadBalancersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListLoadBalancersResponseBody() = default ;
    ListLoadBalancersResponseBody(const ListLoadBalancersResponseBody &) = default ;
    ListLoadBalancersResponseBody(ListLoadBalancersResponseBody &&) = default ;
    ListLoadBalancersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBody() = default ;
    ListLoadBalancersResponseBody& operator=(const ListLoadBalancersResponseBody &) = default ;
    ListLoadBalancersResponseBody& operator=(ListLoadBalancersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loadBalancers_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->totalPage_ != nullptr; };
    // loadBalancers Field Functions 
    bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
    void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
    inline const vector<ListLoadBalancersResponseBodyLoadBalancers> & loadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<ListLoadBalancersResponseBodyLoadBalancers>) };
    inline vector<ListLoadBalancersResponseBodyLoadBalancers> loadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<ListLoadBalancersResponseBodyLoadBalancers>) };
    inline ListLoadBalancersResponseBody& setLoadBalancers(const vector<ListLoadBalancersResponseBodyLoadBalancers> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
    inline ListLoadBalancersResponseBody& setLoadBalancers(vector<ListLoadBalancersResponseBodyLoadBalancers> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLoadBalancersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLoadBalancersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLoadBalancersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLoadBalancersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListLoadBalancersResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // An array format that returns the list of load balancers.
    std::shared_ptr<vector<ListLoadBalancersResponseBodyLoadBalancers>> loadBalancers_ = nullptr;
    // Page number, same as the PageNumber in the request parameters.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Number of items per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of items.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // Total number of pages.
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
