// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVBRFLOWTOPNRESPONSEBODYVIRTUALBORDERROUTERFLOWLOGTOPN_HPP_
#define ALIBABACLOUD_MODELS_GETVBRFLOWTOPNRESPONSEBODYVIRTUALBORDERROUTERFLOWLOGTOPN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_TO_JSON(Bytes, bytes_);
      DARABONBA_PTR_TO_JSON(CloudIp, cloudIp_);
      DARABONBA_PTR_TO_JSON(CloudPort, cloudPort_);
      DARABONBA_PTR_TO_JSON(CloudRegion, cloudRegion_);
      DARABONBA_PTR_TO_JSON(OtherIp, otherIp_);
      DARABONBA_PTR_TO_JSON(OtherPort, otherPort_);
      DARABONBA_PTR_TO_JSON(Packets, packets_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(VirtualBorderRouterId, virtualBorderRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_FROM_JSON(Bytes, bytes_);
      DARABONBA_PTR_FROM_JSON(CloudIp, cloudIp_);
      DARABONBA_PTR_FROM_JSON(CloudPort, cloudPort_);
      DARABONBA_PTR_FROM_JSON(CloudRegion, cloudRegion_);
      DARABONBA_PTR_FROM_JSON(OtherIp, otherIp_);
      DARABONBA_PTR_FROM_JSON(OtherPort, otherPort_);
      DARABONBA_PTR_FROM_JSON(Packets, packets_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(VirtualBorderRouterId, virtualBorderRouterId_);
    };
    GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN() = default ;
    GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN(const GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN &) = default ;
    GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN(GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN &&) = default ;
    GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN() = default ;
    GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& operator=(const GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN &) = default ;
    GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& operator=(GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->attachmentId_ == nullptr && return this->bytes_ == nullptr && return this->cloudIp_ == nullptr && return this->cloudPort_ == nullptr && return this->cloudRegion_ == nullptr
        && return this->otherIp_ == nullptr && return this->otherPort_ == nullptr && return this->packets_ == nullptr && return this->protocol_ == nullptr && return this->virtualBorderRouterId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // attachmentId Field Functions 
    bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
    void deleteAttachmentId() { this->attachmentId_ = nullptr;};
    inline string attachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
    inline GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


    // bytes Field Functions 
    bool hasBytes() const { return this->bytes_ != nullptr;};
    void deleteBytes() { this->bytes_ = nullptr;};
    inline double bytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0.0) };
    inline GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& setBytes(double bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


    // cloudIp Field Functions 
    bool hasCloudIp() const { return this->cloudIp_ != nullptr;};
    void deleteCloudIp() { this->cloudIp_ = nullptr;};
    inline string cloudIp() const { DARABONBA_PTR_GET_DEFAULT(cloudIp_, "") };
    inline GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& setCloudIp(string cloudIp) { DARABONBA_PTR_SET_VALUE(cloudIp_, cloudIp) };


    // cloudPort Field Functions 
    bool hasCloudPort() const { return this->cloudPort_ != nullptr;};
    void deleteCloudPort() { this->cloudPort_ = nullptr;};
    inline string cloudPort() const { DARABONBA_PTR_GET_DEFAULT(cloudPort_, "") };
    inline GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& setCloudPort(string cloudPort) { DARABONBA_PTR_SET_VALUE(cloudPort_, cloudPort) };


    // cloudRegion Field Functions 
    bool hasCloudRegion() const { return this->cloudRegion_ != nullptr;};
    void deleteCloudRegion() { this->cloudRegion_ = nullptr;};
    inline string cloudRegion() const { DARABONBA_PTR_GET_DEFAULT(cloudRegion_, "") };
    inline GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& setCloudRegion(string cloudRegion) { DARABONBA_PTR_SET_VALUE(cloudRegion_, cloudRegion) };


    // otherIp Field Functions 
    bool hasOtherIp() const { return this->otherIp_ != nullptr;};
    void deleteOtherIp() { this->otherIp_ = nullptr;};
    inline string otherIp() const { DARABONBA_PTR_GET_DEFAULT(otherIp_, "") };
    inline GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& setOtherIp(string otherIp) { DARABONBA_PTR_SET_VALUE(otherIp_, otherIp) };


    // otherPort Field Functions 
    bool hasOtherPort() const { return this->otherPort_ != nullptr;};
    void deleteOtherPort() { this->otherPort_ = nullptr;};
    inline string otherPort() const { DARABONBA_PTR_GET_DEFAULT(otherPort_, "") };
    inline GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& setOtherPort(string otherPort) { DARABONBA_PTR_SET_VALUE(otherPort_, otherPort) };


    // packets Field Functions 
    bool hasPackets() const { return this->packets_ != nullptr;};
    void deletePackets() { this->packets_ = nullptr;};
    inline double packets() const { DARABONBA_PTR_GET_DEFAULT(packets_, 0.0) };
    inline GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& setPackets(double packets) { DARABONBA_PTR_SET_VALUE(packets_, packets) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // virtualBorderRouterId Field Functions 
    bool hasVirtualBorderRouterId() const { return this->virtualBorderRouterId_ != nullptr;};
    void deleteVirtualBorderRouterId() { this->virtualBorderRouterId_ = nullptr;};
    inline string virtualBorderRouterId() const { DARABONBA_PTR_GET_DEFAULT(virtualBorderRouterId_, "") };
    inline GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN& setVirtualBorderRouterId(string virtualBorderRouterId) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterId_, virtualBorderRouterId) };


  protected:
    // The account ID.
    std::shared_ptr<string> accountId_ = nullptr;
    // The CEN connection ID.
    std::shared_ptr<string> attachmentId_ = nullptr;
    // The total volume of traffic in the specified time range.
    std::shared_ptr<double> bytes_ = nullptr;
    // The local IP address.
    std::shared_ptr<string> cloudIp_ = nullptr;
    // The local port.
    std::shared_ptr<string> cloudPort_ = nullptr;
    // The local region where the local IP address resides.
    std::shared_ptr<string> cloudRegion_ = nullptr;
    // The remote IP address.
    std::shared_ptr<string> otherIp_ = nullptr;
    // The remote port.
    std::shared_ptr<string> otherPort_ = nullptr;
    // The total number of packets in the specified time range.
    std::shared_ptr<double> packets_ = nullptr;
    // The protocol number.
    std::shared_ptr<string> protocol_ = nullptr;
    // The ID of the VBR that is associated with the Express Connect circuit.
    std::shared_ptr<string> virtualBorderRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
