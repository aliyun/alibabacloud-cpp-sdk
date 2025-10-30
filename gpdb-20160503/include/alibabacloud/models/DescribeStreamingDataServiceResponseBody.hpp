// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTREAMINGDATASERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTREAMINGDATASERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeStreamingDataServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStreamingDataServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceIp, serviceIp_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceOwnerId, serviceOwnerId_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(ServiceSpec, serviceSpec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStreamingDataServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceIp, serviceIp_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceOwnerId, serviceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(ServiceSpec, serviceSpec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeStreamingDataServiceResponseBody() = default ;
    DescribeStreamingDataServiceResponseBody(const DescribeStreamingDataServiceResponseBody &) = default ;
    DescribeStreamingDataServiceResponseBody(DescribeStreamingDataServiceResponseBody &&) = default ;
    DescribeStreamingDataServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStreamingDataServiceResponseBody() = default ;
    DescribeStreamingDataServiceResponseBody& operator=(const DescribeStreamingDataServiceResponseBody &) = default ;
    DescribeStreamingDataServiceResponseBody& operator=(DescribeStreamingDataServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->modifyTime_ == nullptr && return this->requestId_ == nullptr && return this->serviceDescription_ == nullptr && return this->serviceId_ == nullptr && return this->serviceIp_ == nullptr
        && return this->serviceManaged_ == nullptr && return this->serviceName_ == nullptr && return this->serviceOwnerId_ == nullptr && return this->servicePort_ == nullptr && return this->serviceSpec_ == nullptr
        && return this->status_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeStreamingDataServiceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeStreamingDataServiceResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStreamingDataServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string serviceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline DescribeStreamingDataServiceResponseBody& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DescribeStreamingDataServiceResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceIp Field Functions 
    bool hasServiceIp() const { return this->serviceIp_ != nullptr;};
    void deleteServiceIp() { this->serviceIp_ = nullptr;};
    inline string serviceIp() const { DARABONBA_PTR_GET_DEFAULT(serviceIp_, "") };
    inline DescribeStreamingDataServiceResponseBody& setServiceIp(string serviceIp) { DARABONBA_PTR_SET_VALUE(serviceIp_, serviceIp) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool serviceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline DescribeStreamingDataServiceResponseBody& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeStreamingDataServiceResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceOwnerId Field Functions 
    bool hasServiceOwnerId() const { return this->serviceOwnerId_ != nullptr;};
    void deleteServiceOwnerId() { this->serviceOwnerId_ = nullptr;};
    inline string serviceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(serviceOwnerId_, "") };
    inline DescribeStreamingDataServiceResponseBody& setServiceOwnerId(string serviceOwnerId) { DARABONBA_PTR_SET_VALUE(serviceOwnerId_, serviceOwnerId) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline int32_t servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
    inline DescribeStreamingDataServiceResponseBody& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // serviceSpec Field Functions 
    bool hasServiceSpec() const { return this->serviceSpec_ != nullptr;};
    void deleteServiceSpec() { this->serviceSpec_ = nullptr;};
    inline string serviceSpec() const { DARABONBA_PTR_GET_DEFAULT(serviceSpec_, "") };
    inline DescribeStreamingDataServiceResponseBody& setServiceSpec(string serviceSpec) { DARABONBA_PTR_SET_VALUE(serviceSpec_, serviceSpec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeStreamingDataServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the service was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the service was last modified.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The description of the service.
    std::shared_ptr<string> serviceDescription_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The IP address of the service.
    std::shared_ptr<string> serviceIp_ = nullptr;
    // The service is managed by other aliyun product or not.
    std::shared_ptr<bool> serviceManaged_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The service account uid of the aliyun product
    std::shared_ptr<string> serviceOwnerId_ = nullptr;
    // The port number of the service.
    std::shared_ptr<int32_t> servicePort_ = nullptr;
    // The specifications of the service.
    std::shared_ptr<string> serviceSpec_ = nullptr;
    // The status of the service. Valid values:
    // 
    // *   Init
    // *   Running
    // *   Exception
    // *   Paused
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
