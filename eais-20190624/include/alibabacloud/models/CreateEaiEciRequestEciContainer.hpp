// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEAIECIREQUESTECICONTAINER_HPP_
#define ALIBABACLOUD_MODELS_CREATEEAIECIREQUESTECICONTAINER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class CreateEaiEciRequestEciContainer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEaiEciRequestEciContainer& obj) { 
      DARABONBA_PTR_TO_JSON(Arg, arg_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Volumes, volumes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEaiEciRequestEciContainer& obj) { 
      DARABONBA_PTR_FROM_JSON(Arg, arg_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Volumes, volumes_);
    };
    CreateEaiEciRequestEciContainer() = default ;
    CreateEaiEciRequestEciContainer(const CreateEaiEciRequestEciContainer &) = default ;
    CreateEaiEciRequestEciContainer(CreateEaiEciRequestEciContainer &&) = default ;
    CreateEaiEciRequestEciContainer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEaiEciRequestEciContainer() = default ;
    CreateEaiEciRequestEciContainer& operator=(const CreateEaiEciRequestEciContainer &) = default ;
    CreateEaiEciRequestEciContainer& operator=(CreateEaiEciRequestEciContainer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arg_ == nullptr
        && return this->command_ == nullptr && return this->image_ == nullptr && return this->name_ == nullptr && return this->volumes_ == nullptr; };
    // arg Field Functions 
    bool hasArg() const { return this->arg_ != nullptr;};
    void deleteArg() { this->arg_ = nullptr;};
    inline string arg() const { DARABONBA_PTR_GET_DEFAULT(arg_, "") };
    inline CreateEaiEciRequestEciContainer& setArg(string arg) { DARABONBA_PTR_SET_VALUE(arg_, arg) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline CreateEaiEciRequestEciContainer& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline CreateEaiEciRequestEciContainer& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEaiEciRequestEciContainer& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // volumes Field Functions 
    bool hasVolumes() const { return this->volumes_ != nullptr;};
    void deleteVolumes() { this->volumes_ = nullptr;};
    inline string volumes() const { DARABONBA_PTR_GET_DEFAULT(volumes_, "") };
    inline CreateEaiEciRequestEciContainer& setVolumes(string volumes) { DARABONBA_PTR_SET_VALUE(volumes_, volumes) };


  protected:
    std::shared_ptr<string> arg_ = nullptr;
    std::shared_ptr<string> command_ = nullptr;
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> volumes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
