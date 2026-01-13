// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTREAMINGDATASERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTREAMINGDATASERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListStreamingDataServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStreamingDataServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceItems, serviceItems_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStreamingDataServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceItems, serviceItems_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListStreamingDataServicesResponseBody() = default ;
    ListStreamingDataServicesResponseBody(const ListStreamingDataServicesResponseBody &) = default ;
    ListStreamingDataServicesResponseBody(ListStreamingDataServicesResponseBody &&) = default ;
    ListStreamingDataServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStreamingDataServicesResponseBody() = default ;
    ListStreamingDataServicesResponseBody& operator=(const ListStreamingDataServicesResponseBody &) = default ;
    ListStreamingDataServicesResponseBody& operator=(ListStreamingDataServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceItems& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ServiceItems& obj) { 
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
      ServiceItems() = default ;
      ServiceItems(const ServiceItems &) = default ;
      ServiceItems(ServiceItems &&) = default ;
      ServiceItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceItems() = default ;
      ServiceItems& operator=(const ServiceItems &) = default ;
      ServiceItems& operator=(ServiceItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->modifyTime_ == nullptr && this->serviceDescription_ == nullptr && this->serviceId_ == nullptr && this->serviceIp_ == nullptr && this->serviceManaged_ == nullptr
        && this->serviceName_ == nullptr && this->serviceOwnerId_ == nullptr && this->servicePort_ == nullptr && this->serviceSpec_ == nullptr && this->serviceType_ == nullptr
        && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ServiceItems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline ServiceItems& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // serviceDescription Field Functions 
      bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
      void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
      inline string getServiceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
      inline ServiceItems& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline ServiceItems& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceIp Field Functions 
      bool hasServiceIp() const { return this->serviceIp_ != nullptr;};
      void deleteServiceIp() { this->serviceIp_ = nullptr;};
      inline string getServiceIp() const { DARABONBA_PTR_GET_DEFAULT(serviceIp_, "") };
      inline ServiceItems& setServiceIp(string serviceIp) { DARABONBA_PTR_SET_VALUE(serviceIp_, serviceIp) };


      // serviceManaged Field Functions 
      bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
      void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
      inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
      inline ServiceItems& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline ServiceItems& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // serviceOwnerId Field Functions 
      bool hasServiceOwnerId() const { return this->serviceOwnerId_ != nullptr;};
      void deleteServiceOwnerId() { this->serviceOwnerId_ = nullptr;};
      inline string getServiceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(serviceOwnerId_, "") };
      inline ServiceItems& setServiceOwnerId(string serviceOwnerId) { DARABONBA_PTR_SET_VALUE(serviceOwnerId_, serviceOwnerId) };


      // servicePort Field Functions 
      bool hasServicePort() const { return this->servicePort_ != nullptr;};
      void deleteServicePort() { this->servicePort_ = nullptr;};
      inline string getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
      inline ServiceItems& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


      // serviceSpec Field Functions 
      bool hasServiceSpec() const { return this->serviceSpec_ != nullptr;};
      void deleteServiceSpec() { this->serviceSpec_ = nullptr;};
      inline string getServiceSpec() const { DARABONBA_PTR_GET_DEFAULT(serviceSpec_, "") };
      inline ServiceItems& setServiceSpec(string serviceSpec) { DARABONBA_PTR_SET_VALUE(serviceSpec_, serviceSpec) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline ServiceItems& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ServiceItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Creation time.
      shared_ptr<string> createTime_ {};
      // Last modified time
      shared_ptr<string> modifyTime_ {};
      // Service description.
      shared_ptr<string> serviceDescription_ {};
      // Service ID.
      shared_ptr<string> serviceId_ {};
      // Service IP.
      shared_ptr<string> serviceIp_ {};
      // Whether it is a managed service.
      shared_ptr<bool> serviceManaged_ {};
      // Service name.
      shared_ptr<string> serviceName_ {};
      // Service owner ID.
      shared_ptr<string> serviceOwnerId_ {};
      // Service port.
      shared_ptr<string> servicePort_ {};
      // Service specification (in CU).
      shared_ptr<string> serviceSpec_ {};
      // Service type, with the following value:
      // 
      // - **adbpgss**
      shared_ptr<string> serviceType_ {};
      // Service status, with the following values:
      // 
      // - Init: Initializing
      // 
      // - Running: In operation
      // 
      // - Exception: Abnormal
      // 
      // - Paused: Suspended
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceItems_ == nullptr && this->totalRecordCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStreamingDataServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceItems Field Functions 
    bool hasServiceItems() const { return this->serviceItems_ != nullptr;};
    void deleteServiceItems() { this->serviceItems_ = nullptr;};
    inline const vector<ListStreamingDataServicesResponseBody::ServiceItems> & getServiceItems() const { DARABONBA_PTR_GET_CONST(serviceItems_, vector<ListStreamingDataServicesResponseBody::ServiceItems>) };
    inline vector<ListStreamingDataServicesResponseBody::ServiceItems> getServiceItems() { DARABONBA_PTR_GET(serviceItems_, vector<ListStreamingDataServicesResponseBody::ServiceItems>) };
    inline ListStreamingDataServicesResponseBody& setServiceItems(const vector<ListStreamingDataServicesResponseBody::ServiceItems> & serviceItems) { DARABONBA_PTR_SET_VALUE(serviceItems_, serviceItems) };
    inline ListStreamingDataServicesResponseBody& setServiceItems(vector<ListStreamingDataServicesResponseBody::ServiceItems> && serviceItems) { DARABONBA_PTR_SET_RVALUE(serviceItems_, serviceItems) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListStreamingDataServicesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returns real-time data service items
    shared_ptr<vector<ListStreamingDataServicesResponseBody::ServiceItems>> serviceItems_ {};
    // Total record count.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
