// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMaps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenRouteMapsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteMaps, routeMaps_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteMaps, routeMaps_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenRouteMapsResponseBody() = default ;
    DescribeCenRouteMapsResponseBody(const DescribeCenRouteMapsResponseBody &) = default ;
    DescribeCenRouteMapsResponseBody(DescribeCenRouteMapsResponseBody &&) = default ;
    DescribeCenRouteMapsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBody() = default ;
    DescribeCenRouteMapsResponseBody& operator=(const DescribeCenRouteMapsResponseBody &) = default ;
    DescribeCenRouteMapsResponseBody& operator=(DescribeCenRouteMapsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->routeMaps_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenRouteMapsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenRouteMapsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenRouteMapsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeMaps Field Functions 
    bool hasRouteMaps() const { return this->routeMaps_ != nullptr;};
    void deleteRouteMaps() { this->routeMaps_ = nullptr;};
    inline const DescribeCenRouteMapsResponseBodyRouteMaps & routeMaps() const { DARABONBA_PTR_GET_CONST(routeMaps_, DescribeCenRouteMapsResponseBodyRouteMaps) };
    inline DescribeCenRouteMapsResponseBodyRouteMaps routeMaps() { DARABONBA_PTR_GET(routeMaps_, DescribeCenRouteMapsResponseBodyRouteMaps) };
    inline DescribeCenRouteMapsResponseBody& setRouteMaps(const DescribeCenRouteMapsResponseBodyRouteMaps & routeMaps) { DARABONBA_PTR_SET_VALUE(routeMaps_, routeMaps) };
    inline DescribeCenRouteMapsResponseBody& setRouteMaps(DescribeCenRouteMapsResponseBodyRouteMaps && routeMaps) { DARABONBA_PTR_SET_RVALUE(routeMaps_, routeMaps) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenRouteMapsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the routing policy.
    std::shared_ptr<DescribeCenRouteMapsResponseBodyRouteMaps> routeMaps_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
