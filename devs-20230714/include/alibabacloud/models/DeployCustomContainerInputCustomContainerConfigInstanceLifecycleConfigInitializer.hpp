// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTCUSTOMCONTAINERCONFIGINSTANCELIFECYCLECONFIGINITIALIZER_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTCUSTOMCONTAINERCONFIGINSTANCELIFECYCLECONFIGINITIALIZER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer& obj) { 
      DARABONBA_PTR_TO_JSON(handler, handler_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer& obj) { 
      DARABONBA_PTR_FROM_JSON(handler, handler_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
    };
    DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer() = default ;
    DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer(const DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer &) = default ;
    DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer(DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer &&) = default ;
    DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer() = default ;
    DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer& operator=(const DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer &) = default ;
    DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer& operator=(DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->handler_ != nullptr
        && this->timeout_ != nullptr; };
    // handler Field Functions 
    bool hasHandler() const { return this->handler_ != nullptr;};
    void deleteHandler() { this->handler_ = nullptr;};
    inline string handler() const { DARABONBA_PTR_GET_DEFAULT(handler_, "") };
    inline DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer& setHandler(string handler) { DARABONBA_PTR_SET_VALUE(handler_, handler) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    std::shared_ptr<string> handler_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
