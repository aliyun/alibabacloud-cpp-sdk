// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICEEXPOSURE_HPP_
#define ALIBABACLOUD_MODELS_SERVICEEXPOSURE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ServiceExposure : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceExposure& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PodId, podId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceExposure& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PodId, podId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ServiceExposure() = default ;
    ServiceExposure(const ServiceExposure &) = default ;
    ServiceExposure(ServiceExposure &&) = default ;
    ServiceExposure(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceExposure() = default ;
    ServiceExposure& operator=(const ServiceExposure &) = default ;
    ServiceExposure& operator=(ServiceExposure &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->jobId_ == nullptr && return this->message_ == nullptr && return this->podId_ == nullptr && return this->port_ == nullptr && return this->serviceId_ == nullptr
        && return this->status_ == nullptr && return this->type_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ServiceExposure& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ServiceExposure& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ServiceExposure& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // podId Field Functions 
    bool hasPodId() const { return this->podId_ != nullptr;};
    void deletePodId() { this->podId_ = nullptr;};
    inline string podId() const { DARABONBA_PTR_GET_DEFAULT(podId_, "") };
    inline ServiceExposure& setPodId(string podId) { DARABONBA_PTR_SET_VALUE(podId_, podId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ServiceExposure& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ServiceExposure& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ServiceExposure& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ServiceExposure& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> podId_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
