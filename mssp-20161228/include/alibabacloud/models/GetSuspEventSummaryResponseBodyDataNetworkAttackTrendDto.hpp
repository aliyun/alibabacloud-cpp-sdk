// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATANETWORKATTACKTRENDDTO_HPP_
#define ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATANETWORKATTACKTRENDDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO& obj) { 
      DARABONBA_PTR_TO_JSON(TrendList, trendList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(TrendList, trendList_);
    };
    GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO() = default ;
    GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO(const GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO &) = default ;
    GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO(GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO &&) = default ;
    GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO() = default ;
    GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO& operator=(const GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO &) = default ;
    GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO& operator=(GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trendList_ == nullptr; };
    // trendList Field Functions 
    bool hasTrendList() const { return this->trendList_ != nullptr;};
    void deleteTrendList() { this->trendList_ = nullptr;};
    inline const vector<Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList> & trendList() const { DARABONBA_PTR_GET_CONST(trendList_, vector<Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList>) };
    inline vector<Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList> trendList() { DARABONBA_PTR_GET(trendList_, vector<Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList>) };
    inline GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO& setTrendList(const vector<Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList> & trendList) { DARABONBA_PTR_SET_VALUE(trendList_, trendList) };
    inline GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO& setTrendList(vector<Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList> && trendList) { DARABONBA_PTR_SET_RVALUE(trendList_, trendList) };


  protected:
    // Collection of trend nodes for each attack item.
    std::shared_ptr<vector<Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTOTrendList>> trendList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
