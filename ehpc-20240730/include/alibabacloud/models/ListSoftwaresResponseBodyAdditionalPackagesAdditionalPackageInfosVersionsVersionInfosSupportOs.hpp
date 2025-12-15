// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODYADDITIONALPACKAGESADDITIONALPACKAGEINFOSVERSIONSVERSIONINFOSSUPPORTOS_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODYADDITIONALPACKAGESADDITIONALPACKAGEINFOSVERSIONSVERSIONINFOSSUPPORTOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs& obj) { 
      DARABONBA_PTR_TO_JSON(SupportOsInfos, supportOsInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportOsInfos, supportOsInfos_);
    };
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs() = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs(const ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs &) = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs(ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs &&) = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs() = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs& operator=(const ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs &) = default ;
    ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs& operator=(ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->supportOsInfos_ == nullptr; };
    // supportOsInfos Field Functions 
    bool hasSupportOsInfos() const { return this->supportOsInfos_ != nullptr;};
    void deleteSupportOsInfos() { this->supportOsInfos_ = nullptr;};
    inline const vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos> & supportOsInfos() const { DARABONBA_PTR_GET_CONST(supportOsInfos_, vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos>) };
    inline vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos> supportOsInfos() { DARABONBA_PTR_GET(supportOsInfos_, vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos>) };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs& setSupportOsInfos(const vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos> & supportOsInfos) { DARABONBA_PTR_SET_VALUE(supportOsInfos_, supportOsInfos) };
    inline ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs& setSupportOsInfos(vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos> && supportOsInfos) { DARABONBA_PTR_SET_RVALUE(supportOsInfos_, supportOsInfos) };


  protected:
    std::shared_ptr<vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos>> supportOsInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
