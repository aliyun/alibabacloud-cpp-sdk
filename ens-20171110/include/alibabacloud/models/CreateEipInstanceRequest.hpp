// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEIPINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEIPINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateEipInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEipInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEipInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateEipInstanceRequest() = default ;
    CreateEipInstanceRequest(const CreateEipInstanceRequest &) = default ;
    CreateEipInstanceRequest(CreateEipInstanceRequest &&) = default ;
    CreateEipInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEipInstanceRequest() = default ;
    CreateEipInstanceRequest& operator=(const CreateEipInstanceRequest &) = default ;
    CreateEipInstanceRequest& operator=(CreateEipInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the instance. Valid values of N: **1** to **20**.
      // 
      // - Cannot start with `aliyun`, `acs:`, `http://`, or `https://`.
      // - Can be up to 64 characters in length.
      // - Cannot be an empty string.
      shared_ptr<string> key_ {};
      // The tag value. The tag value can be up to 128 characters in length and cannot start with `aliyun` or `acs:`, or contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->ensRegionId_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceId_ == nullptr
        && this->internetChargeType_ == nullptr && this->ipAddress_ == nullptr && this->isp_ == nullptr && this->name_ == nullptr && this->tag_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline CreateEipInstanceRequest& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEipInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEipInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateEipInstanceRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateEipInstanceRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateEipInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateEipInstanceRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline CreateEipInstanceRequest& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline CreateEipInstanceRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEipInstanceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateEipInstanceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateEipInstanceRequest::Tag>) };
    inline vector<CreateEipInstanceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateEipInstanceRequest::Tag>) };
    inline CreateEipInstanceRequest& setTag(const vector<CreateEipInstanceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateEipInstanceRequest& setTag(vector<CreateEipInstanceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The peak bandwidth of the EIP. Default value: 5. Valid values: 5 to 10000. Unit: Mbit/s.
    shared_ptr<int64_t> bandwidth_ {};
    // Ensures the idempotence of the request to prevent duplicate operations caused by multiple retries.
    // 
    // - Generate a parameter value from your client and make sure that the value is unique among different requests. ClientToken supports only ASCII characters and cannot exceed 64 characters in length.
    // 
    // - If you use a ClientToken that has been used before and the other request parameters remain unchanged, the client receives the same result as the first submission, without affecting the server-side state.
    // 
    // - You can retry when the API times out or returns the PROCESSING error code. Idempotence is effective in this case. If the response returns an HTTP 200 status code, the retry returns the same result as the previous call without affecting the server-side state. If the response returns an HTTP 4xx status code and the error code is not PROCESSING, idempotence is not effective.
    // 
    // - The ClientToken is valid for 10 minutes.
    shared_ptr<string> clientToken_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The ID of the Edge Node Service (ENS) edge zone.
    // 
    // This parameter is required.
    shared_ptr<string> ensRegionId_ {};
    // Billable methods of the EIP. Currently, only **PostPaid** (pay-as-you-go billing method) is supported.
    // 
    // This parameter is required.
    shared_ptr<string> instanceChargeType_ {};
    // The instance ID of the EIP.
    shared_ptr<string> instanceId_ {};
    // Billable methods of the EIP. Currently, only **95BandwidthByMonth** (monthly 95th percentile bandwidth billing) is supported.
    // 
    // This parameter is required.
    shared_ptr<string> internetChargeType_ {};
    // The IP address.
    shared_ptr<string> ipAddress_ {};
    // The Internet service provider (ISP). Valid values:
    // 
    // - **cmcc**: China Mobile.
    // - **unicom**: China Unicom.
    // - **telecom**: China Telecom.
    shared_ptr<string> isp_ {};
    // The name of the EIP instance.
    shared_ptr<string> name_ {};
    // The resource tags.
    shared_ptr<vector<CreateEipInstanceRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
