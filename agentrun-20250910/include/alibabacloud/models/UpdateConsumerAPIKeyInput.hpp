// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONSUMERAPIKEYINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONSUMERAPIKEYINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateConsumerAPIKeyInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConsumerAPIKeyInput& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConsumerAPIKeyInput& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(description, description_);
    };
    UpdateConsumerAPIKeyInput() = default ;
    UpdateConsumerAPIKeyInput(const UpdateConsumerAPIKeyInput &) = default ;
    UpdateConsumerAPIKeyInput(UpdateConsumerAPIKeyInput &&) = default ;
    UpdateConsumerAPIKeyInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConsumerAPIKeyInput() = default ;
    UpdateConsumerAPIKeyInput& operator=(const UpdateConsumerAPIKeyInput &) = default ;
    UpdateConsumerAPIKeyInput& operator=(UpdateConsumerAPIKeyInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->description_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline UpdateConsumerAPIKeyInput& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateConsumerAPIKeyInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // 是否启用该密钥
    shared_ptr<bool> active_ {};
    // 更新后的描述信息
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
