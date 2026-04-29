// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMOQUOTAALERTTHRESHOLDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMOQUOTAALERTTHRESHOLDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateMOQuotaAlertThresholdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMOQuotaAlertThresholdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Apikey, apikeyShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMOQuotaAlertThresholdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Apikey, apikeyShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateMOQuotaAlertThresholdShrinkRequest() = default ;
    UpdateMOQuotaAlertThresholdShrinkRequest(const UpdateMOQuotaAlertThresholdShrinkRequest &) = default ;
    UpdateMOQuotaAlertThresholdShrinkRequest(UpdateMOQuotaAlertThresholdShrinkRequest &&) = default ;
    UpdateMOQuotaAlertThresholdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMOQuotaAlertThresholdShrinkRequest() = default ;
    UpdateMOQuotaAlertThresholdShrinkRequest& operator=(const UpdateMOQuotaAlertThresholdShrinkRequest &) = default ;
    UpdateMOQuotaAlertThresholdShrinkRequest& operator=(UpdateMOQuotaAlertThresholdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apikeyShrink_ == nullptr
        && this->instanceId_ == nullptr; };
    // apikeyShrink Field Functions 
    bool hasApikeyShrink() const { return this->apikeyShrink_ != nullptr;};
    void deleteApikeyShrink() { this->apikeyShrink_ = nullptr;};
    inline string getApikeyShrink() const { DARABONBA_PTR_GET_DEFAULT(apikeyShrink_, "") };
    inline UpdateMOQuotaAlertThresholdShrinkRequest& setApikeyShrink(string apikeyShrink) { DARABONBA_PTR_SET_VALUE(apikeyShrink_, apikeyShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateMOQuotaAlertThresholdShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> apikeyShrink_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
