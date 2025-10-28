// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIFECYCLEHOOK_HPP_
#define ALIBABACLOUD_MODELS_LIFECYCLEHOOK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class LifecycleHook : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LifecycleHook& obj) { 
      DARABONBA_PTR_TO_JSON(command, command_);
      DARABONBA_PTR_TO_JSON(handler, handler_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, LifecycleHook& obj) { 
      DARABONBA_PTR_FROM_JSON(command, command_);
      DARABONBA_PTR_FROM_JSON(handler, handler_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
    };
    LifecycleHook() = default ;
    LifecycleHook(const LifecycleHook &) = default ;
    LifecycleHook(LifecycleHook &&) = default ;
    LifecycleHook(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LifecycleHook() = default ;
    LifecycleHook& operator=(const LifecycleHook &) = default ;
    LifecycleHook& operator=(LifecycleHook &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->command_ == nullptr
        && return this->handler_ == nullptr && return this->timeout_ == nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & command() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> command() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline LifecycleHook& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline LifecycleHook& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    // handler Field Functions 
    bool hasHandler() const { return this->handler_ != nullptr;};
    void deleteHandler() { this->handler_ = nullptr;};
    inline string handler() const { DARABONBA_PTR_GET_DEFAULT(handler_, "") };
    inline LifecycleHook& setHandler(string handler) { DARABONBA_PTR_SET_VALUE(handler_, handler) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline LifecycleHook& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    std::shared_ptr<vector<string>> command_ = nullptr;
    std::shared_ptr<string> handler_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
