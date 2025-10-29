// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTSCOMMONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTSCOMMONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(VideoResourceId, videoResourceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(VideoResourceId, videoResourceId_);
    };
    DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig(const DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig(DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig &&) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig& operator=(const DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig& operator=(DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && return this->videoResourceId_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // videoResourceId Field Functions 
    bool hasVideoResourceId() const { return this->videoResourceId_ != nullptr;};
    void deleteVideoResourceId() { this->videoResourceId_ = nullptr;};
    inline string videoResourceId() const { DARABONBA_PTR_GET_DEFAULT(videoResourceId_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsCommonConfig& setVideoResourceId(string videoResourceId) { DARABONBA_PTR_SET_VALUE(videoResourceId_, videoResourceId) };


  protected:
    // The ID of the channel that is bound to the video resource.
    std::shared_ptr<string> channelId_ = nullptr;
    // The ID of the video resource.
    std::shared_ptr<string> videoResourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
