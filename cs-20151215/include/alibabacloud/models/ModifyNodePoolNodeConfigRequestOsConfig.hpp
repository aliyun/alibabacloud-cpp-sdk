// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLNODECONFIGREQUESTOSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLNODECONFIGREQUESTOSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Hugepage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyNodePoolNodeConfigRequestOsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodePoolNodeConfigRequestOsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(hugepage, hugepage_);
      DARABONBA_ANY_TO_JSON(sysctl, sysctl_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodePoolNodeConfigRequestOsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(hugepage, hugepage_);
      DARABONBA_ANY_FROM_JSON(sysctl, sysctl_);
    };
    ModifyNodePoolNodeConfigRequestOsConfig() = default ;
    ModifyNodePoolNodeConfigRequestOsConfig(const ModifyNodePoolNodeConfigRequestOsConfig &) = default ;
    ModifyNodePoolNodeConfigRequestOsConfig(ModifyNodePoolNodeConfigRequestOsConfig &&) = default ;
    ModifyNodePoolNodeConfigRequestOsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodePoolNodeConfigRequestOsConfig() = default ;
    ModifyNodePoolNodeConfigRequestOsConfig& operator=(const ModifyNodePoolNodeConfigRequestOsConfig &) = default ;
    ModifyNodePoolNodeConfigRequestOsConfig& operator=(ModifyNodePoolNodeConfigRequestOsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hugepage_ == nullptr
        && return this->sysctl_ == nullptr; };
    // hugepage Field Functions 
    bool hasHugepage() const { return this->hugepage_ != nullptr;};
    void deleteHugepage() { this->hugepage_ = nullptr;};
    inline const Models::Hugepage & hugepage() const { DARABONBA_PTR_GET_CONST(hugepage_, Models::Hugepage) };
    inline Models::Hugepage hugepage() { DARABONBA_PTR_GET(hugepage_, Models::Hugepage) };
    inline ModifyNodePoolNodeConfigRequestOsConfig& setHugepage(const Models::Hugepage & hugepage) { DARABONBA_PTR_SET_VALUE(hugepage_, hugepage) };
    inline ModifyNodePoolNodeConfigRequestOsConfig& setHugepage(Models::Hugepage && hugepage) { DARABONBA_PTR_SET_RVALUE(hugepage_, hugepage) };


    // sysctl Field Functions 
    bool hasSysctl() const { return this->sysctl_ != nullptr;};
    void deleteSysctl() { this->sysctl_ = nullptr;};
    inline     const Darabonba::Json & sysctl() const { DARABONBA_GET(sysctl_) };
    Darabonba::Json & sysctl() { DARABONBA_GET(sysctl_) };
    inline ModifyNodePoolNodeConfigRequestOsConfig& setSysctl(const Darabonba::Json & sysctl) { DARABONBA_SET_VALUE(sysctl_, sysctl) };
    inline ModifyNodePoolNodeConfigRequestOsConfig& setSysctl(Darabonba::Json & sysctl) { DARABONBA_SET_RVALUE(sysctl_, sysctl) };


  protected:
    std::shared_ptr<Models::Hugepage> hugepage_ = nullptr;
    // The sysctl configuration.
    Darabonba::Json sysctl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
