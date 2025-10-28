// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(BuildPackId, buildPackId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComponentIds, componentIds_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcuInfo, ecuInfo_);
      DARABONBA_PTR_TO_JSON(EnablePortCheck, enablePortCheck_);
      DARABONBA_PTR_TO_JSON(EnableUrlCheck, enableUrlCheck_);
      DARABONBA_PTR_TO_JSON(HealthCheckUrl, healthCheckUrl_);
      DARABONBA_PTR_TO_JSON(Hooks, hooks_);
      DARABONBA_PTR_TO_JSON(Jdk, jdk_);
      DARABONBA_PTR_TO_JSON(JvmOptions, jvmOptions_);
      DARABONBA_PTR_TO_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_TO_JSON(MaxHeapSize, maxHeapSize_);
      DARABONBA_PTR_TO_JSON(MaxPermSize, maxPermSize_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
      DARABONBA_PTR_TO_JSON(MinHeapSize, minHeapSize_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(ReservedPortStr, reservedPortStr_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(WebContainer, webContainer_);
    };
    friend void from_json(const Darabonba::Json& j, InsertApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(BuildPackId, buildPackId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComponentIds, componentIds_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcuInfo, ecuInfo_);
      DARABONBA_PTR_FROM_JSON(EnablePortCheck, enablePortCheck_);
      DARABONBA_PTR_FROM_JSON(EnableUrlCheck, enableUrlCheck_);
      DARABONBA_PTR_FROM_JSON(HealthCheckUrl, healthCheckUrl_);
      DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
      DARABONBA_PTR_FROM_JSON(Jdk, jdk_);
      DARABONBA_PTR_FROM_JSON(JvmOptions, jvmOptions_);
      DARABONBA_PTR_FROM_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_FROM_JSON(MaxHeapSize, maxHeapSize_);
      DARABONBA_PTR_FROM_JSON(MaxPermSize, maxPermSize_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
      DARABONBA_PTR_FROM_JSON(MinHeapSize, minHeapSize_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(ReservedPortStr, reservedPortStr_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(WebContainer, webContainer_);
    };
    InsertApplicationRequest() = default ;
    InsertApplicationRequest(const InsertApplicationRequest &) = default ;
    InsertApplicationRequest(InsertApplicationRequest &&) = default ;
    InsertApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertApplicationRequest() = default ;
    InsertApplicationRequest& operator=(const InsertApplicationRequest &) = default ;
    InsertApplicationRequest& operator=(InsertApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->buildPackId_ == nullptr && return this->clusterId_ == nullptr && return this->componentIds_ == nullptr && return this->cpu_ == nullptr && return this->description_ == nullptr
        && return this->ecuInfo_ == nullptr && return this->enablePortCheck_ == nullptr && return this->enableUrlCheck_ == nullptr && return this->healthCheckUrl_ == nullptr && return this->hooks_ == nullptr
        && return this->jdk_ == nullptr && return this->jvmOptions_ == nullptr && return this->logicalRegionId_ == nullptr && return this->maxHeapSize_ == nullptr && return this->maxPermSize_ == nullptr
        && return this->mem_ == nullptr && return this->minHeapSize_ == nullptr && return this->packageType_ == nullptr && return this->reservedPortStr_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->webContainer_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline InsertApplicationRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // buildPackId Field Functions 
    bool hasBuildPackId() const { return this->buildPackId_ != nullptr;};
    void deleteBuildPackId() { this->buildPackId_ = nullptr;};
    inline int32_t buildPackId() const { DARABONBA_PTR_GET_DEFAULT(buildPackId_, 0) };
    inline InsertApplicationRequest& setBuildPackId(int32_t buildPackId) { DARABONBA_PTR_SET_VALUE(buildPackId_, buildPackId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InsertApplicationRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // componentIds Field Functions 
    bool hasComponentIds() const { return this->componentIds_ != nullptr;};
    void deleteComponentIds() { this->componentIds_ = nullptr;};
    inline string componentIds() const { DARABONBA_PTR_GET_DEFAULT(componentIds_, "") };
    inline InsertApplicationRequest& setComponentIds(string componentIds) { DARABONBA_PTR_SET_VALUE(componentIds_, componentIds) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline InsertApplicationRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline InsertApplicationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecuInfo Field Functions 
    bool hasEcuInfo() const { return this->ecuInfo_ != nullptr;};
    void deleteEcuInfo() { this->ecuInfo_ = nullptr;};
    inline string ecuInfo() const { DARABONBA_PTR_GET_DEFAULT(ecuInfo_, "") };
    inline InsertApplicationRequest& setEcuInfo(string ecuInfo) { DARABONBA_PTR_SET_VALUE(ecuInfo_, ecuInfo) };


    // enablePortCheck Field Functions 
    bool hasEnablePortCheck() const { return this->enablePortCheck_ != nullptr;};
    void deleteEnablePortCheck() { this->enablePortCheck_ = nullptr;};
    inline bool enablePortCheck() const { DARABONBA_PTR_GET_DEFAULT(enablePortCheck_, false) };
    inline InsertApplicationRequest& setEnablePortCheck(bool enablePortCheck) { DARABONBA_PTR_SET_VALUE(enablePortCheck_, enablePortCheck) };


    // enableUrlCheck Field Functions 
    bool hasEnableUrlCheck() const { return this->enableUrlCheck_ != nullptr;};
    void deleteEnableUrlCheck() { this->enableUrlCheck_ = nullptr;};
    inline bool enableUrlCheck() const { DARABONBA_PTR_GET_DEFAULT(enableUrlCheck_, false) };
    inline InsertApplicationRequest& setEnableUrlCheck(bool enableUrlCheck) { DARABONBA_PTR_SET_VALUE(enableUrlCheck_, enableUrlCheck) };


    // healthCheckUrl Field Functions 
    bool hasHealthCheckUrl() const { return this->healthCheckUrl_ != nullptr;};
    void deleteHealthCheckUrl() { this->healthCheckUrl_ = nullptr;};
    inline string healthCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(healthCheckUrl_, "") };
    inline InsertApplicationRequest& setHealthCheckUrl(string healthCheckUrl) { DARABONBA_PTR_SET_VALUE(healthCheckUrl_, healthCheckUrl) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline string hooks() const { DARABONBA_PTR_GET_DEFAULT(hooks_, "") };
    inline InsertApplicationRequest& setHooks(string hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };


    // jdk Field Functions 
    bool hasJdk() const { return this->jdk_ != nullptr;};
    void deleteJdk() { this->jdk_ = nullptr;};
    inline string jdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
    inline InsertApplicationRequest& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


    // jvmOptions Field Functions 
    bool hasJvmOptions() const { return this->jvmOptions_ != nullptr;};
    void deleteJvmOptions() { this->jvmOptions_ = nullptr;};
    inline string jvmOptions() const { DARABONBA_PTR_GET_DEFAULT(jvmOptions_, "") };
    inline InsertApplicationRequest& setJvmOptions(string jvmOptions) { DARABONBA_PTR_SET_VALUE(jvmOptions_, jvmOptions) };


    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string logicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline InsertApplicationRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


    // maxHeapSize Field Functions 
    bool hasMaxHeapSize() const { return this->maxHeapSize_ != nullptr;};
    void deleteMaxHeapSize() { this->maxHeapSize_ = nullptr;};
    inline int32_t maxHeapSize() const { DARABONBA_PTR_GET_DEFAULT(maxHeapSize_, 0) };
    inline InsertApplicationRequest& setMaxHeapSize(int32_t maxHeapSize) { DARABONBA_PTR_SET_VALUE(maxHeapSize_, maxHeapSize) };


    // maxPermSize Field Functions 
    bool hasMaxPermSize() const { return this->maxPermSize_ != nullptr;};
    void deleteMaxPermSize() { this->maxPermSize_ = nullptr;};
    inline int32_t maxPermSize() const { DARABONBA_PTR_GET_DEFAULT(maxPermSize_, 0) };
    inline InsertApplicationRequest& setMaxPermSize(int32_t maxPermSize) { DARABONBA_PTR_SET_VALUE(maxPermSize_, maxPermSize) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline InsertApplicationRequest& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // minHeapSize Field Functions 
    bool hasMinHeapSize() const { return this->minHeapSize_ != nullptr;};
    void deleteMinHeapSize() { this->minHeapSize_ = nullptr;};
    inline int32_t minHeapSize() const { DARABONBA_PTR_GET_DEFAULT(minHeapSize_, 0) };
    inline InsertApplicationRequest& setMinHeapSize(int32_t minHeapSize) { DARABONBA_PTR_SET_VALUE(minHeapSize_, minHeapSize) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline InsertApplicationRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // reservedPortStr Field Functions 
    bool hasReservedPortStr() const { return this->reservedPortStr_ != nullptr;};
    void deleteReservedPortStr() { this->reservedPortStr_ = nullptr;};
    inline string reservedPortStr() const { DARABONBA_PTR_GET_DEFAULT(reservedPortStr_, "") };
    inline InsertApplicationRequest& setReservedPortStr(string reservedPortStr) { DARABONBA_PTR_SET_VALUE(reservedPortStr_, reservedPortStr) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline InsertApplicationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string webContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline InsertApplicationRequest& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


  protected:
    // The name of the application. The name can contain only digits, letters, hyphens (-), and underscores (_) and must start with a letter. The name can be up to 36 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The build package number of EDAS Container. This parameter is required if you create a High-Speed Service Framework (HSF) application. You can query the build package number by using one of the following methods:
    // 
    // *   Call the ListBuildPack operation. For more information, see [ListBuildPack](https://help.aliyun.com/document_detail/149391.html).
    // *   Obtain the value in the **Build package number** column of the [Release notes for EDAS Container](https://help.aliyun.com/document_detail/92614.html) topic.
    std::shared_ptr<int32_t> buildPackId_ = nullptr;
    // The ID of the ECS cluster in which you want to create the application. If you specify an ID, the application is created in the specified ECS cluster. If you leave this parameter empty, the application is created in the default cluster. We recommend that you specify this parameter.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the application component. You can call the ListComponents operation to query the component IDs. For more information, see [ListComponents](https://help.aliyun.com/document_detail/97502.html).
    // 
    // This parameter is required if the application runs in Apache Tomcat or in a standard Java application runtime environment. The Apache Tomcat application runtime environment is applicable to Dubbo applications that are deployed by using WAR packages. A standard Java application runtime environment is applicable to Spring Boot or Spring Cloud applications that are deployed by using JAR packages.
    // 
    // Valid values for common application components:
    // 
    // *   4: Apache Tomcat 7.0.91
    // *   7: Apache Tomcat 8.5.42
    // *   5: OpenJDK 1.8.x
    // *   6: OpenJDK 1.7.x
    // 
    // This parameter is available only for Java SDK 2.57.3 or later, or Python SDK 2.57.3 or later. Assume that you use an SDK that is not provided by EDAS, for example, aliyun-python-sdk-core, aliyun-java-sdk-core, and Alibaba Cloud CLI. In this case, you can directly specify this parameter.
    std::shared_ptr<string> componentIds_ = nullptr;
    // The number of CPU cores that can be used by the application container in a Swarm cluster. \\*\\*This parameter is deprecated.\\*\\*
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The value of `ecu_id` of the ECS instance to be added during scale-out. The ECU ID is the unique identity for an ECS instance that is imported to EDAS. Separate multiple values of `ecu_id` with commas (,). You can call the ListScaleOutEcu operation to query the value of `ecu_id`. For more information, see [ListScaleOutEcu](https://help.aliyun.com/document_detail/149371.html).
    std::shared_ptr<string> ecuInfo_ = nullptr;
    // Specifies whether to enable the port health check. Valid values:
    // 
    // *   **true**: enable the port health check.
    // *   **false**: does not enable the port health check.
    std::shared_ptr<bool> enablePortCheck_ = nullptr;
    // Specifies whether to enable the URL health check. Valid values:
    // 
    // *   **true**: enables the URL health check.
    // *   **false**: does not enable the URL health check.
    std::shared_ptr<bool> enableUrlCheck_ = nullptr;
    // The health check URL of the application. This parameter is equivalent to the HealthCheckURL parameter.
    std::shared_ptr<string> healthCheckUrl_ = nullptr;
    // The script to mount. Set the value in the JSON format. Example: `[{"ignoreFail":false,"name":"postprepareInstanceEnvironmentOnScaleOut","script":"ls"},{"ignoreFail":true,"name":"postdeleteInstanceDataOnScaleIn","script":""},{"ignoreFail":true,"name":"prestartInstance","script":""},{"ignoreFail":true,"name":"poststartInstance","script":""},{"ignoreFail":true,"name":"prestopInstance","script":""},{"ignoreFail":true,"name":"poststopInstance","script":""}]`
    std::shared_ptr<string> hooks_ = nullptr;
    // The version of the Java Development Kit (JDK) used to deploy the application. **This parameter is deprecated.
    std::shared_ptr<string> jdk_ = nullptr;
    // The custom parameters.
    std::shared_ptr<string> jvmOptions_ = nullptr;
    // The ID of the microservices namespace. To query the ID of a microservices namespace, you can choose **Resource Management** > **Microservice Namespaces** in the left-side navigation pane of the EDAS console or call the ListUserDefineRegion operation. For more information, see [ListUserDefineRegion](https://help.aliyun.com/document_detail/149377.html).
    // 
    // *   This parameter is required if the cluster you specify is not deployed in the default microservices namespace. Otherwise, the message `application regionId is different with cluster regionId!` appears.
    // *   If the cluster you specify is deployed in the default microservices namespace, you do not need to specify this parameter. Set this parameter to the ID of the microservices namespace in which the cluster you specify is deployed.
    std::shared_ptr<string> logicalRegionId_ = nullptr;
    // The maximum size of the heap memory. Unit: MB.
    std::shared_ptr<int32_t> maxHeapSize_ = nullptr;
    // The size of the permanent generation heap memory. Unit: MB.
    std::shared_ptr<int32_t> maxPermSize_ = nullptr;
    // The memory size that can be used by the application container in a Swarm cluster. \\*\\*This parameter is deprecated.\\*\\*
    std::shared_ptr<int32_t> mem_ = nullptr;
    // The initial size of the heap memory. Unit: MB.
    std::shared_ptr<int32_t> minHeapSize_ = nullptr;
    // The type of the application deployment package. Valid values: war and jar.
    std::shared_ptr<string> packageType_ = nullptr;
    // The reserved port for the application. This parameter is deprecated.
    std::shared_ptr<string> reservedPortStr_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The version of Apache Tomcat. **This parameter is deprecated.
    std::shared_ptr<string> webContainer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
