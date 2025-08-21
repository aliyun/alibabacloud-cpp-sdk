// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KILLINSTANCEALLSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_KILLINSTANCEALLSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class KillInstanceAllSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KillInstanceAllSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, KillInstanceAllSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    KillInstanceAllSessionRequest() = default ;
    KillInstanceAllSessionRequest(const KillInstanceAllSessionRequest &) = default ;
    KillInstanceAllSessionRequest(KillInstanceAllSessionRequest &&) = default ;
    KillInstanceAllSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KillInstanceAllSessionRequest() = default ;
    KillInstanceAllSessionRequest& operator=(const KillInstanceAllSessionRequest &) = default ;
    KillInstanceAllSessionRequest& operator=(KillInstanceAllSessionRequest &&) = default ;
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
    inline KillInstanceAllSessionRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline KillInstanceAllSessionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The reserved parameter.
    std::shared_ptr<string> consoleContext_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
