// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTAINERCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_CONTAINERCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ContainerConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContainerConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(command, command_);
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(imageRegistryType, imageRegistryType_);
    };
    friend void from_json(const Darabonba::Json& j, ContainerConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(command, command_);
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(imageRegistryType, imageRegistryType_);
    };
    ContainerConfiguration() = default ;
    ContainerConfiguration(const ContainerConfiguration &) = default ;
    ContainerConfiguration(ContainerConfiguration &&) = default ;
    ContainerConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContainerConfiguration() = default ;
    ContainerConfiguration& operator=(const ContainerConfiguration &) = default ;
    ContainerConfiguration& operator=(ContainerConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrInstanceId_ == nullptr
        && return this->command_ == nullptr && return this->image_ == nullptr && return this->imageRegistryType_ == nullptr; };
    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string acrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline ContainerConfiguration& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & command() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> command() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline ContainerConfiguration& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline ContainerConfiguration& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ContainerConfiguration& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imageRegistryType Field Functions 
    bool hasImageRegistryType() const { return this->imageRegistryType_ != nullptr;};
    void deleteImageRegistryType() { this->imageRegistryType_ = nullptr;};
    inline string imageRegistryType() const { DARABONBA_PTR_GET_DEFAULT(imageRegistryType_, "") };
    inline ContainerConfiguration& setImageRegistryType(string imageRegistryType) { DARABONBA_PTR_SET_VALUE(imageRegistryType_, imageRegistryType) };


  protected:
    // 阿里云容器镜像服务（ACR）的实例ID或名称
    std::shared_ptr<string> acrInstanceId_ = nullptr;
    // 在容器中运行的命令（例如：[\"python3\", \"app.py\"]）
    std::shared_ptr<vector<string>> command_ = nullptr;
    std::shared_ptr<string> image_ = nullptr;
    // 容器镜像的来源类型，支持ACR（阿里云容器镜像服务）、ACREE（阿里云容器镜像服务企业版）、CUSTOM（自定义镜像仓库）
    std::shared_ptr<string> imageRegistryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
