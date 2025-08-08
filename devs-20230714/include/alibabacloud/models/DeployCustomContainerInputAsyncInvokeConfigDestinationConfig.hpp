// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTASYNCINVOKECONFIGDESTINATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTASYNCINVOKECONFIGDESTINATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure.hpp>
#include <alibabacloud/models/DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployCustomContainerInputAsyncInvokeConfigDestinationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployCustomContainerInputAsyncInvokeConfigDestinationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(onFailure, onFailure_);
      DARABONBA_PTR_TO_JSON(onSuccess, onSuccess_);
    };
    friend void from_json(const Darabonba::Json& j, DeployCustomContainerInputAsyncInvokeConfigDestinationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(onFailure, onFailure_);
      DARABONBA_PTR_FROM_JSON(onSuccess, onSuccess_);
    };
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfig() = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfig(const DeployCustomContainerInputAsyncInvokeConfigDestinationConfig &) = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfig(DeployCustomContainerInputAsyncInvokeConfigDestinationConfig &&) = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployCustomContainerInputAsyncInvokeConfigDestinationConfig() = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfig& operator=(const DeployCustomContainerInputAsyncInvokeConfigDestinationConfig &) = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfig& operator=(DeployCustomContainerInputAsyncInvokeConfigDestinationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->onFailure_ != nullptr
        && this->onSuccess_ != nullptr; };
    // onFailure Field Functions 
    bool hasOnFailure() const { return this->onFailure_ != nullptr;};
    void deleteOnFailure() { this->onFailure_ = nullptr;};
    inline const Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure & onFailure() const { DARABONBA_PTR_GET_CONST(onFailure_, Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure) };
    inline Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure onFailure() { DARABONBA_PTR_GET(onFailure_, Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure) };
    inline DeployCustomContainerInputAsyncInvokeConfigDestinationConfig& setOnFailure(const Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure & onFailure) { DARABONBA_PTR_SET_VALUE(onFailure_, onFailure) };
    inline DeployCustomContainerInputAsyncInvokeConfigDestinationConfig& setOnFailure(Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure && onFailure) { DARABONBA_PTR_SET_RVALUE(onFailure_, onFailure) };


    // onSuccess Field Functions 
    bool hasOnSuccess() const { return this->onSuccess_ != nullptr;};
    void deleteOnSuccess() { this->onSuccess_ = nullptr;};
    inline const Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess & onSuccess() const { DARABONBA_PTR_GET_CONST(onSuccess_, Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess) };
    inline Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess onSuccess() { DARABONBA_PTR_GET(onSuccess_, Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess) };
    inline DeployCustomContainerInputAsyncInvokeConfigDestinationConfig& setOnSuccess(const Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess & onSuccess) { DARABONBA_PTR_SET_VALUE(onSuccess_, onSuccess) };
    inline DeployCustomContainerInputAsyncInvokeConfigDestinationConfig& setOnSuccess(Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess && onSuccess) { DARABONBA_PTR_SET_RVALUE(onSuccess_, onSuccess) };


  protected:
    std::shared_ptr<Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure> onFailure_ = nullptr;
    std::shared_ptr<Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess> onSuccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
