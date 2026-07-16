// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEENVIRONMENTVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEENVIRONMENTVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpgradeEnvironmentVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeEnvironmentVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvironmentName, environmentName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeEnvironmentVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvironmentName, environmentName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpgradeEnvironmentVersionRequest() = default ;
    UpgradeEnvironmentVersionRequest(const UpgradeEnvironmentVersionRequest &) = default ;
    UpgradeEnvironmentVersionRequest(UpgradeEnvironmentVersionRequest &&) = default ;
    UpgradeEnvironmentVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeEnvironmentVersionRequest() = default ;
    UpgradeEnvironmentVersionRequest& operator=(const UpgradeEnvironmentVersionRequest &) = default ;
    UpgradeEnvironmentVersionRequest& operator=(UpgradeEnvironmentVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environmentName_ == nullptr
        && this->siteId_ == nullptr; };
    // environmentName Field Functions 
    bool hasEnvironmentName() const { return this->environmentName_ != nullptr;};
    void deleteEnvironmentName() { this->environmentName_ = nullptr;};
    inline string getEnvironmentName() const { DARABONBA_PTR_GET_DEFAULT(environmentName_, "") };
    inline UpgradeEnvironmentVersionRequest& setEnvironmentName(string environmentName) { DARABONBA_PTR_SET_VALUE(environmentName_, environmentName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpgradeEnvironmentVersionRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The environment name. The version of this environment is upgraded and deployed to the environment with the next priority level.
    // 
    // This parameter is required.
    shared_ptr<string> environmentName_ {};
    // The site ID. You can call the [ListSites](~~ListSites~~) operation to obtain the site ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
