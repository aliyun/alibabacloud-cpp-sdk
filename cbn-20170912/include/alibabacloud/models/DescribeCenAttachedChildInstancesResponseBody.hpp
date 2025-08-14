// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCenAttachedChildInstancesResponseBodyChildInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenAttachedChildInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenAttachedChildInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChildInstances, childInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenAttachedChildInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildInstances, childInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenAttachedChildInstancesResponseBody() = default ;
    DescribeCenAttachedChildInstancesResponseBody(const DescribeCenAttachedChildInstancesResponseBody &) = default ;
    DescribeCenAttachedChildInstancesResponseBody(DescribeCenAttachedChildInstancesResponseBody &&) = default ;
    DescribeCenAttachedChildInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenAttachedChildInstancesResponseBody() = default ;
    DescribeCenAttachedChildInstancesResponseBody& operator=(const DescribeCenAttachedChildInstancesResponseBody &) = default ;
    DescribeCenAttachedChildInstancesResponseBody& operator=(DescribeCenAttachedChildInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->childInstances_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // childInstances Field Functions 
    bool hasChildInstances() const { return this->childInstances_ != nullptr;};
    void deleteChildInstances() { this->childInstances_ = nullptr;};
    inline const DescribeCenAttachedChildInstancesResponseBodyChildInstances & childInstances() const { DARABONBA_PTR_GET_CONST(childInstances_, DescribeCenAttachedChildInstancesResponseBodyChildInstances) };
    inline DescribeCenAttachedChildInstancesResponseBodyChildInstances childInstances() { DARABONBA_PTR_GET(childInstances_, DescribeCenAttachedChildInstancesResponseBodyChildInstances) };
    inline DescribeCenAttachedChildInstancesResponseBody& setChildInstances(const DescribeCenAttachedChildInstancesResponseBodyChildInstances & childInstances) { DARABONBA_PTR_SET_VALUE(childInstances_, childInstances) };
    inline DescribeCenAttachedChildInstancesResponseBody& setChildInstances(DescribeCenAttachedChildInstancesResponseBodyChildInstances && childInstances) { DARABONBA_PTR_SET_RVALUE(childInstances_, childInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenAttachedChildInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenAttachedChildInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenAttachedChildInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenAttachedChildInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the network instances.
    std::shared_ptr<DescribeCenAttachedChildInstancesResponseBodyChildInstances> childInstances_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
