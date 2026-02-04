// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENDCDNSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENDCDNSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class OpenDcdnServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenDcdnServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillType, billType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(WebsocketBillType, websocketBillType_);
    };
    friend void from_json(const Darabonba::Json& j, OpenDcdnServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillType, billType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(WebsocketBillType, websocketBillType_);
    };
    OpenDcdnServiceRequest() = default ;
    OpenDcdnServiceRequest(const OpenDcdnServiceRequest &) = default ;
    OpenDcdnServiceRequest(OpenDcdnServiceRequest &&) = default ;
    OpenDcdnServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenDcdnServiceRequest() = default ;
    OpenDcdnServiceRequest& operator=(const OpenDcdnServiceRequest &) = default ;
    OpenDcdnServiceRequest& operator=(OpenDcdnServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billType_ == nullptr
        && this->ownerId_ == nullptr && this->securityToken_ == nullptr && this->websocketBillType_ == nullptr; };
    // billType Field Functions 
    bool hasBillType() const { return this->billType_ != nullptr;};
    void deleteBillType() { this->billType_ = nullptr;};
    inline string getBillType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
    inline OpenDcdnServiceRequest& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline OpenDcdnServiceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline OpenDcdnServiceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // websocketBillType Field Functions 
    bool hasWebsocketBillType() const { return this->websocketBillType_ != nullptr;};
    void deleteWebsocketBillType() { this->websocketBillType_ = nullptr;};
    inline string getWebsocketBillType() const { DARABONBA_PTR_GET_DEFAULT(websocketBillType_, "") };
    inline OpenDcdnServiceRequest& setWebsocketBillType(string websocketBillType) { DARABONBA_PTR_SET_VALUE(websocketBillType_, websocketBillType) };


  protected:
    // The metering method of DCDN. Valid values:
    // 
    // *   **PayByTraffic**: pay-by-traffic
    // *   **PayByBandwidth**: pay-by-bandwidth
    // 
    // This parameter is required.
    shared_ptr<string> billType_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> securityToken_ {};
    // The metering method of WebSocket. Valid values:
    // 
    // *   **websockettraffic**: pay-by-data-transfer
    // *   **websocketbps**: pay-by-bandwidth
    // 
    // This parameter is required.
    shared_ptr<string> websocketBillType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
