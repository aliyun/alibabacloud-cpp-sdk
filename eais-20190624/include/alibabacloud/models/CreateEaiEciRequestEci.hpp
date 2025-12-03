// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEAIECIREQUESTECI_HPP_
#define ALIBABACLOUD_MODELS_CREATEEAIECIREQUESTECI_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEaiEciRequestEciContainer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class CreateEaiEciRequestEci : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEaiEciRequestEci& obj) { 
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(EipId, eipId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEaiEciRequestEci& obj) { 
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(EipId, eipId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    CreateEaiEciRequestEci() = default ;
    CreateEaiEciRequestEci(const CreateEaiEciRequestEci &) = default ;
    CreateEaiEciRequestEci(CreateEaiEciRequestEci &&) = default ;
    CreateEaiEciRequestEci(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEaiEciRequestEci() = default ;
    CreateEaiEciRequestEci& operator=(const CreateEaiEciRequestEci &) = default ;
    CreateEaiEciRequestEci& operator=(CreateEaiEciRequestEci &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->container_ == nullptr
        && return this->eipId_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr && return this->volume_ == nullptr; };
    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::CreateEaiEciRequestEciContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::CreateEaiEciRequestEciContainer) };
    inline Models::CreateEaiEciRequestEciContainer container() { DARABONBA_PTR_GET(container_, Models::CreateEaiEciRequestEciContainer) };
    inline CreateEaiEciRequestEci& setContainer(const Models::CreateEaiEciRequestEciContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline CreateEaiEciRequestEci& setContainer(Models::CreateEaiEciRequestEciContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // eipId Field Functions 
    bool hasEipId() const { return this->eipId_ != nullptr;};
    void deleteEipId() { this->eipId_ = nullptr;};
    inline string eipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
    inline CreateEaiEciRequestEci& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEaiEciRequestEci& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateEaiEciRequestEci& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline string volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, "") };
    inline CreateEaiEciRequestEci& setVolume(string volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<Models::CreateEaiEciRequestEciContainer> container_ = nullptr;
    std::shared_ptr<string> eipId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
