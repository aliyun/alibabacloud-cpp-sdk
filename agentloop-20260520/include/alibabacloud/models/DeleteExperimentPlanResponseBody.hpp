// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEXPERIMENTPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEEXPERIMENTPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class DeleteExperimentPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteExperimentPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(planId, planId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteExperimentPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(planId, planId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DeleteExperimentPlanResponseBody() = default ;
    DeleteExperimentPlanResponseBody(const DeleteExperimentPlanResponseBody &) = default ;
    DeleteExperimentPlanResponseBody(DeleteExperimentPlanResponseBody &&) = default ;
    DeleteExperimentPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteExperimentPlanResponseBody() = default ;
    DeleteExperimentPlanResponseBody& operator=(const DeleteExperimentPlanResponseBody &) = default ;
    DeleteExperimentPlanResponseBody& operator=(DeleteExperimentPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->planId_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr; };
    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline DeleteExperimentPlanResponseBody& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteExperimentPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DeleteExperimentPlanResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The experiment plan ID.
    shared_ptr<string> planId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The deletion result. The value is deleted if the operation is successful.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
