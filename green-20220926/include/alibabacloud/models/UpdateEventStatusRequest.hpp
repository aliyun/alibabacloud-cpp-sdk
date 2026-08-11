// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateEventStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EventIds, eventIds_);
      DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_TO_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EventIds, eventIds_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_FROM_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    UpdateEventStatusRequest() = default ;
    UpdateEventStatusRequest(const UpdateEventStatusRequest &) = default ;
    UpdateEventStatusRequest(UpdateEventStatusRequest &&) = default ;
    UpdateEventStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStatusRequest() = default ;
    UpdateEventStatusRequest& operator=(const UpdateEventStatusRequest &) = default ;
    UpdateEventStatusRequest& operator=(UpdateEventStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->eventIds_ == nullptr && this->operationCode_ == nullptr && this->operationParams_ == nullptr && this->regionId_ == nullptr && this->source_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateEventStatusRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // eventIds Field Functions 
    bool hasEventIds() const { return this->eventIds_ != nullptr;};
    void deleteEventIds() { this->eventIds_ = nullptr;};
    inline const vector<string> & getEventIds() const { DARABONBA_PTR_GET_CONST(eventIds_, vector<string>) };
    inline vector<string> getEventIds() { DARABONBA_PTR_GET(eventIds_, vector<string>) };
    inline UpdateEventStatusRequest& setEventIds(const vector<string> & eventIds) { DARABONBA_PTR_SET_VALUE(eventIds_, eventIds) };
    inline UpdateEventStatusRequest& setEventIds(vector<string> && eventIds) { DARABONBA_PTR_SET_RVALUE(eventIds_, eventIds) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline UpdateEventStatusRequest& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // operationParams Field Functions 
    bool hasOperationParams() const { return this->operationParams_ != nullptr;};
    void deleteOperationParams() { this->operationParams_ = nullptr;};
    inline string getOperationParams() const { DARABONBA_PTR_GET_DEFAULT(operationParams_, "") };
    inline UpdateEventStatusRequest& setOperationParams(string operationParams) { DARABONBA_PTR_SET_VALUE(operationParams_, operationParams) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEventStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateEventStatusRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The application ID that identifies the application to which the operation belongs.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The list of risk event IDs.
    shared_ptr<vector<string>> eventIds_ {};
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
