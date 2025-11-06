// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXCHANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXCHANGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class CreateExchangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExchangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlternateExchange, alternateExchange_);
      DARABONBA_PTR_TO_JSON(AutoDelete, autoDelete_);
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_TO_JSON(ExchangeType, exchangeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Internal, internal_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
      DARABONBA_PTR_TO_JSON(XDelayedType, XDelayedType_);
      DARABONBA_PTR_TO_JSON(XHashHeader, XHashHeader_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExchangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlternateExchange, alternateExchange_);
      DARABONBA_PTR_FROM_JSON(AutoDelete, autoDelete_);
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_FROM_JSON(ExchangeType, exchangeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Internal, internal_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
      DARABONBA_PTR_FROM_JSON(XDelayedType, XDelayedType_);
      DARABONBA_PTR_FROM_JSON(XHashHeader, XHashHeader_);
    };
    CreateExchangeRequest() = default ;
    CreateExchangeRequest(const CreateExchangeRequest &) = default ;
    CreateExchangeRequest(CreateExchangeRequest &&) = default ;
    CreateExchangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExchangeRequest() = default ;
    CreateExchangeRequest& operator=(const CreateExchangeRequest &) = default ;
    CreateExchangeRequest& operator=(CreateExchangeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alternateExchange_ == nullptr
        && return this->autoDelete_ == nullptr && return this->consoleSessionId_ == nullptr && return this->exchangeName_ == nullptr && return this->exchangeType_ == nullptr && return this->instanceId_ == nullptr
        && return this->internal_ == nullptr && return this->vhostName_ == nullptr && return this->XDelayedType_ == nullptr && return this->XHashHeader_ == nullptr; };
    // alternateExchange Field Functions 
    bool hasAlternateExchange() const { return this->alternateExchange_ != nullptr;};
    void deleteAlternateExchange() { this->alternateExchange_ = nullptr;};
    inline string alternateExchange() const { DARABONBA_PTR_GET_DEFAULT(alternateExchange_, "") };
    inline CreateExchangeRequest& setAlternateExchange(string alternateExchange) { DARABONBA_PTR_SET_VALUE(alternateExchange_, alternateExchange) };


    // autoDelete Field Functions 
    bool hasAutoDelete() const { return this->autoDelete_ != nullptr;};
    void deleteAutoDelete() { this->autoDelete_ = nullptr;};
    inline bool autoDelete() const { DARABONBA_PTR_GET_DEFAULT(autoDelete_, false) };
    inline CreateExchangeRequest& setAutoDelete(bool autoDelete) { DARABONBA_PTR_SET_VALUE(autoDelete_, autoDelete) };


    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline CreateExchangeRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // exchangeName Field Functions 
    bool hasExchangeName() const { return this->exchangeName_ != nullptr;};
    void deleteExchangeName() { this->exchangeName_ = nullptr;};
    inline string exchangeName() const { DARABONBA_PTR_GET_DEFAULT(exchangeName_, "") };
    inline CreateExchangeRequest& setExchangeName(string exchangeName) { DARABONBA_PTR_SET_VALUE(exchangeName_, exchangeName) };


    // exchangeType Field Functions 
    bool hasExchangeType() const { return this->exchangeType_ != nullptr;};
    void deleteExchangeType() { this->exchangeType_ = nullptr;};
    inline int32_t exchangeType() const { DARABONBA_PTR_GET_DEFAULT(exchangeType_, 0) };
    inline CreateExchangeRequest& setExchangeType(int32_t exchangeType) { DARABONBA_PTR_SET_VALUE(exchangeType_, exchangeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateExchangeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internal Field Functions 
    bool hasInternal() const { return this->internal_ != nullptr;};
    void deleteInternal() { this->internal_ = nullptr;};
    inline bool internal() const { DARABONBA_PTR_GET_DEFAULT(internal_, false) };
    inline CreateExchangeRequest& setInternal(bool internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline CreateExchangeRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


    // XDelayedType Field Functions 
    bool hasXDelayedType() const { return this->XDelayedType_ != nullptr;};
    void deleteXDelayedType() { this->XDelayedType_ = nullptr;};
    inline string XDelayedType() const { DARABONBA_PTR_GET_DEFAULT(XDelayedType_, "") };
    inline CreateExchangeRequest& setXDelayedType(string XDelayedType) { DARABONBA_PTR_SET_VALUE(XDelayedType_, XDelayedType) };


    // XHashHeader Field Functions 
    bool hasXHashHeader() const { return this->XHashHeader_ != nullptr;};
    void deleteXHashHeader() { this->XHashHeader_ = nullptr;};
    inline string XHashHeader() const { DARABONBA_PTR_GET_DEFAULT(XHashHeader_, "") };
    inline CreateExchangeRequest& setXHashHeader(string XHashHeader) { DARABONBA_PTR_SET_VALUE(XHashHeader_, XHashHeader) };


  protected:
    std::shared_ptr<string> alternateExchange_ = nullptr;
    std::shared_ptr<bool> autoDelete_ = nullptr;
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> exchangeName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> exchangeType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> internal_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vhostName_ = nullptr;
    std::shared_ptr<string> XDelayedType_ = nullptr;
    std::shared_ptr<string> XHashHeader_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
