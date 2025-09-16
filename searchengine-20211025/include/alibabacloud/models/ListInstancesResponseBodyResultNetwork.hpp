// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYRESULTNETWORK_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYRESULTNETWORK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListInstancesResponseBodyResultNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyResultNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(allow, allow_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(publicEndpoint, publicEndpoint_);
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyResultNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(allow, allow_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(publicEndpoint, publicEndpoint_);
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ListInstancesResponseBodyResultNetwork() = default ;
    ListInstancesResponseBodyResultNetwork(const ListInstancesResponseBodyResultNetwork &) = default ;
    ListInstancesResponseBodyResultNetwork(ListInstancesResponseBodyResultNetwork &&) = default ;
    ListInstancesResponseBodyResultNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyResultNetwork() = default ;
    ListInstancesResponseBodyResultNetwork& operator=(const ListInstancesResponseBodyResultNetwork &) = default ;
    ListInstancesResponseBodyResultNetwork& operator=(ListInstancesResponseBodyResultNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allow_ != nullptr
        && this->endpoint_ != nullptr && this->publicEndpoint_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr; };
    // allow Field Functions 
    bool hasAllow() const { return this->allow_ != nullptr;};
    void deleteAllow() { this->allow_ = nullptr;};
    inline string allow() const { DARABONBA_PTR_GET_DEFAULT(allow_, "") };
    inline ListInstancesResponseBodyResultNetwork& setAllow(string allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ListInstancesResponseBodyResultNetwork& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // publicEndpoint Field Functions 
    bool hasPublicEndpoint() const { return this->publicEndpoint_ != nullptr;};
    void deletePublicEndpoint() { this->publicEndpoint_ = nullptr;};
    inline string publicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicEndpoint_, "") };
    inline ListInstancesResponseBodyResultNetwork& setPublicEndpoint(string publicEndpoint) { DARABONBA_PTR_SET_VALUE(publicEndpoint_, publicEndpoint) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListInstancesResponseBodyResultNetwork& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListInstancesResponseBodyResultNetwork& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> allow_ = nullptr;
    // The instance endpoint.
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> publicEndpoint_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC) in which the instance is deployed.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
