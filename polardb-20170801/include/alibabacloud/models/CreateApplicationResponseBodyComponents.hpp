// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONRESPONSEBODYCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONRESPONSEBODYCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateApplicationResponseBodyComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationResponseBodyComponents& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationResponseBodyComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
    };
    CreateApplicationResponseBodyComponents() = default ;
    CreateApplicationResponseBodyComponents(const CreateApplicationResponseBodyComponents &) = default ;
    CreateApplicationResponseBodyComponents(CreateApplicationResponseBodyComponents &&) = default ;
    CreateApplicationResponseBodyComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationResponseBodyComponents() = default ;
    CreateApplicationResponseBodyComponents& operator=(const CreateApplicationResponseBodyComponents &) = default ;
    CreateApplicationResponseBodyComponents& operator=(CreateApplicationResponseBodyComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentId_ == nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline CreateApplicationResponseBodyComponents& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


  protected:
    std::shared_ptr<string> componentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
