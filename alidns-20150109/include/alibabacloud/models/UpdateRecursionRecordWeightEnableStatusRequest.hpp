// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECURSIONRECORDWEIGHTENABLESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECURSIONRECORDWEIGHTENABLESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRecursionRecordWeightEnableStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecursionRecordWeightEnableStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
      DARABONBA_PTR_TO_JSON(Rr, rr_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecursionRecordWeightEnableStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
      DARABONBA_PTR_FROM_JSON(Rr, rr_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    UpdateRecursionRecordWeightEnableStatusRequest() = default ;
    UpdateRecursionRecordWeightEnableStatusRequest(const UpdateRecursionRecordWeightEnableStatusRequest &) = default ;
    UpdateRecursionRecordWeightEnableStatusRequest(UpdateRecursionRecordWeightEnableStatusRequest &&) = default ;
    UpdateRecursionRecordWeightEnableStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecursionRecordWeightEnableStatusRequest() = default ;
    UpdateRecursionRecordWeightEnableStatusRequest& operator=(const UpdateRecursionRecordWeightEnableStatusRequest &) = default ;
    UpdateRecursionRecordWeightEnableStatusRequest& operator=(UpdateRecursionRecordWeightEnableStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->enableStatus_ == nullptr && this->requestSource_ == nullptr && this->rr_ == nullptr && this->type_ == nullptr && this->zoneId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRecursionRecordWeightEnableStatusRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline UpdateRecursionRecordWeightEnableStatusRequest& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // requestSource Field Functions 
    bool hasRequestSource() const { return this->requestSource_ != nullptr;};
    void deleteRequestSource() { this->requestSource_ = nullptr;};
    inline string getRequestSource() const { DARABONBA_PTR_GET_DEFAULT(requestSource_, "") };
    inline UpdateRecursionRecordWeightEnableStatusRequest& setRequestSource(string requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };


    // rr Field Functions 
    bool hasRr() const { return this->rr_ != nullptr;};
    void deleteRr() { this->rr_ = nullptr;};
    inline string getRr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
    inline UpdateRecursionRecordWeightEnableStatusRequest& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateRecursionRecordWeightEnableStatusRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpdateRecursionRecordWeightEnableStatusRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // A client token that is used to ensure the idempotence of a request. The client generates the value of this parameter. The value must be unique for each request and can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable the weight algorithm. Valid values: \\*\\*enable\\*\\* and \\*\\*disable\\*\\*.
    shared_ptr<string> enableStatus_ {};
    // The DNS resolution line. The default value is **default**. For more information, see [DNS resolution lines](https://help.aliyun.com/document_detail/29807.html).
    // 
    // <props="china">
    // 
    // [Resolution Line Enumeration](https://help.aliyun.com/document_detail/29807.html)
    // 
    // 
    // 
    // <props="intl">
    // 
    // [Enumeration of DNS record lines](https://www.alibabacloud.com/help/zh/doc-detail/29807.htm)
    shared_ptr<string> requestSource_ {};
    // The host record.
    shared_ptr<string> rr_ {};
    // The type of the DNS record. The following types are supported: \\*\\*A\\*\\*, which maps a domain name to an IPv4 address. \\*\\*AAAA\\*\\*, which maps a domain name to an IPv6 address. \\*\\*CNAME\\*\\*, an alias record that points a domain name to another domain name. \\*\\*MX\\*\\*, a mail exchanger record that points a domain name to a mail server address. \\*\\*TXT\\*\\*, an arbitrary, human-readable text DNS record. \\*\\*SRV\\*\\*, a service record that identifies a server that provides a specific service, commonly used for directory management in Microsoft systems.
    shared_ptr<string> type_ {};
    // The zone ID for the domain name.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
