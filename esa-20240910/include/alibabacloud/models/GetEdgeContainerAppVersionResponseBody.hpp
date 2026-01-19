// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPVERSIONRESPONSEBODY_HPP_
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
  class GetEdgeContainerAppVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetEdgeContainerAppVersionResponseBody() = default ;
    GetEdgeContainerAppVersionResponseBody(const GetEdgeContainerAppVersionResponseBody &) = default ;
    GetEdgeContainerAppVersionResponseBody(GetEdgeContainerAppVersionResponseBody &&) = default ;
    GetEdgeContainerAppVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppVersionResponseBody() = default ;
    GetEdgeContainerAppVersionResponseBody& operator=(const GetEdgeContainerAppVersionResponseBody &) = default ;
    GetEdgeContainerAppVersionResponseBody& operator=(GetEdgeContainerAppVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Version : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Version& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Containers, containers_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LastPublishTime, lastPublishTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_TO_JSON(Remarks, remarks_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      };
      friend void from_json(const Darabonba::Json& j, Version& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Containers, containers_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LastPublishTime, lastPublishTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      };
      Version() = default ;
      Version(const Version &) = default ;
      Version(Version &&) = default ;
      Version(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Version() = default ;
      Version& operator=(const Version &) = default ;
      Version& operator=(Version &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Containers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Containers& obj) { 
          DARABONBA_PTR_TO_JSON(ACRImageInfo, ACRImageInfo_);
          DARABONBA_PTR_TO_JSON(Args, args_);
          DARABONBA_PTR_TO_JSON(Command, command_);
          DARABONBA_PTR_TO_JSON(EnvVariables, envVariables_);
          DARABONBA_PTR_TO_JSON(Image, image_);
          DARABONBA_PTR_TO_JSON(IsACRImage, isACRImage_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PostStart, postStart_);
          DARABONBA_PTR_TO_JSON(PreStop, preStop_);
          DARABONBA_PTR_TO_JSON(ProbeContent, probeContent_);
          DARABONBA_PTR_TO_JSON(ProbeType, probeType_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
          DARABONBA_PTR_TO_JSON(Storage, storage_);
        };
        friend void from_json(const Darabonba::Json& j, Containers& obj) { 
          DARABONBA_PTR_FROM_JSON(ACRImageInfo, ACRImageInfo_);
          DARABONBA_PTR_FROM_JSON(Args, args_);
          DARABONBA_PTR_FROM_JSON(Command, command_);
          DARABONBA_PTR_FROM_JSON(EnvVariables, envVariables_);
          DARABONBA_PTR_FROM_JSON(Image, image_);
          DARABONBA_PTR_FROM_JSON(IsACRImage, isACRImage_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
          DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
          DARABONBA_PTR_FROM_JSON(ProbeContent, probeContent_);
          DARABONBA_PTR_FROM_JSON(ProbeType, probeType_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
          DARABONBA_PTR_FROM_JSON(Storage, storage_);
        };
        Containers() = default ;
        Containers(const Containers &) = default ;
        Containers(Containers &&) = default ;
        Containers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Containers() = default ;
        Containers& operator=(const Containers &) = default ;
        Containers& operator=(Containers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ProbeContent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProbeContent& obj) { 
            DARABONBA_PTR_TO_JSON(Command, command_);
            DARABONBA_PTR_TO_JSON(FailureThreshold, failureThreshold_);
            DARABONBA_PTR_TO_JSON(Host, host_);
            DARABONBA_PTR_TO_JSON(HttpHeaders, httpHeaders_);
            DARABONBA_PTR_TO_JSON(InitialDelaySeconds, initialDelaySeconds_);
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(PeriodSeconds, periodSeconds_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Scheme, scheme_);
            DARABONBA_PTR_TO_JSON(SuccessThreshold, successThreshold_);
            DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
          };
          friend void from_json(const Darabonba::Json& j, ProbeContent& obj) { 
            DARABONBA_PTR_FROM_JSON(Command, command_);
            DARABONBA_PTR_FROM_JSON(FailureThreshold, failureThreshold_);
            DARABONBA_PTR_FROM_JSON(Host, host_);
            DARABONBA_PTR_FROM_JSON(HttpHeaders, httpHeaders_);
            DARABONBA_PTR_FROM_JSON(InitialDelaySeconds, initialDelaySeconds_);
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(PeriodSeconds, periodSeconds_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Scheme, scheme_);
            DARABONBA_PTR_FROM_JSON(SuccessThreshold, successThreshold_);
            DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
          };
          ProbeContent() = default ;
          ProbeContent(const ProbeContent &) = default ;
          ProbeContent(ProbeContent &&) = default ;
          ProbeContent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProbeContent() = default ;
          ProbeContent& operator=(const ProbeContent &) = default ;
          ProbeContent& operator=(ProbeContent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->command_ == nullptr
        && this->failureThreshold_ == nullptr && this->host_ == nullptr && this->httpHeaders_ == nullptr && this->initialDelaySeconds_ == nullptr && this->path_ == nullptr
        && this->periodSeconds_ == nullptr && this->port_ == nullptr && this->scheme_ == nullptr && this->successThreshold_ == nullptr && this->timeoutSeconds_ == nullptr; };
          // command Field Functions 
          bool hasCommand() const { return this->command_ != nullptr;};
          void deleteCommand() { this->command_ = nullptr;};
          inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
          inline ProbeContent& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


          // failureThreshold Field Functions 
          bool hasFailureThreshold() const { return this->failureThreshold_ != nullptr;};
          void deleteFailureThreshold() { this->failureThreshold_ = nullptr;};
          inline int32_t getFailureThreshold() const { DARABONBA_PTR_GET_DEFAULT(failureThreshold_, 0) };
          inline ProbeContent& setFailureThreshold(int32_t failureThreshold) { DARABONBA_PTR_SET_VALUE(failureThreshold_, failureThreshold) };


          // host Field Functions 
          bool hasHost() const { return this->host_ != nullptr;};
          void deleteHost() { this->host_ = nullptr;};
          inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
          inline ProbeContent& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


          // httpHeaders Field Functions 
          bool hasHttpHeaders() const { return this->httpHeaders_ != nullptr;};
          void deleteHttpHeaders() { this->httpHeaders_ = nullptr;};
          inline string getHttpHeaders() const { DARABONBA_PTR_GET_DEFAULT(httpHeaders_, "") };
          inline ProbeContent& setHttpHeaders(string httpHeaders) { DARABONBA_PTR_SET_VALUE(httpHeaders_, httpHeaders) };


          // initialDelaySeconds Field Functions 
          bool hasInitialDelaySeconds() const { return this->initialDelaySeconds_ != nullptr;};
          void deleteInitialDelaySeconds() { this->initialDelaySeconds_ = nullptr;};
          inline int32_t getInitialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(initialDelaySeconds_, 0) };
          inline ProbeContent& setInitialDelaySeconds(int32_t initialDelaySeconds) { DARABONBA_PTR_SET_VALUE(initialDelaySeconds_, initialDelaySeconds) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline ProbeContent& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // periodSeconds Field Functions 
          bool hasPeriodSeconds() const { return this->periodSeconds_ != nullptr;};
          void deletePeriodSeconds() { this->periodSeconds_ = nullptr;};
          inline int32_t getPeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(periodSeconds_, 0) };
          inline ProbeContent& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline ProbeContent& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // scheme Field Functions 
          bool hasScheme() const { return this->scheme_ != nullptr;};
          void deleteScheme() { this->scheme_ = nullptr;};
          inline string getScheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
          inline ProbeContent& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


          // successThreshold Field Functions 
          bool hasSuccessThreshold() const { return this->successThreshold_ != nullptr;};
          void deleteSuccessThreshold() { this->successThreshold_ = nullptr;};
          inline int32_t getSuccessThreshold() const { DARABONBA_PTR_GET_DEFAULT(successThreshold_, 0) };
          inline ProbeContent& setSuccessThreshold(int32_t successThreshold) { DARABONBA_PTR_SET_VALUE(successThreshold_, successThreshold) };


          // timeoutSeconds Field Functions 
          bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
          void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
          inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
          inline ProbeContent& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


        protected:
          // The probe command.
          shared_ptr<string> command_ {};
          // The number of consecutive failed health checks required for a container to be considered as unhealthy.
          shared_ptr<int32_t> failureThreshold_ {};
          // The domain name that is used for health checks.
          shared_ptr<string> host_ {};
          // The request headers that are included in the container health check request.
          shared_ptr<string> httpHeaders_ {};
          // The latency for container probe initialization.
          shared_ptr<int32_t> initialDelaySeconds_ {};
          // The path of the container health check.
          shared_ptr<string> path_ {};
          // The interval between container health checks.
          shared_ptr<int32_t> periodSeconds_ {};
          // The port of the container health check. Valid values: **1** to **65535**.
          shared_ptr<int32_t> port_ {};
          // The protocol that the container health check request uses.
          shared_ptr<string> scheme_ {};
          // The number of consecutive successful health checks required for a container to be considered as healthy.
          shared_ptr<int32_t> successThreshold_ {};
          // The timeout period of the container health check.
          shared_ptr<int32_t> timeoutSeconds_ {};
        };

        class ACRImageInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ACRImageInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Domain, domain_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(IsEnterpriseRegistry, isEnterpriseRegistry_);
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(RepoId, repoId_);
            DARABONBA_PTR_TO_JSON(RepoName, repoName_);
            DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
            DARABONBA_PTR_TO_JSON(Tag, tag_);
            DARABONBA_PTR_TO_JSON(TagUrl, tagUrl_);
          };
          friend void from_json(const Darabonba::Json& j, ACRImageInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Domain, domain_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(IsEnterpriseRegistry, isEnterpriseRegistry_);
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
            DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
            DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
            DARABONBA_PTR_FROM_JSON(TagUrl, tagUrl_);
          };
          ACRImageInfo() = default ;
          ACRImageInfo(const ACRImageInfo &) = default ;
          ACRImageInfo(ACRImageInfo &&) = default ;
          ACRImageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ACRImageInfo() = default ;
          ACRImageInfo& operator=(const ACRImageInfo &) = default ;
          ACRImageInfo& operator=(ACRImageInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->domain_ == nullptr
        && this->instanceId_ == nullptr && this->isEnterpriseRegistry_ == nullptr && this->regionId_ == nullptr && this->repoId_ == nullptr && this->repoName_ == nullptr
        && this->repoNamespace_ == nullptr && this->tag_ == nullptr && this->tagUrl_ == nullptr; };
          // domain Field Functions 
          bool hasDomain() const { return this->domain_ != nullptr;};
          void deleteDomain() { this->domain_ = nullptr;};
          inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
          inline ACRImageInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline ACRImageInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // isEnterpriseRegistry Field Functions 
          bool hasIsEnterpriseRegistry() const { return this->isEnterpriseRegistry_ != nullptr;};
          void deleteIsEnterpriseRegistry() { this->isEnterpriseRegistry_ = nullptr;};
          inline bool getIsEnterpriseRegistry() const { DARABONBA_PTR_GET_DEFAULT(isEnterpriseRegistry_, false) };
          inline ACRImageInfo& setIsEnterpriseRegistry(bool isEnterpriseRegistry) { DARABONBA_PTR_SET_VALUE(isEnterpriseRegistry_, isEnterpriseRegistry) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline ACRImageInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // repoId Field Functions 
          bool hasRepoId() const { return this->repoId_ != nullptr;};
          void deleteRepoId() { this->repoId_ = nullptr;};
          inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
          inline ACRImageInfo& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


          // repoName Field Functions 
          bool hasRepoName() const { return this->repoName_ != nullptr;};
          void deleteRepoName() { this->repoName_ = nullptr;};
          inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
          inline ACRImageInfo& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


          // repoNamespace Field Functions 
          bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
          void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
          inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
          inline ACRImageInfo& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
          inline ACRImageInfo& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


          // tagUrl Field Functions 
          bool hasTagUrl() const { return this->tagUrl_ != nullptr;};
          void deleteTagUrl() { this->tagUrl_ = nullptr;};
          inline string getTagUrl() const { DARABONBA_PTR_GET_DEFAULT(tagUrl_, "") };
          inline ACRImageInfo& setTagUrl(string tagUrl) { DARABONBA_PTR_SET_VALUE(tagUrl_, tagUrl) };


        protected:
          // The domain name of the Container Registry image.
          shared_ptr<string> domain_ {};
          // The ID of the Container Registry instance.
          shared_ptr<string> instanceId_ {};
          // Indicates whether the image is an enterprise-level image.
          shared_ptr<bool> isEnterpriseRegistry_ {};
          // The region ID.
          shared_ptr<string> regionId_ {};
          // The ID of the image repository.
          shared_ptr<string> repoId_ {};
          // The name of the image repository.
          shared_ptr<string> repoName_ {};
          // The namespace to which the image repository belongs.
          shared_ptr<string> repoNamespace_ {};
          // The tag value.
          shared_ptr<string> tag_ {};
          // The URL of the Container Registry image tag.
          shared_ptr<string> tagUrl_ {};
        };

        virtual bool empty() const override { return this->ACRImageInfo_ == nullptr
        && this->args_ == nullptr && this->command_ == nullptr && this->envVariables_ == nullptr && this->image_ == nullptr && this->isACRImage_ == nullptr
        && this->name_ == nullptr && this->postStart_ == nullptr && this->preStop_ == nullptr && this->probeContent_ == nullptr && this->probeType_ == nullptr
        && this->spec_ == nullptr && this->storage_ == nullptr; };
        // ACRImageInfo Field Functions 
        bool hasACRImageInfo() const { return this->ACRImageInfo_ != nullptr;};
        void deleteACRImageInfo() { this->ACRImageInfo_ = nullptr;};
        inline const Containers::ACRImageInfo & getACRImageInfo() const { DARABONBA_PTR_GET_CONST(ACRImageInfo_, Containers::ACRImageInfo) };
        inline Containers::ACRImageInfo getACRImageInfo() { DARABONBA_PTR_GET(ACRImageInfo_, Containers::ACRImageInfo) };
        inline Containers& setACRImageInfo(const Containers::ACRImageInfo & aCRImageInfo) { DARABONBA_PTR_SET_VALUE(ACRImageInfo_, aCRImageInfo) };
        inline Containers& setACRImageInfo(Containers::ACRImageInfo && aCRImageInfo) { DARABONBA_PTR_SET_RVALUE(ACRImageInfo_, aCRImageInfo) };


        // args Field Functions 
        bool hasArgs() const { return this->args_ != nullptr;};
        void deleteArgs() { this->args_ = nullptr;};
        inline string getArgs() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
        inline Containers& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


        // command Field Functions 
        bool hasCommand() const { return this->command_ != nullptr;};
        void deleteCommand() { this->command_ = nullptr;};
        inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
        inline Containers& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


        // envVariables Field Functions 
        bool hasEnvVariables() const { return this->envVariables_ != nullptr;};
        void deleteEnvVariables() { this->envVariables_ = nullptr;};
        inline string getEnvVariables() const { DARABONBA_PTR_GET_DEFAULT(envVariables_, "") };
        inline Containers& setEnvVariables(string envVariables) { DARABONBA_PTR_SET_VALUE(envVariables_, envVariables) };


        // image Field Functions 
        bool hasImage() const { return this->image_ != nullptr;};
        void deleteImage() { this->image_ = nullptr;};
        inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
        inline Containers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


        // isACRImage Field Functions 
        bool hasIsACRImage() const { return this->isACRImage_ != nullptr;};
        void deleteIsACRImage() { this->isACRImage_ = nullptr;};
        inline bool getIsACRImage() const { DARABONBA_PTR_GET_DEFAULT(isACRImage_, false) };
        inline Containers& setIsACRImage(bool isACRImage) { DARABONBA_PTR_SET_VALUE(isACRImage_, isACRImage) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Containers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // postStart Field Functions 
        bool hasPostStart() const { return this->postStart_ != nullptr;};
        void deletePostStart() { this->postStart_ = nullptr;};
        inline string getPostStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
        inline Containers& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


        // preStop Field Functions 
        bool hasPreStop() const { return this->preStop_ != nullptr;};
        void deletePreStop() { this->preStop_ = nullptr;};
        inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
        inline Containers& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


        // probeContent Field Functions 
        bool hasProbeContent() const { return this->probeContent_ != nullptr;};
        void deleteProbeContent() { this->probeContent_ = nullptr;};
        inline const Containers::ProbeContent & getProbeContent() const { DARABONBA_PTR_GET_CONST(probeContent_, Containers::ProbeContent) };
        inline Containers::ProbeContent getProbeContent() { DARABONBA_PTR_GET(probeContent_, Containers::ProbeContent) };
        inline Containers& setProbeContent(const Containers::ProbeContent & probeContent) { DARABONBA_PTR_SET_VALUE(probeContent_, probeContent) };
        inline Containers& setProbeContent(Containers::ProbeContent && probeContent) { DARABONBA_PTR_SET_RVALUE(probeContent_, probeContent) };


        // probeType Field Functions 
        bool hasProbeType() const { return this->probeType_ != nullptr;};
        void deleteProbeType() { this->probeType_ = nullptr;};
        inline string getProbeType() const { DARABONBA_PTR_GET_DEFAULT(probeType_, "") };
        inline Containers& setProbeType(string probeType) { DARABONBA_PTR_SET_VALUE(probeType_, probeType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline Containers& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // storage Field Functions 
        bool hasStorage() const { return this->storage_ != nullptr;};
        void deleteStorage() { this->storage_ = nullptr;};
        inline string getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, "") };
        inline Containers& setStorage(string storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


      protected:
        // The information about the Container Registry image.
        shared_ptr<Containers::ACRImageInfo> ACRImageInfo_ {};
        // The arguments that are passed to the container startup command.
        shared_ptr<string> args_ {};
        // The command that is used to start the container.
        shared_ptr<string> command_ {};
        // The environment variables.
        shared_ptr<string> envVariables_ {};
        // The image address.
        shared_ptr<string> image_ {};
        // Indicates whether the image is a Container Registry image.
        shared_ptr<bool> isACRImage_ {};
        // The version name.
        shared_ptr<string> name_ {};
        // The command that is run before the container is started. Format: `{"exec":{"command":["cat","/etc/group"\\]}}`. If you want to cancel this configuration, set the parameter value to `""` or `{}`. If you do not specify this parameter, this configuration is ignored.
        shared_ptr<string> postStart_ {};
        // The command that is run before the container is stopped.
        shared_ptr<string> preStop_ {};
        // The probe content.
        shared_ptr<Containers::ProbeContent> probeContent_ {};
        // The probe type.
        shared_ptr<string> probeType_ {};
        // The compute specification.
        shared_ptr<string> spec_ {};
        // The storage capacity of the container. Valid values: 0.5G, 10G, 20G, and 30G.
        shared_ptr<string> storage_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->containers_ == nullptr && this->createTime_ == nullptr && this->lastPublishTime_ == nullptr && this->name_ == nullptr && this->publishTime_ == nullptr
        && this->remarks_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr && this->versionId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Version& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // containers Field Functions 
      bool hasContainers() const { return this->containers_ != nullptr;};
      void deleteContainers() { this->containers_ = nullptr;};
      inline const vector<Version::Containers> & getContainers() const { DARABONBA_PTR_GET_CONST(containers_, vector<Version::Containers>) };
      inline vector<Version::Containers> getContainers() { DARABONBA_PTR_GET(containers_, vector<Version::Containers>) };
      inline Version& setContainers(const vector<Version::Containers> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
      inline Version& setContainers(vector<Version::Containers> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Version& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // lastPublishTime Field Functions 
      bool hasLastPublishTime() const { return this->lastPublishTime_ != nullptr;};
      void deleteLastPublishTime() { this->lastPublishTime_ = nullptr;};
      inline string getLastPublishTime() const { DARABONBA_PTR_GET_DEFAULT(lastPublishTime_, "") };
      inline Version& setLastPublishTime(string lastPublishTime) { DARABONBA_PTR_SET_VALUE(lastPublishTime_, lastPublishTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Version& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // publishTime Field Functions 
      bool hasPublishTime() const { return this->publishTime_ != nullptr;};
      void deletePublishTime() { this->publishTime_ = nullptr;};
      inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
      inline Version& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


      // remarks Field Functions 
      bool hasRemarks() const { return this->remarks_ != nullptr;};
      void deleteRemarks() { this->remarks_ = nullptr;};
      inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
      inline Version& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Version& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Version& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
      inline Version& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      // The container images deployed for this version.
      shared_ptr<vector<Version::Containers>> containers_ {};
      // The time when the version was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The time when the version was last released. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> lastPublishTime_ {};
      // The version name.
      shared_ptr<string> name_ {};
      // The time when the version was released. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> publishTime_ {};
      // The remarks.
      shared_ptr<string> remarks_ {};
      // The status of the current version. Valid values:
      // 
      // *   created: The version is created.
      // *   failed: The version failed to be created.
      // *   creating: The version is being created.
      shared_ptr<string> status_ {};
      // The time when the version was last modified. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
      // The ID of the created version.
      shared_ptr<string> versionId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->version_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeContainerAppVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline const GetEdgeContainerAppVersionResponseBody::Version & getVersion() const { DARABONBA_PTR_GET_CONST(version_, GetEdgeContainerAppVersionResponseBody::Version) };
    inline GetEdgeContainerAppVersionResponseBody::Version getVersion() { DARABONBA_PTR_GET(version_, GetEdgeContainerAppVersionResponseBody::Version) };
    inline GetEdgeContainerAppVersionResponseBody& setVersion(const GetEdgeContainerAppVersionResponseBody::Version & version) { DARABONBA_PTR_SET_VALUE(version_, version) };
    inline GetEdgeContainerAppVersionResponseBody& setVersion(GetEdgeContainerAppVersionResponseBody::Version && version) { DARABONBA_PTR_SET_RVALUE(version_, version) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the version.
    shared_ptr<GetEdgeContainerAppVersionResponseBody::Version> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
