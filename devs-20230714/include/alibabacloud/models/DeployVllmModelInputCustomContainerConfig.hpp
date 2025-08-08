// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYVLLMMODELINPUTCUSTOMCONTAINERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYVLLMMODELINPUTCUSTOMCONTAINERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployVllmModelInputCustomContainerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployVllmModelInputCustomContainerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(role, role_);
    };
    friend void from_json(const Darabonba::Json& j, DeployVllmModelInputCustomContainerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(role, role_);
    };
    DeployVllmModelInputCustomContainerConfig() = default ;
    DeployVllmModelInputCustomContainerConfig(const DeployVllmModelInputCustomContainerConfig &) = default ;
    DeployVllmModelInputCustomContainerConfig(DeployVllmModelInputCustomContainerConfig &&) = default ;
    DeployVllmModelInputCustomContainerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployVllmModelInputCustomContainerConfig() = default ;
    DeployVllmModelInputCustomContainerConfig& operator=(const DeployVllmModelInputCustomContainerConfig &) = default ;
    DeployVllmModelInputCustomContainerConfig& operator=(DeployVllmModelInputCustomContainerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->role_ != nullptr; };
    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DeployVllmModelInputCustomContainerConfig& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
