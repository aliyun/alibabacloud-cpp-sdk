// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONRELEASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONRELEASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeAddonReleaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonReleaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonReleaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAddonReleaseResponseBody() = default ;
    DescribeAddonReleaseResponseBody(const DescribeAddonReleaseResponseBody &) = default ;
    DescribeAddonReleaseResponseBody(DescribeAddonReleaseResponseBody &&) = default ;
    DescribeAddonReleaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonReleaseResponseBody() = default ;
    DescribeAddonReleaseResponseBody& operator=(const DescribeAddonReleaseResponseBody &) = default ;
    DescribeAddonReleaseResponseBody& operator=(DescribeAddonReleaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Release, release_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Release, release_);
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
      class Release : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Release& obj) { 
          DARABONBA_PTR_TO_JSON(AddonName, addonName_);
          DARABONBA_PTR_TO_JSON(AlertRuleCount, alertRuleCount_);
          DARABONBA_PTR_TO_JSON(Conditions, conditions_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DashboardCount, dashboardCount_);
          DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
          DARABONBA_PTR_TO_JSON(ExporterCount, exporterCount_);
          DARABONBA_PTR_TO_JSON(HaveConfig, haveConfig_);
          DARABONBA_PTR_TO_JSON(InstallUserId, installUserId_);
          DARABONBA_PTR_TO_JSON(Language, language_);
          DARABONBA_PTR_TO_JSON(Managed, managed_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReleaseId, releaseId_);
          DARABONBA_PTR_TO_JSON(ReleaseName, releaseName_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UserID, userID_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Release& obj) { 
          DARABONBA_PTR_FROM_JSON(AddonName, addonName_);
          DARABONBA_PTR_FROM_JSON(AlertRuleCount, alertRuleCount_);
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DashboardCount, dashboardCount_);
          DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
          DARABONBA_PTR_FROM_JSON(ExporterCount, exporterCount_);
          DARABONBA_PTR_FROM_JSON(HaveConfig, haveConfig_);
          DARABONBA_PTR_FROM_JSON(InstallUserId, installUserId_);
          DARABONBA_PTR_FROM_JSON(Language, language_);
          DARABONBA_PTR_FROM_JSON(Managed, managed_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReleaseId, releaseId_);
          DARABONBA_PTR_FROM_JSON(ReleaseName, releaseName_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UserID, userID_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Release() = default ;
        Release(const Release &) = default ;
        Release(Release &&) = default ;
        Release(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Release() = default ;
        Release& operator=(const Release &) = default ;
        Release& operator=(Release &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Conditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
            DARABONBA_PTR_TO_JSON(FirstTransitionTime, firstTransitionTime_);
            DARABONBA_PTR_TO_JSON(LastTransitionTime, lastTransitionTime_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(Reason, reason_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
            DARABONBA_PTR_FROM_JSON(FirstTransitionTime, firstTransitionTime_);
            DARABONBA_PTR_FROM_JSON(LastTransitionTime, lastTransitionTime_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(Reason, reason_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Conditions() = default ;
          Conditions(const Conditions &) = default ;
          Conditions(Conditions &&) = default ;
          Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Conditions() = default ;
          Conditions& operator=(const Conditions &) = default ;
          Conditions& operator=(Conditions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->firstTransitionTime_ == nullptr
        && this->lastTransitionTime_ == nullptr && this->message_ == nullptr && this->reason_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
          // firstTransitionTime Field Functions 
          bool hasFirstTransitionTime() const { return this->firstTransitionTime_ != nullptr;};
          void deleteFirstTransitionTime() { this->firstTransitionTime_ = nullptr;};
          inline string getFirstTransitionTime() const { DARABONBA_PTR_GET_DEFAULT(firstTransitionTime_, "") };
          inline Conditions& setFirstTransitionTime(string firstTransitionTime) { DARABONBA_PTR_SET_VALUE(firstTransitionTime_, firstTransitionTime) };


          // lastTransitionTime Field Functions 
          bool hasLastTransitionTime() const { return this->lastTransitionTime_ != nullptr;};
          void deleteLastTransitionTime() { this->lastTransitionTime_ = nullptr;};
          inline string getLastTransitionTime() const { DARABONBA_PTR_GET_DEFAULT(lastTransitionTime_, "") };
          inline Conditions& setLastTransitionTime(string lastTransitionTime) { DARABONBA_PTR_SET_VALUE(lastTransitionTime_, lastTransitionTime) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline Conditions& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // reason Field Functions 
          bool hasReason() const { return this->reason_ != nullptr;};
          void deleteReason() { this->reason_ = nullptr;};
          inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
          inline Conditions& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Conditions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Conditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The first transition time.
          shared_ptr<string> firstTransitionTime_ {};
          // The last transition time.
          shared_ptr<string> lastTransitionTime_ {};
          // The returned message.
          shared_ptr<string> message_ {};
          // The reason for the failure.
          shared_ptr<string> reason_ {};
          // The status of the phase.
          shared_ptr<string> status_ {};
          // The type of the phase.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->addonName_ == nullptr
        && this->alertRuleCount_ == nullptr && this->conditions_ == nullptr && this->createTime_ == nullptr && this->dashboardCount_ == nullptr && this->environmentId_ == nullptr
        && this->exporterCount_ == nullptr && this->haveConfig_ == nullptr && this->installUserId_ == nullptr && this->language_ == nullptr && this->managed_ == nullptr
        && this->regionId_ == nullptr && this->releaseId_ == nullptr && this->releaseName_ == nullptr && this->scene_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr && this->userID_ == nullptr && this->version_ == nullptr; };
        // addonName Field Functions 
        bool hasAddonName() const { return this->addonName_ != nullptr;};
        void deleteAddonName() { this->addonName_ = nullptr;};
        inline string getAddonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
        inline Release& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


        // alertRuleCount Field Functions 
        bool hasAlertRuleCount() const { return this->alertRuleCount_ != nullptr;};
        void deleteAlertRuleCount() { this->alertRuleCount_ = nullptr;};
        inline int64_t getAlertRuleCount() const { DARABONBA_PTR_GET_DEFAULT(alertRuleCount_, 0L) };
        inline Release& setAlertRuleCount(int64_t alertRuleCount) { DARABONBA_PTR_SET_VALUE(alertRuleCount_, alertRuleCount) };


        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline const vector<Release::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Release::Conditions>) };
        inline vector<Release::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Release::Conditions>) };
        inline Release& setConditions(const vector<Release::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
        inline Release& setConditions(vector<Release::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Release& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dashboardCount Field Functions 
        bool hasDashboardCount() const { return this->dashboardCount_ != nullptr;};
        void deleteDashboardCount() { this->dashboardCount_ = nullptr;};
        inline int64_t getDashboardCount() const { DARABONBA_PTR_GET_DEFAULT(dashboardCount_, 0L) };
        inline Release& setDashboardCount(int64_t dashboardCount) { DARABONBA_PTR_SET_VALUE(dashboardCount_, dashboardCount) };


        // environmentId Field Functions 
        bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
        void deleteEnvironmentId() { this->environmentId_ = nullptr;};
        inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
        inline Release& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


        // exporterCount Field Functions 
        bool hasExporterCount() const { return this->exporterCount_ != nullptr;};
        void deleteExporterCount() { this->exporterCount_ = nullptr;};
        inline int64_t getExporterCount() const { DARABONBA_PTR_GET_DEFAULT(exporterCount_, 0L) };
        inline Release& setExporterCount(int64_t exporterCount) { DARABONBA_PTR_SET_VALUE(exporterCount_, exporterCount) };


        // haveConfig Field Functions 
        bool hasHaveConfig() const { return this->haveConfig_ != nullptr;};
        void deleteHaveConfig() { this->haveConfig_ = nullptr;};
        inline bool getHaveConfig() const { DARABONBA_PTR_GET_DEFAULT(haveConfig_, false) };
        inline Release& setHaveConfig(bool haveConfig) { DARABONBA_PTR_SET_VALUE(haveConfig_, haveConfig) };


        // installUserId Field Functions 
        bool hasInstallUserId() const { return this->installUserId_ != nullptr;};
        void deleteInstallUserId() { this->installUserId_ = nullptr;};
        inline string getInstallUserId() const { DARABONBA_PTR_GET_DEFAULT(installUserId_, "") };
        inline Release& setInstallUserId(string installUserId) { DARABONBA_PTR_SET_VALUE(installUserId_, installUserId) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline Release& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // managed Field Functions 
        bool hasManaged() const { return this->managed_ != nullptr;};
        void deleteManaged() { this->managed_ = nullptr;};
        inline bool getManaged() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
        inline Release& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Release& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // releaseId Field Functions 
        bool hasReleaseId() const { return this->releaseId_ != nullptr;};
        void deleteReleaseId() { this->releaseId_ = nullptr;};
        inline string getReleaseId() const { DARABONBA_PTR_GET_DEFAULT(releaseId_, "") };
        inline Release& setReleaseId(string releaseId) { DARABONBA_PTR_SET_VALUE(releaseId_, releaseId) };


        // releaseName Field Functions 
        bool hasReleaseName() const { return this->releaseName_ != nullptr;};
        void deleteReleaseName() { this->releaseName_ = nullptr;};
        inline string getReleaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
        inline Release& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline Release& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Release& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Release& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userID Field Functions 
        bool hasUserID() const { return this->userID_ != nullptr;};
        void deleteUserID() { this->userID_ = nullptr;};
        inline string getUserID() const { DARABONBA_PTR_GET_DEFAULT(userID_, "") };
        inline Release& setUserID(string userID) { DARABONBA_PTR_SET_VALUE(userID_, userID) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Release& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The name of the add-on.
        shared_ptr<string> addonName_ {};
        // The number of alert rules.
        shared_ptr<int64_t> alertRuleCount_ {};
        // The installation phase.
        shared_ptr<vector<Release::Conditions>> conditions_ {};
        // The time when the add-on was created.
        shared_ptr<string> createTime_ {};
        // The number of dashboards.
        shared_ptr<int64_t> dashboardCount_ {};
        // The environment ID.
        shared_ptr<string> environmentId_ {};
        // The number of exporters.
        shared_ptr<int64_t> exporterCount_ {};
        // Indicates whether the configuration is available.
        shared_ptr<bool> haveConfig_ {};
        // The user ID.
        shared_ptr<string> installUserId_ {};
        // The language.
        shared_ptr<string> language_ {};
        // Indicates whether the component is fully managed.
        shared_ptr<bool> managed_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The release ID after installation.
        shared_ptr<string> releaseId_ {};
        // The name of the release.
        shared_ptr<string> releaseName_ {};
        // The scenario.
        shared_ptr<string> scene_ {};
        // The status.
        shared_ptr<string> status_ {};
        // The time when the add-on was updated.
        shared_ptr<string> updateTime_ {};
        // The user ID.
        shared_ptr<string> userID_ {};
        // The version of the add-on.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->release_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Data& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // release Field Functions 
      bool hasRelease() const { return this->release_ != nullptr;};
      void deleteRelease() { this->release_ = nullptr;};
      inline const Data::Release & getRelease() const { DARABONBA_PTR_GET_CONST(release_, Data::Release) };
      inline Data::Release getRelease() { DARABONBA_PTR_GET(release_, Data::Release) };
      inline Data& setRelease(const Data::Release & release) { DARABONBA_PTR_SET_VALUE(release_, release) };
      inline Data& setRelease(Data::Release && release) { DARABONBA_PTR_SET_RVALUE(release_, release) };


    protected:
      // The configuration information of the add-on release.
      shared_ptr<string> config_ {};
      // The release information.
      shared_ptr<Data::Release> release_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAddonReleaseResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAddonReleaseResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAddonReleaseResponseBody::Data) };
    inline DescribeAddonReleaseResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAddonReleaseResponseBody::Data) };
    inline DescribeAddonReleaseResponseBody& setData(const DescribeAddonReleaseResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAddonReleaseResponseBody& setData(DescribeAddonReleaseResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAddonReleaseResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAddonReleaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeAddonReleaseResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed.
    shared_ptr<string> code_ {};
    // The release information.
    shared_ptr<DescribeAddonReleaseResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
