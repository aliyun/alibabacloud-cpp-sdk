// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLOTLIFECYCLE_HPP_
#define ALIBABACLOUD_MODELS_SLOTLIFECYCLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class SlotLifeCycle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SlotLifeCycle& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SlotLifeCycle& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SlotLifeCycle() = default ;
    SlotLifeCycle(const SlotLifeCycle &) = default ;
    SlotLifeCycle(SlotLifeCycle &&) = default ;
    SlotLifeCycle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SlotLifeCycle() = default ;
    SlotLifeCycle& operator=(const SlotLifeCycle &) = default ;
    SlotLifeCycle& operator=(SlotLifeCycle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline SlotLifeCycle& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SlotLifeCycle& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> config_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
