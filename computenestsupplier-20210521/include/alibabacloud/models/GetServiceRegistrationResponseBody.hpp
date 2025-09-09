// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEREGISTRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEREGISTRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceRegistrationResponseBodyDetail.hpp>
#include <alibabacloud/models/GetServiceRegistrationResponseBodyServiceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceRegistrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceRegistrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInfo, serviceInfo_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceRegistrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInfo, serviceInfo_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
    };
    GetServiceRegistrationResponseBody() = default ;
    GetServiceRegistrationResponseBody(const GetServiceRegistrationResponseBody &) = default ;
    GetServiceRegistrationResponseBody(GetServiceRegistrationResponseBody &&) = default ;
    GetServiceRegistrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceRegistrationResponseBody() = default ;
    GetServiceRegistrationResponseBody& operator=(const GetServiceRegistrationResponseBody &) = default ;
    GetServiceRegistrationResponseBody& operator=(GetServiceRegistrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->detail_ != nullptr && this->finishTime_ != nullptr && this->registrationId_ != nullptr && this->requestId_ != nullptr && this->serviceId_ != nullptr
        && this->serviceInfo_ != nullptr && this->serviceVersion_ != nullptr && this->status_ != nullptr && this->submitTime_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetServiceRegistrationResponseBody& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const GetServiceRegistrationResponseBodyDetail & detail() const { DARABONBA_PTR_GET_CONST(detail_, GetServiceRegistrationResponseBodyDetail) };
    inline GetServiceRegistrationResponseBodyDetail detail() { DARABONBA_PTR_GET(detail_, GetServiceRegistrationResponseBodyDetail) };
    inline GetServiceRegistrationResponseBody& setDetail(const GetServiceRegistrationResponseBodyDetail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline GetServiceRegistrationResponseBody& setDetail(GetServiceRegistrationResponseBodyDetail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetServiceRegistrationResponseBody& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // registrationId Field Functions 
    bool hasRegistrationId() const { return this->registrationId_ != nullptr;};
    void deleteRegistrationId() { this->registrationId_ = nullptr;};
    inline string registrationId() const { DARABONBA_PTR_GET_DEFAULT(registrationId_, "") };
    inline GetServiceRegistrationResponseBody& setRegistrationId(string registrationId) { DARABONBA_PTR_SET_VALUE(registrationId_, registrationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceRegistrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceRegistrationResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInfo Field Functions 
    bool hasServiceInfo() const { return this->serviceInfo_ != nullptr;};
    void deleteServiceInfo() { this->serviceInfo_ = nullptr;};
    inline const GetServiceRegistrationResponseBodyServiceInfo & serviceInfo() const { DARABONBA_PTR_GET_CONST(serviceInfo_, GetServiceRegistrationResponseBodyServiceInfo) };
    inline GetServiceRegistrationResponseBodyServiceInfo serviceInfo() { DARABONBA_PTR_GET(serviceInfo_, GetServiceRegistrationResponseBodyServiceInfo) };
    inline GetServiceRegistrationResponseBody& setServiceInfo(const GetServiceRegistrationResponseBodyServiceInfo & serviceInfo) { DARABONBA_PTR_SET_VALUE(serviceInfo_, serviceInfo) };
    inline GetServiceRegistrationResponseBody& setServiceInfo(GetServiceRegistrationResponseBodyServiceInfo && serviceInfo) { DARABONBA_PTR_SET_RVALUE(serviceInfo_, serviceInfo) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline GetServiceRegistrationResponseBody& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceRegistrationResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline GetServiceRegistrationResponseBody& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


  protected:
    // Comment from reviewer.
    std::shared_ptr<string> comment_ = nullptr;
    // The details of service audit.
    std::shared_ptr<GetServiceRegistrationResponseBodyDetail> detail_ = nullptr;
    // Finish time.
    std::shared_ptr<string> finishTime_ = nullptr;
    // Service registration ID.
    std::shared_ptr<string> registrationId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service details.
    std::shared_ptr<GetServiceRegistrationResponseBodyServiceInfo> serviceInfo_ = nullptr;
    // The service version.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // The status of service registration. Valid values:
    // 
    // *   Submitted
    // *   Approved
    // *   Rejected
    // *   Canceled
    // *   Executed
    std::shared_ptr<string> status_ = nullptr;
    // Submit time.
    std::shared_ptr<string> submitTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
