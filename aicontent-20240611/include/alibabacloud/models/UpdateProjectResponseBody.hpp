// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class UpdateProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    UpdateProjectResponseBody() = default ;
    UpdateProjectResponseBody(const UpdateProjectResponseBody &) = default ;
    UpdateProjectResponseBody(UpdateProjectResponseBody &&) = default ;
    UpdateProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectResponseBody() = default ;
    UpdateProjectResponseBody& operator=(const UpdateProjectResponseBody &) = default ;
    UpdateProjectResponseBody& operator=(UpdateProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ProjectApps, projectApps_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(ProjectSDK, projectSDK_);
        DARABONBA_PTR_TO_JSON(ProjectType, projectType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ProjectApps, projectApps_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(ProjectSDK, projectSDK_);
        DARABONBA_PTR_FROM_JSON(ProjectType, projectType_);
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
      class ProjectSDK : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProjectSDK& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DemoUrl, demoUrl_);
          DARABONBA_PTR_TO_JSON(DeployMode, deployMode_);
          DARABONBA_PTR_TO_JSON(DevelopLanguage, developLanguage_);
          DARABONBA_PTR_TO_JSON(DocUrl, docUrl_);
          DARABONBA_PTR_TO_JSON(SdkName, sdkName_);
          DARABONBA_PTR_TO_JSON(SdkUrl, sdkUrl_);
          DARABONBA_PTR_TO_JSON(SdkVersion, sdkVersion_);
        };
        friend void from_json(const Darabonba::Json& j, ProjectSDK& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DemoUrl, demoUrl_);
          DARABONBA_PTR_FROM_JSON(DeployMode, deployMode_);
          DARABONBA_PTR_FROM_JSON(DevelopLanguage, developLanguage_);
          DARABONBA_PTR_FROM_JSON(DocUrl, docUrl_);
          DARABONBA_PTR_FROM_JSON(SdkName, sdkName_);
          DARABONBA_PTR_FROM_JSON(SdkUrl, sdkUrl_);
          DARABONBA_PTR_FROM_JSON(SdkVersion, sdkVersion_);
        };
        ProjectSDK() = default ;
        ProjectSDK(const ProjectSDK &) = default ;
        ProjectSDK(ProjectSDK &&) = default ;
        ProjectSDK(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProjectSDK() = default ;
        ProjectSDK& operator=(const ProjectSDK &) = default ;
        ProjectSDK& operator=(ProjectSDK &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->demoUrl_ == nullptr && this->deployMode_ == nullptr && this->developLanguage_ == nullptr && this->docUrl_ == nullptr && this->sdkName_ == nullptr
        && this->sdkUrl_ == nullptr && this->sdkVersion_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ProjectSDK& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // demoUrl Field Functions 
        bool hasDemoUrl() const { return this->demoUrl_ != nullptr;};
        void deleteDemoUrl() { this->demoUrl_ = nullptr;};
        inline string getDemoUrl() const { DARABONBA_PTR_GET_DEFAULT(demoUrl_, "") };
        inline ProjectSDK& setDemoUrl(string demoUrl) { DARABONBA_PTR_SET_VALUE(demoUrl_, demoUrl) };


        // deployMode Field Functions 
        bool hasDeployMode() const { return this->deployMode_ != nullptr;};
        void deleteDeployMode() { this->deployMode_ = nullptr;};
        inline string getDeployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
        inline ProjectSDK& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


        // developLanguage Field Functions 
        bool hasDevelopLanguage() const { return this->developLanguage_ != nullptr;};
        void deleteDevelopLanguage() { this->developLanguage_ = nullptr;};
        inline string getDevelopLanguage() const { DARABONBA_PTR_GET_DEFAULT(developLanguage_, "") };
        inline ProjectSDK& setDevelopLanguage(string developLanguage) { DARABONBA_PTR_SET_VALUE(developLanguage_, developLanguage) };


        // docUrl Field Functions 
        bool hasDocUrl() const { return this->docUrl_ != nullptr;};
        void deleteDocUrl() { this->docUrl_ = nullptr;};
        inline string getDocUrl() const { DARABONBA_PTR_GET_DEFAULT(docUrl_, "") };
        inline ProjectSDK& setDocUrl(string docUrl) { DARABONBA_PTR_SET_VALUE(docUrl_, docUrl) };


        // sdkName Field Functions 
        bool hasSdkName() const { return this->sdkName_ != nullptr;};
        void deleteSdkName() { this->sdkName_ = nullptr;};
        inline string getSdkName() const { DARABONBA_PTR_GET_DEFAULT(sdkName_, "") };
        inline ProjectSDK& setSdkName(string sdkName) { DARABONBA_PTR_SET_VALUE(sdkName_, sdkName) };


        // sdkUrl Field Functions 
        bool hasSdkUrl() const { return this->sdkUrl_ != nullptr;};
        void deleteSdkUrl() { this->sdkUrl_ = nullptr;};
        inline string getSdkUrl() const { DARABONBA_PTR_GET_DEFAULT(sdkUrl_, "") };
        inline ProjectSDK& setSdkUrl(string sdkUrl) { DARABONBA_PTR_SET_VALUE(sdkUrl_, sdkUrl) };


        // sdkVersion Field Functions 
        bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
        void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
        inline string getSdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
        inline ProjectSDK& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> demoUrl_ {};
        shared_ptr<string> deployMode_ {};
        shared_ptr<string> developLanguage_ {};
        shared_ptr<string> docUrl_ {};
        shared_ptr<string> sdkName_ {};
        shared_ptr<string> sdkUrl_ {};
        shared_ptr<string> sdkVersion_ {};
      };

      class ProjectApps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProjectApps& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationAccessIds, applicationAccessIds_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        };
        friend void from_json(const Darabonba::Json& j, ProjectApps& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationAccessIds, applicationAccessIds_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        };
        ProjectApps() = default ;
        ProjectApps(const ProjectApps &) = default ;
        ProjectApps(ProjectApps &&) = default ;
        ProjectApps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProjectApps() = default ;
        ProjectApps& operator=(const ProjectApps &) = default ;
        ProjectApps& operator=(ProjectApps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ApplicationAccessIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ApplicationAccessIds& obj) { 
            DARABONBA_PTR_TO_JSON(applicationAccessId, applicationAccessId_);
            DARABONBA_PTR_TO_JSON(applicationAccessSecret, applicationAccessSecret_);
          };
          friend void from_json(const Darabonba::Json& j, ApplicationAccessIds& obj) { 
            DARABONBA_PTR_FROM_JSON(applicationAccessId, applicationAccessId_);
            DARABONBA_PTR_FROM_JSON(applicationAccessSecret, applicationAccessSecret_);
          };
          ApplicationAccessIds() = default ;
          ApplicationAccessIds(const ApplicationAccessIds &) = default ;
          ApplicationAccessIds(ApplicationAccessIds &&) = default ;
          ApplicationAccessIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ApplicationAccessIds() = default ;
          ApplicationAccessIds& operator=(const ApplicationAccessIds &) = default ;
          ApplicationAccessIds& operator=(ApplicationAccessIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->applicationAccessId_ == nullptr
        && this->applicationAccessSecret_ == nullptr; };
          // applicationAccessId Field Functions 
          bool hasApplicationAccessId() const { return this->applicationAccessId_ != nullptr;};
          void deleteApplicationAccessId() { this->applicationAccessId_ = nullptr;};
          inline string getApplicationAccessId() const { DARABONBA_PTR_GET_DEFAULT(applicationAccessId_, "") };
          inline ApplicationAccessIds& setApplicationAccessId(string applicationAccessId) { DARABONBA_PTR_SET_VALUE(applicationAccessId_, applicationAccessId) };


          // applicationAccessSecret Field Functions 
          bool hasApplicationAccessSecret() const { return this->applicationAccessSecret_ != nullptr;};
          void deleteApplicationAccessSecret() { this->applicationAccessSecret_ = nullptr;};
          inline string getApplicationAccessSecret() const { DARABONBA_PTR_GET_DEFAULT(applicationAccessSecret_, "") };
          inline ApplicationAccessIds& setApplicationAccessSecret(string applicationAccessSecret) { DARABONBA_PTR_SET_VALUE(applicationAccessSecret_, applicationAccessSecret) };


        protected:
          shared_ptr<string> applicationAccessId_ {};
          shared_ptr<string> applicationAccessSecret_ {};
        };

        virtual bool empty() const override { return this->applicationAccessIds_ == nullptr
        && this->id_ == nullptr && this->projectId_ == nullptr; };
        // applicationAccessIds Field Functions 
        bool hasApplicationAccessIds() const { return this->applicationAccessIds_ != nullptr;};
        void deleteApplicationAccessIds() { this->applicationAccessIds_ = nullptr;};
        inline const vector<ProjectApps::ApplicationAccessIds> & getApplicationAccessIds() const { DARABONBA_PTR_GET_CONST(applicationAccessIds_, vector<ProjectApps::ApplicationAccessIds>) };
        inline vector<ProjectApps::ApplicationAccessIds> getApplicationAccessIds() { DARABONBA_PTR_GET(applicationAccessIds_, vector<ProjectApps::ApplicationAccessIds>) };
        inline ProjectApps& setApplicationAccessIds(const vector<ProjectApps::ApplicationAccessIds> & applicationAccessIds) { DARABONBA_PTR_SET_VALUE(applicationAccessIds_, applicationAccessIds) };
        inline ProjectApps& setApplicationAccessIds(vector<ProjectApps::ApplicationAccessIds> && applicationAccessIds) { DARABONBA_PTR_SET_RVALUE(applicationAccessIds_, applicationAccessIds) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ProjectApps& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline ProjectApps& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      protected:
        shared_ptr<vector<ProjectApps::ApplicationAccessIds>> applicationAccessIds_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> projectId_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->projectApps_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->projectSDK_ == nullptr && this->projectType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // projectApps Field Functions 
      bool hasProjectApps() const { return this->projectApps_ != nullptr;};
      void deleteProjectApps() { this->projectApps_ = nullptr;};
      inline const vector<Data::ProjectApps> & getProjectApps() const { DARABONBA_PTR_GET_CONST(projectApps_, vector<Data::ProjectApps>) };
      inline vector<Data::ProjectApps> getProjectApps() { DARABONBA_PTR_GET(projectApps_, vector<Data::ProjectApps>) };
      inline Data& setProjectApps(const vector<Data::ProjectApps> & projectApps) { DARABONBA_PTR_SET_VALUE(projectApps_, projectApps) };
      inline Data& setProjectApps(vector<Data::ProjectApps> && projectApps) { DARABONBA_PTR_SET_RVALUE(projectApps_, projectApps) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline Data& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Data& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // projectSDK Field Functions 
      bool hasProjectSDK() const { return this->projectSDK_ != nullptr;};
      void deleteProjectSDK() { this->projectSDK_ = nullptr;};
      inline const vector<Data::ProjectSDK> & getProjectSDK() const { DARABONBA_PTR_GET_CONST(projectSDK_, vector<Data::ProjectSDK>) };
      inline vector<Data::ProjectSDK> getProjectSDK() { DARABONBA_PTR_GET(projectSDK_, vector<Data::ProjectSDK>) };
      inline Data& setProjectSDK(const vector<Data::ProjectSDK> & projectSDK) { DARABONBA_PTR_SET_VALUE(projectSDK_, projectSDK) };
      inline Data& setProjectSDK(vector<Data::ProjectSDK> && projectSDK) { DARABONBA_PTR_SET_RVALUE(projectSDK_, projectSDK) };


      // projectType Field Functions 
      bool hasProjectType() const { return this->projectType_ != nullptr;};
      void deleteProjectType() { this->projectType_ = nullptr;};
      inline string getProjectType() const { DARABONBA_PTR_GET_DEFAULT(projectType_, "") };
      inline Data& setProjectType(string projectType) { DARABONBA_PTR_SET_VALUE(projectType_, projectType) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<vector<Data::ProjectApps>> projectApps_ {};
      shared_ptr<string> projectId_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<vector<Data::ProjectSDK>> projectSDK_ {};
      shared_ptr<string> projectType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateProjectResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateProjectResponseBody::Data) };
    inline UpdateProjectResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateProjectResponseBody::Data) };
    inline UpdateProjectResponseBody& setData(const UpdateProjectResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateProjectResponseBody& setData(UpdateProjectResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline UpdateProjectResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline UpdateProjectResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateProjectResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateProjectResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<UpdateProjectResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
