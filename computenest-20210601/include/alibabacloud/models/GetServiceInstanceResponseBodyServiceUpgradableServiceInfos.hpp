// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYSERVICEUPGRADABLESERVICEINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYSERVICEUPGRADABLESERVICEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceResponseBodyServiceUpgradableServiceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceResponseBodyServiceUpgradableServiceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceResponseBodyServiceUpgradableServiceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    GetServiceInstanceResponseBodyServiceUpgradableServiceInfos() = default ;
    GetServiceInstanceResponseBodyServiceUpgradableServiceInfos(const GetServiceInstanceResponseBodyServiceUpgradableServiceInfos &) = default ;
    GetServiceInstanceResponseBodyServiceUpgradableServiceInfos(GetServiceInstanceResponseBodyServiceUpgradableServiceInfos &&) = default ;
    GetServiceInstanceResponseBodyServiceUpgradableServiceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceResponseBodyServiceUpgradableServiceInfos() = default ;
    GetServiceInstanceResponseBodyServiceUpgradableServiceInfos& operator=(const GetServiceInstanceResponseBodyServiceUpgradableServiceInfos &) = default ;
    GetServiceInstanceResponseBodyServiceUpgradableServiceInfos& operator=(GetServiceInstanceResponseBodyServiceUpgradableServiceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->version_ != nullptr
        && this->versionName_ != nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetServiceInstanceResponseBodyServiceUpgradableServiceInfos& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline GetServiceInstanceResponseBodyServiceUpgradableServiceInfos& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The service version.
    std::shared_ptr<string> version_ = nullptr;
    // The version name.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
