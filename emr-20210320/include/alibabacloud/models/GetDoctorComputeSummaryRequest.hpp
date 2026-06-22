// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorComputeSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorComputeSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComponentInfo, componentInfo_);
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorComputeSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComponentInfo, componentInfo_);
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetDoctorComputeSummaryRequest() = default ;
    GetDoctorComputeSummaryRequest(const GetDoctorComputeSummaryRequest &) = default ;
    GetDoctorComputeSummaryRequest(GetDoctorComputeSummaryRequest &&) = default ;
    GetDoctorComputeSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorComputeSummaryRequest() = default ;
    GetDoctorComputeSummaryRequest& operator=(const GetDoctorComputeSummaryRequest &) = default ;
    GetDoctorComputeSummaryRequest& operator=(GetDoctorComputeSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ComponentInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComponentInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
        DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      };
      friend void from_json(const Darabonba::Json& j, ComponentInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
        DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      };
      ComponentInfo() = default ;
      ComponentInfo(const ComponentInfo &) = default ;
      ComponentInfo(ComponentInfo &&) = default ;
      ComponentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComponentInfo() = default ;
      ComponentInfo& operator=(const ComponentInfo &) = default ;
      ComponentInfo& operator=(ComponentInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentName_ == nullptr
        && this->componentType_ == nullptr; };
      // componentName Field Functions 
      bool hasComponentName() const { return this->componentName_ != nullptr;};
      void deleteComponentName() { this->componentName_ = nullptr;};
      inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
      inline ComponentInfo& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


      // componentType Field Functions 
      bool hasComponentType() const { return this->componentType_ != nullptr;};
      void deleteComponentType() { this->componentType_ = nullptr;};
      inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
      inline ComponentInfo& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    protected:
      // Set the filter condition name based on the value of ComponentType. For example, if you set ComponentType to queue, you can specify a specific queue name to obtain the resource usage of a specific queue.
      shared_ptr<string> componentName_ {};
      // The resource type for filtering. Valid values:
      // 
      // *   engine: filters results by engine.
      // *   queue: filters results by queue.
      // *   cluster: displays the results at the cluster level.
      // 
      // If you do not specify this parameter, the information at the cluster level is displayed by default.
      shared_ptr<string> componentType_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->componentInfo_ == nullptr && this->dateTime_ == nullptr && this->regionId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetDoctorComputeSummaryRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // componentInfo Field Functions 
    bool hasComponentInfo() const { return this->componentInfo_ != nullptr;};
    void deleteComponentInfo() { this->componentInfo_ = nullptr;};
    inline const GetDoctorComputeSummaryRequest::ComponentInfo & getComponentInfo() const { DARABONBA_PTR_GET_CONST(componentInfo_, GetDoctorComputeSummaryRequest::ComponentInfo) };
    inline GetDoctorComputeSummaryRequest::ComponentInfo getComponentInfo() { DARABONBA_PTR_GET(componentInfo_, GetDoctorComputeSummaryRequest::ComponentInfo) };
    inline GetDoctorComputeSummaryRequest& setComponentInfo(const GetDoctorComputeSummaryRequest::ComponentInfo & componentInfo) { DARABONBA_PTR_SET_VALUE(componentInfo_, componentInfo) };
    inline GetDoctorComputeSummaryRequest& setComponentInfo(GetDoctorComputeSummaryRequest::ComponentInfo && componentInfo) { DARABONBA_PTR_SET_RVALUE(componentInfo_, componentInfo) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline GetDoctorComputeSummaryRequest& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDoctorComputeSummaryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The resource information, which is used to filter the results.
    shared_ptr<GetDoctorComputeSummaryRequest::ComponentInfo> componentInfo_ {};
    // Specify the date in the ISO 8601 standard. For example, 2023-01-01 represents January 1, 2023.
    // 
    // This parameter is required.
    shared_ptr<string> dateTime_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
