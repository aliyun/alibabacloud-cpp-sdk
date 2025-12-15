// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODYADDITIONALPACKAGESADDITIONALPACKAGEINFOSVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODYADDITIONALPACKAGESADDITIONALPACKAGEINFOSVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions& obj) { 
      DARABONBA_PTR_TO_JSON(VersionInfos, versionInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(VersionInfos, versionInfos_);
    };
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions() = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions(const ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions &) = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions(ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions &&) = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions() = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions& operator=(const ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions &) = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions& operator=(ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->versionInfos_ == nullptr; };
    // versionInfos Field Functions 
    bool hasVersionInfos() const { return this->versionInfos_ != nullptr;};
    void deleteVersionInfos() { this->versionInfos_ = nullptr;};
    inline const vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos> & versionInfos() const { DARABONBA_PTR_GET_CONST(versionInfos_, vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos>) };
    inline vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos> versionInfos() { DARABONBA_PTR_GET(versionInfos_, vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos>) };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions& setVersionInfos(const vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos> & versionInfos) { DARABONBA_PTR_SET_VALUE(versionInfos_, versionInfos) };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions& setVersionInfos(vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos> && versionInfos) { DARABONBA_PTR_SET_RVALUE(versionInfos_, versionInfos) };


  protected:
    std::shared_ptr<vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos>> versionInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
