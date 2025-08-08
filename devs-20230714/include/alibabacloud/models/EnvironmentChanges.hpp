// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVIRONMENTCHANGES_HPP_
#define ALIBABACLOUD_MODELS_ENVIRONMENTCHANGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class EnvironmentChanges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvironmentChanges& obj) { 
      DARABONBA_ANY_TO_JSON(services, services_);
    };
    friend void from_json(const Darabonba::Json& j, EnvironmentChanges& obj) { 
      DARABONBA_ANY_FROM_JSON(services, services_);
    };
    EnvironmentChanges() = default ;
    EnvironmentChanges(const EnvironmentChanges &) = default ;
    EnvironmentChanges(EnvironmentChanges &&) = default ;
    EnvironmentChanges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvironmentChanges() = default ;
    EnvironmentChanges& operator=(const EnvironmentChanges &) = default ;
    EnvironmentChanges& operator=(EnvironmentChanges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->services_ != nullptr; };
    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline     const Darabonba::Json & services() const { DARABONBA_GET(services_) };
    Darabonba::Json & services() { DARABONBA_GET(services_) };
    inline EnvironmentChanges& setServices(const Darabonba::Json & services) { DARABONBA_SET_VALUE(services_, services) };
    inline EnvironmentChanges& setServices(Darabonba::Json & services) { DARABONBA_SET_RVALUE(services_, services) };


  protected:
    Darabonba::Json services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
