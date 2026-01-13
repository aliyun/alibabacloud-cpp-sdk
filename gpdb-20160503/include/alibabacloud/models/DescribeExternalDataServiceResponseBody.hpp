// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXTERNALDATASERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXTERNALDATASERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeExternalDataServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExternalDataServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceSpec, serviceSpec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExternalDataServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceSpec, serviceSpec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeExternalDataServiceResponseBody() = default ;
    DescribeExternalDataServiceResponseBody(const DescribeExternalDataServiceResponseBody &) = default ;
    DescribeExternalDataServiceResponseBody(DescribeExternalDataServiceResponseBody &&) = default ;
    DescribeExternalDataServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExternalDataServiceResponseBody() = default ;
    DescribeExternalDataServiceResponseBody& operator=(const DescribeExternalDataServiceResponseBody &) = default ;
    DescribeExternalDataServiceResponseBody& operator=(DescribeExternalDataServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->modifyTime_ == nullptr && this->requestId_ == nullptr && this->serviceDescription_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr
        && this->serviceSpec_ == nullptr && this->status_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeExternalDataServiceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeExternalDataServiceResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExternalDataServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string getServiceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline DescribeExternalDataServiceResponseBody& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DescribeExternalDataServiceResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeExternalDataServiceResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceSpec Field Functions 
    bool hasServiceSpec() const { return this->serviceSpec_ != nullptr;};
    void deleteServiceSpec() { this->serviceSpec_ = nullptr;};
    inline string getServiceSpec() const { DARABONBA_PTR_GET_DEFAULT(serviceSpec_, "") };
    inline DescribeExternalDataServiceResponseBody& setServiceSpec(string serviceSpec) { DARABONBA_PTR_SET_VALUE(serviceSpec_, serviceSpec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeExternalDataServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the service was created.
    shared_ptr<string> createTime_ {};
    // The time when the service was last modified.
    shared_ptr<string> modifyTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The description of the service.
    shared_ptr<string> serviceDescription_ {};
    // The service ID.
    shared_ptr<string> serviceId_ {};
    // The name of the service.
    shared_ptr<string> serviceName_ {};
    // The specifications of the service. Unit: compute units (CUs).
    shared_ptr<string> serviceSpec_ {};
    // The status of the operation.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
