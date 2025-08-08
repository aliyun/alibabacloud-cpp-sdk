// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTASYNCINVOKECONFIGDESTINATIONCONFIGONSUCCESS_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTASYNCINVOKECONFIGDESTINATIONCONFIGONSUCCESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess& obj) { 
      DARABONBA_PTR_TO_JSON(destination, destination_);
    };
    friend void from_json(const Darabonba::Json& j, DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess& obj) { 
      DARABONBA_PTR_FROM_JSON(destination, destination_);
    };
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess() = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess(const DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess &) = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess(DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess &&) = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess() = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess& operator=(const DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess &) = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess& operator=(DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destination_ != nullptr; };
    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnSuccess& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


  protected:
    std::shared_ptr<string> destination_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
