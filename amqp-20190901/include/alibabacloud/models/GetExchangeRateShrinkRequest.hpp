// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXCHANGERATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXCHANGERATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetExchangeRateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExchangeRateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(ExchangeNames, exchangeNamesShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetExchangeRateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(ExchangeNames, exchangeNamesShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetExchangeRateShrinkRequest() = default ;
    GetExchangeRateShrinkRequest(const GetExchangeRateShrinkRequest &) = default ;
    GetExchangeRateShrinkRequest(GetExchangeRateShrinkRequest &&) = default ;
    GetExchangeRateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExchangeRateShrinkRequest() = default ;
    GetExchangeRateShrinkRequest& operator=(const GetExchangeRateShrinkRequest &) = default ;
    GetExchangeRateShrinkRequest& operator=(GetExchangeRateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr
        && return this->exchangeNamesShrink_ == nullptr && return this->instanceId_ == nullptr && return this->vhostName_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline GetExchangeRateShrinkRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // exchangeNamesShrink Field Functions 
    bool hasExchangeNamesShrink() const { return this->exchangeNamesShrink_ != nullptr;};
    void deleteExchangeNamesShrink() { this->exchangeNamesShrink_ = nullptr;};
    inline string exchangeNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(exchangeNamesShrink_, "") };
    inline GetExchangeRateShrinkRequest& setExchangeNamesShrink(string exchangeNamesShrink) { DARABONBA_PTR_SET_VALUE(exchangeNamesShrink_, exchangeNamesShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetExchangeRateShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetExchangeRateShrinkRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> exchangeNamesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
