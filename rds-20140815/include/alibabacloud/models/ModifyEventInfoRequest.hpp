// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEVENTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEVENTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyEventInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEventInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_TO_JSON(EventAction, eventAction_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEventInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_FROM_JSON(EventAction, eventAction_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ModifyEventInfoRequest() = default ;
    ModifyEventInfoRequest(const ModifyEventInfoRequest &) = default ;
    ModifyEventInfoRequest(ModifyEventInfoRequest &&) = default ;
    ModifyEventInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEventInfoRequest() = default ;
    ModifyEventInfoRequest& operator=(const ModifyEventInfoRequest &) = default ;
    ModifyEventInfoRequest& operator=(ModifyEventInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionParams_ == nullptr
        && this->eventAction_ == nullptr && this->eventId_ == nullptr && this->regionId_ == nullptr && this->securityToken_ == nullptr; };
    // actionParams Field Functions 
    bool hasActionParams() const { return this->actionParams_ != nullptr;};
    void deleteActionParams() { this->actionParams_ = nullptr;};
    inline string getActionParams() const { DARABONBA_PTR_GET_DEFAULT(actionParams_, "") };
    inline ModifyEventInfoRequest& setActionParams(string actionParams) { DARABONBA_PTR_SET_VALUE(actionParams_, actionParams) };


    // eventAction Field Functions 
    bool hasEventAction() const { return this->eventAction_ != nullptr;};
    void deleteEventAction() { this->eventAction_ = nullptr;};
    inline string getEventAction() const { DARABONBA_PTR_GET_DEFAULT(eventAction_, "") };
    inline ModifyEventInfoRequest& setEventAction(string eventAction) { DARABONBA_PTR_SET_VALUE(eventAction_, eventAction) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline ModifyEventInfoRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyEventInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyEventInfoRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The action-related parameters. You can add action-related parameters based on your business requirements. The parameter value varies with the value of the TaskAction parameter.
    shared_ptr<string> actionParams_ {};
    // The event handling action. Valid values:
    // 
    // *   **archive**
    // *   **undo**
    // 
    // >  This parameter is required.
    shared_ptr<string> eventAction_ {};
    // The event ID. You can call the DescribeEvents operation to obtain the IDs of the events. Separate multiple event IDs with commas (,). You can specify up to 20 event IDs.
    // 
    // This parameter is required.
    shared_ptr<string> eventId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/610399.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
