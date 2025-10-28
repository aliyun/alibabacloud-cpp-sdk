// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTK8SAPPPRECHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTK8SAPPPRECHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class StartK8sAppPrecheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartK8sAppPrecheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComponentIds, componentIds_);
      DARABONBA_PTR_TO_JSON(ConfigMountDescs, configMountDescs_);
      DARABONBA_PTR_TO_JSON(EmptyDirs, emptyDirs_);
      DARABONBA_PTR_TO_JSON(EnvFroms, envFroms_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(JavaStartUpConfig, javaStartUpConfig_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LimitEphemeralStorage, limitEphemeralStorage_);
      DARABONBA_PTR_TO_JSON(LimitMem, limitMem_);
      DARABONBA_PTR_TO_JSON(LimitmCpu, limitmCpu_);
      DARABONBA_PTR_TO_JSON(LocalVolume, localVolume_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_TO_JSON(PvcMountDescs, pvcMountDescs_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(RequestsEphemeralStorage, requestsEphemeralStorage_);
      DARABONBA_PTR_TO_JSON(RequestsMem, requestsMem_);
      DARABONBA_PTR_TO_JSON(RequestsmCpu, requestsmCpu_);
    };
    friend void from_json(const Darabonba::Json& j, StartK8sAppPrecheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComponentIds, componentIds_);
      DARABONBA_PTR_FROM_JSON(ConfigMountDescs, configMountDescs_);
      DARABONBA_PTR_FROM_JSON(EmptyDirs, emptyDirs_);
      DARABONBA_PTR_FROM_JSON(EnvFroms, envFroms_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(JavaStartUpConfig, javaStartUpConfig_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LimitEphemeralStorage, limitEphemeralStorage_);
      DARABONBA_PTR_FROM_JSON(LimitMem, limitMem_);
      DARABONBA_PTR_FROM_JSON(LimitmCpu, limitmCpu_);
      DARABONBA_PTR_FROM_JSON(LocalVolume, localVolume_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_FROM_JSON(PvcMountDescs, pvcMountDescs_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(RequestsEphemeralStorage, requestsEphemeralStorage_);
      DARABONBA_PTR_FROM_JSON(RequestsMem, requestsMem_);
      DARABONBA_PTR_FROM_JSON(RequestsmCpu, requestsmCpu_);
    };
    StartK8sAppPrecheckRequest() = default ;
    StartK8sAppPrecheckRequest(const StartK8sAppPrecheckRequest &) = default ;
    StartK8sAppPrecheckRequest(StartK8sAppPrecheckRequest &&) = default ;
    StartK8sAppPrecheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartK8sAppPrecheckRequest() = default ;
    StartK8sAppPrecheckRequest& operator=(const StartK8sAppPrecheckRequest &) = default ;
    StartK8sAppPrecheckRequest& operator=(StartK8sAppPrecheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->clusterId_ == nullptr && return this->componentIds_ == nullptr && return this->configMountDescs_ == nullptr
        && return this->emptyDirs_ == nullptr && return this->envFroms_ == nullptr && return this->envs_ == nullptr && return this->imageUrl_ == nullptr && return this->javaStartUpConfig_ == nullptr
        && return this->labels_ == nullptr && return this->limitEphemeralStorage_ == nullptr && return this->limitMem_ == nullptr && return this->limitmCpu_ == nullptr && return this->localVolume_ == nullptr
        && return this->namespace_ == nullptr && return this->packageUrl_ == nullptr && return this->pvcMountDescs_ == nullptr && return this->regionId_ == nullptr && return this->replicas_ == nullptr
        && return this->requestsEphemeralStorage_ == nullptr && return this->requestsMem_ == nullptr && return this->requestsmCpu_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string annotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline StartK8sAppPrecheckRequest& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartK8sAppPrecheckRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline StartK8sAppPrecheckRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline StartK8sAppPrecheckRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // componentIds Field Functions 
    bool hasComponentIds() const { return this->componentIds_ != nullptr;};
    void deleteComponentIds() { this->componentIds_ = nullptr;};
    inline string componentIds() const { DARABONBA_PTR_GET_DEFAULT(componentIds_, "") };
    inline StartK8sAppPrecheckRequest& setComponentIds(string componentIds) { DARABONBA_PTR_SET_VALUE(componentIds_, componentIds) };


    // configMountDescs Field Functions 
    bool hasConfigMountDescs() const { return this->configMountDescs_ != nullptr;};
    void deleteConfigMountDescs() { this->configMountDescs_ = nullptr;};
    inline string configMountDescs() const { DARABONBA_PTR_GET_DEFAULT(configMountDescs_, "") };
    inline StartK8sAppPrecheckRequest& setConfigMountDescs(string configMountDescs) { DARABONBA_PTR_SET_VALUE(configMountDescs_, configMountDescs) };


    // emptyDirs Field Functions 
    bool hasEmptyDirs() const { return this->emptyDirs_ != nullptr;};
    void deleteEmptyDirs() { this->emptyDirs_ = nullptr;};
    inline string emptyDirs() const { DARABONBA_PTR_GET_DEFAULT(emptyDirs_, "") };
    inline StartK8sAppPrecheckRequest& setEmptyDirs(string emptyDirs) { DARABONBA_PTR_SET_VALUE(emptyDirs_, emptyDirs) };


    // envFroms Field Functions 
    bool hasEnvFroms() const { return this->envFroms_ != nullptr;};
    void deleteEnvFroms() { this->envFroms_ = nullptr;};
    inline string envFroms() const { DARABONBA_PTR_GET_DEFAULT(envFroms_, "") };
    inline StartK8sAppPrecheckRequest& setEnvFroms(string envFroms) { DARABONBA_PTR_SET_VALUE(envFroms_, envFroms) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string envs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline StartK8sAppPrecheckRequest& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline StartK8sAppPrecheckRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // javaStartUpConfig Field Functions 
    bool hasJavaStartUpConfig() const { return this->javaStartUpConfig_ != nullptr;};
    void deleteJavaStartUpConfig() { this->javaStartUpConfig_ = nullptr;};
    inline string javaStartUpConfig() const { DARABONBA_PTR_GET_DEFAULT(javaStartUpConfig_, "") };
    inline StartK8sAppPrecheckRequest& setJavaStartUpConfig(string javaStartUpConfig) { DARABONBA_PTR_SET_VALUE(javaStartUpConfig_, javaStartUpConfig) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline StartK8sAppPrecheckRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // limitEphemeralStorage Field Functions 
    bool hasLimitEphemeralStorage() const { return this->limitEphemeralStorage_ != nullptr;};
    void deleteLimitEphemeralStorage() { this->limitEphemeralStorage_ = nullptr;};
    inline int32_t limitEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(limitEphemeralStorage_, 0) };
    inline StartK8sAppPrecheckRequest& setLimitEphemeralStorage(int32_t limitEphemeralStorage) { DARABONBA_PTR_SET_VALUE(limitEphemeralStorage_, limitEphemeralStorage) };


    // limitMem Field Functions 
    bool hasLimitMem() const { return this->limitMem_ != nullptr;};
    void deleteLimitMem() { this->limitMem_ = nullptr;};
    inline int32_t limitMem() const { DARABONBA_PTR_GET_DEFAULT(limitMem_, 0) };
    inline StartK8sAppPrecheckRequest& setLimitMem(int32_t limitMem) { DARABONBA_PTR_SET_VALUE(limitMem_, limitMem) };


    // limitmCpu Field Functions 
    bool hasLimitmCpu() const { return this->limitmCpu_ != nullptr;};
    void deleteLimitmCpu() { this->limitmCpu_ = nullptr;};
    inline int32_t limitmCpu() const { DARABONBA_PTR_GET_DEFAULT(limitmCpu_, 0) };
    inline StartK8sAppPrecheckRequest& setLimitmCpu(int32_t limitmCpu) { DARABONBA_PTR_SET_VALUE(limitmCpu_, limitmCpu) };


    // localVolume Field Functions 
    bool hasLocalVolume() const { return this->localVolume_ != nullptr;};
    void deleteLocalVolume() { this->localVolume_ = nullptr;};
    inline string localVolume() const { DARABONBA_PTR_GET_DEFAULT(localVolume_, "") };
    inline StartK8sAppPrecheckRequest& setLocalVolume(string localVolume) { DARABONBA_PTR_SET_VALUE(localVolume_, localVolume) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline StartK8sAppPrecheckRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string packageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline StartK8sAppPrecheckRequest& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // pvcMountDescs Field Functions 
    bool hasPvcMountDescs() const { return this->pvcMountDescs_ != nullptr;};
    void deletePvcMountDescs() { this->pvcMountDescs_ = nullptr;};
    inline string pvcMountDescs() const { DARABONBA_PTR_GET_DEFAULT(pvcMountDescs_, "") };
    inline StartK8sAppPrecheckRequest& setPvcMountDescs(string pvcMountDescs) { DARABONBA_PTR_SET_VALUE(pvcMountDescs_, pvcMountDescs) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartK8sAppPrecheckRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline StartK8sAppPrecheckRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // requestsEphemeralStorage Field Functions 
    bool hasRequestsEphemeralStorage() const { return this->requestsEphemeralStorage_ != nullptr;};
    void deleteRequestsEphemeralStorage() { this->requestsEphemeralStorage_ = nullptr;};
    inline int32_t requestsEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(requestsEphemeralStorage_, 0) };
    inline StartK8sAppPrecheckRequest& setRequestsEphemeralStorage(int32_t requestsEphemeralStorage) { DARABONBA_PTR_SET_VALUE(requestsEphemeralStorage_, requestsEphemeralStorage) };


    // requestsMem Field Functions 
    bool hasRequestsMem() const { return this->requestsMem_ != nullptr;};
    void deleteRequestsMem() { this->requestsMem_ = nullptr;};
    inline int32_t requestsMem() const { DARABONBA_PTR_GET_DEFAULT(requestsMem_, 0) };
    inline StartK8sAppPrecheckRequest& setRequestsMem(int32_t requestsMem) { DARABONBA_PTR_SET_VALUE(requestsMem_, requestsMem) };


    // requestsmCpu Field Functions 
    bool hasRequestsmCpu() const { return this->requestsmCpu_ != nullptr;};
    void deleteRequestsmCpu() { this->requestsmCpu_ = nullptr;};
    inline int32_t requestsmCpu() const { DARABONBA_PTR_GET_DEFAULT(requestsmCpu_, 0) };
    inline StartK8sAppPrecheckRequest& setRequestsmCpu(int32_t requestsmCpu) { DARABONBA_PTR_SET_VALUE(requestsmCpu_, requestsmCpu) };


  protected:
    // The annotation of an application pod.
    std::shared_ptr<string> annotations_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application. The name must start with a letter, and can contain digits, letters, and hyphens (-). It can be up to 36 characters in length.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the application component. You can call the ListComponents operation to query application components. This parameter must be specified when the application runs in Apache Tomcat or in a standard Java application runtime environment. The Apache Tomcat application runtime environment is applicable to Dubbo applications that are deployed by using WAR packages. A standard Java application runtime environment is applicable to Spring Boot or Spring Cloud applications that are deployed by using JAR packages.
    // 
    // Valid values for regular application component IDs:
    // 
    // *   4: Apache Tomcat 7.0.91
    // *   5: OpenJDK 1.8.x
    // *   6: OpenJDK 1.7.x
    // *   7: Apache Tomcat 8.5.42
    // 
    // This parameter is available only for Java SDK 2.57.3 or later, or Python SDK 2.57.3 or later. Assume that you use an SDK that is not provided by Enterprise Distributed Application Service (EDAS), such as aliyun-python-sdk-core, aliyun-java-sdk-core, and Alibaba Cloud CLI. In this case, you can directly specify this parameter.
    std::shared_ptr<string> componentIds_ = nullptr;
    // The configuration for mounting a Kubernetes ConfigMap or Secret to a directory in an elastic container instance. The following parameters are included in the configuration:
    // 
    // *   name: the name of the Kubernetes ConfigMap or Secret.
    // *   type: the type of the API object that you want to mount. You can mount a Kubernetes ConfigMap or Secret.
    // *   mountPath: the mount path. The mount path must be an absolute path that starts with a forward slash (/).
    std::shared_ptr<string> configMountDescs_ = nullptr;
    // The configuration for mounting a Kubernetes emptyDir volume to a directory in an elastic container instance. The following parameters are included in the configuration:
    // 
    // *   mountPath: The mount path in the container. This parameter is required.
    // *   readOnly: (Optional) The mount mode. The value true indicates the read-only mode. The value false indicates the read and write mode. Default value: false.
    // *   subPathExpr: (Optional) The regular expression that is used to match the subdirectory.
    std::shared_ptr<string> emptyDirs_ = nullptr;
    // The Kubernetes environment variables that are configured in EnvFrom mode. A ConfigMap or Secret is mounted to a directory. Each key corresponds to a file in the directory, and the content of the file is the value of the key.
    // 
    // The following parameters are included in the configuration of the EnvFroms parameter:
    // 
    // *   configMapRef: the ConfigMap that is referenced. The following parameter is included:
    // 
    //     name: the name of the ConfigMap.
    // 
    // *   secretRef: the Secret that is referenced. The following parameter is included:
    // 
    //     name: the name of the Secret.
    std::shared_ptr<string> envFroms_ = nullptr;
    // The environment variables that are used to deploy the application. The value must be a JSON array. Valid values: regular environment variables, Kubernetes ConfigMap environment variables, and Kubernetes Secret environment variables. Specify regular environment variables in the following format:
    // 
    // `{"name":"x", "value": "y"}`
    // 
    // Specify Kubernetes ConfigMap environment variables in the following format to reference values from ConfigMaps:
    // 
    // `{ "name": "x2", "valueFrom": { "configMapKeyRef": { "name": "my-config", "key": "y2" } } }`
    // 
    // Specify Kubernetes Secret environment variables in the following format to reference values from Secrets:
    // 
    // `{ "name": "x3", "valueFrom": { "secretKeyRef": { "name": "my-secret", "key": "y3" } } }`
    // 
    // > If you want to cancel this configuration, set this parameter to an empty JSON array, which is in the format of "[]".
    std::shared_ptr<string> envs_ = nullptr;
    // The URL of the image.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The configuration of Java startup parameters for a Java application. These startup parameters involve the memory, application, garbage collection (GC) policy, tools, service registration and discovery, and custom configurations. Proper parameter settings help reduce the GC overheads, shorten the server response time, and improve the throughput. Set this parameter to a JSON string. In the example, original indicates the configuration value, and startup indicates a startup parameter. The system automatically concatenates all startup values as the settings of Java startup parameters for the application. To delete this configuration, leave the parameter value empty by entering `""` or `"{}"`. The following parameters are included in the configuration:
    // 
    // *   InitialHeapSize: the initial size of the heap memory.
    // *   MaxHeapSize: the maximum size of the heap memory.
    // *   CustomParams: the custom parameters, such as JVM -D parameters.
    // *   Other parameters: You can view the JSON structure submitted by the frontend.
    std::shared_ptr<string> javaStartUpConfig_ = nullptr;
    // The label of an application pod.
    std::shared_ptr<string> labels_ = nullptr;
    // The maximum size of space required by ephemeral storage. Unit: GB. The value 0 indicates that no limit is set on the ephemeral storage space.
    std::shared_ptr<int32_t> limitEphemeralStorage_ = nullptr;
    // The maximum size of memory allowed for each application instance when the application is running. Unit: MB. The value of LimitMem must be greater than or equal to that of RequestsMem.
    std::shared_ptr<int32_t> limitMem_ = nullptr;
    // The maximum number of CPU cores allowed for each application instance when the application is running. Unit: millicores. The value 0 indicates that no limit is set on CPU cores.
    std::shared_ptr<int32_t> limitmCpu_ = nullptr;
    // The configurations that are used when the host files are mounted to the container on which the application is running. Example: `[{"type":"","nodePath":"/localfiles","mountPath":"/app/files"},{"type":"Directory","nodePath":"/mnt","mountPath":"/app/storage"}\\]`. Description:
    // 
    // *   `nodePath`: the host path.
    // *   `mountPath`: the path in the container.
    // *   `type`: the mounting type.
    std::shared_ptr<string> localVolume_ = nullptr;
    // The namespace of the Kubernetes cluster. This parameter specifies the Kubernetes namespace in which your application is deployed. By default, the default namespace is used.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The URL of the deployment package.
    std::shared_ptr<string> packageUrl_ = nullptr;
    // The configuration for mounting a Kubernetes PersistentVolumeClaim (PVC) to a directory in an elastic container instance. The following parameters are included in the configuration:
    // 
    // *   pvcName: the name of the PVC. Make sure that the volume exists and is in the Bound state.
    // 
    // *   mountPaths: the directory to which you want to mount the PVC. You can configure multiple directories. You can set the following two parameters for each mount directory:
    // 
    //     *   mountPath: the mount path. The mount path must be an absolute path that starts with a forward slash (/).
    //     *   readOnly: the mount mode. The value true indicates the read-only mode. The value false indicates the read and write mode. Default value: false.
    std::shared_ptr<string> pvcMountDescs_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of application instances.
    std::shared_ptr<int32_t> replicas_ = nullptr;
    // The minimum size of space required by ephemeral storage. Unit: GB. The value 0 indicates that no limit is set on the ephemeral storage space.
    std::shared_ptr<int32_t> requestsEphemeralStorage_ = nullptr;
    // The maximum size of memory allowed for each application instance when the application is created. Unit: MB. The value 0 indicates that no limit is set on the memory size. The value of RequestsMem cannot be greater than that of LimitMem.
    std::shared_ptr<int32_t> requestsMem_ = nullptr;
    // The maximum number of CPU cores allowed for each application instance when the application is created. Unit: millicores.
    std::shared_ptr<int32_t> requestsmCpu_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
