// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDSTATISTICSDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDSTATISTICSDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedStatisticsDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedStatisticsDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(StatisticsType, statisticsType_);
      DARABONBA_PTR_TO_JSON(StatisticsTypeGatewayType, statisticsTypeGatewayType_);
      DARABONBA_PTR_TO_JSON(StatisticsTypeInstanceValue, statisticsTypeInstanceValue_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedStatisticsDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(StatisticsType, statisticsType_);
      DARABONBA_PTR_FROM_JSON(StatisticsTypeGatewayType, statisticsTypeGatewayType_);
      DARABONBA_PTR_FROM_JSON(StatisticsTypeInstanceValue, statisticsTypeInstanceValue_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeExposedStatisticsDetailRequest() = default ;
    DescribeExposedStatisticsDetailRequest(const DescribeExposedStatisticsDetailRequest &) = default ;
    DescribeExposedStatisticsDetailRequest(DescribeExposedStatisticsDetailRequest &&) = default ;
    DescribeExposedStatisticsDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedStatisticsDetailRequest() = default ;
    DescribeExposedStatisticsDetailRequest& operator=(const DescribeExposedStatisticsDetailRequest &) = default ;
    DescribeExposedStatisticsDetailRequest& operator=(DescribeExposedStatisticsDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteria_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->resourceDirectoryAccountId_ == nullptr && return this->statisticsType_ == nullptr && return this->statisticsTypeGatewayType_ == nullptr
        && return this->statisticsTypeInstanceValue_ == nullptr && return this->uuid_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string criteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline DescribeExposedStatisticsDetailRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeExposedStatisticsDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeExposedStatisticsDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeExposedStatisticsDetailRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // statisticsType Field Functions 
    bool hasStatisticsType() const { return this->statisticsType_ != nullptr;};
    void deleteStatisticsType() { this->statisticsType_ = nullptr;};
    inline string statisticsType() const { DARABONBA_PTR_GET_DEFAULT(statisticsType_, "") };
    inline DescribeExposedStatisticsDetailRequest& setStatisticsType(string statisticsType) { DARABONBA_PTR_SET_VALUE(statisticsType_, statisticsType) };


    // statisticsTypeGatewayType Field Functions 
    bool hasStatisticsTypeGatewayType() const { return this->statisticsTypeGatewayType_ != nullptr;};
    void deleteStatisticsTypeGatewayType() { this->statisticsTypeGatewayType_ = nullptr;};
    inline string statisticsTypeGatewayType() const { DARABONBA_PTR_GET_DEFAULT(statisticsTypeGatewayType_, "") };
    inline DescribeExposedStatisticsDetailRequest& setStatisticsTypeGatewayType(string statisticsTypeGatewayType) { DARABONBA_PTR_SET_VALUE(statisticsTypeGatewayType_, statisticsTypeGatewayType) };


    // statisticsTypeInstanceValue Field Functions 
    bool hasStatisticsTypeInstanceValue() const { return this->statisticsTypeInstanceValue_ != nullptr;};
    void deleteStatisticsTypeInstanceValue() { this->statisticsTypeInstanceValue_ = nullptr;};
    inline string statisticsTypeInstanceValue() const { DARABONBA_PTR_GET_DEFAULT(statisticsTypeInstanceValue_, "") };
    inline DescribeExposedStatisticsDetailRequest& setStatisticsTypeInstanceValue(string statisticsTypeInstanceValue) { DARABONBA_PTR_SET_VALUE(statisticsTypeInstanceValue_, statisticsTypeInstanceValue) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeExposedStatisticsDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The search condition for components.
    std::shared_ptr<string> criteria_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the ID.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
    // The type of the exposed asset. Valid values:
    // 
    // *   **exposureType**: gateway assets
    // *   **exposurePort**: ports
    // *   **exposureComponent**: system components
    // *   **exposureIp**: IP addresses
    // 
    // This parameter is required.
    std::shared_ptr<string> statisticsType_ = nullptr;
    // The type of the gateway asset. This parameter is required when the **StatisticsType** parameter is set to **exposureType**. Valid values:
    // 
    // *   **SLB**: the public IP address of a Server Load Balancer (SLB) instance
    // *   **DNAT**: the NAT gateway that connects to the Internet by using the DNAT feature
    std::shared_ptr<string> statisticsTypeGatewayType_ = nullptr;
    // The ID of the gateway asset. This parameter is required when the **StatisticsType** parameter is set to **exposureType**.
    std::shared_ptr<string> statisticsTypeInstanceValue_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
