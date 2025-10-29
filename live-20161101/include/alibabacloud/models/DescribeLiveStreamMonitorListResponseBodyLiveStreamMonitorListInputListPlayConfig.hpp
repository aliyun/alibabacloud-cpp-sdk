// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODYLIVESTREAMMONITORLISTINPUTLISTPLAYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODYLIVESTREAMMONITORLISTINPUTLISTPLAYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig& obj) { 
      DARABONBA_PTR_TO_JSON(VolumeRate, volumeRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(VolumeRate, volumeRate_);
    };
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig() = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig(const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig &) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig(DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig &&) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig() = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig& operator=(const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig &) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig& operator=(DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->volumeRate_ == nullptr; };
    // volumeRate Field Functions 
    bool hasVolumeRate() const { return this->volumeRate_ != nullptr;};
    void deleteVolumeRate() { this->volumeRate_ = nullptr;};
    inline float volumeRate() const { DARABONBA_PTR_GET_DEFAULT(volumeRate_, 0.0) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig& setVolumeRate(float volumeRate) { DARABONBA_PTR_SET_VALUE(volumeRate_, volumeRate) };


  protected:
    // The volume. Valid values: 0 to 1. The value is rounded to two decimal places.
    std::shared_ptr<float> volumeRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
