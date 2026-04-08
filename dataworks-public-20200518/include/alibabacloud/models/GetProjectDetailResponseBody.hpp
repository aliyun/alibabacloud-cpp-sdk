// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetProjectDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetProjectDetailResponseBody() = default ;
    GetProjectDetailResponseBody(const GetProjectDetailResponseBody &) = default ;
    GetProjectDetailResponseBody(GetProjectDetailResponseBody &&) = default ;
    GetProjectDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectDetailResponseBody() = default ;
    GetProjectDetailResponseBody& operator=(const GetProjectDetailResponseBody &) = default ;
    GetProjectDetailResponseBody& operator=(GetProjectDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultDiResourceGroupIdentifier, defaultDiResourceGroupIdentifier_);
        DARABONBA_PTR_TO_JSON(DevelopmentType, developmentType_);
        DARABONBA_PTR_TO_JSON(DisableDevelopment, disableDevelopment_);
        DARABONBA_PTR_TO_JSON(EnvTypes, envTypes_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(IsAllowDownload, isAllowDownload_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(ProjectDescription, projectDescription_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
        DARABONBA_PTR_TO_JSON(ProjectMode, projectMode_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(ProjectOwnerBaseId, projectOwnerBaseId_);
        DARABONBA_PTR_TO_JSON(ProtectedMode, protectedMode_);
        DARABONBA_PTR_TO_JSON(ResidentArea, residentArea_);
        DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_TO_JSON(SchedulerMaxRetryTimes, schedulerMaxRetryTimes_);
        DARABONBA_PTR_TO_JSON(SchedulerRetryInterval, schedulerRetryInterval_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TablePrivacyMode, tablePrivacyMode_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(UseProxyOdpsAccount, useProxyOdpsAccount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultDiResourceGroupIdentifier, defaultDiResourceGroupIdentifier_);
        DARABONBA_PTR_FROM_JSON(DevelopmentType, developmentType_);
        DARABONBA_PTR_FROM_JSON(DisableDevelopment, disableDevelopment_);
        DARABONBA_PTR_FROM_JSON(EnvTypes, envTypes_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(IsAllowDownload, isAllowDownload_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(ProjectDescription, projectDescription_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
        DARABONBA_PTR_FROM_JSON(ProjectMode, projectMode_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(ProjectOwnerBaseId, projectOwnerBaseId_);
        DARABONBA_PTR_FROM_JSON(ProtectedMode, protectedMode_);
        DARABONBA_PTR_FROM_JSON(ResidentArea, residentArea_);
        DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SchedulerMaxRetryTimes, schedulerMaxRetryTimes_);
        DARABONBA_PTR_FROM_JSON(SchedulerRetryInterval, schedulerRetryInterval_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TablePrivacyMode, tablePrivacyMode_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(UseProxyOdpsAccount, useProxyOdpsAccount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->defaultDiResourceGroupIdentifier_ == nullptr
        && this->developmentType_ == nullptr && this->disableDevelopment_ == nullptr && this->envTypes_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->isAllowDownload_ == nullptr && this->isDefault_ == nullptr && this->projectDescription_ == nullptr && this->projectId_ == nullptr && this->projectIdentifier_ == nullptr
        && this->projectMode_ == nullptr && this->projectName_ == nullptr && this->projectOwnerBaseId_ == nullptr && this->protectedMode_ == nullptr && this->residentArea_ == nullptr
        && this->resourceManagerResourceGroupId_ == nullptr && this->schedulerMaxRetryTimes_ == nullptr && this->schedulerRetryInterval_ == nullptr && this->status_ == nullptr && this->tablePrivacyMode_ == nullptr
        && this->tags_ == nullptr && this->tenantId_ == nullptr && this->useProxyOdpsAccount_ == nullptr; };
      // defaultDiResourceGroupIdentifier Field Functions 
      bool hasDefaultDiResourceGroupIdentifier() const { return this->defaultDiResourceGroupIdentifier_ != nullptr;};
      void deleteDefaultDiResourceGroupIdentifier() { this->defaultDiResourceGroupIdentifier_ = nullptr;};
      inline string getDefaultDiResourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(defaultDiResourceGroupIdentifier_, "") };
      inline Data& setDefaultDiResourceGroupIdentifier(string defaultDiResourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(defaultDiResourceGroupIdentifier_, defaultDiResourceGroupIdentifier) };


      // developmentType Field Functions 
      bool hasDevelopmentType() const { return this->developmentType_ != nullptr;};
      void deleteDevelopmentType() { this->developmentType_ = nullptr;};
      inline int32_t getDevelopmentType() const { DARABONBA_PTR_GET_DEFAULT(developmentType_, 0) };
      inline Data& setDevelopmentType(int32_t developmentType) { DARABONBA_PTR_SET_VALUE(developmentType_, developmentType) };


      // disableDevelopment Field Functions 
      bool hasDisableDevelopment() const { return this->disableDevelopment_ != nullptr;};
      void deleteDisableDevelopment() { this->disableDevelopment_ = nullptr;};
      inline bool getDisableDevelopment() const { DARABONBA_PTR_GET_DEFAULT(disableDevelopment_, false) };
      inline Data& setDisableDevelopment(bool disableDevelopment) { DARABONBA_PTR_SET_VALUE(disableDevelopment_, disableDevelopment) };


      // envTypes Field Functions 
      bool hasEnvTypes() const { return this->envTypes_ != nullptr;};
      void deleteEnvTypes() { this->envTypes_ = nullptr;};
      inline const vector<string> & getEnvTypes() const { DARABONBA_PTR_GET_CONST(envTypes_, vector<string>) };
      inline vector<string> getEnvTypes() { DARABONBA_PTR_GET(envTypes_, vector<string>) };
      inline Data& setEnvTypes(const vector<string> & envTypes) { DARABONBA_PTR_SET_VALUE(envTypes_, envTypes) };
      inline Data& setEnvTypes(vector<string> && envTypes) { DARABONBA_PTR_SET_RVALUE(envTypes_, envTypes) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // isAllowDownload Field Functions 
      bool hasIsAllowDownload() const { return this->isAllowDownload_ != nullptr;};
      void deleteIsAllowDownload() { this->isAllowDownload_ = nullptr;};
      inline int32_t getIsAllowDownload() const { DARABONBA_PTR_GET_DEFAULT(isAllowDownload_, 0) };
      inline Data& setIsAllowDownload(int32_t isAllowDownload) { DARABONBA_PTR_SET_VALUE(isAllowDownload_, isAllowDownload) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline int32_t getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, 0) };
      inline Data& setIsDefault(int32_t isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // projectDescription Field Functions 
      bool hasProjectDescription() const { return this->projectDescription_ != nullptr;};
      void deleteProjectDescription() { this->projectDescription_ = nullptr;};
      inline string getProjectDescription() const { DARABONBA_PTR_GET_DEFAULT(projectDescription_, "") };
      inline Data& setProjectDescription(string projectDescription) { DARABONBA_PTR_SET_VALUE(projectDescription_, projectDescription) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
      inline Data& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectIdentifier Field Functions 
      bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
      void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
      inline string getProjectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
      inline Data& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


      // projectMode Field Functions 
      bool hasProjectMode() const { return this->projectMode_ != nullptr;};
      void deleteProjectMode() { this->projectMode_ = nullptr;};
      inline int32_t getProjectMode() const { DARABONBA_PTR_GET_DEFAULT(projectMode_, 0) };
      inline Data& setProjectMode(int32_t projectMode) { DARABONBA_PTR_SET_VALUE(projectMode_, projectMode) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Data& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // projectOwnerBaseId Field Functions 
      bool hasProjectOwnerBaseId() const { return this->projectOwnerBaseId_ != nullptr;};
      void deleteProjectOwnerBaseId() { this->projectOwnerBaseId_ = nullptr;};
      inline string getProjectOwnerBaseId() const { DARABONBA_PTR_GET_DEFAULT(projectOwnerBaseId_, "") };
      inline Data& setProjectOwnerBaseId(string projectOwnerBaseId) { DARABONBA_PTR_SET_VALUE(projectOwnerBaseId_, projectOwnerBaseId) };


      // protectedMode Field Functions 
      bool hasProtectedMode() const { return this->protectedMode_ != nullptr;};
      void deleteProtectedMode() { this->protectedMode_ = nullptr;};
      inline int32_t getProtectedMode() const { DARABONBA_PTR_GET_DEFAULT(protectedMode_, 0) };
      inline Data& setProtectedMode(int32_t protectedMode) { DARABONBA_PTR_SET_VALUE(protectedMode_, protectedMode) };


      // residentArea Field Functions 
      bool hasResidentArea() const { return this->residentArea_ != nullptr;};
      void deleteResidentArea() { this->residentArea_ = nullptr;};
      inline string getResidentArea() const { DARABONBA_PTR_GET_DEFAULT(residentArea_, "") };
      inline Data& setResidentArea(string residentArea) { DARABONBA_PTR_SET_VALUE(residentArea_, residentArea) };


      // resourceManagerResourceGroupId Field Functions 
      bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
      void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
      inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
      inline Data& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


      // schedulerMaxRetryTimes Field Functions 
      bool hasSchedulerMaxRetryTimes() const { return this->schedulerMaxRetryTimes_ != nullptr;};
      void deleteSchedulerMaxRetryTimes() { this->schedulerMaxRetryTimes_ = nullptr;};
      inline int32_t getSchedulerMaxRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(schedulerMaxRetryTimes_, 0) };
      inline Data& setSchedulerMaxRetryTimes(int32_t schedulerMaxRetryTimes) { DARABONBA_PTR_SET_VALUE(schedulerMaxRetryTimes_, schedulerMaxRetryTimes) };


      // schedulerRetryInterval Field Functions 
      bool hasSchedulerRetryInterval() const { return this->schedulerRetryInterval_ != nullptr;};
      void deleteSchedulerRetryInterval() { this->schedulerRetryInterval_ = nullptr;};
      inline int32_t getSchedulerRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(schedulerRetryInterval_, 0) };
      inline Data& setSchedulerRetryInterval(int32_t schedulerRetryInterval) { DARABONBA_PTR_SET_VALUE(schedulerRetryInterval_, schedulerRetryInterval) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tablePrivacyMode Field Functions 
      bool hasTablePrivacyMode() const { return this->tablePrivacyMode_ != nullptr;};
      void deleteTablePrivacyMode() { this->tablePrivacyMode_ = nullptr;};
      inline int32_t getTablePrivacyMode() const { DARABONBA_PTR_GET_DEFAULT(tablePrivacyMode_, 0) };
      inline Data& setTablePrivacyMode(int32_t tablePrivacyMode) { DARABONBA_PTR_SET_VALUE(tablePrivacyMode_, tablePrivacyMode) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline Data& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // useProxyOdpsAccount Field Functions 
      bool hasUseProxyOdpsAccount() const { return this->useProxyOdpsAccount_ != nullptr;};
      void deleteUseProxyOdpsAccount() { this->useProxyOdpsAccount_ = nullptr;};
      inline bool getUseProxyOdpsAccount() const { DARABONBA_PTR_GET_DEFAULT(useProxyOdpsAccount_, false) };
      inline Data& setUseProxyOdpsAccount(bool useProxyOdpsAccount) { DARABONBA_PTR_SET_VALUE(useProxyOdpsAccount_, useProxyOdpsAccount) };


    protected:
      // The identifier of the shared resource group for Data Integration on which nodes are run.
      shared_ptr<string> defaultDiResourceGroupIdentifier_ {};
      // The development type of the workspace. The value is fixed to 4.
      shared_ptr<int32_t> developmentType_ {};
      // Indicates whether the Develop role is disabled. Valid values:
      // 
      // *   **false** (default)
      // *   **true**
      shared_ptr<bool> disableDevelopment_ {};
      // The environments of workspaces in different modes. Workspaces in basic mode provide only the production environment. Workspaces in standard mode provide both the development environment and the production environment.
      shared_ptr<vector<string>> envTypes_ {};
      // The time when the workspace was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the workspace was last modified.
      shared_ptr<string> gmtModified_ {};
      // Indicates whether the download operation is allowed.
      shared_ptr<int32_t> isAllowDownload_ {};
      // Indicates whether the workspace is a default workspace. Valid values:
      // 
      // *   1: The workspace is a default workspace.
      // *   0: The workspace is not a default workspace.
      shared_ptr<int32_t> isDefault_ {};
      // The description of the workspace.
      shared_ptr<string> projectDescription_ {};
      // The workspace ID.
      shared_ptr<int32_t> projectId_ {};
      // The unique identifier of the workspace.
      shared_ptr<string> projectIdentifier_ {};
      // The mode of the workspace. The value 2 indicates that the workspace is in basic mode. The value 3 indicates that the workspace is in standard mode.
      shared_ptr<int32_t> projectMode_ {};
      // The display name of the workspace.
      shared_ptr<string> projectName_ {};
      // The ID of the Alibaba Cloud account used by the workspace owner.
      shared_ptr<string> projectOwnerBaseId_ {};
      // Indicates whether the workspace protection feature is enabled.
      shared_ptr<int32_t> protectedMode_ {};
      // The type of the workspace. Valid values: private and swap.
      shared_ptr<string> residentArea_ {};
      // The resource group ID.
      shared_ptr<string> resourceManagerResourceGroupId_ {};
      // The default maximum number of automatic reruns that are allowed after an error occurs.
      shared_ptr<int32_t> schedulerMaxRetryTimes_ {};
      // The interval between automatic reruns after an error occurs.
      shared_ptr<int32_t> schedulerRetryInterval_ {};
      // The status of the workspace.
      shared_ptr<int32_t> status_ {};
      // Indicates whether the MaxCompute tables in the workspace are visible to the users within a tenant. Valid values:
      // 
      // *   0: The MaxCompute tables in the workspace are not visible to the users within a tenant.
      // *   1: The MaxCompute tables in the workspace are visible to the users within a tenant.
      shared_ptr<int32_t> tablePrivacyMode_ {};
      // The tag information.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The tenant ID.
      shared_ptr<int64_t> tenantId_ {};
      // Indicates whether a proxy account is used to access the MaxCompute compute engine.
      shared_ptr<bool> useProxyOdpsAccount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetProjectDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetProjectDetailResponseBody::Data) };
    inline GetProjectDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetProjectDetailResponseBody::Data) };
    inline GetProjectDetailResponseBody& setData(const GetProjectDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetProjectDetailResponseBody& setData(GetProjectDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetProjectDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetProjectDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the workspace.
    shared_ptr<GetProjectDetailResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
