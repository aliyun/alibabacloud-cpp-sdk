// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTRESPONSEBODYCONNECTSSRCCONTAINER_HPP_
#define ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTRESPONSEBODYCONNECTSSRCCONTAINER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class FindContainerNetworkConnectResponseBodyConnectsSrcContainer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindContainerNetworkConnectResponseBodyConnectsSrcContainer& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
    };
    friend void from_json(const Darabonba::Json& j, FindContainerNetworkConnectResponseBodyConnectsSrcContainer& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
    };
    FindContainerNetworkConnectResponseBodyConnectsSrcContainer() = default ;
    FindContainerNetworkConnectResponseBodyConnectsSrcContainer(const FindContainerNetworkConnectResponseBodyConnectsSrcContainer &) = default ;
    FindContainerNetworkConnectResponseBodyConnectsSrcContainer(FindContainerNetworkConnectResponseBodyConnectsSrcContainer &&) = default ;
    FindContainerNetworkConnectResponseBodyConnectsSrcContainer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindContainerNetworkConnectResponseBodyConnectsSrcContainer() = default ;
    FindContainerNetworkConnectResponseBodyConnectsSrcContainer& operator=(const FindContainerNetworkConnectResponseBodyConnectsSrcContainer &) = default ;
    FindContainerNetworkConnectResponseBodyConnectsSrcContainer& operator=(FindContainerNetworkConnectResponseBodyConnectsSrcContainer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerId_ == nullptr; };
    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline FindContainerNetworkConnectResponseBodyConnectsSrcContainer& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


  protected:
    // The ID of the source container.
    std::shared_ptr<string> containerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
