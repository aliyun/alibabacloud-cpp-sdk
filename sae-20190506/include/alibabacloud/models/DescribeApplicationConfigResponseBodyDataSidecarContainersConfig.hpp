// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATASIDECARCONTAINERSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATASIDECARCONTAINERSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc.hpp>
#include <alibabacloud/models/DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationConfigResponseBodyDataSidecarContainersConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_TO_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_FROM_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfig() = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfig(const DescribeApplicationConfigResponseBodyDataSidecarContainersConfig &) = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfig(DescribeApplicationConfigResponseBodyDataSidecarContainersConfig &&) = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationConfigResponseBodyDataSidecarContainersConfig() = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& operator=(const DescribeApplicationConfigResponseBodyDataSidecarContainersConfig &) = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& operator=(DescribeApplicationConfigResponseBodyDataSidecarContainersConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acrInstanceId_ != nullptr
        && this->command_ != nullptr && this->commandArgs_ != nullptr && this->configMapMountDesc_ != nullptr && this->cpu_ != nullptr && this->emptyDirDesc_ != nullptr
        && this->envs_ != nullptr && this->imageUrl_ != nullptr && this->memory_ != nullptr && this->name_ != nullptr; };
    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string acrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string commandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // configMapMountDesc Field Functions 
    bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
    void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
    inline const vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc> & configMapMountDesc() const { DARABONBA_PTR_GET_CONST(configMapMountDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc>) };
    inline vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc> configMapMountDesc() { DARABONBA_PTR_GET(configMapMountDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc>) };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& setConfigMapMountDesc(const vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc> & configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& setConfigMapMountDesc(vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc> && configMapMountDesc) { DARABONBA_PTR_SET_RVALUE(configMapMountDesc_, configMapMountDesc) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // emptyDirDesc Field Functions 
    bool hasEmptyDirDesc() const { return this->emptyDirDesc_ != nullptr;};
    void deleteEmptyDirDesc() { this->emptyDirDesc_ = nullptr;};
    inline const vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc> & emptyDirDesc() const { DARABONBA_PTR_GET_CONST(emptyDirDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc>) };
    inline vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc> emptyDirDesc() { DARABONBA_PTR_GET(emptyDirDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc>) };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& setEmptyDirDesc(const vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc> & emptyDirDesc) { DARABONBA_PTR_SET_VALUE(emptyDirDesc_, emptyDirDesc) };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& setEmptyDirDesc(vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc> && emptyDirDesc) { DARABONBA_PTR_SET_RVALUE(emptyDirDesc_, emptyDirDesc) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string envs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of Container Registry Enterprise Edition instance. This parameter is required when the **ImageUrl** parameter is set to the URL of an image in an ACR Enterprise Edition instance.
    std::shared_ptr<string> acrInstanceId_ = nullptr;
    // The command that is used to start the image. The command must be an existing executable object in the container. Sample statements:
    // 
    //     command:
    //           - echo
    //           - abc
    //           - >
    //           - file0
    // 
    // In this example, the Command parameter is set to `Command="echo", CommandArgs=["abc", ">", "file0"]`.
    std::shared_ptr<string> command_ = nullptr;
    // The parameters of the image startup command. The CommandArgs parameter specifies the parameters that are required for the **Command** parameter. You can specify the name in one of the following formats:
    // 
    // `["a","b"]`
    // 
    // In the preceding example, the CommandArgs parameter is set to `CommandArgs=["abc", ">", "file0"]`. The data type of `["abc", ">", "file0"]` must be an array of strings in the JSON format. This parameter is optional.
    std::shared_ptr<string> commandArgs_ = nullptr;
    // The description of the **ConfigMap** instance mounted to the application. Use configurations created on the Configuration Items page to configure containers. The following table describes the parameters that are used in the preceding statements.
    // 
    // *   **congfigMapId**: the ID of the ConfigMap instance. You can call the [ListNamespacedConfigMaps](https://help.aliyun.com/document_detail/176917.html) operation to obtain the ID.
    // *   **key**: the key.
    // 
    // > You can use the `sae-sys-configmap-all` key to mount all keys.
    // 
    // *   **mountPath**: the mount path in the container.
    std::shared_ptr<vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigConfigMapMountDesc>> configMapMountDesc_ = nullptr;
    // Set the CPU resource limit of the primary container that can be used by Sidecar container.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // Shared temporary storage mounted to the primary container and the Sidecar container.
    std::shared_ptr<vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc>> emptyDirDesc_ = nullptr;
    // The environment variables. You can configure custom environment variables or reference a ConfigMap. If you want to reference a ConfigMap, you must first create a ConfigMap. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). Take note of the following rules:
    // 
    // *   Customize
    // 
    //     *   **name**: the name of the environment variable.
    //     *   **value**: the value of the environment variable.
    // 
    // *   Reference ConfigMap
    // 
    //     *   **name**: the name of the environment variable. You can reference one or all keys. If you want to reference all keys, specify `sae-sys-configmap-all-<ConfigMap name>`. Example: `sae-sys-configmap-all-test1`.
    //     *   **valueFrom**: the reference of the environment variable. Set the value to `configMapRef`.
    //     *   **configMapId**: the ConfigMap ID.
    //     *   **key**: the key. If you want to reference all keys, do not configure this parameter.
    std::shared_ptr<string> envs_ = nullptr;
    // The URL of the image.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // Set the memory limit of the primary container that can be used by Sidecar container.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The container name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
