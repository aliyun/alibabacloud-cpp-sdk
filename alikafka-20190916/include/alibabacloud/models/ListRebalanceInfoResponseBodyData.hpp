// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREBALANCEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTREBALANCEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRebalanceInfoResponseBodyDataRebalanceInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class ListRebalanceInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRebalanceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RebalanceInfoList, rebalanceInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, ListRebalanceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RebalanceInfoList, rebalanceInfoList_);
    };
    ListRebalanceInfoResponseBodyData() = default ;
    ListRebalanceInfoResponseBodyData(const ListRebalanceInfoResponseBodyData &) = default ;
    ListRebalanceInfoResponseBodyData(ListRebalanceInfoResponseBodyData &&) = default ;
    ListRebalanceInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRebalanceInfoResponseBodyData() = default ;
    ListRebalanceInfoResponseBodyData& operator=(const ListRebalanceInfoResponseBodyData &) = default ;
    ListRebalanceInfoResponseBodyData& operator=(ListRebalanceInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rebalanceInfoList_ != nullptr; };
    // rebalanceInfoList Field Functions 
    bool hasRebalanceInfoList() const { return this->rebalanceInfoList_ != nullptr;};
    void deleteRebalanceInfoList() { this->rebalanceInfoList_ = nullptr;};
    inline const vector<Models::ListRebalanceInfoResponseBodyDataRebalanceInfoList> & rebalanceInfoList() const { DARABONBA_PTR_GET_CONST(rebalanceInfoList_, vector<Models::ListRebalanceInfoResponseBodyDataRebalanceInfoList>) };
    inline vector<Models::ListRebalanceInfoResponseBodyDataRebalanceInfoList> rebalanceInfoList() { DARABONBA_PTR_GET(rebalanceInfoList_, vector<Models::ListRebalanceInfoResponseBodyDataRebalanceInfoList>) };
    inline ListRebalanceInfoResponseBodyData& setRebalanceInfoList(const vector<Models::ListRebalanceInfoResponseBodyDataRebalanceInfoList> & rebalanceInfoList) { DARABONBA_PTR_SET_VALUE(rebalanceInfoList_, rebalanceInfoList) };
    inline ListRebalanceInfoResponseBodyData& setRebalanceInfoList(vector<Models::ListRebalanceInfoResponseBodyDataRebalanceInfoList> && rebalanceInfoList) { DARABONBA_PTR_SET_RVALUE(rebalanceInfoList_, rebalanceInfoList) };


  protected:
    std::shared_ptr<vector<Models::ListRebalanceInfoResponseBodyDataRebalanceInfoList>> rebalanceInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
