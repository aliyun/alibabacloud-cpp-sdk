// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoProvisioningGroupHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoProvisioningGroupHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupHistories, autoProvisioningGroupHistories_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoProvisioningGroupHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupHistories, autoProvisioningGroupHistories_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAutoProvisioningGroupHistoryResponseBody() = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody(const DescribeAutoProvisioningGroupHistoryResponseBody &) = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody(DescribeAutoProvisioningGroupHistoryResponseBody &&) = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoProvisioningGroupHistoryResponseBody() = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody& operator=(const DescribeAutoProvisioningGroupHistoryResponseBody &) = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody& operator=(DescribeAutoProvisioningGroupHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoProvisioningGroupHistories_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // autoProvisioningGroupHistories Field Functions 
    bool hasAutoProvisioningGroupHistories() const { return this->autoProvisioningGroupHistories_ != nullptr;};
    void deleteAutoProvisioningGroupHistories() { this->autoProvisioningGroupHistories_ = nullptr;};
    inline const DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories & autoProvisioningGroupHistories() const { DARABONBA_PTR_GET_CONST(autoProvisioningGroupHistories_, DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories) };
    inline DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories autoProvisioningGroupHistories() { DARABONBA_PTR_GET(autoProvisioningGroupHistories_, DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setAutoProvisioningGroupHistories(const DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories & autoProvisioningGroupHistories) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupHistories_, autoProvisioningGroupHistories) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setAutoProvisioningGroupHistories(DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories && autoProvisioningGroupHistories) { DARABONBA_PTR_SET_RVALUE(autoProvisioningGroupHistories_, autoProvisioningGroupHistories) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array consisting of AutoProvisioningGroupHistory data.
    std::shared_ptr<DescribeAutoProvisioningGroupHistoryResponseBodyAutoProvisioningGroupHistories> autoProvisioningGroupHistories_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of queried scheduling tasks in the auto provisioning group.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
