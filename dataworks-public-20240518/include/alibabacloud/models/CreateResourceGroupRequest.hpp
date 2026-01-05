// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_TO_JSON(AliyunResourceTags, aliyunResourceTags_);
      DARABONBA_PTR_TO_JSON(AutoRenewEnabled, autoRenewEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_TO_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(AliyunResourceTags, aliyunResourceTags_);
      DARABONBA_PTR_FROM_JSON(AutoRenewEnabled, autoRenewEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_FROM_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    CreateResourceGroupRequest() = default ;
    CreateResourceGroupRequest(const CreateResourceGroupRequest &) = default ;
    CreateResourceGroupRequest(CreateResourceGroupRequest &&) = default ;
    CreateResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceGroupRequest() = default ;
    CreateResourceGroupRequest& operator=(const CreateResourceGroupRequest &) = default ;
    CreateResourceGroupRequest& operator=(CreateResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AliyunResourceTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AliyunResourceTags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AliyunResourceTags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      AliyunResourceTags() = default ;
      AliyunResourceTags(const AliyunResourceTags &) = default ;
      AliyunResourceTags(AliyunResourceTags &&) = default ;
      AliyunResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AliyunResourceTags() = default ;
      AliyunResourceTags& operator=(const AliyunResourceTags &) = default ;
      AliyunResourceTags& operator=(AliyunResourceTags &&) = default ;
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
      inline AliyunResourceTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline AliyunResourceTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->aliyunResourceGroupId_ == nullptr
        && this->aliyunResourceTags_ == nullptr && this->autoRenewEnabled_ == nullptr && this->clientToken_ == nullptr && this->name_ == nullptr && this->paymentDuration_ == nullptr
        && this->paymentDurationUnit_ == nullptr && this->paymentType_ == nullptr && this->remark_ == nullptr && this->spec_ == nullptr && this->vpcId_ == nullptr
        && this->vswitchId_ == nullptr; };
    // aliyunResourceGroupId Field Functions 
    bool hasAliyunResourceGroupId() const { return this->aliyunResourceGroupId_ != nullptr;};
    void deleteAliyunResourceGroupId() { this->aliyunResourceGroupId_ = nullptr;};
    inline string getAliyunResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceGroupId_, "") };
    inline CreateResourceGroupRequest& setAliyunResourceGroupId(string aliyunResourceGroupId) { DARABONBA_PTR_SET_VALUE(aliyunResourceGroupId_, aliyunResourceGroupId) };


    // aliyunResourceTags Field Functions 
    bool hasAliyunResourceTags() const { return this->aliyunResourceTags_ != nullptr;};
    void deleteAliyunResourceTags() { this->aliyunResourceTags_ = nullptr;};
    inline const vector<CreateResourceGroupRequest::AliyunResourceTags> & getAliyunResourceTags() const { DARABONBA_PTR_GET_CONST(aliyunResourceTags_, vector<CreateResourceGroupRequest::AliyunResourceTags>) };
    inline vector<CreateResourceGroupRequest::AliyunResourceTags> getAliyunResourceTags() { DARABONBA_PTR_GET(aliyunResourceTags_, vector<CreateResourceGroupRequest::AliyunResourceTags>) };
    inline CreateResourceGroupRequest& setAliyunResourceTags(const vector<CreateResourceGroupRequest::AliyunResourceTags> & aliyunResourceTags) { DARABONBA_PTR_SET_VALUE(aliyunResourceTags_, aliyunResourceTags) };
    inline CreateResourceGroupRequest& setAliyunResourceTags(vector<CreateResourceGroupRequest::AliyunResourceTags> && aliyunResourceTags) { DARABONBA_PTR_SET_RVALUE(aliyunResourceTags_, aliyunResourceTags) };


    // autoRenewEnabled Field Functions 
    bool hasAutoRenewEnabled() const { return this->autoRenewEnabled_ != nullptr;};
    void deleteAutoRenewEnabled() { this->autoRenewEnabled_ = nullptr;};
    inline bool getAutoRenewEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoRenewEnabled_, false) };
    inline CreateResourceGroupRequest& setAutoRenewEnabled(bool autoRenewEnabled) { DARABONBA_PTR_SET_VALUE(autoRenewEnabled_, autoRenewEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateResourceGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateResourceGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline int32_t getPaymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, 0) };
    inline CreateResourceGroupRequest& setPaymentDuration(int32_t paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string getPaymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline CreateResourceGroupRequest& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateResourceGroupRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateResourceGroupRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline int32_t getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, 0) };
    inline CreateResourceGroupRequest& setSpec(int32_t spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateResourceGroupRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline CreateResourceGroupRequest& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> aliyunResourceGroupId_ {};
    // The tags.
    shared_ptr<vector<CreateResourceGroupRequest::AliyunResourceTags>> aliyunResourceTags_ {};
    // Specifies whether to enable auto-renewal.
    shared_ptr<bool> autoRenewEnabled_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The name of the serverless resource group. The name can be a maximum of 128 characters in length and can contain letters, digits, and underscores (_). The name must start with a letter.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The subscription duration.
    shared_ptr<int32_t> paymentDuration_ {};
    // The unit of the subscription duration. Valid values: Month and Year.
    shared_ptr<string> paymentDurationUnit_ {};
    // The billing method of the serverless resource group. Valid values: PrePaid and PostPaid. The value PrePaid indicates the subscription billing method, and the value PostPaid indicates the pay-as-you-go billing method.
    // 
    // This parameter is required.
    shared_ptr<string> paymentType_ {};
    // The description of the serverless resource group. The description can be a maximum of 128 characters in length and can contain letters, digits, and underscores (_).
    shared_ptr<string> remark_ {};
    // The specifications of the serverless resource group. Unit: CU. This parameter is required only if you set the PaymentType parameter to PrePaid.
    shared_ptr<int32_t> spec_ {};
    // The ID of the virtual private cloud (VPC) with which the serverless resource group is associated by default.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The ID of the vSwitch with which the serverless resource group is associated by default.
    // 
    // This parameter is required.
    shared_ptr<string> vswitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
