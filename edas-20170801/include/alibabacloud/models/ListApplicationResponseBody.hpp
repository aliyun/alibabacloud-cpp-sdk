// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationList, applicationList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationList, applicationList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListApplicationResponseBody() = default ;
    ListApplicationResponseBody(const ListApplicationResponseBody &) = default ;
    ListApplicationResponseBody(ListApplicationResponseBody &&) = default ;
    ListApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationResponseBody() = default ;
    ListApplicationResponseBody& operator=(const ListApplicationResponseBody &) = default ;
    ListApplicationResponseBody& operator=(ListApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationList& obj) { 
        DARABONBA_PTR_TO_JSON(Application, application_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationList& obj) { 
        DARABONBA_PTR_FROM_JSON(Application, application_);
      };
      ApplicationList() = default ;
      ApplicationList(const ApplicationList &) = default ;
      ApplicationList(ApplicationList &&) = default ;
      ApplicationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationList() = default ;
      ApplicationList& operator=(const ApplicationList &) = default ;
      ApplicationList& operator=(ApplicationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Application : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Application& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
          DARABONBA_PTR_TO_JSON(BuildPackageId, buildPackageId_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(ExtSlbIp, extSlbIp_);
          DARABONBA_PTR_TO_JSON(ExtSlbListenerPort, extSlbListenerPort_);
          DARABONBA_PTR_TO_JSON(Instances, instances_);
          DARABONBA_PTR_TO_JSON(K8sNamespace, k8sNamespace_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RunningInstanceCount, runningInstanceCount_);
          DARABONBA_PTR_TO_JSON(SlbIp, slbIp_);
          DARABONBA_PTR_TO_JSON(SlbListenerPort, slbListenerPort_);
          DARABONBA_PTR_TO_JSON(SlbPort, slbPort_);
          DARABONBA_PTR_TO_JSON(State, state_);
        };
        friend void from_json(const Darabonba::Json& j, Application& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
          DARABONBA_PTR_FROM_JSON(BuildPackageId, buildPackageId_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(ExtSlbIp, extSlbIp_);
          DARABONBA_PTR_FROM_JSON(ExtSlbListenerPort, extSlbListenerPort_);
          DARABONBA_PTR_FROM_JSON(Instances, instances_);
          DARABONBA_PTR_FROM_JSON(K8sNamespace, k8sNamespace_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RunningInstanceCount, runningInstanceCount_);
          DARABONBA_PTR_FROM_JSON(SlbIp, slbIp_);
          DARABONBA_PTR_FROM_JSON(SlbListenerPort, slbListenerPort_);
          DARABONBA_PTR_FROM_JSON(SlbPort, slbPort_);
          DARABONBA_PTR_FROM_JSON(State, state_);
        };
        Application() = default ;
        Application(const Application &) = default ;
        Application(Application &&) = default ;
        Application(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Application() = default ;
        Application& operator=(const Application &) = default ;
        Application& operator=(Application &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->applicationType_ == nullptr && this->buildPackageId_ == nullptr && this->clusterId_ == nullptr && this->clusterType_ == nullptr && this->createTime_ == nullptr
        && this->extSlbIp_ == nullptr && this->extSlbListenerPort_ == nullptr && this->instances_ == nullptr && this->k8sNamespace_ == nullptr && this->name_ == nullptr
        && this->namespaceId_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->runningInstanceCount_ == nullptr
        && this->slbIp_ == nullptr && this->slbListenerPort_ == nullptr && this->slbPort_ == nullptr && this->state_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Application& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // applicationType Field Functions 
        bool hasApplicationType() const { return this->applicationType_ != nullptr;};
        void deleteApplicationType() { this->applicationType_ = nullptr;};
        inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
        inline Application& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


        // buildPackageId Field Functions 
        bool hasBuildPackageId() const { return this->buildPackageId_ != nullptr;};
        void deleteBuildPackageId() { this->buildPackageId_ = nullptr;};
        inline int64_t getBuildPackageId() const { DARABONBA_PTR_GET_DEFAULT(buildPackageId_, 0L) };
        inline Application& setBuildPackageId(int64_t buildPackageId) { DARABONBA_PTR_SET_VALUE(buildPackageId_, buildPackageId) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Application& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterType Field Functions 
        bool hasClusterType() const { return this->clusterType_ != nullptr;};
        void deleteClusterType() { this->clusterType_ = nullptr;};
        inline int32_t getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
        inline Application& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Application& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // extSlbIp Field Functions 
        bool hasExtSlbIp() const { return this->extSlbIp_ != nullptr;};
        void deleteExtSlbIp() { this->extSlbIp_ = nullptr;};
        inline string getExtSlbIp() const { DARABONBA_PTR_GET_DEFAULT(extSlbIp_, "") };
        inline Application& setExtSlbIp(string extSlbIp) { DARABONBA_PTR_SET_VALUE(extSlbIp_, extSlbIp) };


        // extSlbListenerPort Field Functions 
        bool hasExtSlbListenerPort() const { return this->extSlbListenerPort_ != nullptr;};
        void deleteExtSlbListenerPort() { this->extSlbListenerPort_ = nullptr;};
        inline int32_t getExtSlbListenerPort() const { DARABONBA_PTR_GET_DEFAULT(extSlbListenerPort_, 0) };
        inline Application& setExtSlbListenerPort(int32_t extSlbListenerPort) { DARABONBA_PTR_SET_VALUE(extSlbListenerPort_, extSlbListenerPort) };


        // instances Field Functions 
        bool hasInstances() const { return this->instances_ != nullptr;};
        void deleteInstances() { this->instances_ = nullptr;};
        inline int32_t getInstances() const { DARABONBA_PTR_GET_DEFAULT(instances_, 0) };
        inline Application& setInstances(int32_t instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


        // k8sNamespace Field Functions 
        bool hasK8sNamespace() const { return this->k8sNamespace_ != nullptr;};
        void deleteK8sNamespace() { this->k8sNamespace_ = nullptr;};
        inline string getK8sNamespace() const { DARABONBA_PTR_GET_DEFAULT(k8sNamespace_, "") };
        inline Application& setK8sNamespace(string k8sNamespace) { DARABONBA_PTR_SET_VALUE(k8sNamespace_, k8sNamespace) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Application& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespaceId Field Functions 
        bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
        void deleteNamespaceId() { this->namespaceId_ = nullptr;};
        inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
        inline Application& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Application& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Application& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Application& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // runningInstanceCount Field Functions 
        bool hasRunningInstanceCount() const { return this->runningInstanceCount_ != nullptr;};
        void deleteRunningInstanceCount() { this->runningInstanceCount_ = nullptr;};
        inline int32_t getRunningInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(runningInstanceCount_, 0) };
        inline Application& setRunningInstanceCount(int32_t runningInstanceCount) { DARABONBA_PTR_SET_VALUE(runningInstanceCount_, runningInstanceCount) };


        // slbIp Field Functions 
        bool hasSlbIp() const { return this->slbIp_ != nullptr;};
        void deleteSlbIp() { this->slbIp_ = nullptr;};
        inline string getSlbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
        inline Application& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


        // slbListenerPort Field Functions 
        bool hasSlbListenerPort() const { return this->slbListenerPort_ != nullptr;};
        void deleteSlbListenerPort() { this->slbListenerPort_ = nullptr;};
        inline int32_t getSlbListenerPort() const { DARABONBA_PTR_GET_DEFAULT(slbListenerPort_, 0) };
        inline Application& setSlbListenerPort(int32_t slbListenerPort) { DARABONBA_PTR_SET_VALUE(slbListenerPort_, slbListenerPort) };


        // slbPort Field Functions 
        bool hasSlbPort() const { return this->slbPort_ != nullptr;};
        void deleteSlbPort() { this->slbPort_ = nullptr;};
        inline int32_t getSlbPort() const { DARABONBA_PTR_GET_DEFAULT(slbPort_, 0) };
        inline Application& setSlbPort(int32_t slbPort) { DARABONBA_PTR_SET_VALUE(slbPort_, slbPort) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Application& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        shared_ptr<string> appId_ {};
        shared_ptr<string> applicationType_ {};
        shared_ptr<int64_t> buildPackageId_ {};
        shared_ptr<string> clusterId_ {};
        shared_ptr<int32_t> clusterType_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> extSlbIp_ {};
        shared_ptr<int32_t> extSlbListenerPort_ {};
        shared_ptr<int32_t> instances_ {};
        shared_ptr<string> k8sNamespace_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> namespaceId_ {};
        shared_ptr<int32_t> port_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<int32_t> runningInstanceCount_ {};
        shared_ptr<string> slbIp_ {};
        shared_ptr<int32_t> slbListenerPort_ {};
        shared_ptr<int32_t> slbPort_ {};
        shared_ptr<string> state_ {};
      };

      virtual bool empty() const override { return this->application_ == nullptr; };
      // application Field Functions 
      bool hasApplication() const { return this->application_ != nullptr;};
      void deleteApplication() { this->application_ = nullptr;};
      inline const vector<ApplicationList::Application> & getApplication() const { DARABONBA_PTR_GET_CONST(application_, vector<ApplicationList::Application>) };
      inline vector<ApplicationList::Application> getApplication() { DARABONBA_PTR_GET(application_, vector<ApplicationList::Application>) };
      inline ApplicationList& setApplication(const vector<ApplicationList::Application> & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
      inline ApplicationList& setApplication(vector<ApplicationList::Application> && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    protected:
      shared_ptr<vector<ApplicationList::Application>> application_ {};
    };

    virtual bool empty() const override { return this->applicationList_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // applicationList Field Functions 
    bool hasApplicationList() const { return this->applicationList_ != nullptr;};
    void deleteApplicationList() { this->applicationList_ = nullptr;};
    inline const ListApplicationResponseBody::ApplicationList & getApplicationList() const { DARABONBA_PTR_GET_CONST(applicationList_, ListApplicationResponseBody::ApplicationList) };
    inline ListApplicationResponseBody::ApplicationList getApplicationList() { DARABONBA_PTR_GET(applicationList_, ListApplicationResponseBody::ApplicationList) };
    inline ListApplicationResponseBody& setApplicationList(const ListApplicationResponseBody::ApplicationList & applicationList) { DARABONBA_PTR_SET_VALUE(applicationList_, applicationList) };
    inline ListApplicationResponseBody& setApplicationList(ListApplicationResponseBody::ApplicationList && applicationList) { DARABONBA_PTR_SET_RVALUE(applicationList_, applicationList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListApplicationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApplicationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListApplicationResponseBody::ApplicationList> applicationList_ {};
    // The status code of the response.
    shared_ptr<int32_t> code_ {};
    // The additional information.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
