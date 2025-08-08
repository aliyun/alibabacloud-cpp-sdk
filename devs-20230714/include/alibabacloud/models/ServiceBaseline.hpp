// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICEBASELINE_HPP_
#define ALIBABACLOUD_MODELS_SERVICEBASELINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ServiceBaseline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceBaseline& obj) { 
      DARABONBA_PTR_TO_JSON(serviceInstance, serviceInstance_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceBaseline& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceInstance, serviceInstance_);
    };
    ServiceBaseline() = default ;
    ServiceBaseline(const ServiceBaseline &) = default ;
    ServiceBaseline(ServiceBaseline &&) = default ;
    ServiceBaseline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceBaseline() = default ;
    ServiceBaseline& operator=(const ServiceBaseline &) = default ;
    ServiceBaseline& operator=(ServiceBaseline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serviceInstance_ != nullptr; };
    // serviceInstance Field Functions 
    bool hasServiceInstance() const { return this->serviceInstance_ != nullptr;};
    void deleteServiceInstance() { this->serviceInstance_ = nullptr;};
    inline const ServiceInstance & serviceInstance() const { DARABONBA_PTR_GET_CONST(serviceInstance_, ServiceInstance) };
    inline ServiceInstance serviceInstance() { DARABONBA_PTR_GET(serviceInstance_, ServiceInstance) };
    inline ServiceBaseline& setServiceInstance(const ServiceInstance & serviceInstance) { DARABONBA_PTR_SET_VALUE(serviceInstance_, serviceInstance) };
    inline ServiceBaseline& setServiceInstance(ServiceInstance && serviceInstance) { DARABONBA_PTR_SET_RVALUE(serviceInstance_, serviceInstance) };


  protected:
    std::shared_ptr<ServiceInstance> serviceInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
