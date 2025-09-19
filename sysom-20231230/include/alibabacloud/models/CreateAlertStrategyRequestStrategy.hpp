// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTSTRATEGYREQUESTSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTSTRATEGYREQUESTSTRATEGY_HPP_
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
  class CreateAlertStrategyRequestStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertStrategyRequestStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(clusters, clusters_);
      DARABONBA_PTR_TO_JSON(items, items_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertStrategyRequestStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(items, items_);
    };
    CreateAlertStrategyRequestStrategy() = default ;
    CreateAlertStrategyRequestStrategy(const CreateAlertStrategyRequestStrategy &) = default ;
    CreateAlertStrategyRequestStrategy(CreateAlertStrategyRequestStrategy &&) = default ;
    CreateAlertStrategyRequestStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertStrategyRequestStrategy() = default ;
    CreateAlertStrategyRequestStrategy& operator=(const CreateAlertStrategyRequestStrategy &) = default ;
    CreateAlertStrategyRequestStrategy& operator=(CreateAlertStrategyRequestStrategy &&) = default ;
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
    inline CreateAlertStrategyRequestStrategy& setClusters(const vector<string> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline CreateAlertStrategyRequestStrategy& setClusters(vector<string> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<string> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<string>) };
    inline vector<string> items() { DARABONBA_PTR_GET(items_, vector<string>) };
    inline CreateAlertStrategyRequestStrategy& setItems(const vector<string> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline CreateAlertStrategyRequestStrategy& setItems(vector<string> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    std::shared_ptr<vector<string>> clusters_ = nullptr;
    std::shared_ptr<vector<string>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
