// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTIPALLOCATIONPOLICYNODEPOLICYBONDS_HPP_
#define ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTIPALLOCATIONPOLICYNODEPOLICYBONDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ExtendClusterRequestIpAllocationPolicyNodePolicyBonds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtendClusterRequestIpAllocationPolicyNodePolicyBonds& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Subnet, subnet_);
    };
    friend void from_json(const Darabonba::Json& j, ExtendClusterRequestIpAllocationPolicyNodePolicyBonds& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Subnet, subnet_);
    };
    ExtendClusterRequestIpAllocationPolicyNodePolicyBonds() = default ;
    ExtendClusterRequestIpAllocationPolicyNodePolicyBonds(const ExtendClusterRequestIpAllocationPolicyNodePolicyBonds &) = default ;
    ExtendClusterRequestIpAllocationPolicyNodePolicyBonds(ExtendClusterRequestIpAllocationPolicyNodePolicyBonds &&) = default ;
    ExtendClusterRequestIpAllocationPolicyNodePolicyBonds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtendClusterRequestIpAllocationPolicyNodePolicyBonds() = default ;
    ExtendClusterRequestIpAllocationPolicyNodePolicyBonds& operator=(const ExtendClusterRequestIpAllocationPolicyNodePolicyBonds &) = default ;
    ExtendClusterRequestIpAllocationPolicyNodePolicyBonds& operator=(ExtendClusterRequestIpAllocationPolicyNodePolicyBonds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->subnet_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ExtendClusterRequestIpAllocationPolicyNodePolicyBonds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subnet Field Functions 
    bool hasSubnet() const { return this->subnet_ != nullptr;};
    void deleteSubnet() { this->subnet_ = nullptr;};
    inline string subnet() const { DARABONBA_PTR_GET_DEFAULT(subnet_, "") };
    inline ExtendClusterRequestIpAllocationPolicyNodePolicyBonds& setSubnet(string subnet) { DARABONBA_PTR_SET_VALUE(subnet_, subnet) };


  protected:
    // Bond name
    std::shared_ptr<string> name_ = nullptr;
    // IP source cluster subnet
    std::shared_ptr<string> subnet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
