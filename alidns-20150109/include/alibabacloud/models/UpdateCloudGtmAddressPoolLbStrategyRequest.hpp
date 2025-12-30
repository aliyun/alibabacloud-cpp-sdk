// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMADDRESSPOOLLBSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMADDRESSPOOLLBSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateCloudGtmAddressPoolLbStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmAddressPoolLbStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AddressLbStrategy, addressLbStrategy_);
      DARABONBA_PTR_TO_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmAddressPoolLbStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AddressLbStrategy, addressLbStrategy_);
      DARABONBA_PTR_FROM_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
    };
    UpdateCloudGtmAddressPoolLbStrategyRequest() = default ;
    UpdateCloudGtmAddressPoolLbStrategyRequest(const UpdateCloudGtmAddressPoolLbStrategyRequest &) = default ;
    UpdateCloudGtmAddressPoolLbStrategyRequest(UpdateCloudGtmAddressPoolLbStrategyRequest &&) = default ;
    UpdateCloudGtmAddressPoolLbStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmAddressPoolLbStrategyRequest() = default ;
    UpdateCloudGtmAddressPoolLbStrategyRequest& operator=(const UpdateCloudGtmAddressPoolLbStrategyRequest &) = default ;
    UpdateCloudGtmAddressPoolLbStrategyRequest& operator=(UpdateCloudGtmAddressPoolLbStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->addressLbStrategy_ == nullptr && this->addressPoolId_ == nullptr && this->clientToken_ == nullptr && this->sequenceLbStrategyMode_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCloudGtmAddressPoolLbStrategyRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // addressLbStrategy Field Functions 
    bool hasAddressLbStrategy() const { return this->addressLbStrategy_ != nullptr;};
    void deleteAddressLbStrategy() { this->addressLbStrategy_ = nullptr;};
    inline string getAddressLbStrategy() const { DARABONBA_PTR_GET_DEFAULT(addressLbStrategy_, "") };
    inline UpdateCloudGtmAddressPoolLbStrategyRequest& setAddressLbStrategy(string addressLbStrategy) { DARABONBA_PTR_SET_VALUE(addressLbStrategy_, addressLbStrategy) };


    // addressPoolId Field Functions 
    bool hasAddressPoolId() const { return this->addressPoolId_ != nullptr;};
    void deleteAddressPoolId() { this->addressPoolId_ = nullptr;};
    inline string getAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(addressPoolId_, "") };
    inline UpdateCloudGtmAddressPoolLbStrategyRequest& setAddressPoolId(string addressPoolId) { DARABONBA_PTR_SET_VALUE(addressPoolId_, addressPoolId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudGtmAddressPoolLbStrategyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // sequenceLbStrategyMode Field Functions 
    bool hasSequenceLbStrategyMode() const { return this->sequenceLbStrategyMode_ != nullptr;};
    void deleteSequenceLbStrategyMode() { this->sequenceLbStrategyMode_ = nullptr;};
    inline string getSequenceLbStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(sequenceLbStrategyMode_, "") };
    inline UpdateCloudGtmAddressPoolLbStrategyRequest& setSequenceLbStrategyMode(string sequenceLbStrategyMode) { DARABONBA_PTR_SET_VALUE(sequenceLbStrategyMode_, sequenceLbStrategyMode) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US (default): English
    shared_ptr<string> acceptLanguage_ {};
    // Load balancing policy among addresses in the address pool:
    // - round_robin: Round-robin, for any source of DNS resolution requests, all addresses are returned. The order of all addresses is rotated each time.
    // - sequence: Sequential, for any source of DNS resolution requests, the address with the smaller sequence number (the sequence number indicates the priority of address returns, with smaller numbers having higher priority) is returned. If the address with the smaller sequence number is unavailable, the next address with a smaller sequence number is returned.
    // - weight: Weighted, supports setting different weight values for each address, realizing the return of addresses according to the weight ratio for resolution queries.
    // - source_nearest: Source-nearest, i.e., intelligent resolution function, where GTM can return different addresses based on the source of different DNS resolution requests, achieving the effect of users accessing nearby.
    shared_ptr<string> addressLbStrategy_ {};
    // The ID of the address pool. This ID uniquely identifies the address pool.
    shared_ptr<string> addressPoolId_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The mode used if the address with the smallest sequence number is recovered. This parameter is required only when AddressLbStrategy is set to sequence. Valid values:
    // 
    // *   preemptive: The address with the smallest sequence number is preferentially used if this address is recovered.
    // *   non_preemptive: The current address is still used even if the address with the smallest sequence number is recovered.
    shared_ptr<string> sequenceLbStrategyMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
