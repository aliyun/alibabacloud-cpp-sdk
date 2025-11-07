// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONGROUPSRESPONSEBODYAPPLICATIONGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONGROUPSRESPONSEBODYAPPLICATIONGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListApplicationGroupsResponseBodyApplicationGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationGroupsResponseBodyApplicationGroups& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(CmsGroupId, cmsGroupId_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DeployParameters, deployParameters_);
      DARABONBA_PTR_TO_JSON(DeployRegionId, deployRegionId_);
      DARABONBA_PTR_TO_JSON(DeployedRevisionIds, deployedRevisionIds_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_TO_JSON(ErrorType, errorType_);
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_TO_JSON(ImportTagKey, importTagKey_);
      DARABONBA_PTR_TO_JSON(ImportTagValue, importTagValue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationGroupsResponseBodyApplicationGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(CmsGroupId, cmsGroupId_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DeployParameters, deployParameters_);
      DARABONBA_PTR_FROM_JSON(DeployRegionId, deployRegionId_);
      DARABONBA_PTR_FROM_JSON(DeployedRevisionIds, deployedRevisionIds_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorType, errorType_);
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_FROM_JSON(ImportTagKey, importTagKey_);
      DARABONBA_PTR_FROM_JSON(ImportTagValue, importTagValue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    ListApplicationGroupsResponseBodyApplicationGroups() = default ;
    ListApplicationGroupsResponseBodyApplicationGroups(const ListApplicationGroupsResponseBodyApplicationGroups &) = default ;
    ListApplicationGroupsResponseBodyApplicationGroups(ListApplicationGroupsResponseBodyApplicationGroups &&) = default ;
    ListApplicationGroupsResponseBodyApplicationGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationGroupsResponseBodyApplicationGroups() = default ;
    ListApplicationGroupsResponseBodyApplicationGroups& operator=(const ListApplicationGroupsResponseBodyApplicationGroups &) = default ;
    ListApplicationGroupsResponseBodyApplicationGroups& operator=(ListApplicationGroupsResponseBodyApplicationGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->cmsGroupId_ == nullptr && return this->createDate_ == nullptr && return this->deployParameters_ == nullptr && return this->deployRegionId_ == nullptr && return this->deployedRevisionIds_ == nullptr
        && return this->description_ == nullptr && return this->errorDetail_ == nullptr && return this->errorType_ == nullptr && return this->executionId_ == nullptr && return this->importTagKey_ == nullptr
        && return this->importTagValue_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr && return this->statusReason_ == nullptr && return this->updateDate_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // cmsGroupId Field Functions 
    bool hasCmsGroupId() const { return this->cmsGroupId_ != nullptr;};
    void deleteCmsGroupId() { this->cmsGroupId_ = nullptr;};
    inline string cmsGroupId() const { DARABONBA_PTR_GET_DEFAULT(cmsGroupId_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setCmsGroupId(string cmsGroupId) { DARABONBA_PTR_SET_VALUE(cmsGroupId_, cmsGroupId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // deployParameters Field Functions 
    bool hasDeployParameters() const { return this->deployParameters_ != nullptr;};
    void deleteDeployParameters() { this->deployParameters_ = nullptr;};
    inline string deployParameters() const { DARABONBA_PTR_GET_DEFAULT(deployParameters_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setDeployParameters(string deployParameters) { DARABONBA_PTR_SET_VALUE(deployParameters_, deployParameters) };


    // deployRegionId Field Functions 
    bool hasDeployRegionId() const { return this->deployRegionId_ != nullptr;};
    void deleteDeployRegionId() { this->deployRegionId_ = nullptr;};
    inline string deployRegionId() const { DARABONBA_PTR_GET_DEFAULT(deployRegionId_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setDeployRegionId(string deployRegionId) { DARABONBA_PTR_SET_VALUE(deployRegionId_, deployRegionId) };


    // deployedRevisionIds Field Functions 
    bool hasDeployedRevisionIds() const { return this->deployedRevisionIds_ != nullptr;};
    void deleteDeployedRevisionIds() { this->deployedRevisionIds_ = nullptr;};
    inline string deployedRevisionIds() const { DARABONBA_PTR_GET_DEFAULT(deployedRevisionIds_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setDeployedRevisionIds(string deployedRevisionIds) { DARABONBA_PTR_SET_VALUE(deployedRevisionIds_, deployedRevisionIds) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // errorDetail Field Functions 
    bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
    void deleteErrorDetail() { this->errorDetail_ = nullptr;};
    inline string errorDetail() const { DARABONBA_PTR_GET_DEFAULT(errorDetail_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setErrorDetail(string errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };


    // errorType Field Functions 
    bool hasErrorType() const { return this->errorType_ != nullptr;};
    void deleteErrorType() { this->errorType_ = nullptr;};
    inline string errorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string executionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // importTagKey Field Functions 
    bool hasImportTagKey() const { return this->importTagKey_ != nullptr;};
    void deleteImportTagKey() { this->importTagKey_ = nullptr;};
    inline string importTagKey() const { DARABONBA_PTR_GET_DEFAULT(importTagKey_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setImportTagKey(string importTagKey) { DARABONBA_PTR_SET_VALUE(importTagKey_, importTagKey) };


    // importTagValue Field Functions 
    bool hasImportTagValue() const { return this->importTagValue_ != nullptr;};
    void deleteImportTagValue() { this->importTagValue_ = nullptr;};
    inline string importTagValue() const { DARABONBA_PTR_GET_DEFAULT(importTagValue_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setImportTagValue(string importTagValue) { DARABONBA_PTR_SET_VALUE(importTagValue_, importTagValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline ListApplicationGroupsResponseBodyApplicationGroups& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The name of the application.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The ID of the application group in CloudMonitor.
    std::shared_ptr<string> cmsGroupId_ = nullptr;
    // The time when the application group was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The configuration information of the application group.
    std::shared_ptr<string> deployParameters_ = nullptr;
    // The ID of the region in which the related resources reside.
    std::shared_ptr<string> deployRegionId_ = nullptr;
    std::shared_ptr<string> deployedRevisionIds_ = nullptr;
    // The description of the application group.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> errorDetail_ = nullptr;
    std::shared_ptr<string> errorType_ = nullptr;
    std::shared_ptr<string> executionId_ = nullptr;
    // The tag key.
    std::shared_ptr<string> importTagKey_ = nullptr;
    // The tag value.
    std::shared_ptr<string> importTagValue_ = nullptr;
    // The name of the application group.
    std::shared_ptr<string> name_ = nullptr;
    // The state of the application group.
    std::shared_ptr<string> status_ = nullptr;
    // The state information of the application group.
    std::shared_ptr<string> statusReason_ = nullptr;
    // The time when the application group was updated.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
