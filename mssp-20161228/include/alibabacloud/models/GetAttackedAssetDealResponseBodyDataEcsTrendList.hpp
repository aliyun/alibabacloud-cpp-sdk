// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKEDASSETDEALRESPONSEBODYDATAECSTRENDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKEDASSETDEALRESPONSEBODYDATAECSTRENDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetAttackedAssetDealResponseBodyDataEcsTrendList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackedAssetDealResponseBodyDataEcsTrendList& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(DealCount, dealCount_);
      DARABONBA_PTR_TO_JSON(FindCount, findCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackedAssetDealResponseBodyDataEcsTrendList& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(DealCount, dealCount_);
      DARABONBA_PTR_FROM_JSON(FindCount, findCount_);
    };
    GetAttackedAssetDealResponseBodyDataEcsTrendList() = default ;
    GetAttackedAssetDealResponseBodyDataEcsTrendList(const GetAttackedAssetDealResponseBodyDataEcsTrendList &) = default ;
    GetAttackedAssetDealResponseBodyDataEcsTrendList(GetAttackedAssetDealResponseBodyDataEcsTrendList &&) = default ;
    GetAttackedAssetDealResponseBodyDataEcsTrendList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackedAssetDealResponseBodyDataEcsTrendList() = default ;
    GetAttackedAssetDealResponseBodyDataEcsTrendList& operator=(const GetAttackedAssetDealResponseBodyDataEcsTrendList &) = default ;
    GetAttackedAssetDealResponseBodyDataEcsTrendList& operator=(GetAttackedAssetDealResponseBodyDataEcsTrendList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->dealCount_ == nullptr && return this->findCount_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetAttackedAssetDealResponseBodyDataEcsTrendList& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // dealCount Field Functions 
    bool hasDealCount() const { return this->dealCount_ != nullptr;};
    void deleteDealCount() { this->dealCount_ = nullptr;};
    inline int64_t dealCount() const { DARABONBA_PTR_GET_DEFAULT(dealCount_, 0L) };
    inline GetAttackedAssetDealResponseBodyDataEcsTrendList& setDealCount(int64_t dealCount) { DARABONBA_PTR_SET_VALUE(dealCount_, dealCount) };


    // findCount Field Functions 
    bool hasFindCount() const { return this->findCount_ != nullptr;};
    void deleteFindCount() { this->findCount_ = nullptr;};
    inline int64_t findCount() const { DARABONBA_PTR_GET_DEFAULT(findCount_, 0L) };
    inline GetAttackedAssetDealResponseBodyDataEcsTrendList& setFindCount(int64_t findCount) { DARABONBA_PTR_SET_VALUE(findCount_, findCount) };


  protected:
    // Date point.
    std::shared_ptr<string> date_ = nullptr;
    // Number of processed items.
    std::shared_ptr<int64_t> dealCount_ = nullptr;
    // Number of discovered items.
    std::shared_ptr<int64_t> findCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
