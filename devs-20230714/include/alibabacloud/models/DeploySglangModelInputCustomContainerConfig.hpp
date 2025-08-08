// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYSGLANGMODELINPUTCUSTOMCONTAINERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYSGLANGMODELINPUTCUSTOMCONTAINERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeploySGLangModelInputCustomContainerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploySGLangModelInputCustomContainerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(role, role_);
    };
    friend void from_json(const Darabonba::Json& j, DeploySGLangModelInputCustomContainerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(role, role_);
    };
    DeploySGLangModelInputCustomContainerConfig() = default ;
    DeploySGLangModelInputCustomContainerConfig(const DeploySGLangModelInputCustomContainerConfig &) = default ;
    DeploySGLangModelInputCustomContainerConfig(DeploySGLangModelInputCustomContainerConfig &&) = default ;
    DeploySGLangModelInputCustomContainerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploySGLangModelInputCustomContainerConfig() = default ;
    DeploySGLangModelInputCustomContainerConfig& operator=(const DeploySGLangModelInputCustomContainerConfig &) = default ;
    DeploySGLangModelInputCustomContainerConfig& operator=(DeploySGLangModelInputCustomContainerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->role_ != nullptr; };
    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DeploySGLangModelInputCustomContainerConfig& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
