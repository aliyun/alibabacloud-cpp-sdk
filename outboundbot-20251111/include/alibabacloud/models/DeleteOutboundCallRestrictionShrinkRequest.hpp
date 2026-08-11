// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOUTBOUNDCALLRESTRICTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOUTBOUNDCALLRESTRICTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class DeleteOutboundCallRestrictionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOutboundCallRestrictionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RestrictionIdList, restrictionIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOutboundCallRestrictionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RestrictionIdList, restrictionIdListShrink_);
    };
    DeleteOutboundCallRestrictionShrinkRequest() = default ;
    DeleteOutboundCallRestrictionShrinkRequest(const DeleteOutboundCallRestrictionShrinkRequest &) = default ;
    DeleteOutboundCallRestrictionShrinkRequest(DeleteOutboundCallRestrictionShrinkRequest &&) = default ;
    DeleteOutboundCallRestrictionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOutboundCallRestrictionShrinkRequest() = default ;
    DeleteOutboundCallRestrictionShrinkRequest& operator=(const DeleteOutboundCallRestrictionShrinkRequest &) = default ;
    DeleteOutboundCallRestrictionShrinkRequest& operator=(DeleteOutboundCallRestrictionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->restrictionIdListShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteOutboundCallRestrictionShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // restrictionIdListShrink Field Functions 
    bool hasRestrictionIdListShrink() const { return this->restrictionIdListShrink_ != nullptr;};
    void deleteRestrictionIdListShrink() { this->restrictionIdListShrink_ = nullptr;};
    inline string getRestrictionIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(restrictionIdListShrink_, "") };
    inline DeleteOutboundCallRestrictionShrinkRequest& setRestrictionIdListShrink(string restrictionIdListShrink) { DARABONBA_PTR_SET_VALUE(restrictionIdListShrink_, restrictionIdListShrink) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The list of outbound call restriction IDs.
    shared_ptr<string> restrictionIdListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
