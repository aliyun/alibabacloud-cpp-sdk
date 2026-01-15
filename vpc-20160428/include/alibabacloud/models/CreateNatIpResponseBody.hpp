// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENATIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(NatIps, natIps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4Prefix, ipv4Prefix_);
      DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
      DARABONBA_PTR_FROM_JSON(NatIpId, natIpId_);
      DARABONBA_PTR_FROM_JSON(NatIps, natIps_);
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
    class NatIps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatIps& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv4Prefix, ipv4Prefix_);
        DARABONBA_PTR_TO_JSON(NatIp, natIp_);
        DARABONBA_PTR_TO_JSON(NatIpId, natIpId_);
      };
      friend void from_json(const Darabonba::Json& j, NatIps& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv4Prefix, ipv4Prefix_);
        DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
        DARABONBA_PTR_FROM_JSON(NatIpId, natIpId_);
      };
      NatIps() = default ;
      NatIps(const NatIps &) = default ;
      NatIps(NatIps &&) = default ;
      NatIps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatIps() = default ;
      NatIps& operator=(const NatIps &) = default ;
      NatIps& operator=(NatIps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ipv4Prefix_ == nullptr
        && this->natIp_ == nullptr && this->natIpId_ == nullptr; };
      // ipv4Prefix Field Functions 
      bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
      void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
      inline string getIpv4Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv4Prefix_, "") };
      inline NatIps& setIpv4Prefix(string ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };


      // natIp Field Functions 
      bool hasNatIp() const { return this->natIp_ != nullptr;};
      void deleteNatIp() { this->natIp_ = nullptr;};
      inline string getNatIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
      inline NatIps& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


      // natIpId Field Functions 
      bool hasNatIpId() const { return this->natIpId_ != nullptr;};
      void deleteNatIpId() { this->natIpId_ = nullptr;};
      inline string getNatIpId() const { DARABONBA_PTR_GET_DEFAULT(natIpId_, "") };
      inline NatIps& setNatIpId(string natIpId) { DARABONBA_PTR_SET_VALUE(natIpId_, natIpId) };


    protected:
      // The Ipv4Prefix of the created NatIpList list is returned when Ipv4Preix is created.
      shared_ptr<string> ipv4Prefix_ {};
      // Returns the NatIp address of the created NatIpList list when Ipv4Preix is created.
      shared_ptr<string> natIp_ {};
      // Returns the NatIpId of the created NatIpList list when Ipv4Preix is created.
      shared_ptr<string> natIpId_ {};
    };

    virtual bool empty() const override { return this->ipv4Prefix_ == nullptr
        && this->natIp_ == nullptr && this->natIpId_ == nullptr && this->natIps_ == nullptr && this->requestId_ == nullptr; };
    // ipv4Prefix Field Functions 
    bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
    void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
    inline string getIpv4Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv4Prefix_, "") };
    inline CreateNatIpResponseBody& setIpv4Prefix(string ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };


    // natIp Field Functions 
    bool hasNatIp() const { return this->natIp_ != nullptr;};
    void deleteNatIp() { this->natIp_ = nullptr;};
    inline string getNatIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
    inline CreateNatIpResponseBody& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


    // natIpId Field Functions 
    bool hasNatIpId() const { return this->natIpId_ != nullptr;};
    void deleteNatIpId() { this->natIpId_ = nullptr;};
    inline string getNatIpId() const { DARABONBA_PTR_GET_DEFAULT(natIpId_, "") };
    inline CreateNatIpResponseBody& setNatIpId(string natIpId) { DARABONBA_PTR_SET_VALUE(natIpId_, natIpId) };


    // natIps Field Functions 
    bool hasNatIps() const { return this->natIps_ != nullptr;};
    void deleteNatIps() { this->natIps_ = nullptr;};
    inline const vector<CreateNatIpResponseBody::NatIps> & getNatIps() const { DARABONBA_PTR_GET_CONST(natIps_, vector<CreateNatIpResponseBody::NatIps>) };
    inline vector<CreateNatIpResponseBody::NatIps> getNatIps() { DARABONBA_PTR_GET(natIps_, vector<CreateNatIpResponseBody::NatIps>) };
    inline CreateNatIpResponseBody& setNatIps(const vector<CreateNatIpResponseBody::NatIps> & natIps) { DARABONBA_PTR_SET_VALUE(natIps_, natIps) };
    inline CreateNatIpResponseBody& setNatIps(vector<CreateNatIpResponseBody::NatIps> && natIps) { DARABONBA_PTR_SET_RVALUE(natIps_, natIps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNatIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IPv4Prefix returned by the previous API is obsolete.
    shared_ptr<string> ipv4Prefix_ {};
    // The NAT IP address.
    shared_ptr<string> natIp_ {};
    // The ID of the NAT IP address.
    shared_ptr<string> natIpId_ {};
    // The NatIp parameter that is returned after you create a NatIp. If you use IPv4Prefix to create a NatIp, the information about all NatIp is returned. We recommend that you use this parameter to obtain the information about a NatIp when you create a NatIp.
    shared_ptr<vector<CreateNatIpResponseBody::NatIps>> natIps_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
