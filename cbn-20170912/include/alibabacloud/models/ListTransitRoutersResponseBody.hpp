// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRoutersResponseBodyTransitRouters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRoutersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRoutersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouters, transitRouters_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRoutersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouters, transitRouters_);
    };
    ListTransitRoutersResponseBody() = default ;
    ListTransitRoutersResponseBody(const ListTransitRoutersResponseBody &) = default ;
    ListTransitRoutersResponseBody(ListTransitRoutersResponseBody &&) = default ;
    ListTransitRoutersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRoutersResponseBody() = default ;
    ListTransitRoutersResponseBody& operator=(const ListTransitRoutersResponseBody &) = default ;
    ListTransitRoutersResponseBody& operator=(ListTransitRoutersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->transitRouters_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTransitRoutersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTransitRoutersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRoutersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRoutersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouters Field Functions 
    bool hasTransitRouters() const { return this->transitRouters_ != nullptr;};
    void deleteTransitRouters() { this->transitRouters_ = nullptr;};
    inline const vector<ListTransitRoutersResponseBodyTransitRouters> & transitRouters() const { DARABONBA_PTR_GET_CONST(transitRouters_, vector<ListTransitRoutersResponseBodyTransitRouters>) };
    inline vector<ListTransitRoutersResponseBodyTransitRouters> transitRouters() { DARABONBA_PTR_GET(transitRouters_, vector<ListTransitRoutersResponseBodyTransitRouters>) };
    inline ListTransitRoutersResponseBody& setTransitRouters(const vector<ListTransitRoutersResponseBodyTransitRouters> & transitRouters) { DARABONBA_PTR_SET_VALUE(transitRouters_, transitRouters) };
    inline ListTransitRoutersResponseBody& setTransitRouters(vector<ListTransitRoutersResponseBodyTransitRouters> && transitRouters) { DARABONBA_PTR_SET_RVALUE(transitRouters_, transitRouters) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // A list of transit routers.
    std::shared_ptr<vector<ListTransitRoutersResponseBodyTransitRouters>> transitRouters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
