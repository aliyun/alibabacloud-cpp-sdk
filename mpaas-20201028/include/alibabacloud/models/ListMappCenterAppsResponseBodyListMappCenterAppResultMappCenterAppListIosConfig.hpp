// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMAPPCENTERAPPSRESPONSEBODYLISTMAPPCENTERAPPRESULTMAPPCENTERAPPLISTIOSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTMAPPCENTERAPPSRESPONSEBODYLISTMAPPCENTERAPPRESULTMAPPCENTERAPPLISTIOSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
    };
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig() = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig(const ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig &) = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig(ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig &&) = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig() = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig& operator=(const ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig &) = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig& operator=(ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bundleId_ == nullptr; };
    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


  protected:
    std::shared_ptr<string> bundleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
