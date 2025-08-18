// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDGECONTAINERAPPVERSIONREQUESTCONTAINERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDGECONTAINERAPPVERSIONREQUESTCONTAINERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEdgeContainerAppVersionRequestContainersACRImageInfo.hpp>
#include <alibabacloud/models/CreateEdgeContainerAppVersionRequestContainersProbeContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateEdgeContainerAppVersionRequestContainers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEdgeContainerAppVersionRequestContainers& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateEdgeContainerAppVersionRequestContainers& obj) { 
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
    CreateEdgeContainerAppVersionRequestContainers() = default ;
    CreateEdgeContainerAppVersionRequestContainers(const CreateEdgeContainerAppVersionRequestContainers &) = default ;
    CreateEdgeContainerAppVersionRequestContainers(CreateEdgeContainerAppVersionRequestContainers &&) = default ;
    CreateEdgeContainerAppVersionRequestContainers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEdgeContainerAppVersionRequestContainers() = default ;
    CreateEdgeContainerAppVersionRequestContainers& operator=(const CreateEdgeContainerAppVersionRequestContainers &) = default ;
    CreateEdgeContainerAppVersionRequestContainers& operator=(CreateEdgeContainerAppVersionRequestContainers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ACRImageInfo_ != nullptr
        && this->args_ != nullptr && this->command_ != nullptr && this->envVariables_ != nullptr && this->image_ != nullptr && this->isACRImage_ != nullptr
        && this->name_ != nullptr && this->postStart_ != nullptr && this->preStop_ != nullptr && this->probeContent_ != nullptr && this->probeType_ != nullptr
        && this->spec_ != nullptr && this->storage_ != nullptr; };
    // ACRImageInfo Field Functions 
    bool hasACRImageInfo() const { return this->ACRImageInfo_ != nullptr;};
    void deleteACRImageInfo() { this->ACRImageInfo_ = nullptr;};
    inline const Models::CreateEdgeContainerAppVersionRequestContainersACRImageInfo & ACRImageInfo() const { DARABONBA_PTR_GET_CONST(ACRImageInfo_, Models::CreateEdgeContainerAppVersionRequestContainersACRImageInfo) };
    inline Models::CreateEdgeContainerAppVersionRequestContainersACRImageInfo ACRImageInfo() { DARABONBA_PTR_GET(ACRImageInfo_, Models::CreateEdgeContainerAppVersionRequestContainersACRImageInfo) };
    inline CreateEdgeContainerAppVersionRequestContainers& setACRImageInfo(const Models::CreateEdgeContainerAppVersionRequestContainersACRImageInfo & ACRImageInfo) { DARABONBA_PTR_SET_VALUE(ACRImageInfo_, ACRImageInfo) };
    inline CreateEdgeContainerAppVersionRequestContainers& setACRImageInfo(Models::CreateEdgeContainerAppVersionRequestContainersACRImageInfo && ACRImageInfo) { DARABONBA_PTR_SET_RVALUE(ACRImageInfo_, ACRImageInfo) };


    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline string args() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
    inline CreateEdgeContainerAppVersionRequestContainers& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline CreateEdgeContainerAppVersionRequestContainers& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // envVariables Field Functions 
    bool hasEnvVariables() const { return this->envVariables_ != nullptr;};
    void deleteEnvVariables() { this->envVariables_ = nullptr;};
    inline string envVariables() const { DARABONBA_PTR_GET_DEFAULT(envVariables_, "") };
    inline CreateEdgeContainerAppVersionRequestContainers& setEnvVariables(string envVariables) { DARABONBA_PTR_SET_VALUE(envVariables_, envVariables) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline CreateEdgeContainerAppVersionRequestContainers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // isACRImage Field Functions 
    bool hasIsACRImage() const { return this->isACRImage_ != nullptr;};
    void deleteIsACRImage() { this->isACRImage_ = nullptr;};
    inline bool isACRImage() const { DARABONBA_PTR_GET_DEFAULT(isACRImage_, false) };
    inline CreateEdgeContainerAppVersionRequestContainers& setIsACRImage(bool isACRImage) { DARABONBA_PTR_SET_VALUE(isACRImage_, isACRImage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEdgeContainerAppVersionRequestContainers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string postStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline CreateEdgeContainerAppVersionRequestContainers& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string preStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline CreateEdgeContainerAppVersionRequestContainers& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // probeContent Field Functions 
    bool hasProbeContent() const { return this->probeContent_ != nullptr;};
    void deleteProbeContent() { this->probeContent_ = nullptr;};
    inline const Models::CreateEdgeContainerAppVersionRequestContainersProbeContent & probeContent() const { DARABONBA_PTR_GET_CONST(probeContent_, Models::CreateEdgeContainerAppVersionRequestContainersProbeContent) };
    inline Models::CreateEdgeContainerAppVersionRequestContainersProbeContent probeContent() { DARABONBA_PTR_GET(probeContent_, Models::CreateEdgeContainerAppVersionRequestContainersProbeContent) };
    inline CreateEdgeContainerAppVersionRequestContainers& setProbeContent(const Models::CreateEdgeContainerAppVersionRequestContainersProbeContent & probeContent) { DARABONBA_PTR_SET_VALUE(probeContent_, probeContent) };
    inline CreateEdgeContainerAppVersionRequestContainers& setProbeContent(Models::CreateEdgeContainerAppVersionRequestContainersProbeContent && probeContent) { DARABONBA_PTR_SET_RVALUE(probeContent_, probeContent) };


    // probeType Field Functions 
    bool hasProbeType() const { return this->probeType_ != nullptr;};
    void deleteProbeType() { this->probeType_ = nullptr;};
    inline string probeType() const { DARABONBA_PTR_GET_DEFAULT(probeType_, "") };
    inline CreateEdgeContainerAppVersionRequestContainers& setProbeType(string probeType) { DARABONBA_PTR_SET_VALUE(probeType_, probeType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateEdgeContainerAppVersionRequestContainers& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline string storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, "") };
    inline CreateEdgeContainerAppVersionRequestContainers& setStorage(string storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


  protected:
    // The information about the Container Registry image.
    std::shared_ptr<Models::CreateEdgeContainerAppVersionRequestContainersACRImageInfo> ACRImageInfo_ = nullptr;
    // The arguments that are passed to the container startup command. Separate the parameters with spaces.
    std::shared_ptr<string> args_ = nullptr;
    // The command that is used to start the container. Separate the arguments with spaces.
    std::shared_ptr<string> command_ = nullptr;
    // The environment variables. Separate the environment variables with commas (,).
    std::shared_ptr<string> envVariables_ = nullptr;
    // The address of the image.
    // 
    // This parameter is required.
    std::shared_ptr<string> image_ = nullptr;
    // Specifies whether the image is a Container Registry image.
    // 
    // This parameter is required.
    std::shared_ptr<bool> isACRImage_ = nullptr;
    // The name of the container. The name must be unique in the same container group.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The command that is run before the container is started. Separate the arguments with spaces.
    std::shared_ptr<string> postStart_ = nullptr;
    // The command that is run before the container is stopped. Separate the arguments with spaces.
    std::shared_ptr<string> preStop_ = nullptr;
    // The content of the container health probe.
    // 
    // This parameter is required.
    std::shared_ptr<Models::CreateEdgeContainerAppVersionRequestContainersProbeContent> probeContent_ = nullptr;
    // The type of the probe. Valid values:
    // 
    // *   exec: the command type.
    // *   tcpSocket: the TCP probe type.
    // *   httpGet: the HTTP access type.
    // 
    // This parameter is required.
    std::shared_ptr<string> probeType_ = nullptr;
    // The compute specification of the container. Valid values: 1C2G, 2C4G, 2C8G, 4C8G, 4C16G, 8C16G, and 8C32G.
    // 
    // This parameter is required.
    std::shared_ptr<string> spec_ = nullptr;
    // The storage capacity. Valid values: 0.5G, 10G, 20G, and 30G.
    // 
    // This parameter is required.
    std::shared_ptr<string> storage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
