// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTREAMINGDATASERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTREAMINGDATASERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyStreamingDataServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStreamingDataServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceSpec, serviceSpec_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStreamingDataServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceSpec, serviceSpec_);
    };
    ModifyStreamingDataServiceRequest() = default ;
    ModifyStreamingDataServiceRequest(const ModifyStreamingDataServiceRequest &) = default ;
    ModifyStreamingDataServiceRequest(ModifyStreamingDataServiceRequest &&) = default ;
    ModifyStreamingDataServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStreamingDataServiceRequest() = default ;
    ModifyStreamingDataServiceRequest& operator=(const ModifyStreamingDataServiceRequest &) = default ;
    ModifyStreamingDataServiceRequest& operator=(ModifyStreamingDataServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->regionId_ == nullptr && this->serviceDescription_ == nullptr && this->serviceId_ == nullptr && this->serviceSpec_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyStreamingDataServiceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyStreamingDataServiceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string getServiceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline ModifyStreamingDataServiceRequest& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ModifyStreamingDataServiceRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceSpec Field Functions 
    bool hasServiceSpec() const { return this->serviceSpec_ != nullptr;};
    void deleteServiceSpec() { this->serviceSpec_ = nullptr;};
    inline string getServiceSpec() const { DARABONBA_PTR_GET_DEFAULT(serviceSpec_, "") };
    inline ModifyStreamingDataServiceRequest& setServiceSpec(string serviceSpec) { DARABONBA_PTR_SET_VALUE(serviceSpec_, serviceSpec) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/196830.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<string> regionId_ {};
    // The description of the service.
    shared_ptr<string> serviceDescription_ {};
    // The service ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    // The specifications of the service. Unit: capacity units (CUs). Valid values:
    // 
    // *   2
    // *   4
    // *   8
    // *   16
    // 
    // This parameter is required.
    shared_ptr<string> serviceSpec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
