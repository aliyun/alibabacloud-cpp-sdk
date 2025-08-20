// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPUSETIMEREPORTREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_APPUSETIMEREPORTREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class AppUseTimeReportRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppUseTimeReportRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(IsPrivilege, isPrivilege_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StepCode, stepCode_);
      DARABONBA_PTR_TO_JSON(VipType, vipType_);
      DARABONBA_PTR_TO_JSON(originUuid, originUuid_);
    };
    friend void from_json(const Darabonba::Json& j, AppUseTimeReportRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(IsPrivilege, isPrivilege_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StepCode, stepCode_);
      DARABONBA_PTR_FROM_JSON(VipType, vipType_);
      DARABONBA_PTR_FROM_JSON(originUuid, originUuid_);
    };
    AppUseTimeReportRequestPayload() = default ;
    AppUseTimeReportRequestPayload(const AppUseTimeReportRequestPayload &) = default ;
    AppUseTimeReportRequestPayload(AppUseTimeReportRequestPayload &&) = default ;
    AppUseTimeReportRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppUseTimeReportRequestPayload() = default ;
    AppUseTimeReportRequestPayload& operator=(const AppUseTimeReportRequestPayload &) = default ;
    AppUseTimeReportRequestPayload& operator=(AppUseTimeReportRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->isPrivilege_ != nullptr && this->resourceId_ != nullptr && this->resourceType_ != nullptr && this->stepCode_ != nullptr && this->vipType_ != nullptr
        && this->originUuid_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline AppUseTimeReportRequestPayload& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // isPrivilege Field Functions 
    bool hasIsPrivilege() const { return this->isPrivilege_ != nullptr;};
    void deleteIsPrivilege() { this->isPrivilege_ = nullptr;};
    inline int32_t isPrivilege() const { DARABONBA_PTR_GET_DEFAULT(isPrivilege_, 0) };
    inline AppUseTimeReportRequestPayload& setIsPrivilege(int32_t isPrivilege) { DARABONBA_PTR_SET_VALUE(isPrivilege_, isPrivilege) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AppUseTimeReportRequestPayload& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline AppUseTimeReportRequestPayload& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // stepCode Field Functions 
    bool hasStepCode() const { return this->stepCode_ != nullptr;};
    void deleteStepCode() { this->stepCode_ = nullptr;};
    inline string stepCode() const { DARABONBA_PTR_GET_DEFAULT(stepCode_, "") };
    inline AppUseTimeReportRequestPayload& setStepCode(string stepCode) { DARABONBA_PTR_SET_VALUE(stepCode_, stepCode) };


    // vipType Field Functions 
    bool hasVipType() const { return this->vipType_ != nullptr;};
    void deleteVipType() { this->vipType_ = nullptr;};
    inline int32_t vipType() const { DARABONBA_PTR_GET_DEFAULT(vipType_, 0) };
    inline AppUseTimeReportRequestPayload& setVipType(int32_t vipType) { DARABONBA_PTR_SET_VALUE(vipType_, vipType) };


    // originUuid Field Functions 
    bool hasOriginUuid() const { return this->originUuid_ != nullptr;};
    void deleteOriginUuid() { this->originUuid_ = nullptr;};
    inline string originUuid() const { DARABONBA_PTR_GET_DEFAULT(originUuid_, "") };
    inline AppUseTimeReportRequestPayload& setOriginUuid(string originUuid) { DARABONBA_PTR_SET_VALUE(originUuid_, originUuid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> action_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> isPrivilege_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> resourceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> stepCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> vipType_ = nullptr;
    std::shared_ptr<string> originUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
