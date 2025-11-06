// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMONBUYURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMONBUYURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetCommonBuyUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommonBuyUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommonBuyUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetCommonBuyUrlRequest() = default ;
    GetCommonBuyUrlRequest(const GetCommonBuyUrlRequest &) = default ;
    GetCommonBuyUrlRequest(GetCommonBuyUrlRequest &&) = default ;
    GetCommonBuyUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommonBuyUrlRequest() = default ;
    GetCommonBuyUrlRequest& operator=(const GetCommonBuyUrlRequest &) = default ;
    GetCommonBuyUrlRequest& operator=(GetCommonBuyUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->consoleSessionId_ == nullptr && return this->instanceId_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline GetCommonBuyUrlRequest& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline GetCommonBuyUrlRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetCommonBuyUrlRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> actionType_ = nullptr;
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
