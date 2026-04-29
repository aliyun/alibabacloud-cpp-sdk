// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWCHANNELSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWCHANNELSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawChannelsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawChannelsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ChannelList, channelListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawChannelsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ChannelList, channelListShrink_);
    };
    DescribePolarClawChannelsShrinkRequest() = default ;
    DescribePolarClawChannelsShrinkRequest(const DescribePolarClawChannelsShrinkRequest &) = default ;
    DescribePolarClawChannelsShrinkRequest(DescribePolarClawChannelsShrinkRequest &&) = default ;
    DescribePolarClawChannelsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawChannelsShrinkRequest() = default ;
    DescribePolarClawChannelsShrinkRequest& operator=(const DescribePolarClawChannelsShrinkRequest &) = default ;
    DescribePolarClawChannelsShrinkRequest& operator=(DescribePolarClawChannelsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->channelListShrink_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawChannelsShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // channelListShrink Field Functions 
    bool hasChannelListShrink() const { return this->channelListShrink_ != nullptr;};
    void deleteChannelListShrink() { this->channelListShrink_ = nullptr;};
    inline string getChannelListShrink() const { DARABONBA_PTR_GET_DEFAULT(channelListShrink_, "") };
    inline DescribePolarClawChannelsShrinkRequest& setChannelListShrink(string channelListShrink) { DARABONBA_PTR_SET_VALUE(channelListShrink_, channelListShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> channelListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
