// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDETECTIONRULESRESPONSEBODYDETECTIONRULESPLAYBOOK_HPP_
#define ALIBABACLOUD_MODELS_LISTDETECTIONRULESRESPONSEBODYDETECTIONRULESPLAYBOOK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDetectionRulesResponseBodyDetectionRulesPlaybook : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDetectionRulesResponseBodyDetectionRulesPlaybook& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Flow, flow_);
    };
    friend void from_json(const Darabonba::Json& j, ListDetectionRulesResponseBodyDetectionRulesPlaybook& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Flow, flow_);
    };
    ListDetectionRulesResponseBodyDetectionRulesPlaybook() = default ;
    ListDetectionRulesResponseBodyDetectionRulesPlaybook(const ListDetectionRulesResponseBodyDetectionRulesPlaybook &) = default ;
    ListDetectionRulesResponseBodyDetectionRulesPlaybook(ListDetectionRulesResponseBodyDetectionRulesPlaybook &&) = default ;
    ListDetectionRulesResponseBodyDetectionRulesPlaybook(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDetectionRulesResponseBodyDetectionRulesPlaybook() = default ;
    ListDetectionRulesResponseBodyDetectionRulesPlaybook& operator=(const ListDetectionRulesResponseBodyDetectionRulesPlaybook &) = default ;
    ListDetectionRulesResponseBodyDetectionRulesPlaybook& operator=(ListDetectionRulesResponseBodyDetectionRulesPlaybook &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->flow_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ListDetectionRulesResponseBodyDetectionRulesPlaybook& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // flow Field Functions 
    bool hasFlow() const { return this->flow_ != nullptr;};
    void deleteFlow() { this->flow_ = nullptr;};
    inline string flow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
    inline ListDetectionRulesResponseBodyDetectionRulesPlaybook& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


  protected:
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> flow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
