// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVIRONMENTSNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_ENVIRONMENTSNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/Devs20230714.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class EnvironmentSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvironmentSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(services, services_);
    };
    friend void from_json(const Darabonba::Json& j, EnvironmentSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(services, services_);
    };
    EnvironmentSnapshot() = default ;
    EnvironmentSnapshot(const EnvironmentSnapshot &) = default ;
    EnvironmentSnapshot(EnvironmentSnapshot &&) = default ;
    EnvironmentSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvironmentSnapshot() = default ;
    EnvironmentSnapshot& operator=(const EnvironmentSnapshot &) = default ;
    EnvironmentSnapshot& operator=(EnvironmentSnapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->services_ != nullptr; };
    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const map<string, ServiceInstance> & services() const { DARABONBA_PTR_GET_CONST(services_, map<string, ServiceInstance>) };
    inline map<string, ServiceInstance> services() { DARABONBA_PTR_GET(services_, map<string, ServiceInstance>) };
    inline EnvironmentSnapshot& setServices(const map<string, ServiceInstance> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline EnvironmentSnapshot& setServices(map<string, ServiceInstance> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    std::shared_ptr<map<string, ServiceInstance>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
