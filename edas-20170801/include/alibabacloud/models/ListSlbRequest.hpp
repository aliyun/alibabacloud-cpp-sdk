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
        && this->slbType_ == nullptr && this->vpcId_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline ListSlbRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // slbType Field Functions 
    bool hasSlbType() const { return this->slbType_ != nullptr;};
    void deleteSlbType() { this->slbType_ = nullptr;};
    inline string getSlbType() const { DARABONBA_PTR_GET_DEFAULT(slbType_, "") };
    inline ListSlbRequest& setSlbType(string slbType) { DARABONBA_PTR_SET_VALUE(slbType_, slbType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListSlbRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The address type. Valid values:
    // - Internet: public address.
    // - Intranet: private network address.
    shared_ptr<string> addressType_ {};
    // The SLB type. Valid values:
    // - clb: classic load balancing.
    // - alb: application load balancing.
    shared_ptr<string> slbType_ {};
    // The VPC ID.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
