// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYCHANNEL_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYCHANNEL_HPP_
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
  class NotifyChannel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyChannel& obj) { 
      DARABONBA_PTR_TO_JSON(channelType, channelType_);
      DARABONBA_PTR_TO_JSON(enabledSubChannels, enabledSubChannels_);
      DARABONBA_PTR_TO_JSON(receivers, receivers_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyChannel& obj) { 
      DARABONBA_PTR_FROM_JSON(channelType, channelType_);
      DARABONBA_PTR_FROM_JSON(enabledSubChannels, enabledSubChannels_);
      DARABONBA_PTR_FROM_JSON(receivers, receivers_);
    };
    NotifyChannel() = default ;
    NotifyChannel(const NotifyChannel &) = default ;
    NotifyChannel(NotifyChannel &&) = default ;
    NotifyChannel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyChannel() = default ;
    NotifyChannel& operator=(const NotifyChannel &) = default ;
    NotifyChannel& operator=(NotifyChannel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelType_ == nullptr
        && this->enabledSubChannels_ == nullptr && this->receivers_ == nullptr; };
    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline NotifyChannel& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // enabledSubChannels Field Functions 
    bool hasEnabledSubChannels() const { return this->enabledSubChannels_ != nullptr;};
    void deleteEnabledSubChannels() { this->enabledSubChannels_ = nullptr;};
    inline const vector<string> & getEnabledSubChannels() const { DARABONBA_PTR_GET_CONST(enabledSubChannels_, vector<string>) };
    inline vector<string> getEnabledSubChannels() { DARABONBA_PTR_GET(enabledSubChannels_, vector<string>) };
    inline NotifyChannel& setEnabledSubChannels(const vector<string> & enabledSubChannels) { DARABONBA_PTR_SET_VALUE(enabledSubChannels_, enabledSubChannels) };
    inline NotifyChannel& setEnabledSubChannels(vector<string> && enabledSubChannels) { DARABONBA_PTR_SET_RVALUE(enabledSubChannels_, enabledSubChannels) };


    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline const vector<string> & getReceivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<string>) };
    inline vector<string> getReceivers() { DARABONBA_PTR_GET(receivers_, vector<string>) };
    inline NotifyChannel& setReceivers(const vector<string> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
    inline NotifyChannel& setReceivers(vector<string> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


  protected:
    shared_ptr<string> channelType_ {};
    shared_ptr<vector<string>> enabledSubChannels_ {};
    shared_ptr<vector<string>> receivers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
