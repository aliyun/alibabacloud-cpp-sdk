// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEENDPOINTRESPONSEBODYENDPOINTSLINKEDVPCS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEENDPOINTRESPONSEBODYENDPOINTSLINKEDVPCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListInstanceEndpointResponseBodyEndpointsLinkedVpcs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceEndpointResponseBodyEndpointsLinkedVpcs& obj) { 
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceEndpointResponseBodyEndpointsLinkedVpcs& obj) { 
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListInstanceEndpointResponseBodyEndpointsLinkedVpcs() = default ;
    ListInstanceEndpointResponseBodyEndpointsLinkedVpcs(const ListInstanceEndpointResponseBodyEndpointsLinkedVpcs &) = default ;
    ListInstanceEndpointResponseBodyEndpointsLinkedVpcs(ListInstanceEndpointResponseBodyEndpointsLinkedVpcs &&) = default ;
    ListInstanceEndpointResponseBodyEndpointsLinkedVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceEndpointResponseBodyEndpointsLinkedVpcs() = default ;
    ListInstanceEndpointResponseBodyEndpointsLinkedVpcs& operator=(const ListInstanceEndpointResponseBodyEndpointsLinkedVpcs &) = default ;
    ListInstanceEndpointResponseBodyEndpointsLinkedVpcs& operator=(ListInstanceEndpointResponseBodyEndpointsLinkedVpcs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpcId_ == nullptr; };
    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListInstanceEndpointResponseBodyEndpointsLinkedVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // VPC ID
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
