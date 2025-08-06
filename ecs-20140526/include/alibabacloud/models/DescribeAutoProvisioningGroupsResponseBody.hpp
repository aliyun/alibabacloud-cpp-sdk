// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoProvisioningGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoProvisioningGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroups, autoProvisioningGroups_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoProvisioningGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroups, autoProvisioningGroups_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAutoProvisioningGroupsResponseBody() = default ;
    DescribeAutoProvisioningGroupsResponseBody(const DescribeAutoProvisioningGroupsResponseBody &) = default ;
    DescribeAutoProvisioningGroupsResponseBody(DescribeAutoProvisioningGroupsResponseBody &&) = default ;
    DescribeAutoProvisioningGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoProvisioningGroupsResponseBody() = default ;
    DescribeAutoProvisioningGroupsResponseBody& operator=(const DescribeAutoProvisioningGroupsResponseBody &) = default ;
    DescribeAutoProvisioningGroupsResponseBody& operator=(DescribeAutoProvisioningGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoProvisioningGroups_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // autoProvisioningGroups Field Functions 
    bool hasAutoProvisioningGroups() const { return this->autoProvisioningGroups_ != nullptr;};
    void deleteAutoProvisioningGroups() { this->autoProvisioningGroups_ = nullptr;};
    inline const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups & autoProvisioningGroups() const { DARABONBA_PTR_GET_CONST(autoProvisioningGroups_, DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups autoProvisioningGroups() { DARABONBA_PTR_GET(autoProvisioningGroups_, DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups) };
    inline DescribeAutoProvisioningGroupsResponseBody& setAutoProvisioningGroups(const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups & autoProvisioningGroups) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroups_, autoProvisioningGroups) };
    inline DescribeAutoProvisioningGroupsResponseBody& setAutoProvisioningGroups(DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups && autoProvisioningGroups) { DARABONBA_PTR_SET_RVALUE(autoProvisioningGroups_, autoProvisioningGroups) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAutoProvisioningGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAutoProvisioningGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoProvisioningGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAutoProvisioningGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the auto provisioning groups.
    std::shared_ptr<DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroups> autoProvisioningGroups_ = nullptr;
    // The number of the page returned.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of queried auto provisioning groups.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
