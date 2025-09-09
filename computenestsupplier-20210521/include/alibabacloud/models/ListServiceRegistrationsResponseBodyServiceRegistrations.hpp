// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEREGISTRATIONSRESPONSEBODYSERVICEREGISTRATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEREGISTRATIONSRESPONSEBODYSERVICEREGISTRATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceRegistrationsResponseBodyServiceRegistrations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceRegistrationsResponseBodyServiceRegistrations& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceRegistrationsResponseBodyServiceRegistrations& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
    };
    ListServiceRegistrationsResponseBodyServiceRegistrations() = default ;
    ListServiceRegistrationsResponseBodyServiceRegistrations(const ListServiceRegistrationsResponseBodyServiceRegistrations &) = default ;
    ListServiceRegistrationsResponseBodyServiceRegistrations(ListServiceRegistrationsResponseBodyServiceRegistrations &&) = default ;
    ListServiceRegistrationsResponseBodyServiceRegistrations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceRegistrationsResponseBodyServiceRegistrations() = default ;
    ListServiceRegistrationsResponseBodyServiceRegistrations& operator=(const ListServiceRegistrationsResponseBodyServiceRegistrations &) = default ;
    ListServiceRegistrationsResponseBodyServiceRegistrations& operator=(ListServiceRegistrationsResponseBodyServiceRegistrations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->finishTime_ != nullptr && this->registrationId_ != nullptr && this->serviceId_ != nullptr && this->status_ != nullptr && this->submitTime_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListServiceRegistrationsResponseBodyServiceRegistrations& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListServiceRegistrationsResponseBodyServiceRegistrations& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // registrationId Field Functions 
    bool hasRegistrationId() const { return this->registrationId_ != nullptr;};
    void deleteRegistrationId() { this->registrationId_ = nullptr;};
    inline string registrationId() const { DARABONBA_PTR_GET_DEFAULT(registrationId_, "") };
    inline ListServiceRegistrationsResponseBodyServiceRegistrations& setRegistrationId(string registrationId) { DARABONBA_PTR_SET_VALUE(registrationId_, registrationId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListServiceRegistrationsResponseBodyServiceRegistrations& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListServiceRegistrationsResponseBodyServiceRegistrations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline ListServiceRegistrationsResponseBodyServiceRegistrations& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


  protected:
    // Comment.
    std::shared_ptr<string> comment_ = nullptr;
    // Finish time.
    std::shared_ptr<string> finishTime_ = nullptr;
    // Registration ID.
    std::shared_ptr<string> registrationId_ = nullptr;
    // Service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // Registration status. Allowed values:
    // 
    // - Submitted
    // 
    // - Approved
    // 
    // - Rejected
    // 
    // - Canceled
    // 
    // - Executed
    // 
    // - Executed: Executed.
    std::shared_ptr<string> status_ = nullptr;
    // Submit time.
    std::shared_ptr<string> submitTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
