// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMAINTENANCEATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMAINTENANCEATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceMaintenanceAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMaintenanceAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaintenanceAttributes, maintenanceAttributes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMaintenanceAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaintenanceAttributes, maintenanceAttributes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceMaintenanceAttributesResponseBody() = default ;
    DescribeInstanceMaintenanceAttributesResponseBody(const DescribeInstanceMaintenanceAttributesResponseBody &) = default ;
    DescribeInstanceMaintenanceAttributesResponseBody(DescribeInstanceMaintenanceAttributesResponseBody &&) = default ;
    DescribeInstanceMaintenanceAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMaintenanceAttributesResponseBody() = default ;
    DescribeInstanceMaintenanceAttributesResponseBody& operator=(const DescribeInstanceMaintenanceAttributesResponseBody &) = default ;
    DescribeInstanceMaintenanceAttributesResponseBody& operator=(DescribeInstanceMaintenanceAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maintenanceAttributes_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // maintenanceAttributes Field Functions 
    bool hasMaintenanceAttributes() const { return this->maintenanceAttributes_ != nullptr;};
    void deleteMaintenanceAttributes() { this->maintenanceAttributes_ = nullptr;};
    inline const DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes & maintenanceAttributes() const { DARABONBA_PTR_GET_CONST(maintenanceAttributes_, DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes) };
    inline DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes maintenanceAttributes() { DARABONBA_PTR_GET(maintenanceAttributes_, DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes) };
    inline DescribeInstanceMaintenanceAttributesResponseBody& setMaintenanceAttributes(const DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes & maintenanceAttributes) { DARABONBA_PTR_SET_VALUE(maintenanceAttributes_, maintenanceAttributes) };
    inline DescribeInstanceMaintenanceAttributesResponseBody& setMaintenanceAttributes(DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes && maintenanceAttributes) { DARABONBA_PTR_SET_RVALUE(maintenanceAttributes_, maintenanceAttributes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceMaintenanceAttributesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceMaintenanceAttributesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceMaintenanceAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceMaintenanceAttributesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maintenance attributes.
    std::shared_ptr<DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributes> maintenanceAttributes_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of queried maintenance attributes.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
