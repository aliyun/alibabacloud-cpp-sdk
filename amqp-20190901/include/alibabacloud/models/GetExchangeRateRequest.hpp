// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXCHANGERATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXCHANGERATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetExchangeRateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExchangeRateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_ANY_TO_JSON(ExchangeNames, exchangeNames_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetExchangeRateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_ANY_FROM_JSON(ExchangeNames, exchangeNames_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetExchangeRateRequest() = default ;
    GetExchangeRateRequest(const GetExchangeRateRequest &) = default ;
    GetExchangeRateRequest(GetExchangeRateRequest &&) = default ;
    GetExchangeRateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExchangeRateRequest() = default ;
    GetExchangeRateRequest& operator=(const GetExchangeRateRequest &) = default ;
    GetExchangeRateRequest& operator=(GetExchangeRateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr
        && return this->exchangeNames_ == nullptr && return this->instanceId_ == nullptr && return this->vhostName_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline GetExchangeRateRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // exchangeNames Field Functions 
    bool hasExchangeNames() const { return this->exchangeNames_ != nullptr;};
    void deleteExchangeNames() { this->exchangeNames_ = nullptr;};
    inline     const Darabonba::Json & exchangeNames() const { DARABONBA_GET(exchangeNames_) };
    Darabonba::Json & exchangeNames() { DARABONBA_GET(exchangeNames_) };
    inline GetExchangeRateRequest& setExchangeNames(const Darabonba::Json & exchangeNames) { DARABONBA_SET_VALUE(exchangeNames_, exchangeNames) };
    inline GetExchangeRateRequest& setExchangeNames(Darabonba::Json & exchangeNames) { DARABONBA_SET_RVALUE(exchangeNames_, exchangeNames) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetExchangeRateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetExchangeRateRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    Darabonba::Json exchangeNames_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
