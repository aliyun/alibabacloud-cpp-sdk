// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPERIPHERALDRIVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPERIPHERALDRIVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePeripheralDriversRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePeripheralDriversRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Brand, brand_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(DriverIds, driverIds_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePeripheralDriversRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Brand, brand_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(DriverIds, driverIds_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribePeripheralDriversRequest() = default ;
    DescribePeripheralDriversRequest(const DescribePeripheralDriversRequest &) = default ;
    DescribePeripheralDriversRequest(DescribePeripheralDriversRequest &&) = default ;
    DescribePeripheralDriversRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePeripheralDriversRequest() = default ;
    DescribePeripheralDriversRequest& operator=(const DescribePeripheralDriversRequest &) = default ;
    DescribePeripheralDriversRequest& operator=(DescribePeripheralDriversRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brand_ == nullptr
        && this->deviceType_ == nullptr && this->driverIds_ == nullptr && this->filter_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->ownerType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline string getBrand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
    inline DescribePeripheralDriversRequest& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline DescribePeripheralDriversRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // driverIds Field Functions 
    bool hasDriverIds() const { return this->driverIds_ != nullptr;};
    void deleteDriverIds() { this->driverIds_ = nullptr;};
    inline const vector<string> & getDriverIds() const { DARABONBA_PTR_GET_CONST(driverIds_, vector<string>) };
    inline vector<string> getDriverIds() { DARABONBA_PTR_GET(driverIds_, vector<string>) };
    inline DescribePeripheralDriversRequest& setDriverIds(const vector<string> & driverIds) { DARABONBA_PTR_SET_VALUE(driverIds_, driverIds) };
    inline DescribePeripheralDriversRequest& setDriverIds(vector<string> && driverIds) { DARABONBA_PTR_SET_RVALUE(driverIds_, driverIds) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline DescribePeripheralDriversRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePeripheralDriversRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePeripheralDriversRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline DescribePeripheralDriversRequest& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePeripheralDriversRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePeripheralDriversRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The brand identifier. Exact match is used. The value depends on the actual configuration and is not a fixed enumeration. If this parameter is not specified, drivers of all brands are returned. The example value is provided to illustrate the format only.
    shared_ptr<string> brand_ {};
    // The device type identifier. Exact match is used. The value depends on the actual configuration. For example, printer indicates a printer. If this parameter is not specified, drivers of all device types are returned.
    shared_ptr<string> deviceType_ {};
    // The list of driver IDs. If this parameter is not specified or an empty array is passed in, no filtering by driver ID is applied. Only drivers that are visible to the current account and match the specified IDs are returned. IDs that do not match any driver do not produce corresponding records.
    shared_ptr<vector<string>> driverIds_ {};
    // The search keyword. The keyword is matched against the driver ID, brand identifier, driver name, description, device type, or brand display name. A hit on any field qualifies the driver. The wildcard % matches any number of characters, and _ matches a single character. If this parameter is not specified, no keyword filtering is applied.
    shared_ptr<string> filter_ {};
    // Reserved parameter. This parameter does not participate in queries or pagination. Do not specify this parameter. Use PageSize to set the number of entries per page. The example value 20 is provided only to illustrate the integer type. It is not the default value of this parameter and does not take effect if specified.
    shared_ptr<int32_t> maxResults_ {};
    // Reserved parameter. Token-based pagination is not supported. Do not specify this parameter. Use PageNumber to specify the page number. The example value token-for-format-only is provided only to illustrate the string type and is not a usable pagination token.
    shared_ptr<string> nextToken_ {};
    // The driver ownership. Valid values:
    // - WUYING: Wuying official driver.
    // - CUSTOMER: Custom driver of the current account.
    // 
    // If this parameter is not specified, both types of drivers are queried.
    shared_ptr<string> ownerType_ {};
    // The page number. Start from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 500. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
