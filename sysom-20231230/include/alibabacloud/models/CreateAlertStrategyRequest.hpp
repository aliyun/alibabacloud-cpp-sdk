// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTSTRATEGYREQUEST_HPP_
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
  class CreateAlertStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(k8sLabel, k8sLabel_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(k8sLabel, k8sLabel_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(strategy, strategy_);
    };
    CreateAlertStrategyRequest() = default ;
    CreateAlertStrategyRequest(const CreateAlertStrategyRequest &) = default ;
    CreateAlertStrategyRequest(CreateAlertStrategyRequest &&) = default ;
    CreateAlertStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertStrategyRequest() = default ;
    CreateAlertStrategyRequest& operator=(const CreateAlertStrategyRequest &) = default ;
    CreateAlertStrategyRequest& operator=(CreateAlertStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Strategy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Strategy& obj) { 
        DARABONBA_PTR_TO_JSON(clusters, clusters_);
        DARABONBA_PTR_TO_JSON(items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
        DARABONBA_PTR_FROM_JSON(clusters, clusters_);
        DARABONBA_PTR_FROM_JSON(items, items_);
      };
      Strategy() = default ;
      Strategy(const Strategy &) = default ;
      Strategy(Strategy &&) = default ;
      Strategy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Strategy() = default ;
      Strategy& operator=(const Strategy &) = default ;
      Strategy& operator=(Strategy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusters_ == nullptr
        && this->items_ == nullptr; };
      // clusters Field Functions 
      bool hasClusters() const { return this->clusters_ != nullptr;};
      void deleteClusters() { this->clusters_ = nullptr;};
      inline const vector<string> & getClusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<string>) };
      inline vector<string> getClusters() { DARABONBA_PTR_GET(clusters_, vector<string>) };
      inline Strategy& setClusters(const vector<string> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
      inline Strategy& setClusters(vector<string> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<string> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<string>) };
      inline vector<string> getItems() { DARABONBA_PTR_GET(items_, vector<string>) };
      inline Strategy& setItems(const vector<string> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Strategy& setItems(vector<string> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      shared_ptr<vector<string>> clusters_ {};
      shared_ptr<vector<string>> items_ {};
    };

    virtual bool empty() const override { return this->enabled_ == nullptr
        && this->k8sLabel_ == nullptr && this->name_ == nullptr && this->strategy_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateAlertStrategyRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // k8sLabel Field Functions 
    bool hasK8sLabel() const { return this->k8sLabel_ != nullptr;};
    void deleteK8sLabel() { this->k8sLabel_ = nullptr;};
    inline bool getK8sLabel() const { DARABONBA_PTR_GET_DEFAULT(k8sLabel_, false) };
    inline CreateAlertStrategyRequest& setK8sLabel(bool k8sLabel) { DARABONBA_PTR_SET_VALUE(k8sLabel_, k8sLabel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAlertStrategyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const CreateAlertStrategyRequest::Strategy & getStrategy() const { DARABONBA_PTR_GET_CONST(strategy_, CreateAlertStrategyRequest::Strategy) };
    inline CreateAlertStrategyRequest::Strategy getStrategy() { DARABONBA_PTR_GET(strategy_, CreateAlertStrategyRequest::Strategy) };
    inline CreateAlertStrategyRequest& setStrategy(const CreateAlertStrategyRequest::Strategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline CreateAlertStrategyRequest& setStrategy(CreateAlertStrategyRequest::Strategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


  protected:
    // This parameter is required.
    shared_ptr<bool> enabled_ {};
    shared_ptr<bool> k8sLabel_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<CreateAlertStrategyRequest::Strategy> strategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
