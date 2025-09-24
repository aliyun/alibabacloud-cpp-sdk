// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDISCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDISCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySavingsPlansDiscountResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySavingsPlansDiscountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySavingsPlansDiscountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySavingsPlansDiscountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
    };
    QuerySavingsPlansDiscountResponseBodyData() = default ;
    QuerySavingsPlansDiscountResponseBodyData(const QuerySavingsPlansDiscountResponseBodyData &) = default ;
    QuerySavingsPlansDiscountResponseBodyData(QuerySavingsPlansDiscountResponseBodyData &&) = default ;
    QuerySavingsPlansDiscountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySavingsPlansDiscountResponseBodyData() = default ;
    QuerySavingsPlansDiscountResponseBodyData& operator=(const QuerySavingsPlansDiscountResponseBodyData &) = default ;
    QuerySavingsPlansDiscountResponseBodyData& operator=(QuerySavingsPlansDiscountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostId_ != nullptr
        && this->items_ != nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline QuerySavingsPlansDiscountResponseBodyData& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::QuerySavingsPlansDiscountResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::QuerySavingsPlansDiscountResponseBodyDataItems>) };
    inline vector<Models::QuerySavingsPlansDiscountResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::QuerySavingsPlansDiscountResponseBodyDataItems>) };
    inline QuerySavingsPlansDiscountResponseBodyData& setItems(const vector<Models::QuerySavingsPlansDiscountResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QuerySavingsPlansDiscountResponseBodyData& setItems(vector<Models::QuerySavingsPlansDiscountResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    // The IP address of the request.
    std::shared_ptr<string> hostId_ = nullptr;
    // The information about the discounts on saving plans.
    std::shared_ptr<vector<Models::QuerySavingsPlansDiscountResponseBodyDataItems>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
