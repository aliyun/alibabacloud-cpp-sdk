// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVHOSTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVHOSTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class DeleteVhostShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVhostShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
      DARABONBA_PTR_TO_JSON(VhostNames, vhostNamesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVhostShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
      DARABONBA_PTR_FROM_JSON(VhostNames, vhostNamesShrink_);
    };
    DeleteVhostShrinkRequest() = default ;
    DeleteVhostShrinkRequest(const DeleteVhostShrinkRequest &) = default ;
    DeleteVhostShrinkRequest(DeleteVhostShrinkRequest &&) = default ;
    DeleteVhostShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVhostShrinkRequest() = default ;
    DeleteVhostShrinkRequest& operator=(const DeleteVhostShrinkRequest &) = default ;
    DeleteVhostShrinkRequest& operator=(DeleteVhostShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr
        && return this->instanceId_ == nullptr && return this->vhostName_ == nullptr && return this->vhostNamesShrink_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline DeleteVhostShrinkRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteVhostShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline DeleteVhostShrinkRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


    // vhostNamesShrink Field Functions 
    bool hasVhostNamesShrink() const { return this->vhostNamesShrink_ != nullptr;};
    void deleteVhostNamesShrink() { this->vhostNamesShrink_ = nullptr;};
    inline string vhostNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(vhostNamesShrink_, "") };
    inline DeleteVhostShrinkRequest& setVhostNamesShrink(string vhostNamesShrink) { DARABONBA_PTR_SET_VALUE(vhostNamesShrink_, vhostNamesShrink) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
    std::shared_ptr<string> vhostNamesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
