// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListApplicationGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationGroups, applicationGroups_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationGroups, applicationGroups_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListApplicationGroupsResponseBody() = default ;
    ListApplicationGroupsResponseBody(const ListApplicationGroupsResponseBody &) = default ;
    ListApplicationGroupsResponseBody(ListApplicationGroupsResponseBody &&) = default ;
    ListApplicationGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationGroupsResponseBody() = default ;
    ListApplicationGroupsResponseBody& operator=(const ListApplicationGroupsResponseBody &) = default ;
    ListApplicationGroupsResponseBody& operator=(ListApplicationGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationGroups& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ApplicationGroups& obj) { 
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
      ApplicationGroups() = default ;
      ApplicationGroups(const ApplicationGroups &) = default ;
      ApplicationGroups(ApplicationGroups &&) = default ;
      ApplicationGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationGroups() = default ;
      ApplicationGroups& operator=(const ApplicationGroups &) = default ;
      ApplicationGroups& operator=(ApplicationGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->cmsGroupId_ == nullptr && this->createDate_ == nullptr && this->deployParameters_ == nullptr && this->deployRegionId_ == nullptr && this->deployedRevisionIds_ == nullptr
        && this->description_ == nullptr && this->errorDetail_ == nullptr && this->errorType_ == nullptr && this->executionId_ == nullptr && this->importTagKey_ == nullptr
        && this->importTagValue_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr && this->updateDate_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline ApplicationGroups& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // cmsGroupId Field Functions 
      bool hasCmsGroupId() const { return this->cmsGroupId_ != nullptr;};
      void deleteCmsGroupId() { this->cmsGroupId_ = nullptr;};
      inline string getCmsGroupId() const { DARABONBA_PTR_GET_DEFAULT(cmsGroupId_, "") };
      inline ApplicationGroups& setCmsGroupId(string cmsGroupId) { DARABONBA_PTR_SET_VALUE(cmsGroupId_, cmsGroupId) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline ApplicationGroups& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // deployParameters Field Functions 
      bool hasDeployParameters() const { return this->deployParameters_ != nullptr;};
      void deleteDeployParameters() { this->deployParameters_ = nullptr;};
      inline string getDeployParameters() const { DARABONBA_PTR_GET_DEFAULT(deployParameters_, "") };
      inline ApplicationGroups& setDeployParameters(string deployParameters) { DARABONBA_PTR_SET_VALUE(deployParameters_, deployParameters) };


      // deployRegionId Field Functions 
      bool hasDeployRegionId() const { return this->deployRegionId_ != nullptr;};
      void deleteDeployRegionId() { this->deployRegionId_ = nullptr;};
      inline string getDeployRegionId() const { DARABONBA_PTR_GET_DEFAULT(deployRegionId_, "") };
      inline ApplicationGroups& setDeployRegionId(string deployRegionId) { DARABONBA_PTR_SET_VALUE(deployRegionId_, deployRegionId) };


      // deployedRevisionIds Field Functions 
      bool hasDeployedRevisionIds() const { return this->deployedRevisionIds_ != nullptr;};
      void deleteDeployedRevisionIds() { this->deployedRevisionIds_ = nullptr;};
      inline string getDeployedRevisionIds() const { DARABONBA_PTR_GET_DEFAULT(deployedRevisionIds_, "") };
      inline ApplicationGroups& setDeployedRevisionIds(string deployedRevisionIds) { DARABONBA_PTR_SET_VALUE(deployedRevisionIds_, deployedRevisionIds) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApplicationGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // errorDetail Field Functions 
      bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
      void deleteErrorDetail() { this->errorDetail_ = nullptr;};
      inline string getErrorDetail() const { DARABONBA_PTR_GET_DEFAULT(errorDetail_, "") };
      inline ApplicationGroups& setErrorDetail(string errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };


      // errorType Field Functions 
      bool hasErrorType() const { return this->errorType_ != nullptr;};
      void deleteErrorType() { this->errorType_ = nullptr;};
      inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
      inline ApplicationGroups& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


      // executionId Field Functions 
      bool hasExecutionId() const { return this->executionId_ != nullptr;};
      void deleteExecutionId() { this->executionId_ = nullptr;};
      inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
      inline ApplicationGroups& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


      // importTagKey Field Functions 
      bool hasImportTagKey() const { return this->importTagKey_ != nullptr;};
      void deleteImportTagKey() { this->importTagKey_ = nullptr;};
      inline string getImportTagKey() const { DARABONBA_PTR_GET_DEFAULT(importTagKey_, "") };
      inline ApplicationGroups& setImportTagKey(string importTagKey) { DARABONBA_PTR_SET_VALUE(importTagKey_, importTagKey) };


      // importTagValue Field Functions 
      bool hasImportTagValue() const { return this->importTagValue_ != nullptr;};
      void deleteImportTagValue() { this->importTagValue_ = nullptr;};
      inline string getImportTagValue() const { DARABONBA_PTR_GET_DEFAULT(importTagValue_, "") };
      inline ApplicationGroups& setImportTagValue(string importTagValue) { DARABONBA_PTR_SET_VALUE(importTagValue_, importTagValue) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ApplicationGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ApplicationGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline ApplicationGroups& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline ApplicationGroups& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The name of the application.
      shared_ptr<string> applicationName_ {};
      // The ID of the application group in CloudMonitor.
      shared_ptr<string> cmsGroupId_ {};
      // The time when the application group was created.
      shared_ptr<string> createDate_ {};
      // The configuration information of the application group.
      shared_ptr<string> deployParameters_ {};
      // The ID of the region in which the related resources reside.
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
      // The name of the application group.
      shared_ptr<string> name_ {};
      // The state of the application group.
      shared_ptr<string> status_ {};
      // The state information of the application group.
      shared_ptr<string> statusReason_ {};
      // The time when the application group was updated.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->applicationGroups_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // applicationGroups Field Functions 
    bool hasApplicationGroups() const { return this->applicationGroups_ != nullptr;};
    void deleteApplicationGroups() { this->applicationGroups_ = nullptr;};
    inline const vector<ListApplicationGroupsResponseBody::ApplicationGroups> & getApplicationGroups() const { DARABONBA_PTR_GET_CONST(applicationGroups_, vector<ListApplicationGroupsResponseBody::ApplicationGroups>) };
    inline vector<ListApplicationGroupsResponseBody::ApplicationGroups> getApplicationGroups() { DARABONBA_PTR_GET(applicationGroups_, vector<ListApplicationGroupsResponseBody::ApplicationGroups>) };
    inline ListApplicationGroupsResponseBody& setApplicationGroups(const vector<ListApplicationGroupsResponseBody::ApplicationGroups> & applicationGroups) { DARABONBA_PTR_SET_VALUE(applicationGroups_, applicationGroups) };
    inline ListApplicationGroupsResponseBody& setApplicationGroups(vector<ListApplicationGroupsResponseBody::ApplicationGroups> && applicationGroups) { DARABONBA_PTR_SET_RVALUE(applicationGroups_, applicationGroups) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApplicationGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the application group.
    shared_ptr<vector<ListApplicationGroupsResponseBody::ApplicationGroups>> applicationGroups_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
