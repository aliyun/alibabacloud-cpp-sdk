// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEADDITIONALCERTIFICATESWITHLISTENERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEADDITIONALCERTIFICATESWITHLISTENERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class AssociateAdditionalCertificatesWithListenerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateAdditionalCertificatesWithListenerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalCertificateIds, additionalCertificateIds_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateAdditionalCertificatesWithListenerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalCertificateIds, additionalCertificateIds_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AssociateAdditionalCertificatesWithListenerRequest() = default ;
    AssociateAdditionalCertificatesWithListenerRequest(const AssociateAdditionalCertificatesWithListenerRequest &) = default ;
    AssociateAdditionalCertificatesWithListenerRequest(AssociateAdditionalCertificatesWithListenerRequest &&) = default ;
    AssociateAdditionalCertificatesWithListenerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateAdditionalCertificatesWithListenerRequest() = default ;
    AssociateAdditionalCertificatesWithListenerRequest& operator=(const AssociateAdditionalCertificatesWithListenerRequest &) = default ;
    AssociateAdditionalCertificatesWithListenerRequest& operator=(AssociateAdditionalCertificatesWithListenerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalCertificateIds_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->listenerId_ == nullptr && this->regionId_ == nullptr; };
    // additionalCertificateIds Field Functions 
    bool hasAdditionalCertificateIds() const { return this->additionalCertificateIds_ != nullptr;};
    void deleteAdditionalCertificateIds() { this->additionalCertificateIds_ = nullptr;};
    inline const vector<string> & getAdditionalCertificateIds() const { DARABONBA_PTR_GET_CONST(additionalCertificateIds_, vector<string>) };
    inline vector<string> getAdditionalCertificateIds() { DARABONBA_PTR_GET(additionalCertificateIds_, vector<string>) };
    inline AssociateAdditionalCertificatesWithListenerRequest& setAdditionalCertificateIds(const vector<string> & additionalCertificateIds) { DARABONBA_PTR_SET_VALUE(additionalCertificateIds_, additionalCertificateIds) };
    inline AssociateAdditionalCertificatesWithListenerRequest& setAdditionalCertificateIds(vector<string> && additionalCertificateIds) { DARABONBA_PTR_SET_RVALUE(additionalCertificateIds_, additionalCertificateIds) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AssociateAdditionalCertificatesWithListenerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AssociateAdditionalCertificatesWithListenerRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline AssociateAdditionalCertificatesWithListenerRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssociateAdditionalCertificatesWithListenerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The list of additional certificates. You can associate up to 15 additional certificates with a listener in a single call.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> additionalCertificateIds_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate a value for this parameter on your client to ensure that the value is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only precheck this request. Valid values:
    // - **true**: sends a check request and does not add the additional certificates to the TCPSSL listener. The system checks whether the required parameters are specified, the request format is valid, and the service limits are met. If the request fails the check, the system returns an error. If the request passes the check, the system returns the error code `DryRunOperation`.
    // - **false** (default): sends a standard request. If the request passes the check, the system returns an HTTP 2xx status code and performs the operation.
    shared_ptr<bool> dryRun_ {};
    // The ID of the listener. This operation only supports TCPSSL listener IDs.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The ID of the region where the Network Load Balancer (NLB) instance is deployed. 
    // 
    // You can invoke the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query region IDs.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
