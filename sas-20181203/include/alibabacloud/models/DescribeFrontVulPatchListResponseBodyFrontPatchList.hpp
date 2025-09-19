// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFRONTVULPATCHLISTRESPONSEBODYFRONTPATCHLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFRONTVULPATCHLISTRESPONSEBODYFRONTPATCHLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeFrontVulPatchListResponseBodyFrontPatchList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFrontVulPatchListResponseBodyFrontPatchList& obj) { 
      DARABONBA_PTR_TO_JSON(PatchList, patchList_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFrontVulPatchListResponseBodyFrontPatchList& obj) { 
      DARABONBA_PTR_FROM_JSON(PatchList, patchList_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeFrontVulPatchListResponseBodyFrontPatchList() = default ;
    DescribeFrontVulPatchListResponseBodyFrontPatchList(const DescribeFrontVulPatchListResponseBodyFrontPatchList &) = default ;
    DescribeFrontVulPatchListResponseBodyFrontPatchList(DescribeFrontVulPatchListResponseBodyFrontPatchList &&) = default ;
    DescribeFrontVulPatchListResponseBodyFrontPatchList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFrontVulPatchListResponseBodyFrontPatchList() = default ;
    DescribeFrontVulPatchListResponseBodyFrontPatchList& operator=(const DescribeFrontVulPatchListResponseBodyFrontPatchList &) = default ;
    DescribeFrontVulPatchListResponseBodyFrontPatchList& operator=(DescribeFrontVulPatchListResponseBodyFrontPatchList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->patchList_ != nullptr
        && this->uuid_ != nullptr; };
    // patchList Field Functions 
    bool hasPatchList() const { return this->patchList_ != nullptr;};
    void deletePatchList() { this->patchList_ = nullptr;};
    inline const vector<Models::DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList> & patchList() const { DARABONBA_PTR_GET_CONST(patchList_, vector<Models::DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList>) };
    inline vector<Models::DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList> patchList() { DARABONBA_PTR_GET(patchList_, vector<Models::DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList>) };
    inline DescribeFrontVulPatchListResponseBodyFrontPatchList& setPatchList(const vector<Models::DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList> & patchList) { DARABONBA_PTR_SET_VALUE(patchList_, patchList) };
    inline DescribeFrontVulPatchListResponseBodyFrontPatchList& setPatchList(vector<Models::DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList> && patchList) { DARABONBA_PTR_SET_RVALUE(patchList_, patchList) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeFrontVulPatchListResponseBodyFrontPatchList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // An array consisting of the pre-patches that are required to fix the specified Windows system vulnerability on the server.
    std::shared_ptr<vector<Models::DescribeFrontVulPatchListResponseBodyFrontPatchListPatchList>> patchList_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
