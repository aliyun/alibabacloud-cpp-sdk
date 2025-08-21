// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREDISALLSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREDISALLSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRedisAllSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRedisAllSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRedisAllSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetRedisAllSessionRequest() = default ;
    GetRedisAllSessionRequest(const GetRedisAllSessionRequest &) = default ;
    GetRedisAllSessionRequest(GetRedisAllSessionRequest &&) = default ;
    GetRedisAllSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRedisAllSessionRequest() = default ;
    GetRedisAllSessionRequest& operator=(const GetRedisAllSessionRequest &) = default ;
    GetRedisAllSessionRequest& operator=(GetRedisAllSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consoleContext_ != nullptr
        && this->instanceId_ != nullptr; };
    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string consoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline GetRedisAllSessionRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRedisAllSessionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The reserved parameter.
    std::shared_ptr<string> consoleContext_ = nullptr;
    // The database instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
