// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLCLUSTERADDONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLCLUSTERADDONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class InstallClusterAddonsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallClusterAddonsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addons, addonsShrink_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallClusterAddonsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addons, addonsShrink_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    InstallClusterAddonsShrinkRequest() = default ;
    InstallClusterAddonsShrinkRequest(const InstallClusterAddonsShrinkRequest &) = default ;
    InstallClusterAddonsShrinkRequest(InstallClusterAddonsShrinkRequest &&) = default ;
    InstallClusterAddonsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallClusterAddonsShrinkRequest() = default ;
    InstallClusterAddonsShrinkRequest& operator=(const InstallClusterAddonsShrinkRequest &) = default ;
    InstallClusterAddonsShrinkRequest& operator=(InstallClusterAddonsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonsShrink_ == nullptr
        && this->clusterId_ == nullptr; };
    // addonsShrink Field Functions 
    bool hasAddonsShrink() const { return this->addonsShrink_ != nullptr;};
    void deleteAddonsShrink() { this->addonsShrink_ = nullptr;};
    inline string getAddonsShrink() const { DARABONBA_PTR_GET_DEFAULT(addonsShrink_, "") };
    inline InstallClusterAddonsShrinkRequest& setAddonsShrink(string addonsShrink) { DARABONBA_PTR_SET_VALUE(addonsShrink_, addonsShrink) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InstallClusterAddonsShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // This parameter is required.
    shared_ptr<string> addonsShrink_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
