// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTASYNCINVOKECONFIGDESTINATIONCONFIGONFAILURE_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTASYNCINVOKECONFIGDESTINATIONCONFIGONFAILURE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure& obj) { 
      DARABONBA_PTR_TO_JSON(destination, destination_);
    };
    friend void from_json(const Darabonba::Json& j, DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure& obj) { 
      DARABONBA_PTR_FROM_JSON(destination, destination_);
    };
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure() = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure(const DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure &) = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure(DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure &&) = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure() = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure& operator=(const DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure &) = default ;
    DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure& operator=(DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destination_ != nullptr; };
    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline DeployCustomContainerInputAsyncInvokeConfigDestinationConfigOnFailure& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


  protected:
    std::shared_ptr<string> destination_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
