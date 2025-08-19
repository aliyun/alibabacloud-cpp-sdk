// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLCLUSTERADDONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLCLUSTERADDONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UnInstallClusterAddonsRequestAddons.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UnInstallClusterAddonsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnInstallClusterAddonsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addons, addons_);
    };
    friend void from_json(const Darabonba::Json& j, UnInstallClusterAddonsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addons, addons_);
    };
    UnInstallClusterAddonsRequest() = default ;
    UnInstallClusterAddonsRequest(const UnInstallClusterAddonsRequest &) = default ;
    UnInstallClusterAddonsRequest(UnInstallClusterAddonsRequest &&) = default ;
    UnInstallClusterAddonsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnInstallClusterAddonsRequest() = default ;
    UnInstallClusterAddonsRequest& operator=(const UnInstallClusterAddonsRequest &) = default ;
    UnInstallClusterAddonsRequest& operator=(UnInstallClusterAddonsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addons_ != nullptr; };
    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<UnInstallClusterAddonsRequestAddons> & addons() const { DARABONBA_PTR_GET_CONST(addons_, vector<UnInstallClusterAddonsRequestAddons>) };
    inline vector<UnInstallClusterAddonsRequestAddons> addons() { DARABONBA_PTR_GET(addons_, vector<UnInstallClusterAddonsRequestAddons>) };
    inline UnInstallClusterAddonsRequest& setAddons(const vector<UnInstallClusterAddonsRequestAddons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline UnInstallClusterAddonsRequest& setAddons(vector<UnInstallClusterAddonsRequestAddons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


  protected:
    // The list of add-ons to uninstall.
    std::shared_ptr<vector<UnInstallClusterAddonsRequestAddons>> addons_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
