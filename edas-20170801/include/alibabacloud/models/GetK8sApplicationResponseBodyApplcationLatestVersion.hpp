// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONLATESTVERSION_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONLATESTVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sApplicationResponseBodyApplcationLatestVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sApplicationResponseBodyApplcationLatestVersion& obj) { 
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WarUrl, warUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sApplicationResponseBodyApplcationLatestVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WarUrl, warUrl_);
    };
    GetK8sApplicationResponseBodyApplcationLatestVersion() = default ;
    GetK8sApplicationResponseBodyApplcationLatestVersion(const GetK8sApplicationResponseBodyApplcationLatestVersion &) = default ;
    GetK8sApplicationResponseBodyApplcationLatestVersion(GetK8sApplicationResponseBodyApplcationLatestVersion &&) = default ;
    GetK8sApplicationResponseBodyApplcationLatestVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sApplicationResponseBodyApplcationLatestVersion() = default ;
    GetK8sApplicationResponseBodyApplcationLatestVersion& operator=(const GetK8sApplicationResponseBodyApplcationLatestVersion &) = default ;
    GetK8sApplicationResponseBodyApplcationLatestVersion& operator=(GetK8sApplicationResponseBodyApplcationLatestVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->packageVersion_ == nullptr
        && return this->url_ == nullptr && return this->warUrl_ == nullptr; };
    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string packageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline GetK8sApplicationResponseBodyApplcationLatestVersion& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetK8sApplicationResponseBodyApplcationLatestVersion& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // warUrl Field Functions 
    bool hasWarUrl() const { return this->warUrl_ != nullptr;};
    void deleteWarUrl() { this->warUrl_ = nullptr;};
    inline string warUrl() const { DARABONBA_PTR_GET_DEFAULT(warUrl_, "") };
    inline GetK8sApplicationResponseBodyApplcationLatestVersion& setWarUrl(string warUrl) { DARABONBA_PTR_SET_VALUE(warUrl_, warUrl) };


  protected:
    // The version of the deployment package.
    std::shared_ptr<string> packageVersion_ = nullptr;
    // The URL of the deployment package. This parameter is required if you use a FatJar or WAR package to deploy the application.
    std::shared_ptr<string> url_ = nullptr;
    // The URL of the deployment package. This parameter is required if you use a FatJar or WAR package to deploy the application.
    std::shared_ptr<string> warUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
