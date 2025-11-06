// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVHOSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVHOSTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class DeleteVhostRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVhostRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
      DARABONBA_ANY_TO_JSON(VhostNames, vhostNames_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVhostRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
      DARABONBA_ANY_FROM_JSON(VhostNames, vhostNames_);
    };
    DeleteVhostRequest() = default ;
    DeleteVhostRequest(const DeleteVhostRequest &) = default ;
    DeleteVhostRequest(DeleteVhostRequest &&) = default ;
    DeleteVhostRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVhostRequest() = default ;
    DeleteVhostRequest& operator=(const DeleteVhostRequest &) = default ;
    DeleteVhostRequest& operator=(DeleteVhostRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr
        && return this->instanceId_ == nullptr && return this->vhostName_ == nullptr && return this->vhostNames_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline DeleteVhostRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteVhostRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline DeleteVhostRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


    // vhostNames Field Functions 
    bool hasVhostNames() const { return this->vhostNames_ != nullptr;};
    void deleteVhostNames() { this->vhostNames_ = nullptr;};
    inline     const Darabonba::Json & vhostNames() const { DARABONBA_GET(vhostNames_) };
    Darabonba::Json & vhostNames() { DARABONBA_GET(vhostNames_) };
    inline DeleteVhostRequest& setVhostNames(const Darabonba::Json & vhostNames) { DARABONBA_SET_VALUE(vhostNames_, vhostNames) };
    inline DeleteVhostRequest& setVhostNames(Darabonba::Json & vhostNames) { DARABONBA_SET_RVALUE(vhostNames_, vhostNames) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
    Darabonba::Json vhostNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
