// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSSEIPARAMSLAYOUTVOLUME_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSSEIPARAMSLAYOUTVOLUME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume& obj) { 
      DARABONBA_PTR_TO_JSON(FollowIdr, followIdr_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
    };
    friend void from_json(const Darabonba::Json& j, ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume& obj) { 
      DARABONBA_PTR_FROM_JSON(FollowIdr, followIdr_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
    };
    ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume(const ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume(ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume &&) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume& operator=(const ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume& operator=(ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->followIdr_ != nullptr
        && this->interval_ != nullptr; };
    // followIdr Field Functions 
    bool hasFollowIdr() const { return this->followIdr_ != nullptr;};
    void deleteFollowIdr() { this->followIdr_ = nullptr;};
    inline string followIdr() const { DARABONBA_PTR_GET_DEFAULT(followIdr_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume& setFollowIdr(string followIdr) { DARABONBA_PTR_SET_VALUE(followIdr_, followIdr) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


  protected:
    // Indicates whether to add SEI messages to Instantaneous Decoder Refresh (IDR) frames. Valid values:
    // 
    // *   0: does not add SEI messages.
    // *   1: adds SEI messages.
    std::shared_ptr<string> followIdr_ = nullptr;
    // The interval at which the SEI messages are added. Unit: milliseconds.
    std::shared_ptr<string> interval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
