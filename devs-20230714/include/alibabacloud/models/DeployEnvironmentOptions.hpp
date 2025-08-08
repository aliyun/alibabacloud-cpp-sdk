// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYENVIRONMENTOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYENVIRONMENTOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployEnvironmentOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployEnvironmentOptions& obj) { 
      DARABONBA_PTR_TO_JSON(services, services_);
    };
    friend void from_json(const Darabonba::Json& j, DeployEnvironmentOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(services, services_);
    };
    DeployEnvironmentOptions() = default ;
    DeployEnvironmentOptions(const DeployEnvironmentOptions &) = default ;
    DeployEnvironmentOptions(DeployEnvironmentOptions &&) = default ;
    DeployEnvironmentOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployEnvironmentOptions() = default ;
    DeployEnvironmentOptions& operator=(const DeployEnvironmentOptions &) = default ;
    DeployEnvironmentOptions& operator=(DeployEnvironmentOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->services_ != nullptr; };
    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<string> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<string>) };
    inline vector<string> services() { DARABONBA_PTR_GET(services_, vector<string>) };
    inline DeployEnvironmentOptions& setServices(const vector<string> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline DeployEnvironmentOptions& setServices(vector<string> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    std::shared_ptr<vector<string>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
