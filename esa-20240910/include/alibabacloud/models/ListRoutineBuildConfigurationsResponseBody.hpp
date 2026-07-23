// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINEBUILDCONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINEBUILDCONFIGURATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineBuildConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineBuildConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoutineBuildConfigurations, routineBuildConfigurations_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineBuildConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoutineBuildConfigurations, routineBuildConfigurations_);
    };
    ListRoutineBuildConfigurationsResponseBody() = default ;
    ListRoutineBuildConfigurationsResponseBody(const ListRoutineBuildConfigurationsResponseBody &) = default ;
    ListRoutineBuildConfigurationsResponseBody(ListRoutineBuildConfigurationsResponseBody &&) = default ;
    ListRoutineBuildConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineBuildConfigurationsResponseBody() = default ;
    ListRoutineBuildConfigurationsResponseBody& operator=(const ListRoutineBuildConfigurationsResponseBody &) = default ;
    ListRoutineBuildConfigurationsResponseBody& operator=(ListRoutineBuildConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RoutineBuildConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoutineBuildConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(LatestRoutineBuildTask, latestRoutineBuildTask_);
        DARABONBA_PTR_TO_JSON(RoutineBuildConfiguration, routineBuildConfiguration_);
      };
      friend void from_json(const Darabonba::Json& j, RoutineBuildConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(LatestRoutineBuildTask, latestRoutineBuildTask_);
        DARABONBA_PTR_FROM_JSON(RoutineBuildConfiguration, routineBuildConfiguration_);
      };
      RoutineBuildConfigurations() = default ;
      RoutineBuildConfigurations(const RoutineBuildConfigurations &) = default ;
      RoutineBuildConfigurations(RoutineBuildConfigurations &&) = default ;
      RoutineBuildConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoutineBuildConfigurations() = default ;
      RoutineBuildConfigurations& operator=(const RoutineBuildConfigurations &) = default ;
      RoutineBuildConfigurations& operator=(RoutineBuildConfigurations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RoutineBuildConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoutineBuildConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(GitAccountName, gitAccountName_);
          DARABONBA_PTR_TO_JSON(GitPlatform, gitPlatform_);
          DARABONBA_PTR_TO_JSON(ProductionBranch, productionBranch_);
          DARABONBA_PTR_TO_JSON(Repository, repository_);
          DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
        };
        friend void from_json(const Darabonba::Json& j, RoutineBuildConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(GitAccountName, gitAccountName_);
          DARABONBA_PTR_FROM_JSON(GitPlatform, gitPlatform_);
          DARABONBA_PTR_FROM_JSON(ProductionBranch, productionBranch_);
          DARABONBA_PTR_FROM_JSON(Repository, repository_);
          DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
        };
        RoutineBuildConfiguration() = default ;
        RoutineBuildConfiguration(const RoutineBuildConfiguration &) = default ;
        RoutineBuildConfiguration(RoutineBuildConfiguration &&) = default ;
        RoutineBuildConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoutineBuildConfiguration() = default ;
        RoutineBuildConfiguration& operator=(const RoutineBuildConfiguration &) = default ;
        RoutineBuildConfiguration& operator=(RoutineBuildConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gitAccountName_ == nullptr
        && this->gitPlatform_ == nullptr && this->productionBranch_ == nullptr && this->repository_ == nullptr && this->routineName_ == nullptr; };
        // gitAccountName Field Functions 
        bool hasGitAccountName() const { return this->gitAccountName_ != nullptr;};
        void deleteGitAccountName() { this->gitAccountName_ = nullptr;};
        inline string getGitAccountName() const { DARABONBA_PTR_GET_DEFAULT(gitAccountName_, "") };
        inline RoutineBuildConfiguration& setGitAccountName(string gitAccountName) { DARABONBA_PTR_SET_VALUE(gitAccountName_, gitAccountName) };


        // gitPlatform Field Functions 
        bool hasGitPlatform() const { return this->gitPlatform_ != nullptr;};
        void deleteGitPlatform() { this->gitPlatform_ = nullptr;};
        inline string getGitPlatform() const { DARABONBA_PTR_GET_DEFAULT(gitPlatform_, "") };
        inline RoutineBuildConfiguration& setGitPlatform(string gitPlatform) { DARABONBA_PTR_SET_VALUE(gitPlatform_, gitPlatform) };


        // productionBranch Field Functions 
        bool hasProductionBranch() const { return this->productionBranch_ != nullptr;};
        void deleteProductionBranch() { this->productionBranch_ = nullptr;};
        inline string getProductionBranch() const { DARABONBA_PTR_GET_DEFAULT(productionBranch_, "") };
        inline RoutineBuildConfiguration& setProductionBranch(string productionBranch) { DARABONBA_PTR_SET_VALUE(productionBranch_, productionBranch) };


        // repository Field Functions 
        bool hasRepository() const { return this->repository_ != nullptr;};
        void deleteRepository() { this->repository_ = nullptr;};
        inline string getRepository() const { DARABONBA_PTR_GET_DEFAULT(repository_, "") };
        inline RoutineBuildConfiguration& setRepository(string repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };


        // routineName Field Functions 
        bool hasRoutineName() const { return this->routineName_ != nullptr;};
        void deleteRoutineName() { this->routineName_ = nullptr;};
        inline string getRoutineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
        inline RoutineBuildConfiguration& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


      protected:
        // The Git account name.
        shared_ptr<string> gitAccountName_ {};
        // The Git platform. Valid values: github, gitee, and upload.
        shared_ptr<string> gitPlatform_ {};
        // The production branch name.
        shared_ptr<string> productionBranch_ {};
        // The repository name.
        shared_ptr<string> repository_ {};
        // The ER routine name.
        shared_ptr<string> routineName_ {};
      };

      class LatestRoutineBuildTask : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LatestRoutineBuildTask& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, LatestRoutineBuildTask& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        LatestRoutineBuildTask() = default ;
        LatestRoutineBuildTask(const LatestRoutineBuildTask &) = default ;
        LatestRoutineBuildTask(LatestRoutineBuildTask &&) = default ;
        LatestRoutineBuildTask(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LatestRoutineBuildTask() = default ;
        LatestRoutineBuildTask& operator=(const LatestRoutineBuildTask &) = default ;
        LatestRoutineBuildTask& operator=(LatestRoutineBuildTask &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->routineName_ == nullptr && this->status_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline LatestRoutineBuildTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // routineName Field Functions 
        bool hasRoutineName() const { return this->routineName_ != nullptr;};
        void deleteRoutineName() { this->routineName_ = nullptr;};
        inline string getRoutineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
        inline LatestRoutineBuildTask& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline LatestRoutineBuildTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The creation time, in ISO 8601 format (UTC), formatted as yyyy-MM-ddTHH:mm:ssZ.
        shared_ptr<string> createTime_ {};
        // The ER routine name.
        shared_ptr<string> routineName_ {};
        // The status of the build task. Valid values:
        // 
        // - int: Init.
        // - pending: Pending.
        // - building: Building.
        // - succeed: Succeeded.
        // - failed: Failed.
        // - canceled: Canceled.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->latestRoutineBuildTask_ == nullptr
        && this->routineBuildConfiguration_ == nullptr; };
      // latestRoutineBuildTask Field Functions 
      bool hasLatestRoutineBuildTask() const { return this->latestRoutineBuildTask_ != nullptr;};
      void deleteLatestRoutineBuildTask() { this->latestRoutineBuildTask_ = nullptr;};
      inline const RoutineBuildConfigurations::LatestRoutineBuildTask & getLatestRoutineBuildTask() const { DARABONBA_PTR_GET_CONST(latestRoutineBuildTask_, RoutineBuildConfigurations::LatestRoutineBuildTask) };
      inline RoutineBuildConfigurations::LatestRoutineBuildTask getLatestRoutineBuildTask() { DARABONBA_PTR_GET(latestRoutineBuildTask_, RoutineBuildConfigurations::LatestRoutineBuildTask) };
      inline RoutineBuildConfigurations& setLatestRoutineBuildTask(const RoutineBuildConfigurations::LatestRoutineBuildTask & latestRoutineBuildTask) { DARABONBA_PTR_SET_VALUE(latestRoutineBuildTask_, latestRoutineBuildTask) };
      inline RoutineBuildConfigurations& setLatestRoutineBuildTask(RoutineBuildConfigurations::LatestRoutineBuildTask && latestRoutineBuildTask) { DARABONBA_PTR_SET_RVALUE(latestRoutineBuildTask_, latestRoutineBuildTask) };


      // routineBuildConfiguration Field Functions 
      bool hasRoutineBuildConfiguration() const { return this->routineBuildConfiguration_ != nullptr;};
      void deleteRoutineBuildConfiguration() { this->routineBuildConfiguration_ = nullptr;};
      inline const RoutineBuildConfigurations::RoutineBuildConfiguration & getRoutineBuildConfiguration() const { DARABONBA_PTR_GET_CONST(routineBuildConfiguration_, RoutineBuildConfigurations::RoutineBuildConfiguration) };
      inline RoutineBuildConfigurations::RoutineBuildConfiguration getRoutineBuildConfiguration() { DARABONBA_PTR_GET(routineBuildConfiguration_, RoutineBuildConfigurations::RoutineBuildConfiguration) };
      inline RoutineBuildConfigurations& setRoutineBuildConfiguration(const RoutineBuildConfigurations::RoutineBuildConfiguration & routineBuildConfiguration) { DARABONBA_PTR_SET_VALUE(routineBuildConfiguration_, routineBuildConfiguration) };
      inline RoutineBuildConfigurations& setRoutineBuildConfiguration(RoutineBuildConfigurations::RoutineBuildConfiguration && routineBuildConfiguration) { DARABONBA_PTR_SET_RVALUE(routineBuildConfiguration_, routineBuildConfiguration) };


    protected:
      // The latest ER build task information.
      shared_ptr<RoutineBuildConfigurations::LatestRoutineBuildTask> latestRoutineBuildTask_ {};
      // The ER build configuration information.
      shared_ptr<RoutineBuildConfigurations::RoutineBuildConfiguration> routineBuildConfiguration_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->routineBuildConfigurations_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRoutineBuildConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routineBuildConfigurations Field Functions 
    bool hasRoutineBuildConfigurations() const { return this->routineBuildConfigurations_ != nullptr;};
    void deleteRoutineBuildConfigurations() { this->routineBuildConfigurations_ = nullptr;};
    inline const vector<ListRoutineBuildConfigurationsResponseBody::RoutineBuildConfigurations> & getRoutineBuildConfigurations() const { DARABONBA_PTR_GET_CONST(routineBuildConfigurations_, vector<ListRoutineBuildConfigurationsResponseBody::RoutineBuildConfigurations>) };
    inline vector<ListRoutineBuildConfigurationsResponseBody::RoutineBuildConfigurations> getRoutineBuildConfigurations() { DARABONBA_PTR_GET(routineBuildConfigurations_, vector<ListRoutineBuildConfigurationsResponseBody::RoutineBuildConfigurations>) };
    inline ListRoutineBuildConfigurationsResponseBody& setRoutineBuildConfigurations(const vector<ListRoutineBuildConfigurationsResponseBody::RoutineBuildConfigurations> & routineBuildConfigurations) { DARABONBA_PTR_SET_VALUE(routineBuildConfigurations_, routineBuildConfigurations) };
    inline ListRoutineBuildConfigurationsResponseBody& setRoutineBuildConfigurations(vector<ListRoutineBuildConfigurationsResponseBody::RoutineBuildConfigurations> && routineBuildConfigurations) { DARABONBA_PTR_SET_RVALUE(routineBuildConfigurations_, routineBuildConfigurations) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of ER build configurations.
    shared_ptr<vector<ListRoutineBuildConfigurationsResponseBody::RoutineBuildConfigurations>> routineBuildConfigurations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
