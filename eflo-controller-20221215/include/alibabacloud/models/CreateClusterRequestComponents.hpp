// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateClusterRequestComponentsComponentConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestComponents& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentConfig, componentConfig_);
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentConfig, componentConfig_);
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
    };
    CreateClusterRequestComponents() = default ;
    CreateClusterRequestComponents(const CreateClusterRequestComponents &) = default ;
    CreateClusterRequestComponents(CreateClusterRequestComponents &&) = default ;
    CreateClusterRequestComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestComponents() = default ;
    CreateClusterRequestComponents& operator=(const CreateClusterRequestComponents &) = default ;
    CreateClusterRequestComponents& operator=(CreateClusterRequestComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentConfig_ == nullptr
        && return this->componentType_ == nullptr; };
    // componentConfig Field Functions 
    bool hasComponentConfig() const { return this->componentConfig_ != nullptr;};
    void deleteComponentConfig() { this->componentConfig_ = nullptr;};
    inline const Models::CreateClusterRequestComponentsComponentConfig & componentConfig() const { DARABONBA_PTR_GET_CONST(componentConfig_, Models::CreateClusterRequestComponentsComponentConfig) };
    inline Models::CreateClusterRequestComponentsComponentConfig componentConfig() { DARABONBA_PTR_GET(componentConfig_, Models::CreateClusterRequestComponentsComponentConfig) };
    inline CreateClusterRequestComponents& setComponentConfig(const Models::CreateClusterRequestComponentsComponentConfig & componentConfig) { DARABONBA_PTR_SET_VALUE(componentConfig_, componentConfig) };
    inline CreateClusterRequestComponents& setComponentConfig(Models::CreateClusterRequestComponentsComponentConfig && componentConfig) { DARABONBA_PTR_SET_RVALUE(componentConfig_, componentConfig) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline CreateClusterRequestComponents& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


  protected:
    // Component configuration
    std::shared_ptr<Models::CreateClusterRequestComponentsComponentConfig> componentConfig_ = nullptr;
    // Component type
    std::shared_ptr<string> componentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
