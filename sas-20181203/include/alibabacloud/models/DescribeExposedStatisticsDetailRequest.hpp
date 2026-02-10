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
      DARABONBA_PTR_TO_JSON(ExposureIp, exposureIp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
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
      DARABONBA_PTR_FROM_JSON(ExposureIp, exposureIp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
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
        && this->currentPage_ == nullptr && this->exposureIp_ == nullptr && this->instanceId_ == nullptr && this->pageSize_ == nullptr && this->resourceDirectoryAccountId_ == nullptr
        && this->statisticsType_ == nullptr && this->statisticsTypeGatewayType_ == nullptr && this->statisticsTypeInstanceValue_ == nullptr && this->uuid_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline DescribeExposedStatisticsDetailRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeExposedStatisticsDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // exposureIp Field Functions 
    bool hasExposureIp() const { return this->exposureIp_ != nullptr;};
    void deleteExposureIp() { this->exposureIp_ = nullptr;};
    inline string getExposureIp() const { DARABONBA_PTR_GET_DEFAULT(exposureIp_, "") };
    inline DescribeExposedStatisticsDetailRequest& setExposureIp(string exposureIp) { DARABONBA_PTR_SET_VALUE(exposureIp_, exposureIp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeExposedStatisticsDetailRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeExposedStatisticsDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeExposedStatisticsDetailRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // statisticsType Field Functions 
    bool hasStatisticsType() const { return this->statisticsType_ != nullptr;};
    void deleteStatisticsType() { this->statisticsType_ = nullptr;};
    inline string getStatisticsType() const { DARABONBA_PTR_GET_DEFAULT(statisticsType_, "") };
    inline DescribeExposedStatisticsDetailRequest& setStatisticsType(string statisticsType) { DARABONBA_PTR_SET_VALUE(statisticsType_, statisticsType) };


    // statisticsTypeGatewayType Field Functions 
    bool hasStatisticsTypeGatewayType() const { return this->statisticsTypeGatewayType_ != nullptr;};
    void deleteStatisticsTypeGatewayType() { this->statisticsTypeGatewayType_ = nullptr;};
    inline string getStatisticsTypeGatewayType() const { DARABONBA_PTR_GET_DEFAULT(statisticsTypeGatewayType_, "") };
    inline DescribeExposedStatisticsDetailRequest& setStatisticsTypeGatewayType(string statisticsTypeGatewayType) { DARABONBA_PTR_SET_VALUE(statisticsTypeGatewayType_, statisticsTypeGatewayType) };


    // statisticsTypeInstanceValue Field Functions 
    bool hasStatisticsTypeInstanceValue() const { return this->statisticsTypeInstanceValue_ != nullptr;};
    void deleteStatisticsTypeInstanceValue() { this->statisticsTypeInstanceValue_ = nullptr;};
    inline string getStatisticsTypeInstanceValue() const { DARABONBA_PTR_GET_DEFAULT(statisticsTypeInstanceValue_, "") };
    inline DescribeExposedStatisticsDetailRequest& setStatisticsTypeInstanceValue(string statisticsTypeInstanceValue) { DARABONBA_PTR_SET_VALUE(statisticsTypeInstanceValue_, statisticsTypeInstanceValue) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeExposedStatisticsDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The search condition for components.
    shared_ptr<string> criteria_ {};
    // The number of the page to return.
    shared_ptr<int32_t> currentPage_ {};
    // The public IP address of the server or the cloud asset.
    shared_ptr<string> exposureIp_ {};
    // The instance ID of the asset.
    shared_ptr<string> instanceId_ {};
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the ID.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The type of the exposed asset. Valid values:
    // 
    // *   **exposureType**: gateway assets
    // *   **exposurePort**: ports
    // *   **exposureComponent**: system components
    // *   **exposureIp**: IP addresses
    // 
    // This parameter is required.
    shared_ptr<string> statisticsType_ {};
    // The type of the gateway asset. This parameter is required when the **StatisticsType** parameter is set to **exposureType**. Valid values:
    // 
    // *   **SLB**: the public IP address of a Server Load Balancer (SLB) instance
    // *   **DNAT**: the NAT gateway that connects to the Internet by using the DNAT feature
    shared_ptr<string> statisticsTypeGatewayType_ {};
    // The ID of the gateway asset. This parameter is required when the **StatisticsType** parameter is set to **exposureType**.
    shared_ptr<string> statisticsTypeInstanceValue_ {};
    // The UUID of the server.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
