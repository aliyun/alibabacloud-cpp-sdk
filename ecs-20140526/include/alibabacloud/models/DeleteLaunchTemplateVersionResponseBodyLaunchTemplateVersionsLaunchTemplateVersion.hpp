// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATEVERSIONRESPONSEBODYLAUNCHTEMPLATEVERSIONSLAUNCHTEMPLATEVERSION_HPP_
#define ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATEVERSIONRESPONSEBODYLAUNCHTEMPLATEVERSIONSLAUNCHTEMPLATEVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersionNumber, launchTemplateVersionNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersionNumber, launchTemplateVersionNumber_);
    };
    DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion() = default ;
    DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion(const DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion &) = default ;
    DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion(DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion &&) = default ;
    DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion() = default ;
    DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion& operator=(const DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion &) = default ;
    DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion& operator=(DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->launchTemplateId_ == nullptr
        && return this->launchTemplateVersionNumber_ == nullptr; };
    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateVersionNumber Field Functions 
    bool hasLaunchTemplateVersionNumber() const { return this->launchTemplateVersionNumber_ != nullptr;};
    void deleteLaunchTemplateVersionNumber() { this->launchTemplateVersionNumber_ = nullptr;};
    inline int64_t launchTemplateVersionNumber() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersionNumber_, 0L) };
    inline DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion& setLaunchTemplateVersionNumber(int64_t launchTemplateVersionNumber) { DARABONBA_PTR_SET_VALUE(launchTemplateVersionNumber_, launchTemplateVersionNumber) };


  protected:
    // The ID of the launch template.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The version number of the launch template.
    std::shared_ptr<int64_t> launchTemplateVersionNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
