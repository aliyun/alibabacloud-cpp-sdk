// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(SlbType, slbType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(SlbType, slbType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListSlbRequest() = default ;
    ListSlbRequest(const ListSlbRequest &) = default ;
    ListSlbRequest(ListSlbRequest &&) = default ;
    ListSlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSlbRequest() = default ;
    ListSlbRequest& operator=(const ListSlbRequest &) = default ;
    ListSlbRequest& operator=(ListSlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressType_ == nullptr
        && return this->slbType_ == nullptr && return this->vpcId_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline ListSlbRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // slbType Field Functions 
    bool hasSlbType() const { return this->slbType_ != nullptr;};
    void deleteSlbType() { this->slbType_ = nullptr;};
    inline string slbType() const { DARABONBA_PTR_GET_DEFAULT(slbType_, "") };
    inline ListSlbRequest& setSlbType(string slbType) { DARABONBA_PTR_SET_VALUE(slbType_, slbType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListSlbRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The type of the IP addresses. Valid values:
    // 
    // *   Internet: Users can connect to the SLB instance over the Internet.
    // *   Intranet: Users can connect to the SLB instance over the internal network.
    std::shared_ptr<string> addressType_ = nullptr;
    // The type of the SLB instance. Valid values:
    // 
    // *   clb: Classic Load Balancer (CLB)
    // *   alb: Application Load Balancer (ALB)
    std::shared_ptr<string> slbType_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
