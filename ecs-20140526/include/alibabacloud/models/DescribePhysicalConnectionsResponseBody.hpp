// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePhysicalConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhysicalConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionSet, physicalConnectionSet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhysicalConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionSet, physicalConnectionSet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePhysicalConnectionsResponseBody() = default ;
    DescribePhysicalConnectionsResponseBody(const DescribePhysicalConnectionsResponseBody &) = default ;
    DescribePhysicalConnectionsResponseBody(DescribePhysicalConnectionsResponseBody &&) = default ;
    DescribePhysicalConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhysicalConnectionsResponseBody() = default ;
    DescribePhysicalConnectionsResponseBody& operator=(const DescribePhysicalConnectionsResponseBody &) = default ;
    DescribePhysicalConnectionsResponseBody& operator=(DescribePhysicalConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->physicalConnectionSet_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePhysicalConnectionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePhysicalConnectionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // physicalConnectionSet Field Functions 
    bool hasPhysicalConnectionSet() const { return this->physicalConnectionSet_ != nullptr;};
    void deletePhysicalConnectionSet() { this->physicalConnectionSet_ = nullptr;};
    inline const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet & physicalConnectionSet() const { DARABONBA_PTR_GET_CONST(physicalConnectionSet_, DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet) };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet physicalConnectionSet() { DARABONBA_PTR_GET(physicalConnectionSet_, DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet) };
    inline DescribePhysicalConnectionsResponseBody& setPhysicalConnectionSet(const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet & physicalConnectionSet) { DARABONBA_PTR_SET_VALUE(physicalConnectionSet_, physicalConnectionSet) };
    inline DescribePhysicalConnectionsResponseBody& setPhysicalConnectionSet(DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet && physicalConnectionSet) { DARABONBA_PTR_SET_RVALUE(physicalConnectionSet_, physicalConnectionSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePhysicalConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePhysicalConnectionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet> physicalConnectionSet_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
