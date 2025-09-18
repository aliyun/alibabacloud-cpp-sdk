// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATAINITCONTAINERSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATAINITCONTAINERSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationConfigResponseBodyDataInitContainersConfigConfigMapMountDesc.hpp>
#include <alibabacloud/models/DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationConfigResponseBodyDataInitContainersConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationConfigResponseBodyDataInitContainersConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_TO_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_TO_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationConfigResponseBodyDataInitContainersConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_FROM_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_FROM_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeApplicationConfigResponseBodyDataInitContainersConfig() = default ;
    DescribeApplicationConfigResponseBodyDataInitContainersConfig(const DescribeApplicationConfigResponseBodyDataInitContainersConfig &) = default ;
    DescribeApplicationConfigResponseBodyDataInitContainersConfig(DescribeApplicationConfigResponseBodyDataInitContainersConfig &&) = default ;
    DescribeApplicationConfigResponseBodyDataInitContainersConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationConfigResponseBodyDataInitContainersConfig() = default ;
    DescribeApplicationConfigResponseBodyDataInitContainersConfig& operator=(const DescribeApplicationConfigResponseBodyDataInitContainersConfig &) = default ;
    DescribeApplicationConfigResponseBodyDataInitContainersConfig& operator=(DescribeApplicationConfigResponseBodyDataInitContainersConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->command_ != nullptr
        && this->commandArgs_ != nullptr && this->configMapMountDesc_ != nullptr && this->emptyDirDesc_ != nullptr && this->envs_ != nullptr && this->imageUrl_ != nullptr
        && this->name_ != nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline DescribeApplicationConfigResponseBodyDataInitContainersConfig& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string commandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline DescribeApplicationConfigResponseBodyDataInitContainersConfig& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // configMapMountDesc Field Functions 
    bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
    void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
    inline const vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigConfigMapMountDesc> & configMapMountDesc() const { DARABONBA_PTR_GET_CONST(configMapMountDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigConfigMapMountDesc>) };
    inline vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigConfigMapMountDesc> configMapMountDesc() { DARABONBA_PTR_GET(configMapMountDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigConfigMapMountDesc>) };
    inline DescribeApplicationConfigResponseBodyDataInitContainersConfig& setConfigMapMountDesc(const vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigConfigMapMountDesc> & configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };
    inline DescribeApplicationConfigResponseBodyDataInitContainersConfig& setConfigMapMountDesc(vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigConfigMapMountDesc> && configMapMountDesc) { DARABONBA_PTR_SET_RVALUE(configMapMountDesc_, configMapMountDesc) };


    // emptyDirDesc Field Functions 
    bool hasEmptyDirDesc() const { return this->emptyDirDesc_ != nullptr;};
    void deleteEmptyDirDesc() { this->emptyDirDesc_ = nullptr;};
    inline const vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc> & emptyDirDesc() const { DARABONBA_PTR_GET_CONST(emptyDirDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc>) };
    inline vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc> emptyDirDesc() { DARABONBA_PTR_GET(emptyDirDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc>) };
    inline DescribeApplicationConfigResponseBodyDataInitContainersConfig& setEmptyDirDesc(const vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc> & emptyDirDesc) { DARABONBA_PTR_SET_VALUE(emptyDirDesc_, emptyDirDesc) };
    inline DescribeApplicationConfigResponseBodyDataInitContainersConfig& setEmptyDirDesc(vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc> && emptyDirDesc) { DARABONBA_PTR_SET_RVALUE(emptyDirDesc_, emptyDirDesc) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string envs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline DescribeApplicationConfigResponseBodyDataInitContainersConfig& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribeApplicationConfigResponseBodyDataInitContainersConfig& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeApplicationConfigResponseBodyDataInitContainersConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
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
    // The information of ConfigMap.
    std::shared_ptr<vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigConfigMapMountDesc>> configMapMountDesc_ = nullptr;
    std::shared_ptr<vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc>> emptyDirDesc_ = nullptr;
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
    // The image URL of the initialized container.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The name of the initialized container.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
