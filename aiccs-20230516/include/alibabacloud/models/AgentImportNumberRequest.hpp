// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTIMPORTNUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AGENTIMPORTNUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class AgentImportNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentImportNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentTag, agentTag_);
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(Customers, customers_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, AgentImportNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentTag, agentTag_);
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(Customers, customers_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    AgentImportNumberRequest() = default ;
    AgentImportNumberRequest(const AgentImportNumberRequest &) = default ;
    AgentImportNumberRequest(AgentImportNumberRequest &&) = default ;
    AgentImportNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentImportNumberRequest() = default ;
    AgentImportNumberRequest& operator=(const AgentImportNumberRequest &) = default ;
    AgentImportNumberRequest& operator=(AgentImportNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Customers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Customers& obj) { 
        DARABONBA_PTR_TO_JSON(ClientUrl, clientUrl_);
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_PTR_TO_JSON(NumberMD5, numberMD5_);
        DARABONBA_ANY_TO_JSON(Properties, properties_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Customers& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientUrl, clientUrl_);
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_PTR_FROM_JSON(NumberMD5, numberMD5_);
        DARABONBA_ANY_FROM_JSON(Properties, properties_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
      };
      Customers() = default ;
      Customers(const Customers &) = default ;
      Customers(Customers &&) = default ;
      Customers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Customers() = default ;
      Customers& operator=(const Customers &) = default ;
      Customers& operator=(Customers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientUrl_ == nullptr
        && this->number_ == nullptr && this->numberMD5_ == nullptr && this->properties_ == nullptr && this->tag_ == nullptr; };
      // clientUrl Field Functions 
      bool hasClientUrl() const { return this->clientUrl_ != nullptr;};
      void deleteClientUrl() { this->clientUrl_ = nullptr;};
      inline string getClientUrl() const { DARABONBA_PTR_GET_DEFAULT(clientUrl_, "") };
      inline Customers& setClientUrl(string clientUrl) { DARABONBA_PTR_SET_VALUE(clientUrl_, clientUrl) };


      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
      inline Customers& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // numberMD5 Field Functions 
      bool hasNumberMD5() const { return this->numberMD5_ != nullptr;};
      void deleteNumberMD5() { this->numberMD5_ = nullptr;};
      inline string getNumberMD5() const { DARABONBA_PTR_GET_DEFAULT(numberMD5_, "") };
      inline Customers& setNumberMD5(string numberMD5) { DARABONBA_PTR_SET_VALUE(numberMD5_, numberMD5) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline       const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
      Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
      inline Customers& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
      inline Customers& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Customers& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // 客户详情URL,用于展示客户用户在客户业务系统的详细信息，做多80个字符
      shared_ptr<string> clientUrl_ {};
      // 号码，如手机号等
      shared_ptr<string> number_ {};
      // 用户电话号码MD5，和number两者必传一个
      shared_ptr<string> numberMD5_ {};
      // 用户具体信息。如AI话术模板没变量要求或为人工外呼，可为空(总长度500个字符，多余的会被剔除)
      Darabonba::Json properties_ {};
      // 用户自定义标签,最多50个字符
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentTag_ == nullptr && this->callType_ == nullptr && this->customers_ == nullptr && this->gatewayId_ == nullptr && this->outId_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->templateId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline AgentImportNumberRequest& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentTag Field Functions 
    bool hasAgentTag() const { return this->agentTag_ != nullptr;};
    void deleteAgentTag() { this->agentTag_ = nullptr;};
    inline string getAgentTag() const { DARABONBA_PTR_GET_DEFAULT(agentTag_, "") };
    inline AgentImportNumberRequest& setAgentTag(string agentTag) { DARABONBA_PTR_SET_VALUE(agentTag_, agentTag) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline int64_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0L) };
    inline AgentImportNumberRequest& setCallType(int64_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // customers Field Functions 
    bool hasCustomers() const { return this->customers_ != nullptr;};
    void deleteCustomers() { this->customers_ = nullptr;};
    inline const vector<AgentImportNumberRequest::Customers> & getCustomers() const { DARABONBA_PTR_GET_CONST(customers_, vector<AgentImportNumberRequest::Customers>) };
    inline vector<AgentImportNumberRequest::Customers> getCustomers() { DARABONBA_PTR_GET(customers_, vector<AgentImportNumberRequest::Customers>) };
    inline AgentImportNumberRequest& setCustomers(const vector<AgentImportNumberRequest::Customers> & customers) { DARABONBA_PTR_SET_VALUE(customers_, customers) };
    inline AgentImportNumberRequest& setCustomers(vector<AgentImportNumberRequest::Customers> && customers) { DARABONBA_PTR_SET_RVALUE(customers_, customers) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline AgentImportNumberRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline AgentImportNumberRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AgentImportNumberRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AgentImportNumberRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AgentImportNumberRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline AgentImportNumberRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // 坐席ID，可以为空，但agentId与agentTag必须其中1个有值。用于查询对应的坐席信息
    shared_ptr<int64_t> agentId_ {};
    // 坐席唯一标识（创建坐席时的用户唯一标识），可以为空，但agentId与agentTag必须其中1个有值。用于查询对应的坐席信息
    shared_ptr<string> agentTag_ {};
    // 外呼类型 可选项：1001：坐席-人工外呼，1002：坐席-AI外呼-不转人工，1003：坐席-AI外呼-接通转人工，1004：坐席-AI外呼-智能转人工"
    // 
    // This parameter is required.
    shared_ptr<int64_t> callType_ {};
    // 具体用户信息，如手机号、姓名等，需根据具体任务参数要求传输。注：当callType为1001时，只会导入第1条数据
    // 
    // This parameter is required.
    shared_ptr<vector<AgentImportNumberRequest::Customers>> customers_ {};
    // 坐席-人工外呼选择的外呼线路，只针对callType=1001生效，其他callType不生效。如callType=1001，且gatewayId不传值，默认按系统的线路配置外呼
    shared_ptr<int64_t> gatewayId_ {};
    // 请求id，具有唯一性，用来做请求幂等处理，一个请求id有效期10分钟。不传则不做幂等处理
    shared_ptr<string> outId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // AI话术ID 客户已制作并已发布/平台授权的AI话术ID，如callType=1001可不填；如callType=1002,1003或1004 ，必填。
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
