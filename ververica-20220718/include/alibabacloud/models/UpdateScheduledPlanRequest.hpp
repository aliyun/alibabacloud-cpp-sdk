// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEDULEDPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEDULEDPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScheduledPlan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class UpdateScheduledPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScheduledPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScheduledPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateScheduledPlanRequest() = default ;
    UpdateScheduledPlanRequest(const UpdateScheduledPlanRequest &) = default ;
    UpdateScheduledPlanRequest(UpdateScheduledPlanRequest &&) = default ;
    UpdateScheduledPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScheduledPlanRequest() = default ;
    UpdateScheduledPlanRequest& operator=(const UpdateScheduledPlanRequest &) = default ;
    UpdateScheduledPlanRequest& operator=(UpdateScheduledPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ScheduledPlan & body() const { DARABONBA_PTR_GET_CONST(body_, ScheduledPlan) };
    inline ScheduledPlan body() { DARABONBA_PTR_GET(body_, ScheduledPlan) };
    inline UpdateScheduledPlanRequest& setBody(const ScheduledPlan & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateScheduledPlanRequest& setBody(ScheduledPlan && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<ScheduledPlan> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
