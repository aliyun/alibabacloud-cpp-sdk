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
        && this->buildPackId_ == nullptr && this->clusterId_ == nullptr && this->componentIds_ == nullptr && this->cpu_ == nullptr && this->description_ == nullptr
        && this->ecuInfo_ == nullptr && this->enablePortCheck_ == nullptr && this->enableUrlCheck_ == nullptr && this->healthCheckUrl_ == nullptr && this->hooks_ == nullptr
        && this->jdk_ == nullptr && this->jvmOptions_ == nullptr && this->logicalRegionId_ == nullptr && this->maxHeapSize_ == nullptr && this->maxPermSize_ == nullptr
        && this->mem_ == nullptr && this->minHeapSize_ == nullptr && this->packageType_ == nullptr && this->reservedPortStr_ == nullptr && this->resourceGroupId_ == nullptr
        && this->webContainer_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline InsertApplicationRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // buildPackId Field Functions 
    bool hasBuildPackId() const { return this->buildPackId_ != nullptr;};
    void deleteBuildPackId() { this->buildPackId_ = nullptr;};
    inline int32_t getBuildPackId() const { DARABONBA_PTR_GET_DEFAULT(buildPackId_, 0) };
    inline InsertApplicationRequest& setBuildPackId(int32_t buildPackId) { DARABONBA_PTR_SET_VALUE(buildPackId_, buildPackId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InsertApplicationRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // componentIds Field Functions 
    bool hasComponentIds() const { return this->componentIds_ != nullptr;};
    void deleteComponentIds() { this->componentIds_ = nullptr;};
    inline string getComponentIds() const { DARABONBA_PTR_GET_DEFAULT(componentIds_, "") };
    inline InsertApplicationRequest& setComponentIds(string componentIds) { DARABONBA_PTR_SET_VALUE(componentIds_, componentIds) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline InsertApplicationRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline InsertApplicationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecuInfo Field Functions 
    bool hasEcuInfo() const { return this->ecuInfo_ != nullptr;};
    void deleteEcuInfo() { this->ecuInfo_ = nullptr;};
    inline string getEcuInfo() const { DARABONBA_PTR_GET_DEFAULT(ecuInfo_, "") };
    inline InsertApplicationRequest& setEcuInfo(string ecuInfo) { DARABONBA_PTR_SET_VALUE(ecuInfo_, ecuInfo) };


    // enablePortCheck Field Functions 
    bool hasEnablePortCheck() const { return this->enablePortCheck_ != nullptr;};
    void deleteEnablePortCheck() { this->enablePortCheck_ = nullptr;};
    inline bool getEnablePortCheck() const { DARABONBA_PTR_GET_DEFAULT(enablePortCheck_, false) };
    inline InsertApplicationRequest& setEnablePortCheck(bool enablePortCheck) { DARABONBA_PTR_SET_VALUE(enablePortCheck_, enablePortCheck) };


    // enableUrlCheck Field Functions 
    bool hasEnableUrlCheck() const { return this->enableUrlCheck_ != nullptr;};
    void deleteEnableUrlCheck() { this->enableUrlCheck_ = nullptr;};
    inline bool getEnableUrlCheck() const { DARABONBA_PTR_GET_DEFAULT(enableUrlCheck_, false) };
    inline InsertApplicationRequest& setEnableUrlCheck(bool enableUrlCheck) { DARABONBA_PTR_SET_VALUE(enableUrlCheck_, enableUrlCheck) };


    // healthCheckUrl Field Functions 
    bool hasHealthCheckUrl() const { return this->healthCheckUrl_ != nullptr;};
    void deleteHealthCheckUrl() { this->healthCheckUrl_ = nullptr;};
    inline string getHealthCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(healthCheckUrl_, "") };
    inline InsertApplicationRequest& setHealthCheckUrl(string healthCheckUrl) { DARABONBA_PTR_SET_VALUE(healthCheckUrl_, healthCheckUrl) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline string getHooks() const { DARABONBA_PTR_GET_DEFAULT(hooks_, "") };
    inline InsertApplicationRequest& setHooks(string hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };


    // jdk Field Functions 
    bool hasJdk() const { return this->jdk_ != nullptr;};
    void deleteJdk() { this->jdk_ = nullptr;};
    inline string getJdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
    inline InsertApplicationRequest& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


    // jvmOptions Field Functions 
    bool hasJvmOptions() const { return this->jvmOptions_ != nullptr;};
    void deleteJvmOptions() { this->jvmOptions_ = nullptr;};
    inline string getJvmOptions() const { DARABONBA_PTR_GET_DEFAULT(jvmOptions_, "") };
    inline InsertApplicationRequest& setJvmOptions(string jvmOptions) { DARABONBA_PTR_SET_VALUE(jvmOptions_, jvmOptions) };


    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string getLogicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline InsertApplicationRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


    // maxHeapSize Field Functions 
    bool hasMaxHeapSize() const { return this->maxHeapSize_ != nullptr;};
    void deleteMaxHeapSize() { this->maxHeapSize_ = nullptr;};
    inline int32_t getMaxHeapSize() const { DARABONBA_PTR_GET_DEFAULT(maxHeapSize_, 0) };
    inline InsertApplicationRequest& setMaxHeapSize(int32_t maxHeapSize) { DARABONBA_PTR_SET_VALUE(maxHeapSize_, maxHeapSize) };


    // maxPermSize Field Functions 
    bool hasMaxPermSize() const { return this->maxPermSize_ != nullptr;};
    void deleteMaxPermSize() { this->maxPermSize_ = nullptr;};
    inline int32_t getMaxPermSize() const { DARABONBA_PTR_GET_DEFAULT(maxPermSize_, 0) };
    inline InsertApplicationRequest& setMaxPermSize(int32_t maxPermSize) { DARABONBA_PTR_SET_VALUE(maxPermSize_, maxPermSize) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline InsertApplicationRequest& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // minHeapSize Field Functions 
    bool hasMinHeapSize() const { return this->minHeapSize_ != nullptr;};
    void deleteMinHeapSize() { this->minHeapSize_ = nullptr;};
    inline int32_t getMinHeapSize() const { DARABONBA_PTR_GET_DEFAULT(minHeapSize_, 0) };
    inline InsertApplicationRequest& setMinHeapSize(int32_t minHeapSize) { DARABONBA_PTR_SET_VALUE(minHeapSize_, minHeapSize) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline InsertApplicationRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // reservedPortStr Field Functions 
    bool hasReservedPortStr() const { return this->reservedPortStr_ != nullptr;};
    void deleteReservedPortStr() { this->reservedPortStr_ = nullptr;};
    inline string getReservedPortStr() const { DARABONBA_PTR_GET_DEFAULT(reservedPortStr_, "") };
    inline InsertApplicationRequest& setReservedPortStr(string reservedPortStr) { DARABONBA_PTR_SET_VALUE(reservedPortStr_, reservedPortStr) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline InsertApplicationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string getWebContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline InsertApplicationRequest& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


  protected:
    // The name of the application. The name can contain only digits, letters, hyphens (-), and underscores (_). It must start with a letter and can be up to 36 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> applicationName_ {};
    // The build package number of EDAS-Container. This parameter is required when you create a High-speed Service Framework (HSF) application. You can obtain the build package number in one of the following ways:
    // 
    // - Call the ListBuildPack operation. For more information, see [ListBuildPack](https://help.aliyun.com/document_detail/149391.html).
    // 
    // - Obtain the build package number from the **Build Package Number** column in the [Container versions](https://help.aliyun.com/document_detail/92614.html) table.
    shared_ptr<int32_t> buildPackId_ {};
    // The ID of the ECS cluster. Specify this parameter to create the application in a specific ECS cluster. If you leave this parameter empty, the application is created in the default cluster. We recommend that you specify this parameter.
    shared_ptr<string> clusterId_ {};
    // The ID of the application component. You can call the ListComponents operation to query the component ID. For more information, see [ListComponents](https://help.aliyun.com/document_detail/97502.html).
    // 
    // This parameter is required if the application runs in an Apache Tomcat container (for Dubbo applications that are deployed in a WAR package) or a standard Java application runtime environment (for Spring Boot or Spring Cloud applications that are deployed in a JAR package).
    // 
    // The following application component IDs are commonly used:
    // 
    // - 4: Apache Tomcat 7.0.91
    // 
    // - 7: Apache Tomcat 8.5.42
    // 
    // - 5: OpenJDK 1.8.x
    // 
    // - 6: OpenJDK 1.7.x
    // 
    // To set this parameter, you must update the Java or Python software development kit (SDK) to version 2.57.3 or later. If you do not use an EDAS SDK, such as aliyun-python-sdk-core, aliyun-java-sdk-core, or Alibaba Cloud CLI, you can set this parameter.
    shared_ptr<string> componentIds_ {};
    // \\*\\*(Deprecated)\\*\\* The number of CPU cores for the application container in a Swarm cluster.
    shared_ptr<int32_t> cpu_ {};
    // The description of the application.
    shared_ptr<string> description_ {};
    // The \\`ecu_id\\` of the ECS instance to which you want to scale out the application. The \\`ecu_id\\` is the unique ID of an ECS instance that is imported to EDAS. To specify multiple \\`ecu_id\\`s, separate them with commas (,). You can call the ListScaleOutEcu operation to query the \\`ecu_id\\`. For more information, see [ListScaleOutEcu](https://help.aliyun.com/document_detail/149371.html).
    shared_ptr<string> ecuInfo_ {};
    // Specifies whether to enable the port health check. Valid values:
    // 
    // - **true**: Enabled
    // 
    // - **false**: Disabled
    shared_ptr<bool> enablePortCheck_ {};
    // Specifies whether to enable the health check URL. Valid values:
    // 
    // - **true**: Enabled
    // 
    // - **false**: Disabled
    shared_ptr<bool> enableUrlCheck_ {};
    // The health check URL of the application. This parameter is equivalent to the HealthCheckURL parameter.
    shared_ptr<string> healthCheckUrl_ {};
    // The configuration of the mounted script. The value is a JSON string. Example:
    // `[{"ignoreFail":false,"name":"postprepareInstanceEnvironmentOnScaleOut","script":"ls"},{"ignoreFail":true,"name":"postdeleteInstanceDataOnScaleIn","script":""},{"ignoreFail":true,"name":"prestartInstance","script":""},{"ignoreFail":true,"name":"poststartInstance","script":""},{"ignoreFail":true,"name":"prestopInstance","script":""},{"ignoreFail":true,"name":"poststopInstance","script":""}]`
    shared_ptr<string> hooks_ {};
    // **(Deprecated)** The version of the Java Development Kit (JDK) that the application uses.
    shared_ptr<string> jdk_ {};
    // The custom parameters.
    shared_ptr<string> jvmOptions_ {};
    // The ID of the microservices namespace. In the EDAS console, choose **Resource Management** > **Microservices Namespace** in the navigation pane on the left to view the ID of the microservices namespace. You can also call the ListUserDefineRegion operation to query the ID. For more information, see [ListUserDefineRegion](https://help.aliyun.com/document_detail/149377.html).
    // 
    // - If the specified cluster is not in the default microservices namespace, you must specify this parameter. Otherwise, the \\`application regionId is different with cluster regionId!\\` error is reported.
    // 
    // - If the cluster is in the default microservices namespace, you do not need to specify this parameter. The microservices namespace of the application must be the same as the microservices namespace of the specified cluster.
    shared_ptr<string> logicalRegionId_ {};
    // The maximum size of the heap memory. Unit: MB.
    shared_ptr<int32_t> maxHeapSize_ {};
    // The size of the permanent generation memory. Unit: MB.
    shared_ptr<int32_t> maxPermSize_ {};
    // \\*\\*(Deprecated)\\*\\* The memory size for the application container in a Swarm cluster.
    shared_ptr<int32_t> mem_ {};
    // The initial size of the heap memory. Unit: MB.
    shared_ptr<int32_t> minHeapSize_ {};
    // The format of the application deployment package. Valid values: war and jar.
    shared_ptr<string> packageType_ {};
    // \\*\\*(Deprecated)\\*\\* The reserved port of the application.
    shared_ptr<string> reservedPortStr_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // **(Deprecated)** The version of Apache Tomcat.
    shared_ptr<string> webContainer_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
