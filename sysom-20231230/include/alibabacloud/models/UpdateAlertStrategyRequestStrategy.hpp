// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTSTRATEGYREQUESTSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTSTRATEGYREQUESTSTRATEGY_HPP_
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
  class UpdateAlertStrategyRequestStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertStrategyRequestStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(clusters, clusters_);
      DARABONBA_PTR_TO_JSON(items, items_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertStrategyRequestStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(items, items_);
    };
    UpdateAlertStrategyRequestStrategy() = default ;
    UpdateAlertStrategyRequestStrategy(const UpdateAlertStrategyRequestStrategy &) = default ;
    UpdateAlertStrategyRequestStrategy(UpdateAlertStrategyRequestStrategy &&) = default ;
    UpdateAlertStrategyRequestStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertStrategyRequestStrategy() = default ;
    UpdateAlertStrategyRequestStrategy& operator=(const UpdateAlertStrategyRequestStrategy &) = default ;
    UpdateAlertStrategyRequestStrategy& operator=(UpdateAlertStrategyRequestStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusters_ == nullptr
        && return this->items_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<string> & clusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<string>) };
    inline vector<string> clusters() { DARABONBA_PTR_GET(clusters_, vector<string>) };
    inline UpdateAlertStrategyRequestStrategy& setClusters(const vector<string> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline UpdateAlertStrategyRequestStrategy& setClusters(vector<string> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<string> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<string>) };
    inline vector<string> items() { DARABONBA_PTR_GET(items_, vector<string>) };
    inline UpdateAlertStrategyRequestStrategy& setItems(const vector<string> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline UpdateAlertStrategyRequestStrategy& setItems(vector<string> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    std::shared_ptr<vector<string>> clusters_ = nullptr;
    std::shared_ptr<vector<string>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
