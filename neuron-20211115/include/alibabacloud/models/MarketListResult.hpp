// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MARKETLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_MARKETLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MarketInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MarketListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MarketListResult& obj) { 
      DARABONBA_PTR_TO_JSON(markets, markets_);
    };
    friend void from_json(const Darabonba::Json& j, MarketListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(markets, markets_);
    };
    MarketListResult() = default ;
    MarketListResult(const MarketListResult &) = default ;
    MarketListResult(MarketListResult &&) = default ;
    MarketListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MarketListResult() = default ;
    MarketListResult& operator=(const MarketListResult &) = default ;
    MarketListResult& operator=(MarketListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->markets_ == nullptr; };
    // markets Field Functions 
    bool hasMarkets() const { return this->markets_ != nullptr;};
    void deleteMarkets() { this->markets_ = nullptr;};
    inline const vector<MarketInfo> & getMarkets() const { DARABONBA_PTR_GET_CONST(markets_, vector<MarketInfo>) };
    inline vector<MarketInfo> getMarkets() { DARABONBA_PTR_GET(markets_, vector<MarketInfo>) };
    inline MarketListResult& setMarkets(const vector<MarketInfo> & markets) { DARABONBA_PTR_SET_VALUE(markets_, markets) };
    inline MarketListResult& setMarkets(vector<MarketInfo> && markets) { DARABONBA_PTR_SET_RVALUE(markets_, markets) };


  protected:
    shared_ptr<vector<MarketInfo>> markets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
