// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATEVERSIONRESPONSEBODYLAUNCHTEMPLATEVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATEVERSIONRESPONSEBODYLAUNCHTEMPLATEVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
    };
    DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions() = default ;
    DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions(const DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions &) = default ;
    DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions(DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions &&) = default ;
    DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions() = default ;
    DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions& operator=(const DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions &) = default ;
    DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions& operator=(DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->launchTemplateVersion_ == nullptr; };
    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline const vector<Models::DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion> & launchTemplateVersion() const { DARABONBA_PTR_GET_CONST(launchTemplateVersion_, vector<Models::DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion>) };
    inline vector<Models::DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion> launchTemplateVersion() { DARABONBA_PTR_GET(launchTemplateVersion_, vector<Models::DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion>) };
    inline DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions& setLaunchTemplateVersion(const vector<Models::DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion> & launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };
    inline DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions& setLaunchTemplateVersion(vector<Models::DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion> && launchTemplateVersion) { DARABONBA_PTR_SET_RVALUE(launchTemplateVersion_, launchTemplateVersion) };


  protected:
    std::shared_ptr<vector<Models::DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersionsLaunchTemplateVersion>> launchTemplateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
