// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTERNALDATASERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTERNALDATASERVICESRESPONSEBODY_HPP_
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
  class ListExternalDataServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExternalDataServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceItems, serviceItems_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExternalDataServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceItems, serviceItems_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListExternalDataServicesResponseBody() = default ;
    ListExternalDataServicesResponseBody(const ListExternalDataServicesResponseBody &) = default ;
    ListExternalDataServicesResponseBody(ListExternalDataServicesResponseBody &&) = default ;
    ListExternalDataServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExternalDataServicesResponseBody() = default ;
    ListExternalDataServicesResponseBody& operator=(const ListExternalDataServicesResponseBody &) = default ;
    ListExternalDataServicesResponseBody& operator=(ListExternalDataServicesResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(ServiceSpec, serviceSpec_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceItems& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ServiceDescription, serviceDescription_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
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
        && this->modifyTime_ == nullptr && this->serviceDescription_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->serviceSpec_ == nullptr
        && this->serviceType_ == nullptr && this->status_ == nullptr; };
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


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline ServiceItems& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


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
      // The time when the service was created.
      shared_ptr<string> createTime_ {};
      // The time when the service was last modified.
      shared_ptr<string> modifyTime_ {};
      // The description of the service.
      shared_ptr<string> serviceDescription_ {};
      // The service ID.
      shared_ptr<string> serviceId_ {};
      // The name of the service.
      shared_ptr<string> serviceName_ {};
      // The specifications of the service. Unit: compute units (CUs).
      shared_ptr<string> serviceSpec_ {};
      // The type of the service. Valid values:
      // 
      // *   pxf
      shared_ptr<string> serviceType_ {};
      // The status of the service. Valid values:
      // 
      // *   Init
      // *   Running
      // *   Exception
      // *   Paused
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->requestId_ == nullptr && this->serviceItems_ == nullptr && this->totalRecordCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExternalDataServicesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExternalDataServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceItems Field Functions 
    bool hasServiceItems() const { return this->serviceItems_ != nullptr;};
    void deleteServiceItems() { this->serviceItems_ = nullptr;};
    inline const vector<ListExternalDataServicesResponseBody::ServiceItems> & getServiceItems() const { DARABONBA_PTR_GET_CONST(serviceItems_, vector<ListExternalDataServicesResponseBody::ServiceItems>) };
    inline vector<ListExternalDataServicesResponseBody::ServiceItems> getServiceItems() { DARABONBA_PTR_GET(serviceItems_, vector<ListExternalDataServicesResponseBody::ServiceItems>) };
    inline ListExternalDataServicesResponseBody& setServiceItems(const vector<ListExternalDataServicesResponseBody::ServiceItems> & serviceItems) { DARABONBA_PTR_SET_VALUE(serviceItems_, serviceItems) };
    inline ListExternalDataServicesResponseBody& setServiceItems(vector<ListExternalDataServicesResponseBody::ServiceItems> && serviceItems) { DARABONBA_PTR_SET_RVALUE(serviceItems_, serviceItems) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListExternalDataServicesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried services.
    shared_ptr<vector<ListExternalDataServicesResponseBody::ServiceItems>> serviceItems_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
