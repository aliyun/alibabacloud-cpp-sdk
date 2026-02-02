// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLANMAINTENANCEWINDOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLANMAINTENANCEWINDOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreatePlanMaintenanceWindowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlanMaintenanceWindowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlanWindowId, planWindowId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlanMaintenanceWindowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlanWindowId, planWindowId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePlanMaintenanceWindowResponseBody() = default ;
    CreatePlanMaintenanceWindowResponseBody(const CreatePlanMaintenanceWindowResponseBody &) = default ;
    CreatePlanMaintenanceWindowResponseBody(CreatePlanMaintenanceWindowResponseBody &&) = default ;
    CreatePlanMaintenanceWindowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlanMaintenanceWindowResponseBody() = default ;
    CreatePlanMaintenanceWindowResponseBody& operator=(const CreatePlanMaintenanceWindowResponseBody &) = default ;
    CreatePlanMaintenanceWindowResponseBody& operator=(CreatePlanMaintenanceWindowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->planWindowId_ == nullptr
        && this->requestId_ == nullptr; };
    // planWindowId Field Functions 
    bool hasPlanWindowId() const { return this->planWindowId_ != nullptr;};
    void deletePlanWindowId() { this->planWindowId_ = nullptr;};
    inline string getPlanWindowId() const { DARABONBA_PTR_GET_DEFAULT(planWindowId_, "") };
    inline CreatePlanMaintenanceWindowResponseBody& setPlanWindowId(string planWindowId) { DARABONBA_PTR_SET_VALUE(planWindowId_, planWindowId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePlanMaintenanceWindowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> planWindowId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
