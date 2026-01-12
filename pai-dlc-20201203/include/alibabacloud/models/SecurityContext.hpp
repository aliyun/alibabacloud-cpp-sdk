// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SECURITYCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_SECURITYCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SecurityContextCapabilities.hpp>
#include <alibabacloud/models/SeccompProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class SecurityContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SecurityContext& obj) { 
      DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_TO_JSON(Privileged, privileged_);
      DARABONBA_PTR_TO_JSON(RunAsGroup, runAsGroup_);
      DARABONBA_PTR_TO_JSON(RunAsUser, runAsUser_);
      DARABONBA_PTR_TO_JSON(SeccompProfile, seccompProfile_);
    };
    friend void from_json(const Darabonba::Json& j, SecurityContext& obj) { 
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_FROM_JSON(Privileged, privileged_);
      DARABONBA_PTR_FROM_JSON(RunAsGroup, runAsGroup_);
      DARABONBA_PTR_FROM_JSON(RunAsUser, runAsUser_);
      DARABONBA_PTR_FROM_JSON(SeccompProfile, seccompProfile_);
    };
    SecurityContext() = default ;
    SecurityContext(const SecurityContext &) = default ;
    SecurityContext(SecurityContext &&) = default ;
    SecurityContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SecurityContext() = default ;
    SecurityContext& operator=(const SecurityContext &) = default ;
    SecurityContext& operator=(SecurityContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capabilities_ == nullptr
        && this->privileged_ == nullptr && this->runAsGroup_ == nullptr && this->runAsUser_ == nullptr && this->seccompProfile_ == nullptr; };
    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const SecurityContextCapabilities & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, SecurityContextCapabilities) };
    inline SecurityContextCapabilities getCapabilities() { DARABONBA_PTR_GET(capabilities_, SecurityContextCapabilities) };
    inline SecurityContext& setCapabilities(const SecurityContextCapabilities & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline SecurityContext& setCapabilities(SecurityContextCapabilities && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    // privileged Field Functions 
    bool hasPrivileged() const { return this->privileged_ != nullptr;};
    void deletePrivileged() { this->privileged_ = nullptr;};
    inline bool getPrivileged() const { DARABONBA_PTR_GET_DEFAULT(privileged_, false) };
    inline SecurityContext& setPrivileged(bool privileged) { DARABONBA_PTR_SET_VALUE(privileged_, privileged) };


    // runAsGroup Field Functions 
    bool hasRunAsGroup() const { return this->runAsGroup_ != nullptr;};
    void deleteRunAsGroup() { this->runAsGroup_ = nullptr;};
    inline int64_t getRunAsGroup() const { DARABONBA_PTR_GET_DEFAULT(runAsGroup_, 0L) };
    inline SecurityContext& setRunAsGroup(int64_t runAsGroup) { DARABONBA_PTR_SET_VALUE(runAsGroup_, runAsGroup) };


    // runAsUser Field Functions 
    bool hasRunAsUser() const { return this->runAsUser_ != nullptr;};
    void deleteRunAsUser() { this->runAsUser_ = nullptr;};
    inline int64_t getRunAsUser() const { DARABONBA_PTR_GET_DEFAULT(runAsUser_, 0L) };
    inline SecurityContext& setRunAsUser(int64_t runAsUser) { DARABONBA_PTR_SET_VALUE(runAsUser_, runAsUser) };


    // seccompProfile Field Functions 
    bool hasSeccompProfile() const { return this->seccompProfile_ != nullptr;};
    void deleteSeccompProfile() { this->seccompProfile_ = nullptr;};
    inline const SeccompProfile & getSeccompProfile() const { DARABONBA_PTR_GET_CONST(seccompProfile_, SeccompProfile) };
    inline SeccompProfile getSeccompProfile() { DARABONBA_PTR_GET(seccompProfile_, SeccompProfile) };
    inline SecurityContext& setSeccompProfile(const SeccompProfile & seccompProfile) { DARABONBA_PTR_SET_VALUE(seccompProfile_, seccompProfile) };
    inline SecurityContext& setSeccompProfile(SeccompProfile && seccompProfile) { DARABONBA_PTR_SET_RVALUE(seccompProfile_, seccompProfile) };


  protected:
    shared_ptr<SecurityContextCapabilities> capabilities_ {};
    shared_ptr<bool> privileged_ {};
    shared_ptr<int64_t> runAsGroup_ {};
    shared_ptr<int64_t> runAsUser_ {};
    shared_ptr<SeccompProfile> seccompProfile_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
