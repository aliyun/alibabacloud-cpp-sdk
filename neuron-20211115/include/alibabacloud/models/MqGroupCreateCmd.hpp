// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MQGROUPCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_MQGROUPCREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MqGroupCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MqGroupCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(laneId, laneId_);
      DARABONBA_PTR_TO_JSON(laneName, laneName_);
      DARABONBA_PTR_TO_JSON(messageType, messageType_);
      DARABONBA_PTR_TO_JSON(protocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, MqGroupCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(laneId, laneId_);
      DARABONBA_PTR_FROM_JSON(laneName, laneName_);
      DARABONBA_PTR_FROM_JSON(messageType, messageType_);
      DARABONBA_PTR_FROM_JSON(protocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
    };
    MqGroupCreateCmd() = default ;
    MqGroupCreateCmd(const MqGroupCreateCmd &) = default ;
    MqGroupCreateCmd(MqGroupCreateCmd &&) = default ;
    MqGroupCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MqGroupCreateCmd() = default ;
    MqGroupCreateCmd& operator=(const MqGroupCreateCmd &) = default ;
    MqGroupCreateCmd& operator=(MqGroupCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->laneId_ == nullptr && this->laneName_ == nullptr && this->messageType_ == nullptr && this->protocolType_ == nullptr && this->remark_ == nullptr
        && this->serviceId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline MqGroupCreateCmd& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t getLaneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline MqGroupCreateCmd& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


    // laneName Field Functions 
    bool hasLaneName() const { return this->laneName_ != nullptr;};
    void deleteLaneName() { this->laneName_ = nullptr;};
    inline string getLaneName() const { DARABONBA_PTR_GET_DEFAULT(laneName_, "") };
    inline MqGroupCreateCmd& setLaneName(string laneName) { DARABONBA_PTR_SET_VALUE(laneName_, laneName) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline int32_t getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, 0) };
    inline MqGroupCreateCmd& setMessageType(int32_t messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline MqGroupCreateCmd& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline MqGroupCreateCmd& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline MqGroupCreateCmd& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    shared_ptr<string> env_ {};
    shared_ptr<int64_t> laneId_ {};
    shared_ptr<string> laneName_ {};
    shared_ptr<int32_t> messageType_ {};
    shared_ptr<string> protocolType_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> serviceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
