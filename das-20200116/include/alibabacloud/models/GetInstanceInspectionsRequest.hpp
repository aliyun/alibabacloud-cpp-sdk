// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceInspectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceInspectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceArea, instanceArea_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SearchMap, searchMap_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceInspectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceArea, instanceArea_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SearchMap, searchMap_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetInstanceInspectionsRequest() = default ;
    GetInstanceInspectionsRequest(const GetInstanceInspectionsRequest &) = default ;
    GetInstanceInspectionsRequest(GetInstanceInspectionsRequest &&) = default ;
    GetInstanceInspectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceInspectionsRequest() = default ;
    GetInstanceInspectionsRequest& operator=(const GetInstanceInspectionsRequest &) = default ;
    GetInstanceInspectionsRequest& operator=(GetInstanceInspectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->engine_ == nullptr && this->instanceArea_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->resourceGroupId_ == nullptr
        && this->searchMap_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetInstanceInspectionsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetInstanceInspectionsRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceArea Field Functions 
    bool hasInstanceArea() const { return this->instanceArea_ != nullptr;};
    void deleteInstanceArea() { this->instanceArea_ = nullptr;};
    inline string getInstanceArea() const { DARABONBA_PTR_GET_DEFAULT(instanceArea_, "") };
    inline GetInstanceInspectionsRequest& setInstanceArea(string instanceArea) { DARABONBA_PTR_SET_VALUE(instanceArea_, instanceArea) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline GetInstanceInspectionsRequest& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetInstanceInspectionsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetInstanceInspectionsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // searchMap Field Functions 
    bool hasSearchMap() const { return this->searchMap_ != nullptr;};
    void deleteSearchMap() { this->searchMap_ = nullptr;};
    inline string getSearchMap() const { DARABONBA_PTR_GET_DEFAULT(searchMap_, "") };
    inline GetInstanceInspectionsRequest& setSearchMap(string searchMap) { DARABONBA_PTR_SET_VALUE(searchMap_, searchMap) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetInstanceInspectionsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The end time must be later than the start time.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **Redis**
    // *   **PolarDBMySQL**
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The type of the instance on which the database is deployed. Valid values:
    // 
    // *   **RDS**: an Alibaba Cloud database instance.
    // *   **ECS**: an ECS instance on which a self-managed database is deployed.
    // *   **IDC**: a self-managed database instance that is not deployed on Alibaba Cloud.
    // 
    // >  The value IDC specifies that the instance is deployed in a data center.
    // 
    // This parameter is required.
    shared_ptr<string> instanceArea_ {};
    // The page number. The value must be a positive integer. Default value: 1.
    // 
    // This parameter is required.
    shared_ptr<string> pageNo_ {};
    // The number of entries per page. Default value: 10.
    // 
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The filter condition, which can be specified in one of the following formats:
    // 
    // *   Specify the ID of a single instance in the {"InstanceId":"Instance ID"} format.
    // *   Specify the IDs of multiple instances in the {"InstanceIds":["Instance ID1","Instance ID2"]} format. Separate the instance IDs with commas (,).
    // *   Specify the region in which the instance resides in the {"region":"Region of the instance"} format.
    shared_ptr<string> searchMap_ {};
    // The beginning of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
