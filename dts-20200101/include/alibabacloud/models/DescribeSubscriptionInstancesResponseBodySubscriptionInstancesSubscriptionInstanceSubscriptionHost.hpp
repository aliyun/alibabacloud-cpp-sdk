// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESRESPONSEBODYSUBSCRIPTIONINSTANCESSUBSCRIPTIONINSTANCESUBSCRIPTIONHOST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESRESPONSEBODYSUBSCRIPTIONINSTANCESSUBSCRIPTIONINSTANCESUBSCRIPTIONHOST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateHost, privateHost_);
      DARABONBA_PTR_TO_JSON(PublicHost, publicHost_);
      DARABONBA_PTR_TO_JSON(VPCHost, VPCHost_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateHost, privateHost_);
      DARABONBA_PTR_FROM_JSON(PublicHost, publicHost_);
      DARABONBA_PTR_FROM_JSON(VPCHost, VPCHost_);
    };
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost() = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost(const DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost &) = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost(DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost &&) = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost() = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost& operator=(const DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost &) = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost& operator=(DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->privateHost_ != nullptr
        && this->publicHost_ != nullptr && this->VPCHost_ != nullptr; };
    // privateHost Field Functions 
    bool hasPrivateHost() const { return this->privateHost_ != nullptr;};
    void deletePrivateHost() { this->privateHost_ = nullptr;};
    inline string privateHost() const { DARABONBA_PTR_GET_DEFAULT(privateHost_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost& setPrivateHost(string privateHost) { DARABONBA_PTR_SET_VALUE(privateHost_, privateHost) };


    // publicHost Field Functions 
    bool hasPublicHost() const { return this->publicHost_ != nullptr;};
    void deletePublicHost() { this->publicHost_ = nullptr;};
    inline string publicHost() const { DARABONBA_PTR_GET_DEFAULT(publicHost_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost& setPublicHost(string publicHost) { DARABONBA_PTR_SET_VALUE(publicHost_, publicHost) };


    // VPCHost Field Functions 
    bool hasVPCHost() const { return this->VPCHost_ != nullptr;};
    void deleteVPCHost() { this->VPCHost_ = nullptr;};
    inline string VPCHost() const { DARABONBA_PTR_GET_DEFAULT(VPCHost_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost& setVPCHost(string VPCHost) { DARABONBA_PTR_SET_VALUE(VPCHost_, VPCHost) };


  protected:
    // The private endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
    std::shared_ptr<string> privateHost_ = nullptr;
    // The public endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
    std::shared_ptr<string> publicHost_ = nullptr;
    // The virtual private cloud (VPC) endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
    std::shared_ptr<string> VPCHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
