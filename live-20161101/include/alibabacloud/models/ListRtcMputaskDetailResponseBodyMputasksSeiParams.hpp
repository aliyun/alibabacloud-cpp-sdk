// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSSEIPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSSEIPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume.hpp>
#include <alibabacloud/models/ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsPassThrough.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams& obj) { 
      DARABONBA_PTR_TO_JSON(LayoutVolume, layoutVolume_);
      DARABONBA_PTR_TO_JSON(PassThrough, passThrough_);
      DARABONBA_PTR_TO_JSON(PayloadType, payloadType_);
    };
    friend void from_json(const Darabonba::Json& j, ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams& obj) { 
      DARABONBA_PTR_FROM_JSON(LayoutVolume, layoutVolume_);
      DARABONBA_PTR_FROM_JSON(PassThrough, passThrough_);
      DARABONBA_PTR_FROM_JSON(PayloadType, payloadType_);
    };
    ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams(const ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams(ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams &&) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams& operator=(const ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams& operator=(ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->layoutVolume_ != nullptr
        && this->passThrough_ != nullptr && this->payloadType_ != nullptr; };
    // layoutVolume Field Functions 
    bool hasLayoutVolume() const { return this->layoutVolume_ != nullptr;};
    void deleteLayoutVolume() { this->layoutVolume_ = nullptr;};
    inline const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume & layoutVolume() const { DARABONBA_PTR_GET_CONST(layoutVolume_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume) };
    inline Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume layoutVolume() { DARABONBA_PTR_GET(layoutVolume_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams& setLayoutVolume(const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume & layoutVolume) { DARABONBA_PTR_SET_VALUE(layoutVolume_, layoutVolume) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams& setLayoutVolume(Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume && layoutVolume) { DARABONBA_PTR_SET_RVALUE(layoutVolume_, layoutVolume) };


    // passThrough Field Functions 
    bool hasPassThrough() const { return this->passThrough_ != nullptr;};
    void deletePassThrough() { this->passThrough_ = nullptr;};
    inline const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsPassThrough & passThrough() const { DARABONBA_PTR_GET_CONST(passThrough_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsPassThrough) };
    inline Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsPassThrough passThrough() { DARABONBA_PTR_GET(passThrough_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsPassThrough) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams& setPassThrough(const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsPassThrough & passThrough) { DARABONBA_PTR_SET_VALUE(passThrough_, passThrough) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams& setPassThrough(Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsPassThrough && passThrough) { DARABONBA_PTR_SET_RVALUE(passThrough_, passThrough) };


    // payloadType Field Functions 
    bool hasPayloadType() const { return this->payloadType_ != nullptr;};
    void deletePayloadType() { this->payloadType_ = nullptr;};
    inline string payloadType() const { DARABONBA_PTR_GET_DEFAULT(payloadType_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams& setPayloadType(string payloadType) { DARABONBA_PTR_SET_VALUE(payloadType_, payloadType) };


  protected:
    // The layout and volume SEI. If the return value is an empty string, the default layout and volume SEI is used.
    std::shared_ptr<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsLayoutVolume> layoutVolume_ = nullptr;
    // The custom SEI.
    std::shared_ptr<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParamsPassThrough> passThrough_ = nullptr;
    // The custom payload type. Valid values: 100 to 254. Default value: 5.
    std::shared_ptr<string> payloadType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
