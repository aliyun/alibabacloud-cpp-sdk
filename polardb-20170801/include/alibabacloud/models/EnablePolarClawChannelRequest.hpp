// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEPOLARCLAWCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEPOLARCLAWCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class EnablePolarClawChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnablePolarClawChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
    };
    friend void from_json(const Darabonba::Json& j, EnablePolarClawChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
    };
    EnablePolarClawChannelRequest() = default ;
    EnablePolarClawChannelRequest(const EnablePolarClawChannelRequest &) = default ;
    EnablePolarClawChannelRequest(EnablePolarClawChannelRequest &&) = default ;
    EnablePolarClawChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnablePolarClawChannelRequest() = default ;
    EnablePolarClawChannelRequest& operator=(const EnablePolarClawChannelRequest &) = default ;
    EnablePolarClawChannelRequest& operator=(EnablePolarClawChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->channelId_ == nullptr && this->restart_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline EnablePolarClawChannelRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline EnablePolarClawChannelRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline EnablePolarClawChannelRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    shared_ptr<bool> restart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
