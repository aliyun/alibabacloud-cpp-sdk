// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDeviceInfoResponseBodyDeviceInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeDeviceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DeviceInfoList, deviceInfoList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DeviceInfoList, deviceInfoList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDeviceInfoResponseBody() = default ;
    DescribeDeviceInfoResponseBody(const DescribeDeviceInfoResponseBody &) = default ;
    DescribeDeviceInfoResponseBody(DescribeDeviceInfoResponseBody &&) = default ;
    DescribeDeviceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceInfoResponseBody() = default ;
    DescribeDeviceInfoResponseBody& operator=(const DescribeDeviceInfoResponseBody &) = default ;
    DescribeDeviceInfoResponseBody& operator=(DescribeDeviceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->deviceInfoList_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDeviceInfoResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // deviceInfoList Field Functions 
    bool hasDeviceInfoList() const { return this->deviceInfoList_ != nullptr;};
    void deleteDeviceInfoList() { this->deviceInfoList_ = nullptr;};
    inline const DescribeDeviceInfoResponseBodyDeviceInfoList & deviceInfoList() const { DARABONBA_PTR_GET_CONST(deviceInfoList_, DescribeDeviceInfoResponseBodyDeviceInfoList) };
    inline DescribeDeviceInfoResponseBodyDeviceInfoList deviceInfoList() { DARABONBA_PTR_GET(deviceInfoList_, DescribeDeviceInfoResponseBodyDeviceInfoList) };
    inline DescribeDeviceInfoResponseBody& setDeviceInfoList(const DescribeDeviceInfoResponseBodyDeviceInfoList & deviceInfoList) { DARABONBA_PTR_SET_VALUE(deviceInfoList_, deviceInfoList) };
    inline DescribeDeviceInfoResponseBody& setDeviceInfoList(DescribeDeviceInfoResponseBodyDeviceInfoList && deviceInfoList) { DARABONBA_PTR_SET_RVALUE(deviceInfoList_, deviceInfoList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDeviceInfoResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeviceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDeviceInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<DescribeDeviceInfoResponseBodyDeviceInfoList> deviceInfoList_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
