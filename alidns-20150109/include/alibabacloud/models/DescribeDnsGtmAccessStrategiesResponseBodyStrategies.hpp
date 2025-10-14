// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGIESRESPONSEBODYSTRATEGIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGIESRESPONSEBODYSTRATEGIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategiesResponseBodyStrategies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategiesResponseBodyStrategies& obj) { 
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategiesResponseBodyStrategies& obj) { 
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    DescribeDnsGtmAccessStrategiesResponseBodyStrategies() = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategies(const DescribeDnsGtmAccessStrategiesResponseBodyStrategies &) = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategies(DescribeDnsGtmAccessStrategiesResponseBodyStrategies &&) = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategiesResponseBodyStrategies() = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategies& operator=(const DescribeDnsGtmAccessStrategiesResponseBodyStrategies &) = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategies& operator=(DescribeDnsGtmAccessStrategiesResponseBodyStrategies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->strategy_ == nullptr; };
    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy> & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy>) };
    inline vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy> strategy() { DARABONBA_PTR_GET(strategy_, vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy>) };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategies& setStrategy(const vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy> & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategies& setStrategy(vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy> && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy>> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
