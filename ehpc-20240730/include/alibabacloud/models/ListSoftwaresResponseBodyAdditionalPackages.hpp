// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODYADDITIONALPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODYADDITIONALPACKAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListSoftwaresResponseBodyAdditionalPackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwaresResponseBodyAdditionalPackages& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalPackageInfos, additionalPackageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwaresResponseBodyAdditionalPackages& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPackageInfos, additionalPackageInfos_);
    };
    ListSoftwaresResponseBodyAdditionalPackages() = default ;
    ListSoftwaresResponseBodyAdditionalPackages(const ListSoftwaresResponseBodyAdditionalPackages &) = default ;
    ListSoftwaresResponseBodyAdditionalPackages(ListSoftwaresResponseBodyAdditionalPackages &&) = default ;
    ListSoftwaresResponseBodyAdditionalPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwaresResponseBodyAdditionalPackages() = default ;
    ListSoftwaresResponseBodyAdditionalPackages& operator=(const ListSoftwaresResponseBodyAdditionalPackages &) = default ;
    ListSoftwaresResponseBodyAdditionalPackages& operator=(ListSoftwaresResponseBodyAdditionalPackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalPackageInfos_ == nullptr; };
    // additionalPackageInfos Field Functions 
    bool hasAdditionalPackageInfos() const { return this->additionalPackageInfos_ != nullptr;};
    void deleteAdditionalPackageInfos() { this->additionalPackageInfos_ = nullptr;};
    inline const vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos> & additionalPackageInfos() const { DARABONBA_PTR_GET_CONST(additionalPackageInfos_, vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos>) };
    inline vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos> additionalPackageInfos() { DARABONBA_PTR_GET(additionalPackageInfos_, vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos>) };
    inline ListSoftwaresResponseBodyAdditionalPackages& setAdditionalPackageInfos(const vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos> & additionalPackageInfos) { DARABONBA_PTR_SET_VALUE(additionalPackageInfos_, additionalPackageInfos) };
    inline ListSoftwaresResponseBodyAdditionalPackages& setAdditionalPackageInfos(vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos> && additionalPackageInfos) { DARABONBA_PTR_SET_RVALUE(additionalPackageInfos_, additionalPackageInfos) };


  protected:
    std::shared_ptr<vector<Models::ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos>> additionalPackageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
