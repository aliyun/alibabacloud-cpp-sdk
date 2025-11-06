// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVHOSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVHOSTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListVhostRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVhostRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VhostNamePrefix, vhostNamePrefix_);
    };
    friend void from_json(const Darabonba::Json& j, ListVhostRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VhostNamePrefix, vhostNamePrefix_);
    };
    ListVhostRequest() = default ;
    ListVhostRequest(const ListVhostRequest &) = default ;
    ListVhostRequest(ListVhostRequest &&) = default ;
    ListVhostRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVhostRequest() = default ;
    ListVhostRequest& operator=(const ListVhostRequest &) = default ;
    ListVhostRequest& operator=(ListVhostRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr
        && return this->instanceId_ == nullptr && return this->vhostNamePrefix_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline ListVhostRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListVhostRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // vhostNamePrefix Field Functions 
    bool hasVhostNamePrefix() const { return this->vhostNamePrefix_ != nullptr;};
    void deleteVhostNamePrefix() { this->vhostNamePrefix_ = nullptr;};
    inline string vhostNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(vhostNamePrefix_, "") };
    inline ListVhostRequest& setVhostNamePrefix(string vhostNamePrefix) { DARABONBA_PTR_SET_VALUE(vhostNamePrefix_, vhostNamePrefix) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> vhostNamePrefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
