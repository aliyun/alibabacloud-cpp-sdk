// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATANETWORKATTACKTRENDDTOTRENDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATANETWORKATTACKTRENDDTOTRENDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(DdosCount, ddosCount_);
      DARABONBA_PTR_TO_JSON(EipCount, eipCount_);
      DARABONBA_PTR_TO_JSON(WafCount, wafCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(DdosCount, ddosCount_);
      DARABONBA_PTR_FROM_JSON(EipCount, eipCount_);
      DARABONBA_PTR_FROM_JSON(WafCount, wafCount_);
    };
    GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList() = default ;
    GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList(const GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList &) = default ;
    GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList(GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList &&) = default ;
    GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList() = default ;
    GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList& operator=(const GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList &) = default ;
    GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList& operator=(GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->ddosCount_ == nullptr && return this->eipCount_ == nullptr && return this->wafCount_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // ddosCount Field Functions 
    bool hasDdosCount() const { return this->ddosCount_ != nullptr;};
    void deleteDdosCount() { this->ddosCount_ = nullptr;};
    inline int64_t ddosCount() const { DARABONBA_PTR_GET_DEFAULT(ddosCount_, 0L) };
    inline GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList& setDdosCount(int64_t ddosCount) { DARABONBA_PTR_SET_VALUE(ddosCount_, ddosCount) };


    // eipCount Field Functions 
    bool hasEipCount() const { return this->eipCount_ != nullptr;};
    void deleteEipCount() { this->eipCount_ = nullptr;};
    inline int64_t eipCount() const { DARABONBA_PTR_GET_DEFAULT(eipCount_, 0L) };
    inline GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList& setEipCount(int64_t eipCount) { DARABONBA_PTR_SET_VALUE(eipCount_, eipCount) };


    // wafCount Field Functions 
    bool hasWafCount() const { return this->wafCount_ != nullptr;};
    void deleteWafCount() { this->wafCount_ = nullptr;};
    inline int64_t wafCount() const { DARABONBA_PTR_GET_DEFAULT(wafCount_, 0L) };
    inline GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList& setWafCount(int64_t wafCount) { DARABONBA_PTR_SET_VALUE(wafCount_, wafCount) };


  protected:
    // Date.
    std::shared_ptr<string> date_ = nullptr;
    // DDoS count.
    std::shared_ptr<int64_t> ddosCount_ = nullptr;
    // EIP count.
    std::shared_ptr<int64_t> eipCount_ = nullptr;
    // WAF count.
    std::shared_ptr<int64_t> wafCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
