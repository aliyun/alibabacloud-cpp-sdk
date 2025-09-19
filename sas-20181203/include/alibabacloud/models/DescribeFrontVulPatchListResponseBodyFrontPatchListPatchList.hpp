// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFRONTVULPATCHLISTRESPONSEBODYFRONTPATCHLISTPATCHLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFRONTVULPATCHLISTRESPONSEBODYFRONTPATCHLISTPATCHLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList() = default ;
    DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList(const DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList &) = default ;
    DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList(DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList &&) = default ;
    DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList() = default ;
    DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList& operator=(const DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList &) = default ;
    DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList& operator=(DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasName_ != nullptr
        && this->name_ != nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The version number of the pre-patch that is required to fix the Windows system vulnerability.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
