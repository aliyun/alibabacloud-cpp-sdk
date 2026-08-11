// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateEventStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EventIds, eventIdsShrink_);
      DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_TO_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EventIds, eventIdsShrink_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_FROM_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    UpdateEventStatusShrinkRequest() = default ;
    UpdateEventStatusShrinkRequest(const UpdateEventStatusShrinkRequest &) = default ;
    UpdateEventStatusShrinkRequest(UpdateEventStatusShrinkRequest &&) = default ;
    UpdateEventStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStatusShrinkRequest() = default ;
    UpdateEventStatusShrinkRequest& operator=(const UpdateEventStatusShrinkRequest &) = default ;
    UpdateEventStatusShrinkRequest& operator=(UpdateEventStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->eventIdsShrink_ == nullptr && this->operationCode_ == nullptr && this->operationParams_ == nullptr && this->regionId_ == nullptr && this->source_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateEventStatusShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // eventIdsShrink Field Functions 
    bool hasEventIdsShrink() const { return this->eventIdsShrink_ != nullptr;};
    void deleteEventIdsShrink() { this->eventIdsShrink_ = nullptr;};
    inline string getEventIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(eventIdsShrink_, "") };
    inline UpdateEventStatusShrinkRequest& setEventIdsShrink(string eventIdsShrink) { DARABONBA_PTR_SET_VALUE(eventIdsShrink_, eventIdsShrink) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline UpdateEventStatusShrinkRequest& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // operationParams Field Functions 
    bool hasOperationParams() const { return this->operationParams_ != nullptr;};
    void deleteOperationParams() { this->operationParams_ = nullptr;};
    inline string getOperationParams() const { DARABONBA_PTR_GET_DEFAULT(operationParams_, "") };
    inline UpdateEventStatusShrinkRequest& setOperationParams(string operationParams) { DARABONBA_PTR_SET_VALUE(operationParams_, operationParams) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEventStatusShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateEventStatusShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The application ID that identifies the application to which the operation belongs.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The list of risk event IDs.
    shared_ptr<string> eventIdsShrink_ {};
    // The operation code that defines the specific type of event status change operation.
    // 
    // This parameter is required.
    shared_ptr<string> operationCode_ {};
    // The operation parameters that contain additional parameter information required to execute the operation.
    shared_ptr<string> operationParams_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The operation source that identifies the source system or module that triggered this status update request.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
