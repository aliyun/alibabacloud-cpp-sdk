// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNLENIPRIVATEIPADDRESSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNLENIPRIVATEIPADDRESSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class AssignLeniPrivateIpAddressResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignLeniPrivateIpAddressResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_TO_JSON(IpName, ipName_);
    };
    friend void from_json(const Darabonba::Json& j, AssignLeniPrivateIpAddressResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(IpName, ipName_);
    };
    AssignLeniPrivateIpAddressResponseBodyContent() = default ;
    AssignLeniPrivateIpAddressResponseBodyContent(const AssignLeniPrivateIpAddressResponseBodyContent &) = default ;
    AssignLeniPrivateIpAddressResponseBodyContent(AssignLeniPrivateIpAddressResponseBodyContent &&) = default ;
    AssignLeniPrivateIpAddressResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignLeniPrivateIpAddressResponseBodyContent() = default ;
    AssignLeniPrivateIpAddressResponseBodyContent& operator=(const AssignLeniPrivateIpAddressResponseBodyContent &) = default ;
    AssignLeniPrivateIpAddressResponseBodyContent& operator=(AssignLeniPrivateIpAddressResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticNetworkInterfaceId_ == nullptr
        && return this->ipName_ == nullptr; };
    // elasticNetworkInterfaceId Field Functions 
    bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
    void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
    inline string elasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
    inline AssignLeniPrivateIpAddressResponseBodyContent& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


    // ipName Field Functions 
    bool hasIpName() const { return this->ipName_ != nullptr;};
    void deleteIpName() { this->ipName_ = nullptr;};
    inline string ipName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
    inline AssignLeniPrivateIpAddressResponseBodyContent& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


  protected:
    // Lingjun Elastic Network Interface ID.
    std::shared_ptr<string> elasticNetworkInterfaceId_ = nullptr;
    // Lingjun Elastic Network Interface secondary private IP unique identifier.
    std::shared_ptr<string> ipName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
