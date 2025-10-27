// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTRESPONSEBODYCONNECTSDSTCONTAINER_HPP_
#define ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTRESPONSEBODYCONNECTSDSTCONTAINER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class FindContainerNetworkConnectResponseBodyConnectsDstContainer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindContainerNetworkConnectResponseBodyConnectsDstContainer& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
    };
    friend void from_json(const Darabonba::Json& j, FindContainerNetworkConnectResponseBodyConnectsDstContainer& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
    };
    FindContainerNetworkConnectResponseBodyConnectsDstContainer() = default ;
    FindContainerNetworkConnectResponseBodyConnectsDstContainer(const FindContainerNetworkConnectResponseBodyConnectsDstContainer &) = default ;
    FindContainerNetworkConnectResponseBodyConnectsDstContainer(FindContainerNetworkConnectResponseBodyConnectsDstContainer &&) = default ;
    FindContainerNetworkConnectResponseBodyConnectsDstContainer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindContainerNetworkConnectResponseBodyConnectsDstContainer() = default ;
    FindContainerNetworkConnectResponseBodyConnectsDstContainer& operator=(const FindContainerNetworkConnectResponseBodyConnectsDstContainer &) = default ;
    FindContainerNetworkConnectResponseBodyConnectsDstContainer& operator=(FindContainerNetworkConnectResponseBodyConnectsDstContainer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerId_ == nullptr; };
    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline FindContainerNetworkConnectResponseBodyConnectsDstContainer& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


  protected:
    // The ID of the destination container.
    std::shared_ptr<string> containerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
