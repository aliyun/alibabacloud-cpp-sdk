// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSFULLSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSFULLSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDisksFullStatusResponseBodyDiskFullStatusSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDisksFullStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksFullStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiskFullStatusSet, diskFullStatusSet_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksFullStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskFullStatusSet, diskFullStatusSet_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDisksFullStatusResponseBody() = default ;
    DescribeDisksFullStatusResponseBody(const DescribeDisksFullStatusResponseBody &) = default ;
    DescribeDisksFullStatusResponseBody(DescribeDisksFullStatusResponseBody &&) = default ;
    DescribeDisksFullStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksFullStatusResponseBody() = default ;
    DescribeDisksFullStatusResponseBody& operator=(const DescribeDisksFullStatusResponseBody &) = default ;
    DescribeDisksFullStatusResponseBody& operator=(DescribeDisksFullStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskFullStatusSet_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // diskFullStatusSet Field Functions 
    bool hasDiskFullStatusSet() const { return this->diskFullStatusSet_ != nullptr;};
    void deleteDiskFullStatusSet() { this->diskFullStatusSet_ = nullptr;};
    inline const DescribeDisksFullStatusResponseBodyDiskFullStatusSet & diskFullStatusSet() const { DARABONBA_PTR_GET_CONST(diskFullStatusSet_, DescribeDisksFullStatusResponseBodyDiskFullStatusSet) };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSet diskFullStatusSet() { DARABONBA_PTR_GET(diskFullStatusSet_, DescribeDisksFullStatusResponseBodyDiskFullStatusSet) };
    inline DescribeDisksFullStatusResponseBody& setDiskFullStatusSet(const DescribeDisksFullStatusResponseBodyDiskFullStatusSet & diskFullStatusSet) { DARABONBA_PTR_SET_VALUE(diskFullStatusSet_, diskFullStatusSet) };
    inline DescribeDisksFullStatusResponseBody& setDiskFullStatusSet(DescribeDisksFullStatusResponseBodyDiskFullStatusSet && diskFullStatusSet) { DARABONBA_PTR_SET_RVALUE(diskFullStatusSet_, diskFullStatusSet) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDisksFullStatusResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDisksFullStatusResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDisksFullStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDisksFullStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The collection of full status information of the EBS devices.
    std::shared_ptr<DescribeDisksFullStatusResponseBodyDiskFullStatusSet> diskFullStatusSet_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of EBS devices for which full status information is returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
