// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTSSCREENINPUTCONFIGLISTAUDIOCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTSSCREENINPUTCONFIGLISTAUDIOCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ValidChannel, validChannel_);
      DARABONBA_PTR_TO_JSON(VolumeRate, volumeRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ValidChannel, validChannel_);
      DARABONBA_PTR_FROM_JSON(VolumeRate, volumeRate_);
    };
    DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig(const DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig(DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig &&) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig& operator=(const DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig& operator=(DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->validChannel_ == nullptr
        && return this->volumeRate_ == nullptr; };
    // validChannel Field Functions 
    bool hasValidChannel() const { return this->validChannel_ != nullptr;};
    void deleteValidChannel() { this->validChannel_ = nullptr;};
    inline string validChannel() const { DARABONBA_PTR_GET_DEFAULT(validChannel_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig& setValidChannel(string validChannel) { DARABONBA_PTR_SET_VALUE(validChannel_, validChannel) };


    // volumeRate Field Functions 
    bool hasVolumeRate() const { return this->volumeRate_ != nullptr;};
    void deleteVolumeRate() { this->volumeRate_ = nullptr;};
    inline float volumeRate() const { DARABONBA_PTR_GET_DEFAULT(volumeRate_, 0.0) };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig& setVolumeRate(float volumeRate) { DARABONBA_PTR_SET_VALUE(volumeRate_, volumeRate) };


  protected:
    // The corresponding channel.
    std::shared_ptr<string> validChannel_ = nullptr;
    // The volume.
    std::shared_ptr<float> volumeRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
