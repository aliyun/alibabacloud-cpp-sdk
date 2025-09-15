// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERQOSPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ORDERQOSPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XgipPop20220520
{
namespace Models
{
  class OrderQosProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderQosProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(IPv6, IPv6_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(MobileNumber, mobileNumber_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(PrivateIpv4, privateIpv4_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(Provice, provice_);
      DARABONBA_PTR_TO_JSON(PublicIpv4, publicIpv4_);
      DARABONBA_PTR_TO_JSON(QosRequestId, qosRequestId_);
      DARABONBA_PTR_TO_JSON(TargetIpList, targetIpList_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UnitNum, unitNum_);
    };
    friend void from_json(const Darabonba::Json& j, OrderQosProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(IPv6, IPv6_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(MobileNumber, mobileNumber_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(PrivateIpv4, privateIpv4_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(Provice, provice_);
      DARABONBA_PTR_FROM_JSON(PublicIpv4, publicIpv4_);
      DARABONBA_PTR_FROM_JSON(QosRequestId, qosRequestId_);
      DARABONBA_PTR_FROM_JSON(TargetIpList, targetIpList_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UnitNum, unitNum_);
    };
    OrderQosProductRequest() = default ;
    OrderQosProductRequest(const OrderQosProductRequest &) = default ;
    OrderQosProductRequest(OrderQosProductRequest &&) = default ;
    OrderQosProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderQosProductRequest() = default ;
    OrderQosProductRequest& operator=(const OrderQosProductRequest &) = default ;
    OrderQosProductRequest& operator=(OrderQosProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->channelId_ != nullptr && this->IPv6_ != nullptr && this->instanceId_ != nullptr && this->ipType_ != nullptr && this->mobileNumber_ != nullptr
        && this->operator_ != nullptr && this->privateIpv4_ != nullptr && this->productId_ != nullptr && this->provice_ != nullptr && this->publicIpv4_ != nullptr
        && this->qosRequestId_ != nullptr && this->targetIpList_ != nullptr && this->token_ != nullptr && this->unitNum_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline OrderQosProductRequest& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline OrderQosProductRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // IPv6 Field Functions 
    bool hasIPv6() const { return this->IPv6_ != nullptr;};
    void deleteIPv6() { this->IPv6_ = nullptr;};
    inline string IPv6() const { DARABONBA_PTR_GET_DEFAULT(IPv6_, "") };
    inline OrderQosProductRequest& setIPv6(string IPv6) { DARABONBA_PTR_SET_VALUE(IPv6_, IPv6) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OrderQosProductRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline string ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
    inline OrderQosProductRequest& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // mobileNumber Field Functions 
    bool hasMobileNumber() const { return this->mobileNumber_ != nullptr;};
    void deleteMobileNumber() { this->mobileNumber_ = nullptr;};
    inline string mobileNumber() const { DARABONBA_PTR_GET_DEFAULT(mobileNumber_, "") };
    inline OrderQosProductRequest& setMobileNumber(string mobileNumber) { DARABONBA_PTR_SET_VALUE(mobileNumber_, mobileNumber) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline OrderQosProductRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // privateIpv4 Field Functions 
    bool hasPrivateIpv4() const { return this->privateIpv4_ != nullptr;};
    void deletePrivateIpv4() { this->privateIpv4_ = nullptr;};
    inline string privateIpv4() const { DARABONBA_PTR_GET_DEFAULT(privateIpv4_, "") };
    inline OrderQosProductRequest& setPrivateIpv4(string privateIpv4) { DARABONBA_PTR_SET_VALUE(privateIpv4_, privateIpv4) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline OrderQosProductRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // provice Field Functions 
    bool hasProvice() const { return this->provice_ != nullptr;};
    void deleteProvice() { this->provice_ = nullptr;};
    inline string provice() const { DARABONBA_PTR_GET_DEFAULT(provice_, "") };
    inline OrderQosProductRequest& setProvice(string provice) { DARABONBA_PTR_SET_VALUE(provice_, provice) };


    // publicIpv4 Field Functions 
    bool hasPublicIpv4() const { return this->publicIpv4_ != nullptr;};
    void deletePublicIpv4() { this->publicIpv4_ = nullptr;};
    inline string publicIpv4() const { DARABONBA_PTR_GET_DEFAULT(publicIpv4_, "") };
    inline OrderQosProductRequest& setPublicIpv4(string publicIpv4) { DARABONBA_PTR_SET_VALUE(publicIpv4_, publicIpv4) };


    // qosRequestId Field Functions 
    bool hasQosRequestId() const { return this->qosRequestId_ != nullptr;};
    void deleteQosRequestId() { this->qosRequestId_ = nullptr;};
    inline string qosRequestId() const { DARABONBA_PTR_GET_DEFAULT(qosRequestId_, "") };
    inline OrderQosProductRequest& setQosRequestId(string qosRequestId) { DARABONBA_PTR_SET_VALUE(qosRequestId_, qosRequestId) };


    // targetIpList Field Functions 
    bool hasTargetIpList() const { return this->targetIpList_ != nullptr;};
    void deleteTargetIpList() { this->targetIpList_ = nullptr;};
    inline const vector<string> & targetIpList() const { DARABONBA_PTR_GET_CONST(targetIpList_, vector<string>) };
    inline vector<string> targetIpList() { DARABONBA_PTR_GET(targetIpList_, vector<string>) };
    inline OrderQosProductRequest& setTargetIpList(const vector<string> & targetIpList) { DARABONBA_PTR_SET_VALUE(targetIpList_, targetIpList) };
    inline OrderQosProductRequest& setTargetIpList(vector<string> && targetIpList) { DARABONBA_PTR_SET_RVALUE(targetIpList_, targetIpList) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline OrderQosProductRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // unitNum Field Functions 
    bool hasUnitNum() const { return this->unitNum_ != nullptr;};
    void deleteUnitNum() { this->unitNum_ = nullptr;};
    inline int32_t unitNum() const { DARABONBA_PTR_GET_DEFAULT(unitNum_, 0) };
    inline OrderQosProductRequest& setUnitNum(int32_t unitNum) { DARABONBA_PTR_SET_VALUE(unitNum_, unitNum) };


  protected:
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> IPv6_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> ipType_ = nullptr;
    std::shared_ptr<string> mobileNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> privateIpv4_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> provice_ = nullptr;
    std::shared_ptr<string> publicIpv4_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> qosRequestId_ = nullptr;
    std::shared_ptr<vector<string>> targetIpList_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<int32_t> unitNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XgipPop20220520
#endif
