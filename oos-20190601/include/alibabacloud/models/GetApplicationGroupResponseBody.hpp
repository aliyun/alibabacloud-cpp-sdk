// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetApplicationGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationGroup, applicationGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationGroup, applicationGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationGroupResponseBody() = default ;
    GetApplicationGroupResponseBody(const GetApplicationGroupResponseBody &) = default ;
    GetApplicationGroupResponseBody(GetApplicationGroupResponseBody &&) = default ;
    GetApplicationGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationGroupResponseBody() = default ;
    GetApplicationGroupResponseBody& operator=(const GetApplicationGroupResponseBody &) = default ;
    GetApplicationGroupResponseBody& operator=(GetApplicationGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationGroup& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(ApplicationSource, applicationSource_);
        DARABONBA_PTR_TO_JSON(CmsGroupId, cmsGroupId_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(DeployOutputs, deployOutputs_);
        DARABONBA_PTR_TO_JSON(DeployParameters, deployParameters_);
        DARABONBA_PTR_TO_JSON(DeployRegionId, deployRegionId_);
        DARABONBA_PTR_TO_JSON(DeployedRevisionIds, deployedRevisionIds_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ErrorDetail, errorDetail_);
        DARABONBA_PTR_TO_JSON(ErrorType, errorType_);
        DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
        DARABONBA_PTR_TO_JSON(ImportTagKey, importTagKey_);
        DARABONBA_PTR_TO_JSON(ImportTagValue, importTagValue_);
        DARABONBA_PTR_TO_JSON(MonitorMetadata, monitorMetadata_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OperationMetadata, operationMetadata_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(ApplicationSource, applicationSource_);
        DARABONBA_PTR_FROM_JSON(CmsGroupId, cmsGroupId_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DeployOutputs, deployOutputs_);
        DARABONBA_PTR_FROM_JSON(DeployParameters, deployParameters_);
        DARABONBA_PTR_FROM_JSON(DeployRegionId, deployRegionId_);
        DARABONBA_PTR_FROM_JSON(DeployedRevisionIds, deployedRevisionIds_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ErrorDetail, errorDetail_);
        DARABONBA_PTR_FROM_JSON(ErrorType, errorType_);
        DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
        DARABONBA_PTR_FROM_JSON(ImportTagKey, importTagKey_);
        DARABONBA_PTR_FROM_JSON(ImportTagValue, importTagValue_);
        DARABONBA_PTR_FROM_JSON(MonitorMetadata, monitorMetadata_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OperationMetadata, operationMetadata_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
      };
      ApplicationGroup() = default ;
      ApplicationGroup(const ApplicationGroup &) = default ;
      ApplicationGroup(ApplicationGroup &&) = default ;
      ApplicationGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationGroup() = default ;
      ApplicationGroup& operator=(const ApplicationGroup &) = default ;
      ApplicationGroup& operator=(ApplicationGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->applicationSource_ == nullptr && this->cmsGroupId_ == nullptr && this->createDate_ == nullptr && this->deployOutputs_ == nullptr && this->deployParameters_ == nullptr
        && this->deployRegionId_ == nullptr && this->deployedRevisionIds_ == nullptr && this->description_ == nullptr && this->errorDetail_ == nullptr && this->errorType_ == nullptr
        && this->executionId_ == nullptr && this->importTagKey_ == nullptr && this->importTagValue_ == nullptr && this->monitorMetadata_ == nullptr && this->name_ == nullptr
        && this->operationMetadata_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr && this->updateDate_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline ApplicationGroup& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // applicationSource Field Functions 
      bool hasApplicationSource() const { return this->applicationSource_ != nullptr;};
      void deleteApplicationSource() { this->applicationSource_ = nullptr;};
      inline string getApplicationSource() const { DARABONBA_PTR_GET_DEFAULT(applicationSource_, "") };
      inline ApplicationGroup& setApplicationSource(string applicationSource) { DARABONBA_PTR_SET_VALUE(applicationSource_, applicationSource) };


      // cmsGroupId Field Functions 
      bool hasCmsGroupId() const { return this->cmsGroupId_ != nullptr;};
      void deleteCmsGroupId() { this->cmsGroupId_ = nullptr;};
      inline string getCmsGroupId() const { DARABONBA_PTR_GET_DEFAULT(cmsGroupId_, "") };
      inline ApplicationGroup& setCmsGroupId(string cmsGroupId) { DARABONBA_PTR_SET_VALUE(cmsGroupId_, cmsGroupId) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline ApplicationGroup& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // deployOutputs Field Functions 
      bool hasDeployOutputs() const { return this->deployOutputs_ != nullptr;};
      void deleteDeployOutputs() { this->deployOutputs_ = nullptr;};
      inline string getDeployOutputs() const { DARABONBA_PTR_GET_DEFAULT(deployOutputs_, "") };
      inline ApplicationGroup& setDeployOutputs(string deployOutputs) { DARABONBA_PTR_SET_VALUE(deployOutputs_, deployOutputs) };


      // deployParameters Field Functions 
      bool hasDeployParameters() const { return this->deployParameters_ != nullptr;};
      void deleteDeployParameters() { this->deployParameters_ = nullptr;};
      inline string getDeployParameters() const { DARABONBA_PTR_GET_DEFAULT(deployParameters_, "") };
      inline ApplicationGroup& setDeployParameters(string deployParameters) { DARABONBA_PTR_SET_VALUE(deployParameters_, deployParameters) };


      // deployRegionId Field Functions 
      bool hasDeployRegionId() const { return this->deployRegionId_ != nullptr;};
      void deleteDeployRegionId() { this->deployRegionId_ = nullptr;};
      inline string getDeployRegionId() const { DARABONBA_PTR_GET_DEFAULT(deployRegionId_, "") };
      inline ApplicationGroup& setDeployRegionId(string deployRegionId) { DARABONBA_PTR_SET_VALUE(deployRegionId_, deployRegionId) };


      // deployedRevisionIds Field Functions 
      bool hasDeployedRevisionIds() const { return this->deployedRevisionIds_ != nullptr;};
      void deleteDeployedRevisionIds() { this->deployedRevisionIds_ = nullptr;};
      inline string getDeployedRevisionIds() const { DARABONBA_PTR_GET_DEFAULT(deployedRevisionIds_, "") };
      inline ApplicationGroup& setDeployedRevisionIds(string deployedRevisionIds) { DARABONBA_PTR_SET_VALUE(deployedRevisionIds_, deployedRevisionIds) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApplicationGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // errorDetail Field Functions 
      bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
      void deleteErrorDetail() { this->errorDetail_ = nullptr;};
      inline string getErrorDetail() const { DARABONBA_PTR_GET_DEFAULT(errorDetail_, "") };
      inline ApplicationGroup& setErrorDetail(string errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };


      // errorType Field Functions 
      bool hasErrorType() const { return this->errorType_ != nullptr;};
      void deleteErrorType() { this->errorType_ = nullptr;};
      inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
      inline ApplicationGroup& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


      // executionId Field Functions 
      bool hasExecutionId() const { return this->executionId_ != nullptr;};
      void deleteExecutionId() { this->executionId_ = nullptr;};
      inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
      inline ApplicationGroup& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


      // importTagKey Field Functions 
      bool hasImportTagKey() const { return this->importTagKey_ != nullptr;};
      void deleteImportTagKey() { this->importTagKey_ = nullptr;};
      inline string getImportTagKey() const { DARABONBA_PTR_GET_DEFAULT(importTagKey_, "") };
      inline ApplicationGroup& setImportTagKey(string importTagKey) { DARABONBA_PTR_SET_VALUE(importTagKey_, importTagKey) };


      // importTagValue Field Functions 
      bool hasImportTagValue() const { return this->importTagValue_ != nullptr;};
      void deleteImportTagValue() { this->importTagValue_ = nullptr;};
      inline string getImportTagValue() const { DARABONBA_PTR_GET_DEFAULT(importTagValue_, "") };
      inline ApplicationGroup& setImportTagValue(string importTagValue) { DARABONBA_PTR_SET_VALUE(importTagValue_, importTagValue) };


      // monitorMetadata Field Functions 
      bool hasMonitorMetadata() const { return this->monitorMetadata_ != nullptr;};
      void deleteMonitorMetadata() { this->monitorMetadata_ = nullptr;};
      inline string getMonitorMetadata() const { DARABONBA_PTR_GET_DEFAULT(monitorMetadata_, "") };
      inline ApplicationGroup& setMonitorMetadata(string monitorMetadata) { DARABONBA_PTR_SET_VALUE(monitorMetadata_, monitorMetadata) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ApplicationGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operationMetadata Field Functions 
      bool hasOperationMetadata() const { return this->operationMetadata_ != nullptr;};
      void deleteOperationMetadata() { this->operationMetadata_ = nullptr;};
      inline string getOperationMetadata() const { DARABONBA_PTR_GET_DEFAULT(operationMetadata_, "") };
      inline ApplicationGroup& setOperationMetadata(string operationMetadata) { DARABONBA_PTR_SET_VALUE(operationMetadata_, operationMetadata) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline ApplicationGroup& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ApplicationGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline ApplicationGroup& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline ApplicationGroup& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The name of the application.
      shared_ptr<string> applicationName_ {};
      // The source of application.
      shared_ptr<string> applicationSource_ {};
      // The ID of the application group in CloudMonitor.
      shared_ptr<string> cmsGroupId_ {};
      // The time when the application group was created.
      shared_ptr<string> createDate_ {};
      // The output of the deployment result.
      shared_ptr<string> deployOutputs_ {};
      // The configuration information of the application group.
      shared_ptr<string> deployParameters_ {};
      // The ID of the region in which you deploy the application group.
      shared_ptr<string> deployRegionId_ {};
      shared_ptr<string> deployedRevisionIds_ {};
      // The description of the application group.
      shared_ptr<string> description_ {};
      shared_ptr<string> errorDetail_ {};
      shared_ptr<string> errorType_ {};
      shared_ptr<string> executionId_ {};
      // The tag key.
      shared_ptr<string> importTagKey_ {};
      // The tag value.
      shared_ptr<string> importTagValue_ {};
      shared_ptr<string> monitorMetadata_ {};
      // The name of the application group.
      shared_ptr<string> name_ {};
      // The hosted O\\&M configurations.
      shared_ptr<string> operationMetadata_ {};
      // The creation progress of the application instance.
      shared_ptr<string> progress_ {};
      // The state of the application group.
      shared_ptr<string> status_ {};
      // The state information of the application group.
      shared_ptr<string> statusReason_ {};
      // The time when the application group was last modified.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->applicationGroup_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationGroup Field Functions 
    bool hasApplicationGroup() const { return this->applicationGroup_ != nullptr;};
    void deleteApplicationGroup() { this->applicationGroup_ = nullptr;};
    inline const GetApplicationGroupResponseBody::ApplicationGroup & getApplicationGroup() const { DARABONBA_PTR_GET_CONST(applicationGroup_, GetApplicationGroupResponseBody::ApplicationGroup) };
    inline GetApplicationGroupResponseBody::ApplicationGroup getApplicationGroup() { DARABONBA_PTR_GET(applicationGroup_, GetApplicationGroupResponseBody::ApplicationGroup) };
    inline GetApplicationGroupResponseBody& setApplicationGroup(const GetApplicationGroupResponseBody::ApplicationGroup & applicationGroup) { DARABONBA_PTR_SET_VALUE(applicationGroup_, applicationGroup) };
    inline GetApplicationGroupResponseBody& setApplicationGroup(GetApplicationGroupResponseBody::ApplicationGroup && applicationGroup) { DARABONBA_PTR_SET_RVALUE(applicationGroup_, applicationGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application group.
    shared_ptr<GetApplicationGroupResponseBody::ApplicationGroup> applicationGroup_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
