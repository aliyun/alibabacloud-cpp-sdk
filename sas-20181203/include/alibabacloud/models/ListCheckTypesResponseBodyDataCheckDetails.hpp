// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKTYPESRESPONSEBODYDATACHECKDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKTYPESRESPONSEBODYDATACHECKDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckTypesResponseBodyDataCheckDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckTypesResponseBodyDataCheckDetails& obj) { 
      DARABONBA_PTR_TO_JSON(AffiliatedRiskTypes, affiliatedRiskTypes_);
      DARABONBA_PTR_TO_JSON(AffiliatedRisks, affiliatedRisks_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckTypesResponseBodyDataCheckDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(AffiliatedRiskTypes, affiliatedRiskTypes_);
      DARABONBA_PTR_FROM_JSON(AffiliatedRisks, affiliatedRisks_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
    };
    ListCheckTypesResponseBodyDataCheckDetails() = default ;
    ListCheckTypesResponseBodyDataCheckDetails(const ListCheckTypesResponseBodyDataCheckDetails &) = default ;
    ListCheckTypesResponseBodyDataCheckDetails(ListCheckTypesResponseBodyDataCheckDetails &&) = default ;
    ListCheckTypesResponseBodyDataCheckDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckTypesResponseBodyDataCheckDetails() = default ;
    ListCheckTypesResponseBodyDataCheckDetails& operator=(const ListCheckTypesResponseBodyDataCheckDetails &) = default ;
    ListCheckTypesResponseBodyDataCheckDetails& operator=(ListCheckTypesResponseBodyDataCheckDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affiliatedRiskTypes_ == nullptr
        && return this->affiliatedRisks_ == nullptr && return this->checkId_ == nullptr && return this->checkItem_ == nullptr; };
    // affiliatedRiskTypes Field Functions 
    bool hasAffiliatedRiskTypes() const { return this->affiliatedRiskTypes_ != nullptr;};
    void deleteAffiliatedRiskTypes() { this->affiliatedRiskTypes_ = nullptr;};
    inline const vector<string> & affiliatedRiskTypes() const { DARABONBA_PTR_GET_CONST(affiliatedRiskTypes_, vector<string>) };
    inline vector<string> affiliatedRiskTypes() { DARABONBA_PTR_GET(affiliatedRiskTypes_, vector<string>) };
    inline ListCheckTypesResponseBodyDataCheckDetails& setAffiliatedRiskTypes(const vector<string> & affiliatedRiskTypes) { DARABONBA_PTR_SET_VALUE(affiliatedRiskTypes_, affiliatedRiskTypes) };
    inline ListCheckTypesResponseBodyDataCheckDetails& setAffiliatedRiskTypes(vector<string> && affiliatedRiskTypes) { DARABONBA_PTR_SET_RVALUE(affiliatedRiskTypes_, affiliatedRiskTypes) };


    // affiliatedRisks Field Functions 
    bool hasAffiliatedRisks() const { return this->affiliatedRisks_ != nullptr;};
    void deleteAffiliatedRisks() { this->affiliatedRisks_ = nullptr;};
    inline const vector<string> & affiliatedRisks() const { DARABONBA_PTR_GET_CONST(affiliatedRisks_, vector<string>) };
    inline vector<string> affiliatedRisks() { DARABONBA_PTR_GET(affiliatedRisks_, vector<string>) };
    inline ListCheckTypesResponseBodyDataCheckDetails& setAffiliatedRisks(const vector<string> & affiliatedRisks) { DARABONBA_PTR_SET_VALUE(affiliatedRisks_, affiliatedRisks) };
    inline ListCheckTypesResponseBodyDataCheckDetails& setAffiliatedRisks(vector<string> && affiliatedRisks) { DARABONBA_PTR_SET_RVALUE(affiliatedRisks_, affiliatedRisks) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListCheckTypesResponseBodyDataCheckDetails& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkItem Field Functions 
    bool hasCheckItem() const { return this->checkItem_ != nullptr;};
    void deleteCheckItem() { this->checkItem_ = nullptr;};
    inline string checkItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
    inline ListCheckTypesResponseBodyDataCheckDetails& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


  protected:
    // The list of the baseline categories of attribution.
    std::shared_ptr<vector<string>> affiliatedRiskTypes_ = nullptr;
    // The list of baselines attribution.
    std::shared_ptr<vector<string>> affiliatedRisks_ = nullptr;
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The description of the check item.
    std::shared_ptr<string> checkItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
