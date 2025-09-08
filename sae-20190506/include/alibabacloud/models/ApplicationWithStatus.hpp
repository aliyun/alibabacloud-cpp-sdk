// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLICATIONWITHSTATUS_HPP_
#define ALIBABACLOUD_MODELS_APPLICATIONWITHSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Application.hpp>
#include <alibabacloud/models/ApplicationStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ApplicationWithStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplicationWithStatus& obj) { 
      DARABONBA_PTR_TO_JSON(application, application_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ApplicationWithStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(application, application_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ApplicationWithStatus() = default ;
    ApplicationWithStatus(const ApplicationWithStatus &) = default ;
    ApplicationWithStatus(ApplicationWithStatus &&) = default ;
    ApplicationWithStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplicationWithStatus() = default ;
    ApplicationWithStatus& operator=(const ApplicationWithStatus &) = default ;
    ApplicationWithStatus& operator=(ApplicationWithStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->application_ != nullptr
        && this->status_ != nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const Application & application() const { DARABONBA_PTR_GET_CONST(application_, Application) };
    inline Application application() { DARABONBA_PTR_GET(application_, Application) };
    inline ApplicationWithStatus& setApplication(const Application & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline ApplicationWithStatus& setApplication(Application && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const ApplicationStatus & status() const { DARABONBA_PTR_GET_CONST(status_, ApplicationStatus) };
    inline ApplicationStatus status() { DARABONBA_PTR_GET(status_, ApplicationStatus) };
    inline ApplicationWithStatus& setStatus(const ApplicationStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ApplicationWithStatus& setStatus(ApplicationStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


  protected:
    std::shared_ptr<Application> application_ = nullptr;
    std::shared_ptr<ApplicationStatus> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
