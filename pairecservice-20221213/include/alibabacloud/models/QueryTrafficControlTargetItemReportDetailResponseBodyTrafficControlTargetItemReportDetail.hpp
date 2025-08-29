// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTARGETITEMREPORTDETAILRESPONSEBODYTRAFFICCONTROLTARGETITEMREPORTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTARGETITEMREPORTDETAILRESPONSEBODYTRAFFICCONTROLTARGETITEMREPORTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTailReportDetails.hpp>
#include <alibabacloud/models/QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ItemControlTailReportDetails, itemControlTailReportDetails_);
      DARABONBA_PTR_TO_JSON(ItemControlTopReportDetails, itemControlTopReportDetails_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemControlTailReportDetails, itemControlTailReportDetails_);
      DARABONBA_PTR_FROM_JSON(ItemControlTopReportDetails, itemControlTopReportDetails_);
    };
    QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail() = default ;
    QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail(const QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail &) = default ;
    QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail(QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail &&) = default ;
    QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail() = default ;
    QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail& operator=(const QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail &) = default ;
    QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail& operator=(QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->itemControlTailReportDetails_ != nullptr
        && this->itemControlTopReportDetails_ != nullptr; };
    // itemControlTailReportDetails Field Functions 
    bool hasItemControlTailReportDetails() const { return this->itemControlTailReportDetails_ != nullptr;};
    void deleteItemControlTailReportDetails() { this->itemControlTailReportDetails_ = nullptr;};
    inline const vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTailReportDetails> & itemControlTailReportDetails() const { DARABONBA_PTR_GET_CONST(itemControlTailReportDetails_, vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTailReportDetails>) };
    inline vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTailReportDetails> itemControlTailReportDetails() { DARABONBA_PTR_GET(itemControlTailReportDetails_, vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTailReportDetails>) };
    inline QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail& setItemControlTailReportDetails(const vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTailReportDetails> & itemControlTailReportDetails) { DARABONBA_PTR_SET_VALUE(itemControlTailReportDetails_, itemControlTailReportDetails) };
    inline QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail& setItemControlTailReportDetails(vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTailReportDetails> && itemControlTailReportDetails) { DARABONBA_PTR_SET_RVALUE(itemControlTailReportDetails_, itemControlTailReportDetails) };


    // itemControlTopReportDetails Field Functions 
    bool hasItemControlTopReportDetails() const { return this->itemControlTopReportDetails_ != nullptr;};
    void deleteItemControlTopReportDetails() { this->itemControlTopReportDetails_ = nullptr;};
    inline const vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails> & itemControlTopReportDetails() const { DARABONBA_PTR_GET_CONST(itemControlTopReportDetails_, vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails>) };
    inline vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails> itemControlTopReportDetails() { DARABONBA_PTR_GET(itemControlTopReportDetails_, vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails>) };
    inline QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail& setItemControlTopReportDetails(const vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails> & itemControlTopReportDetails) { DARABONBA_PTR_SET_VALUE(itemControlTopReportDetails_, itemControlTopReportDetails) };
    inline QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail& setItemControlTopReportDetails(vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails> && itemControlTopReportDetails) { DARABONBA_PTR_SET_RVALUE(itemControlTopReportDetails_, itemControlTopReportDetails) };


  protected:
    std::shared_ptr<vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTailReportDetails>> itemControlTailReportDetails_ = nullptr;
    std::shared_ptr<vector<Models::QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetailItemControlTopReportDetails>> itemControlTopReportDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
