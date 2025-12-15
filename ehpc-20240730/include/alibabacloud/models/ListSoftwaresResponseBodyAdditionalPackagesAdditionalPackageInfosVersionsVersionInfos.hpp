// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODYADDITIONALPACKAGESADDITIONALPACKAGEINFOSVERSIONSVERSIONINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODYADDITIONALPACKAGESADDITIONALPACKAGEINFOSVERSIONSVERSIONINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Latest, latest_);
      DARABONBA_PTR_TO_JSON(SupportOs, supportOs_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Latest, latest_);
      DARABONBA_PTR_FROM_JSON(SupportOs, supportOs_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos() = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos(const ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos &) = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos(ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos &&) = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos() = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos& operator=(const ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos &) = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos& operator=(ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->latest_ == nullptr
        && return this->supportOs_ == nullptr && return this->version_ == nullptr; };
    // latest Field Functions 
    bool hasLatest() const { return this->latest_ != nullptr;};
    void deleteLatest() { this->latest_ = nullptr;};
    inline string latest() const { DARABONBA_PTR_GET_DEFAULT(latest_, "") };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos& setLatest(string latest) { DARABONBA_PTR_SET_VALUE(latest_, latest) };


    // supportOs Field Functions 
    bool hasSupportOs() const { return this->supportOs_ != nullptr;};
    void deleteSupportOs() { this->supportOs_ = nullptr;};
    inline const Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs & supportOs() const { DARABONBA_PTR_GET_CONST(supportOs_, Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs) };
    inline Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs supportOs() { DARABONBA_PTR_GET(supportOs_, Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs) };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos& setSupportOs(const Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs & supportOs) { DARABONBA_PTR_SET_VALUE(supportOs_, supportOs) };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos& setSupportOs(Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs && supportOs) { DARABONBA_PTR_SET_RVALUE(supportOs_, supportOs) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Indicates whether the version is the latest.
    std::shared_ptr<string> latest_ = nullptr;
    // The information about the supported OSs.
    std::shared_ptr<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs> supportOs_ = nullptr;
    // The software version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
