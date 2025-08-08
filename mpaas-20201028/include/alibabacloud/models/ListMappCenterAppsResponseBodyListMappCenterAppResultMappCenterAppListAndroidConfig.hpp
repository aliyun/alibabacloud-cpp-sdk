// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMAPPCENTERAPPSRESPONSEBODYLISTMAPPCENTERAPPRESULTMAPPCENTERAPPLISTANDROIDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTMAPPCENTERAPPSRESPONSEBODYLISTMAPPCENTERAPPRESULTMAPPCENTERAPPLISTANDROIDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CertRSA, certRSA_);
      DARABONBA_PTR_TO_JSON(PackageName, packageName_);
    };
    friend void from_json(const Darabonba::Json& j, ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CertRSA, certRSA_);
      DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
    };
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig() = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig(const ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig &) = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig(ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig &&) = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig() = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig& operator=(const ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig &) = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig& operator=(ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certRSA_ != nullptr
        && this->packageName_ != nullptr; };
    // certRSA Field Functions 
    bool hasCertRSA() const { return this->certRSA_ != nullptr;};
    void deleteCertRSA() { this->certRSA_ = nullptr;};
    inline string certRSA() const { DARABONBA_PTR_GET_DEFAULT(certRSA_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig& setCertRSA(string certRSA) { DARABONBA_PTR_SET_VALUE(certRSA_, certRSA) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


  protected:
    std::shared_ptr<string> certRSA_ = nullptr;
    std::shared_ptr<string> packageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
