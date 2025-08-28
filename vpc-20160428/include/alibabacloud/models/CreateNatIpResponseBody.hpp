// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENATIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateNatIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4Prefix, ipv4Prefix_);
      DARABONBA_PTR_TO_JSON(NatIp, natIp_);
      DARABONBA_PTR_TO_JSON(NatIpId, natIpId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4Prefix, ipv4Prefix_);
      DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
      DARABONBA_PTR_FROM_JSON(NatIpId, natIpId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNatIpResponseBody() = default ;
    CreateNatIpResponseBody(const CreateNatIpResponseBody &) = default ;
    CreateNatIpResponseBody(CreateNatIpResponseBody &&) = default ;
    CreateNatIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatIpResponseBody() = default ;
    CreateNatIpResponseBody& operator=(const CreateNatIpResponseBody &) = default ;
    CreateNatIpResponseBody& operator=(CreateNatIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv4Prefix_ != nullptr
        && this->natIp_ != nullptr && this->natIpId_ != nullptr && this->requestId_ != nullptr; };
    // ipv4Prefix Field Functions 
    bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
    void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
    inline string ipv4Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv4Prefix_, "") };
    inline CreateNatIpResponseBody& setIpv4Prefix(string ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };


    // natIp Field Functions 
    bool hasNatIp() const { return this->natIp_ != nullptr;};
    void deleteNatIp() { this->natIp_ = nullptr;};
    inline string natIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
    inline CreateNatIpResponseBody& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


    // natIpId Field Functions 
    bool hasNatIpId() const { return this->natIpId_ != nullptr;};
    void deleteNatIpId() { this->natIpId_ = nullptr;};
    inline string natIpId() const { DARABONBA_PTR_GET_DEFAULT(natIpId_, "") };
    inline CreateNatIpResponseBody& setNatIpId(string natIpId) { DARABONBA_PTR_SET_VALUE(natIpId_, natIpId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNatIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> ipv4Prefix_ = nullptr;
    // The NAT IP address.
    std::shared_ptr<string> natIp_ = nullptr;
    // The ID of the NAT IP address.
    std::shared_ptr<string> natIpId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
