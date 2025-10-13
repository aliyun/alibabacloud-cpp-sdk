// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORVIEWROUTESCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORVIEWROUTESCHANNELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyStrategyForViewRoutesChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyStrategyForViewRoutesChannels& obj) { 
      DARABONBA_PTR_TO_JSON(channelType, channelType_);
      DARABONBA_PTR_TO_JSON(enabledSubChannels, enabledSubChannels_);
      DARABONBA_PTR_TO_JSON(receivers, receivers_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForViewRoutesChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(channelType, channelType_);
      DARABONBA_PTR_FROM_JSON(enabledSubChannels, enabledSubChannels_);
      DARABONBA_PTR_FROM_JSON(receivers, receivers_);
    };
    NotifyStrategyForViewRoutesChannels() = default ;
    NotifyStrategyForViewRoutesChannels(const NotifyStrategyForViewRoutesChannels &) = default ;
    NotifyStrategyForViewRoutesChannels(NotifyStrategyForViewRoutesChannels &&) = default ;
    NotifyStrategyForViewRoutesChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyStrategyForViewRoutesChannels() = default ;
    NotifyStrategyForViewRoutesChannels& operator=(const NotifyStrategyForViewRoutesChannels &) = default ;
    NotifyStrategyForViewRoutesChannels& operator=(NotifyStrategyForViewRoutesChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelType_ == nullptr
        && return this->enabledSubChannels_ == nullptr && return this->receivers_ == nullptr; };
    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string channelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline NotifyStrategyForViewRoutesChannels& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // enabledSubChannels Field Functions 
    bool hasEnabledSubChannels() const { return this->enabledSubChannels_ != nullptr;};
    void deleteEnabledSubChannels() { this->enabledSubChannels_ = nullptr;};
    inline const vector<string> & enabledSubChannels() const { DARABONBA_PTR_GET_CONST(enabledSubChannels_, vector<string>) };
    inline vector<string> enabledSubChannels() { DARABONBA_PTR_GET(enabledSubChannels_, vector<string>) };
    inline NotifyStrategyForViewRoutesChannels& setEnabledSubChannels(const vector<string> & enabledSubChannels) { DARABONBA_PTR_SET_VALUE(enabledSubChannels_, enabledSubChannels) };
    inline NotifyStrategyForViewRoutesChannels& setEnabledSubChannels(vector<string> && enabledSubChannels) { DARABONBA_PTR_SET_RVALUE(enabledSubChannels_, enabledSubChannels) };


    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline const vector<string> & receivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<string>) };
    inline vector<string> receivers() { DARABONBA_PTR_GET(receivers_, vector<string>) };
    inline NotifyStrategyForViewRoutesChannels& setReceivers(const vector<string> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
    inline NotifyStrategyForViewRoutesChannels& setReceivers(vector<string> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> channelType_ = nullptr;
    std::shared_ptr<vector<string>> enabledSubChannels_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> receivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
