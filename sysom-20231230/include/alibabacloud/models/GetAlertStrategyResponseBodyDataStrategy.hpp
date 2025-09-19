// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTSTRATEGYRESPONSEBODYDATASTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_GETALERTSTRATEGYRESPONSEBODYDATASTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAlertStrategyResponseBodyDataStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertStrategyResponseBodyDataStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(clusters, clusters_);
      DARABONBA_ANY_TO_JSON(items, items_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertStrategyResponseBodyDataStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(clusters, clusters_);
      DARABONBA_ANY_FROM_JSON(items, items_);
    };
    GetAlertStrategyResponseBodyDataStrategy() = default ;
    GetAlertStrategyResponseBodyDataStrategy(const GetAlertStrategyResponseBodyDataStrategy &) = default ;
    GetAlertStrategyResponseBodyDataStrategy(GetAlertStrategyResponseBodyDataStrategy &&) = default ;
    GetAlertStrategyResponseBodyDataStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertStrategyResponseBodyDataStrategy() = default ;
    GetAlertStrategyResponseBodyDataStrategy& operator=(const GetAlertStrategyResponseBodyDataStrategy &) = default ;
    GetAlertStrategyResponseBodyDataStrategy& operator=(GetAlertStrategyResponseBodyDataStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusters_ != nullptr
        && this->items_ != nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<string> & clusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<string>) };
    inline vector<string> clusters() { DARABONBA_PTR_GET(clusters_, vector<string>) };
    inline GetAlertStrategyResponseBodyDataStrategy& setClusters(const vector<string> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline GetAlertStrategyResponseBodyDataStrategy& setClusters(vector<string> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline     const Darabonba::Json & items() const { DARABONBA_GET(items_) };
    Darabonba::Json & items() { DARABONBA_GET(items_) };
    inline GetAlertStrategyResponseBodyDataStrategy& setItems(const Darabonba::Json & items) { DARABONBA_SET_VALUE(items_, items) };
    inline GetAlertStrategyResponseBodyDataStrategy& setItems(Darabonba::Json & items) { DARABONBA_SET_RVALUE(items_, items) };


  protected:
    std::shared_ptr<vector<string>> clusters_ = nullptr;
    Darabonba::Json items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
