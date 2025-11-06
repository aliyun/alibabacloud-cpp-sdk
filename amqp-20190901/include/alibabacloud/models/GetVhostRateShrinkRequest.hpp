// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVHOSTRATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVHOSTRATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetVhostRateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVhostRateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VhostNames, vhostNamesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetVhostRateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VhostNames, vhostNamesShrink_);
    };
    GetVhostRateShrinkRequest() = default ;
    GetVhostRateShrinkRequest(const GetVhostRateShrinkRequest &) = default ;
    GetVhostRateShrinkRequest(GetVhostRateShrinkRequest &&) = default ;
    GetVhostRateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVhostRateShrinkRequest() = default ;
    GetVhostRateShrinkRequest& operator=(const GetVhostRateShrinkRequest &) = default ;
    GetVhostRateShrinkRequest& operator=(GetVhostRateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr
        && return this->instanceId_ == nullptr && return this->vhostNamesShrink_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline GetVhostRateShrinkRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetVhostRateShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // vhostNamesShrink Field Functions 
    bool hasVhostNamesShrink() const { return this->vhostNamesShrink_ != nullptr;};
    void deleteVhostNamesShrink() { this->vhostNamesShrink_ = nullptr;};
    inline string vhostNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(vhostNamesShrink_, "") };
    inline GetVhostRateShrinkRequest& setVhostNamesShrink(string vhostNamesShrink) { DARABONBA_PTR_SET_VALUE(vhostNamesShrink_, vhostNamesShrink) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vhostNamesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
