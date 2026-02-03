// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVBRFLOWTOPNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVBRFLOWTOPNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetVbrFlowTopNResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVbrFlowTopNResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VirtualBorderRouterFlowlogTopN, virtualBorderRouterFlowlogTopN_);
    };
    friend void from_json(const Darabonba::Json& j, GetVbrFlowTopNResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VirtualBorderRouterFlowlogTopN, virtualBorderRouterFlowlogTopN_);
    };
    GetVbrFlowTopNResponseBody() = default ;
    GetVbrFlowTopNResponseBody(const GetVbrFlowTopNResponseBody &) = default ;
    GetVbrFlowTopNResponseBody(GetVbrFlowTopNResponseBody &&) = default ;
    GetVbrFlowTopNResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVbrFlowTopNResponseBody() = default ;
    GetVbrFlowTopNResponseBody& operator=(const GetVbrFlowTopNResponseBody &) = default ;
    GetVbrFlowTopNResponseBody& operator=(GetVbrFlowTopNResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VirtualBorderRouterFlowlogTopN : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VirtualBorderRouterFlowlogTopN& obj) { 
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
      friend void from_json(const Darabonba::Json& j, VirtualBorderRouterFlowlogTopN& obj) { 
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
      VirtualBorderRouterFlowlogTopN() = default ;
      VirtualBorderRouterFlowlogTopN(const VirtualBorderRouterFlowlogTopN &) = default ;
      VirtualBorderRouterFlowlogTopN(VirtualBorderRouterFlowlogTopN &&) = default ;
      VirtualBorderRouterFlowlogTopN(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VirtualBorderRouterFlowlogTopN() = default ;
      VirtualBorderRouterFlowlogTopN& operator=(const VirtualBorderRouterFlowlogTopN &) = default ;
      VirtualBorderRouterFlowlogTopN& operator=(VirtualBorderRouterFlowlogTopN &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->attachmentId_ == nullptr && this->bytes_ == nullptr && this->cloudIp_ == nullptr && this->cloudPort_ == nullptr && this->cloudRegion_ == nullptr
        && this->otherIp_ == nullptr && this->otherPort_ == nullptr && this->packets_ == nullptr && this->protocol_ == nullptr && this->virtualBorderRouterId_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline VirtualBorderRouterFlowlogTopN& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // attachmentId Field Functions 
      bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
      void deleteAttachmentId() { this->attachmentId_ = nullptr;};
      inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
      inline VirtualBorderRouterFlowlogTopN& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


      // bytes Field Functions 
      bool hasBytes() const { return this->bytes_ != nullptr;};
      void deleteBytes() { this->bytes_ = nullptr;};
      inline double getBytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0.0) };
      inline VirtualBorderRouterFlowlogTopN& setBytes(double bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


      // cloudIp Field Functions 
      bool hasCloudIp() const { return this->cloudIp_ != nullptr;};
      void deleteCloudIp() { this->cloudIp_ = nullptr;};
      inline string getCloudIp() const { DARABONBA_PTR_GET_DEFAULT(cloudIp_, "") };
      inline VirtualBorderRouterFlowlogTopN& setCloudIp(string cloudIp) { DARABONBA_PTR_SET_VALUE(cloudIp_, cloudIp) };


      // cloudPort Field Functions 
      bool hasCloudPort() const { return this->cloudPort_ != nullptr;};
      void deleteCloudPort() { this->cloudPort_ = nullptr;};
      inline string getCloudPort() const { DARABONBA_PTR_GET_DEFAULT(cloudPort_, "") };
      inline VirtualBorderRouterFlowlogTopN& setCloudPort(string cloudPort) { DARABONBA_PTR_SET_VALUE(cloudPort_, cloudPort) };


      // cloudRegion Field Functions 
      bool hasCloudRegion() const { return this->cloudRegion_ != nullptr;};
      void deleteCloudRegion() { this->cloudRegion_ = nullptr;};
      inline string getCloudRegion() const { DARABONBA_PTR_GET_DEFAULT(cloudRegion_, "") };
      inline VirtualBorderRouterFlowlogTopN& setCloudRegion(string cloudRegion) { DARABONBA_PTR_SET_VALUE(cloudRegion_, cloudRegion) };


      // otherIp Field Functions 
      bool hasOtherIp() const { return this->otherIp_ != nullptr;};
      void deleteOtherIp() { this->otherIp_ = nullptr;};
      inline string getOtherIp() const { DARABONBA_PTR_GET_DEFAULT(otherIp_, "") };
      inline VirtualBorderRouterFlowlogTopN& setOtherIp(string otherIp) { DARABONBA_PTR_SET_VALUE(otherIp_, otherIp) };


      // otherPort Field Functions 
      bool hasOtherPort() const { return this->otherPort_ != nullptr;};
      void deleteOtherPort() { this->otherPort_ = nullptr;};
      inline string getOtherPort() const { DARABONBA_PTR_GET_DEFAULT(otherPort_, "") };
      inline VirtualBorderRouterFlowlogTopN& setOtherPort(string otherPort) { DARABONBA_PTR_SET_VALUE(otherPort_, otherPort) };


      // packets Field Functions 
      bool hasPackets() const { return this->packets_ != nullptr;};
      void deletePackets() { this->packets_ = nullptr;};
      inline double getPackets() const { DARABONBA_PTR_GET_DEFAULT(packets_, 0.0) };
      inline VirtualBorderRouterFlowlogTopN& setPackets(double packets) { DARABONBA_PTR_SET_VALUE(packets_, packets) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline VirtualBorderRouterFlowlogTopN& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // virtualBorderRouterId Field Functions 
      bool hasVirtualBorderRouterId() const { return this->virtualBorderRouterId_ != nullptr;};
      void deleteVirtualBorderRouterId() { this->virtualBorderRouterId_ = nullptr;};
      inline string getVirtualBorderRouterId() const { DARABONBA_PTR_GET_DEFAULT(virtualBorderRouterId_, "") };
      inline VirtualBorderRouterFlowlogTopN& setVirtualBorderRouterId(string virtualBorderRouterId) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterId_, virtualBorderRouterId) };


    protected:
      // The account ID.
      shared_ptr<string> accountId_ {};
      // The CEN connection ID.
      shared_ptr<string> attachmentId_ {};
      // The total volume of traffic in the specified time range.
      shared_ptr<double> bytes_ {};
      // The local IP address.
      shared_ptr<string> cloudIp_ {};
      // The local port.
      shared_ptr<string> cloudPort_ {};
      // The local region where the local IP address resides.
      shared_ptr<string> cloudRegion_ {};
      // The remote IP address.
      shared_ptr<string> otherIp_ {};
      // The remote port.
      shared_ptr<string> otherPort_ {};
      // The total number of packets in the specified time range.
      shared_ptr<double> packets_ {};
      // The protocol number.
      shared_ptr<string> protocol_ {};
      // The ID of the VBR that is associated with the Express Connect circuit.
      shared_ptr<string> virtualBorderRouterId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->virtualBorderRouterFlowlogTopN_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVbrFlowTopNResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // virtualBorderRouterFlowlogTopN Field Functions 
    bool hasVirtualBorderRouterFlowlogTopN() const { return this->virtualBorderRouterFlowlogTopN_ != nullptr;};
    void deleteVirtualBorderRouterFlowlogTopN() { this->virtualBorderRouterFlowlogTopN_ = nullptr;};
    inline const vector<GetVbrFlowTopNResponseBody::VirtualBorderRouterFlowlogTopN> & getVirtualBorderRouterFlowlogTopN() const { DARABONBA_PTR_GET_CONST(virtualBorderRouterFlowlogTopN_, vector<GetVbrFlowTopNResponseBody::VirtualBorderRouterFlowlogTopN>) };
    inline vector<GetVbrFlowTopNResponseBody::VirtualBorderRouterFlowlogTopN> getVirtualBorderRouterFlowlogTopN() { DARABONBA_PTR_GET(virtualBorderRouterFlowlogTopN_, vector<GetVbrFlowTopNResponseBody::VirtualBorderRouterFlowlogTopN>) };
    inline GetVbrFlowTopNResponseBody& setVirtualBorderRouterFlowlogTopN(const vector<GetVbrFlowTopNResponseBody::VirtualBorderRouterFlowlogTopN> & virtualBorderRouterFlowlogTopN) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterFlowlogTopN_, virtualBorderRouterFlowlogTopN) };
    inline GetVbrFlowTopNResponseBody& setVirtualBorderRouterFlowlogTopN(vector<GetVbrFlowTopNResponseBody::VirtualBorderRouterFlowlogTopN> && virtualBorderRouterFlowlogTopN) { DARABONBA_PTR_SET_RVALUE(virtualBorderRouterFlowlogTopN_, virtualBorderRouterFlowlogTopN) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ranking result of hybrid cloud traffic data.
    shared_ptr<vector<GetVbrFlowTopNResponseBody::VirtualBorderRouterFlowlogTopN>> virtualBorderRouterFlowlogTopN_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
