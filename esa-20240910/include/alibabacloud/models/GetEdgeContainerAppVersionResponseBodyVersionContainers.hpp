// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPVERSIONRESPONSEBODYVERSIONCONTAINERS_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPVERSIONRESPONSEBODYVERSIONCONTAINERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo.hpp>
#include <alibabacloud/models/GetEdgeContainerAppVersionResponseBodyVersionContainersProbeContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppVersionResponseBodyVersionContainers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppVersionResponseBodyVersionContainers& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppVersionResponseBodyVersionContainers& obj) { 
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
    GetEdgeContainerAppVersionResponseBodyVersionContainers() = default ;
    GetEdgeContainerAppVersionResponseBodyVersionContainers(const GetEdgeContainerAppVersionResponseBodyVersionContainers &) = default ;
    GetEdgeContainerAppVersionResponseBodyVersionContainers(GetEdgeContainerAppVersionResponseBodyVersionContainers &&) = default ;
    GetEdgeContainerAppVersionResponseBodyVersionContainers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppVersionResponseBodyVersionContainers() = default ;
    GetEdgeContainerAppVersionResponseBodyVersionContainers& operator=(const GetEdgeContainerAppVersionResponseBodyVersionContainers &) = default ;
    GetEdgeContainerAppVersionResponseBodyVersionContainers& operator=(GetEdgeContainerAppVersionResponseBodyVersionContainers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ACRImageInfo_ == nullptr
        && return this->args_ == nullptr && return this->command_ == nullptr && return this->envVariables_ == nullptr && return this->image_ == nullptr && return this->isACRImage_ == nullptr
        && return this->name_ == nullptr && return this->postStart_ == nullptr && return this->preStop_ == nullptr && return this->probeContent_ == nullptr && return this->probeType_ == nullptr
        && return this->spec_ == nullptr && return this->storage_ == nullptr; };
    // ACRImageInfo Field Functions 
    bool hasACRImageInfo() const { return this->ACRImageInfo_ != nullptr;};
    void deleteACRImageInfo() { this->ACRImageInfo_ = nullptr;};
    inline const Models::GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo & ACRImageInfo() const { DARABONBA_PTR_GET_CONST(ACRImageInfo_, Models::GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo) };
    inline Models::GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo ACRImageInfo() { DARABONBA_PTR_GET(ACRImageInfo_, Models::GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo) };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setACRImageInfo(const Models::GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo & ACRImageInfo) { DARABONBA_PTR_SET_VALUE(ACRImageInfo_, ACRImageInfo) };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setACRImageInfo(Models::GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo && ACRImageInfo) { DARABONBA_PTR_SET_RVALUE(ACRImageInfo_, ACRImageInfo) };


    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline string args() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // envVariables Field Functions 
    bool hasEnvVariables() const { return this->envVariables_ != nullptr;};
    void deleteEnvVariables() { this->envVariables_ = nullptr;};
    inline string envVariables() const { DARABONBA_PTR_GET_DEFAULT(envVariables_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setEnvVariables(string envVariables) { DARABONBA_PTR_SET_VALUE(envVariables_, envVariables) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // isACRImage Field Functions 
    bool hasIsACRImage() const { return this->isACRImage_ != nullptr;};
    void deleteIsACRImage() { this->isACRImage_ = nullptr;};
    inline bool isACRImage() const { DARABONBA_PTR_GET_DEFAULT(isACRImage_, false) };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setIsACRImage(bool isACRImage) { DARABONBA_PTR_SET_VALUE(isACRImage_, isACRImage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string postStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string preStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // probeContent Field Functions 
    bool hasProbeContent() const { return this->probeContent_ != nullptr;};
    void deleteProbeContent() { this->probeContent_ = nullptr;};
    inline const Models::GetEdgeContainerAppVersionResponseBodyVersionContainersProbeContent & probeContent() const { DARABONBA_PTR_GET_CONST(probeContent_, Models::GetEdgeContainerAppVersionResponseBodyVersionContainersProbeContent) };
    inline Models::GetEdgeContainerAppVersionResponseBodyVersionContainersProbeContent probeContent() { DARABONBA_PTR_GET(probeContent_, Models::GetEdgeContainerAppVersionResponseBodyVersionContainersProbeContent) };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setProbeContent(const Models::GetEdgeContainerAppVersionResponseBodyVersionContainersProbeContent & probeContent) { DARABONBA_PTR_SET_VALUE(probeContent_, probeContent) };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setProbeContent(Models::GetEdgeContainerAppVersionResponseBodyVersionContainersProbeContent && probeContent) { DARABONBA_PTR_SET_RVALUE(probeContent_, probeContent) };


    // probeType Field Functions 
    bool hasProbeType() const { return this->probeType_ != nullptr;};
    void deleteProbeType() { this->probeType_ = nullptr;};
    inline string probeType() const { DARABONBA_PTR_GET_DEFAULT(probeType_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setProbeType(string probeType) { DARABONBA_PTR_SET_VALUE(probeType_, probeType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline string storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, "") };
    inline GetEdgeContainerAppVersionResponseBodyVersionContainers& setStorage(string storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


  protected:
    // The information about the Container Registry image.
    std::shared_ptr<Models::GetEdgeContainerAppVersionResponseBodyVersionContainersACRImageInfo> ACRImageInfo_ = nullptr;
    // The arguments that are passed to the container startup command.
    std::shared_ptr<string> args_ = nullptr;
    // The command that is used to start the container.
    std::shared_ptr<string> command_ = nullptr;
    // The environment variables.
    std::shared_ptr<string> envVariables_ = nullptr;
    // The image address.
    std::shared_ptr<string> image_ = nullptr;
    // Indicates whether the image is a Container Registry image.
    std::shared_ptr<bool> isACRImage_ = nullptr;
    // The version name.
    std::shared_ptr<string> name_ = nullptr;
    // The command that is run before the container is started. Format: `{"exec":{"command":["cat","/etc/group"\\]}}`. If you want to cancel this configuration, set the parameter value to `""` or `{}`. If you do not specify this parameter, this configuration is ignored.
    std::shared_ptr<string> postStart_ = nullptr;
    // The command that is run before the container is stopped.
    std::shared_ptr<string> preStop_ = nullptr;
    // The probe content.
    std::shared_ptr<Models::GetEdgeContainerAppVersionResponseBodyVersionContainersProbeContent> probeContent_ = nullptr;
    // The probe type.
    std::shared_ptr<string> probeType_ = nullptr;
    // The compute specification.
    std::shared_ptr<string> spec_ = nullptr;
    // The storage capacity of the container. Valid values: 0.5G, 10G, 20G, and 30G.
    std::shared_ptr<string> storage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
