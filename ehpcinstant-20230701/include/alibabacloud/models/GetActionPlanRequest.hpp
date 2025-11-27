// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACTIONPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACTIONPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetActionPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetActionPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlanId, actionPlanId_);
    };
    friend void from_json(const Darabonba::Json& j, GetActionPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlanId, actionPlanId_);
    };
    GetActionPlanRequest() = default ;
    GetActionPlanRequest(const GetActionPlanRequest &) = default ;
    GetActionPlanRequest(GetActionPlanRequest &&) = default ;
    GetActionPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetActionPlanRequest() = default ;
    GetActionPlanRequest& operator=(const GetActionPlanRequest &) = default ;
    GetActionPlanRequest& operator=(GetActionPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionPlanId_ == nullptr; };
    // actionPlanId Field Functions 
    bool hasActionPlanId() const { return this->actionPlanId_ != nullptr;};
    void deleteActionPlanId() { this->actionPlanId_ = nullptr;};
    inline string actionPlanId() const { DARABONBA_PTR_GET_DEFAULT(actionPlanId_, "") };
    inline GetActionPlanRequest& setActionPlanId(string actionPlanId) { DARABONBA_PTR_SET_VALUE(actionPlanId_, actionPlanId) };


  protected:
    // The ID of the execution plan.
    std::shared_ptr<string> actionPlanId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
