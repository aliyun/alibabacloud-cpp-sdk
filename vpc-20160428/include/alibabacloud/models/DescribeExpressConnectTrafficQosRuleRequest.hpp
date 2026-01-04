// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRULEREQUEST_HPP_
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
  class DescribeExpressConnectTrafficQosRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectTrafficQosRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QosId, qosId_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(RuleIdList, ruleIdList_);
      DARABONBA_PTR_TO_JSON(RuleNameList, ruleNameList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectTrafficQosRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(RuleIdList, ruleIdList_);
      DARABONBA_PTR_FROM_JSON(RuleNameList, ruleNameList_);
    };
    DescribeExpressConnectTrafficQosRuleRequest() = default ;
    DescribeExpressConnectTrafficQosRuleRequest(const DescribeExpressConnectTrafficQosRuleRequest &) = default ;
    DescribeExpressConnectTrafficQosRuleRequest(DescribeExpressConnectTrafficQosRuleRequest &&) = default ;
    DescribeExpressConnectTrafficQosRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectTrafficQosRuleRequest() = default ;
    DescribeExpressConnectTrafficQosRuleRequest& operator=(const DescribeExpressConnectTrafficQosRuleRequest &) = default ;
    DescribeExpressConnectTrafficQosRuleRequest& operator=(DescribeExpressConnectTrafficQosRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->qosId_ == nullptr && this->queueId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->ruleIdList_ == nullptr && this->ruleNameList_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeExpressConnectTrafficQosRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeExpressConnectTrafficQosRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeExpressConnectTrafficQosRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline DescribeExpressConnectTrafficQosRuleRequest& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline string getQueueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
    inline DescribeExpressConnectTrafficQosRuleRequest& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeExpressConnectTrafficQosRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeExpressConnectTrafficQosRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // ruleIdList Field Functions 
    bool hasRuleIdList() const { return this->ruleIdList_ != nullptr;};
    void deleteRuleIdList() { this->ruleIdList_ = nullptr;};
    inline const vector<string> & getRuleIdList() const { DARABONBA_PTR_GET_CONST(ruleIdList_, vector<string>) };
    inline vector<string> getRuleIdList() { DARABONBA_PTR_GET(ruleIdList_, vector<string>) };
    inline DescribeExpressConnectTrafficQosRuleRequest& setRuleIdList(const vector<string> & ruleIdList) { DARABONBA_PTR_SET_VALUE(ruleIdList_, ruleIdList) };
    inline DescribeExpressConnectTrafficQosRuleRequest& setRuleIdList(vector<string> && ruleIdList) { DARABONBA_PTR_SET_RVALUE(ruleIdList_, ruleIdList) };


    // ruleNameList Field Functions 
    bool hasRuleNameList() const { return this->ruleNameList_ != nullptr;};
    void deleteRuleNameList() { this->ruleNameList_ = nullptr;};
    inline const vector<string> & getRuleNameList() const { DARABONBA_PTR_GET_CONST(ruleNameList_, vector<string>) };
    inline vector<string> getRuleNameList() { DARABONBA_PTR_GET(ruleNameList_, vector<string>) };
    inline DescribeExpressConnectTrafficQosRuleRequest& setRuleNameList(const vector<string> & ruleNameList) { DARABONBA_PTR_SET_VALUE(ruleNameList_, ruleNameList) };
    inline DescribeExpressConnectTrafficQosRuleRequest& setRuleNameList(vector<string> && ruleNameList) { DARABONBA_PTR_SET_RVALUE(ruleNameList_, ruleNameList) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, the system uses **RequestId** as **ClientToken**. **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the QoS policy.
    shared_ptr<string> qosId_ {};
    // The ID of the QoS queue.
    shared_ptr<string> queueId_ {};
    // The region ID of the QoS policy.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The list of QoS rule IDs.
    shared_ptr<vector<string>> ruleIdList_ {};
    // The list of QoS rule names.
    shared_ptr<vector<string>> ruleNameList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
