// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPVERSIONSRESPONSEBODYVERSIONSCONTAINERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPVERSIONSRESPONSEBODYVERSIONSCONTAINERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEdgeContainerAppVersionsResponseBodyVersionsContainersProbeContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListEdgeContainerAppVersionsResponseBodyVersionsContainers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeContainerAppVersionsResponseBodyVersionsContainers& obj) { 
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(EnvVariables, envVariables_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PostStart, postStart_);
      DARABONBA_PTR_TO_JSON(PreStop, preStop_);
      DARABONBA_PTR_TO_JSON(ProbeContent, probeContent_);
      DARABONBA_PTR_TO_JSON(ProbeType, probeType_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeContainerAppVersionsResponseBodyVersionsContainers& obj) { 
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(EnvVariables, envVariables_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
      DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
      DARABONBA_PTR_FROM_JSON(ProbeContent, probeContent_);
      DARABONBA_PTR_FROM_JSON(ProbeType, probeType_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    ListEdgeContainerAppVersionsResponseBodyVersionsContainers() = default ;
    ListEdgeContainerAppVersionsResponseBodyVersionsContainers(const ListEdgeContainerAppVersionsResponseBodyVersionsContainers &) = default ;
    ListEdgeContainerAppVersionsResponseBodyVersionsContainers(ListEdgeContainerAppVersionsResponseBodyVersionsContainers &&) = default ;
    ListEdgeContainerAppVersionsResponseBodyVersionsContainers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeContainerAppVersionsResponseBodyVersionsContainers() = default ;
    ListEdgeContainerAppVersionsResponseBodyVersionsContainers& operator=(const ListEdgeContainerAppVersionsResponseBodyVersionsContainers &) = default ;
    ListEdgeContainerAppVersionsResponseBodyVersionsContainers& operator=(ListEdgeContainerAppVersionsResponseBodyVersionsContainers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->args_ == nullptr
        && return this->command_ == nullptr && return this->envVariables_ == nullptr && return this->image_ == nullptr && return this->name_ == nullptr && return this->postStart_ == nullptr
        && return this->preStop_ == nullptr && return this->probeContent_ == nullptr && return this->probeType_ == nullptr && return this->spec_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline string args() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersionsContainers& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersionsContainers& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // envVariables Field Functions 
    bool hasEnvVariables() const { return this->envVariables_ != nullptr;};
    void deleteEnvVariables() { this->envVariables_ = nullptr;};
    inline string envVariables() const { DARABONBA_PTR_GET_DEFAULT(envVariables_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersionsContainers& setEnvVariables(string envVariables) { DARABONBA_PTR_SET_VALUE(envVariables_, envVariables) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersionsContainers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersionsContainers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string postStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersionsContainers& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string preStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersionsContainers& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // probeContent Field Functions 
    bool hasProbeContent() const { return this->probeContent_ != nullptr;};
    void deleteProbeContent() { this->probeContent_ = nullptr;};
    inline const Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainersProbeContent & probeContent() const { DARABONBA_PTR_GET_CONST(probeContent_, Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainersProbeContent) };
    inline Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainersProbeContent probeContent() { DARABONBA_PTR_GET(probeContent_, Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainersProbeContent) };
    inline ListEdgeContainerAppVersionsResponseBodyVersionsContainers& setProbeContent(const Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainersProbeContent & probeContent) { DARABONBA_PTR_SET_VALUE(probeContent_, probeContent) };
    inline ListEdgeContainerAppVersionsResponseBodyVersionsContainers& setProbeContent(Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainersProbeContent && probeContent) { DARABONBA_PTR_SET_RVALUE(probeContent_, probeContent) };


    // probeType Field Functions 
    bool hasProbeType() const { return this->probeType_ != nullptr;};
    void deleteProbeType() { this->probeType_ = nullptr;};
    inline string probeType() const { DARABONBA_PTR_GET_DEFAULT(probeType_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersionsContainers& setProbeType(string probeType) { DARABONBA_PTR_SET_VALUE(probeType_, probeType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ListEdgeContainerAppVersionsResponseBodyVersionsContainers& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The arguments that are passed to the container startup command.
    std::shared_ptr<string> args_ = nullptr;
    // The command that is used to start the container.
    std::shared_ptr<string> command_ = nullptr;
    // The environment variables of the container.
    std::shared_ptr<string> envVariables_ = nullptr;
    // The address of the container image.
    std::shared_ptr<string> image_ = nullptr;
    // The container name.
    std::shared_ptr<string> name_ = nullptr;
    // The command that is run before the container is started. Format: `{"exec":{"command":["cat","/etc/group"\\]}}`.
    // 
    // If you want to cancel this configuration, set the parameter value to `""` or `{}`. If you do not specify this parameter, this configuration is ignored.
    std::shared_ptr<string> postStart_ = nullptr;
    // The command that is run before the container is stopped.
    std::shared_ptr<string> preStop_ = nullptr;
    // The container probe content.
    std::shared_ptr<Models::ListEdgeContainerAppVersionsResponseBodyVersionsContainersProbeContent> probeContent_ = nullptr;
    // The probe type of the container.
    std::shared_ptr<string> probeType_ = nullptr;
    // The compute specification of the container.
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
