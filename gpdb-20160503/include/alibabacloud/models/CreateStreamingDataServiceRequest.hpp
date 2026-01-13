// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTREAMINGDATASERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTREAMINGDATASERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateStreamingDataServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStreamingDataServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceSpec, serviceSpec_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStreamingDataServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceSpec, serviceSpec_);
    };
    CreateStreamingDataServiceRequest() = default ;
    CreateStreamingDataServiceRequest(const CreateStreamingDataServiceRequest &) = default ;
    CreateStreamingDataServiceRequest(CreateStreamingDataServiceRequest &&) = default ;
    CreateStreamingDataServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStreamingDataServiceRequest() = default ;
    CreateStreamingDataServiceRequest& operator=(const CreateStreamingDataServiceRequest &) = default ;
    CreateStreamingDataServiceRequest& operator=(CreateStreamingDataServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->regionId_ == nullptr && this->serviceDescription_ == nullptr && this->serviceName_ == nullptr && this->serviceSpec_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateStreamingDataServiceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateStreamingDataServiceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string getServiceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline CreateStreamingDataServiceRequest& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateStreamingDataServiceRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceSpec Field Functions 
    bool hasServiceSpec() const { return this->serviceSpec_ != nullptr;};
    void deleteServiceSpec() { this->serviceSpec_ = nullptr;};
    inline string getServiceSpec() const { DARABONBA_PTR_GET_DEFAULT(serviceSpec_, "") };
    inline CreateStreamingDataServiceRequest& setServiceSpec(string serviceSpec) { DARABONBA_PTR_SET_VALUE(serviceSpec_, serviceSpec) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent list of regions.
    shared_ptr<string> regionId_ {};
    // The description of the service.
    shared_ptr<string> serviceDescription_ {};
    // The name of the service.
    // 
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
    // The specifications of the service.
    // 
    // This parameter is required.
    shared_ptr<string> serviceSpec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
