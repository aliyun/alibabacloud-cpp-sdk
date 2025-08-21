// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACTIONPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACTIONPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class UpdateActionPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateActionPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlanId, actionPlanId_);
      DARABONBA_PTR_TO_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateActionPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlanId, actionPlanId_);
      DARABONBA_PTR_FROM_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    UpdateActionPlanRequest() = default ;
    UpdateActionPlanRequest(const UpdateActionPlanRequest &) = default ;
    UpdateActionPlanRequest(UpdateActionPlanRequest &&) = default ;
    UpdateActionPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateActionPlanRequest() = default ;
    UpdateActionPlanRequest& operator=(const UpdateActionPlanRequest &) = default ;
    UpdateActionPlanRequest& operator=(UpdateActionPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionPlanId_ != nullptr
        && this->desiredCapacity_ != nullptr && this->enabled_ != nullptr; };
    // actionPlanId Field Functions 
    bool hasActionPlanId() const { return this->actionPlanId_ != nullptr;};
    void deleteActionPlanId() { this->actionPlanId_ = nullptr;};
    inline string actionPlanId() const { DARABONBA_PTR_GET_DEFAULT(actionPlanId_, "") };
    inline UpdateActionPlanRequest& setActionPlanId(string actionPlanId) { DARABONBA_PTR_SET_VALUE(actionPlanId_, actionPlanId) };


    // desiredCapacity Field Functions 
    bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
    void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
    inline float desiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0.0) };
    inline UpdateActionPlanRequest& setDesiredCapacity(float desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline string enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
    inline UpdateActionPlanRequest& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    std::shared_ptr<string> actionPlanId_ = nullptr;
    std::shared_ptr<float> desiredCapacity_ = nullptr;
    std::shared_ptr<string> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
