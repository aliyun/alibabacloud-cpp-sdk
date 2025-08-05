// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTREAMINGDATASERVICESRESPONSEBODYSERVICEITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTSTREAMINGDATASERVICESRESPONSEBODYSERVICEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListStreamingDataServicesResponseBodyServiceItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStreamingDataServicesResponseBodyServiceItems& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceIp, serviceIp_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceOwnerId, serviceOwnerId_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(ServiceSpec, serviceSpec_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListStreamingDataServicesResponseBodyServiceItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceIp, serviceIp_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceOwnerId, serviceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(ServiceSpec, serviceSpec_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListStreamingDataServicesResponseBodyServiceItems() = default ;
    ListStreamingDataServicesResponseBodyServiceItems(const ListStreamingDataServicesResponseBodyServiceItems &) = default ;
    ListStreamingDataServicesResponseBodyServiceItems(ListStreamingDataServicesResponseBodyServiceItems &&) = default ;
    ListStreamingDataServicesResponseBodyServiceItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStreamingDataServicesResponseBodyServiceItems() = default ;
    ListStreamingDataServicesResponseBodyServiceItems& operator=(const ListStreamingDataServicesResponseBodyServiceItems &) = default ;
    ListStreamingDataServicesResponseBodyServiceItems& operator=(ListStreamingDataServicesResponseBodyServiceItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->modifyTime_ != nullptr && this->serviceDescription_ != nullptr && this->serviceId_ != nullptr && this->serviceIp_ != nullptr && this->serviceManaged_ != nullptr
        && this->serviceName_ != nullptr && this->serviceOwnerId_ != nullptr && this->servicePort_ != nullptr && this->serviceSpec_ != nullptr && this->serviceType_ != nullptr
        && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListStreamingDataServicesResponseBodyServiceItems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListStreamingDataServicesResponseBodyServiceItems& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string serviceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline ListStreamingDataServicesResponseBodyServiceItems& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListStreamingDataServicesResponseBodyServiceItems& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceIp Field Functions 
    bool hasServiceIp() const { return this->serviceIp_ != nullptr;};
    void deleteServiceIp() { this->serviceIp_ = nullptr;};
    inline string serviceIp() const { DARABONBA_PTR_GET_DEFAULT(serviceIp_, "") };
    inline ListStreamingDataServicesResponseBodyServiceItems& setServiceIp(string serviceIp) { DARABONBA_PTR_SET_VALUE(serviceIp_, serviceIp) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool serviceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline ListStreamingDataServicesResponseBodyServiceItems& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListStreamingDataServicesResponseBodyServiceItems& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceOwnerId Field Functions 
    bool hasServiceOwnerId() const { return this->serviceOwnerId_ != nullptr;};
    void deleteServiceOwnerId() { this->serviceOwnerId_ = nullptr;};
    inline string serviceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(serviceOwnerId_, "") };
    inline ListStreamingDataServicesResponseBodyServiceItems& setServiceOwnerId(string serviceOwnerId) { DARABONBA_PTR_SET_VALUE(serviceOwnerId_, serviceOwnerId) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline string servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
    inline ListStreamingDataServicesResponseBodyServiceItems& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // serviceSpec Field Functions 
    bool hasServiceSpec() const { return this->serviceSpec_ != nullptr;};
    void deleteServiceSpec() { this->serviceSpec_ = nullptr;};
    inline string serviceSpec() const { DARABONBA_PTR_GET_DEFAULT(serviceSpec_, "") };
    inline ListStreamingDataServicesResponseBodyServiceItems& setServiceSpec(string serviceSpec) { DARABONBA_PTR_SET_VALUE(serviceSpec_, serviceSpec) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListStreamingDataServicesResponseBodyServiceItems& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListStreamingDataServicesResponseBodyServiceItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Last modified time
    std::shared_ptr<string> modifyTime_ = nullptr;
    // Service description.
    std::shared_ptr<string> serviceDescription_ = nullptr;
    // Service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // Service IP.
    std::shared_ptr<string> serviceIp_ = nullptr;
    // Whether it is a managed service.
    std::shared_ptr<bool> serviceManaged_ = nullptr;
    // Service name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // Service owner ID.
    std::shared_ptr<string> serviceOwnerId_ = nullptr;
    // Service port.
    std::shared_ptr<string> servicePort_ = nullptr;
    // Service specification (in CU).
    std::shared_ptr<string> serviceSpec_ = nullptr;
    // Service type, with the following value:
    // 
    // - **adbpgss**
    std::shared_ptr<string> serviceType_ = nullptr;
    // Service status, with the following values:
    // 
    // - Init: Initializing
    // 
    // - Running: In operation
    // 
    // - Exception: Abnormal
    // 
    // - Paused: Suspended
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
