// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICECOMPONENTSTEP_HPP_
#define ALIBABACLOUD_MODELS_SERVICECOMPONENTSTEP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ServiceComponentStep : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceComponentStep& obj) { 
      DARABONBA_PTR_TO_JSON(component, component_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceComponentStep& obj) { 
      DARABONBA_PTR_FROM_JSON(component, component_);
    };
    ServiceComponentStep() = default ;
    ServiceComponentStep(const ServiceComponentStep &) = default ;
    ServiceComponentStep(ServiceComponentStep &&) = default ;
    ServiceComponentStep(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceComponentStep() = default ;
    ServiceComponentStep& operator=(const ServiceComponentStep &) = default ;
    ServiceComponentStep& operator=(ServiceComponentStep &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->component_ != nullptr; };
    // component Field Functions 
    bool hasComponent() const { return this->component_ != nullptr;};
    void deleteComponent() { this->component_ = nullptr;};
    inline string component() const { DARABONBA_PTR_GET_DEFAULT(component_, "") };
    inline ServiceComponentStep& setComponent(string component) { DARABONBA_PTR_SET_VALUE(component_, component) };


  protected:
    std::shared_ptr<string> component_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
