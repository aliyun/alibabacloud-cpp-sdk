// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateDiagnoseReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DiagnoseType, diagnoseType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DiagnoseType, diagnoseType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CreateDiagnoseReportRequest() = default ;
    CreateDiagnoseReportRequest(const CreateDiagnoseReportRequest &) = default ;
    CreateDiagnoseReportRequest(CreateDiagnoseReportRequest &&) = default ;
    CreateDiagnoseReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnoseReportRequest() = default ;
    CreateDiagnoseReportRequest& operator=(const CreateDiagnoseReportRequest &) = default ;
    CreateDiagnoseReportRequest& operator=(CreateDiagnoseReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->diagnoseType_ == nullptr && this->endTime_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr
        && this->startTime_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDiagnoseReportRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // diagnoseType Field Functions 
    bool hasDiagnoseType() const { return this->diagnoseType_ != nullptr;};
    void deleteDiagnoseType() { this->diagnoseType_ = nullptr;};
    inline string getDiagnoseType() const { DARABONBA_PTR_GET_DEFAULT(diagnoseType_, "") };
    inline CreateDiagnoseReportRequest& setDiagnoseType(string diagnoseType) { DARABONBA_PTR_SET_VALUE(diagnoseType_, diagnoseType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateDiagnoseReportRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDiagnoseReportRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateDiagnoseReportRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateDiagnoseReportRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateDiagnoseReportRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> diagnoseType_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
