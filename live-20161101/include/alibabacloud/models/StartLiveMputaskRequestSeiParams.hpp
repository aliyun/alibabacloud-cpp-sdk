// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUESTSEIPARAMS_HPP_
#define ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUESTSEIPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartLiveMPUTaskRequestSeiParamsLayoutVolume.hpp>
#include <alibabacloud/models/StartLiveMPUTaskRequestSeiParamsPassThrough.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartLiveMPUTaskRequestSeiParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartLiveMPUTaskRequestSeiParams& obj) { 
      DARABONBA_PTR_TO_JSON(LayoutVolume, layoutVolume_);
      DARABONBA_PTR_TO_JSON(PassThrough, passThrough_);
      DARABONBA_PTR_TO_JSON(PayloadType, payloadType_);
    };
    friend void from_json(const Darabonba::Json& j, StartLiveMPUTaskRequestSeiParams& obj) { 
      DARABONBA_PTR_FROM_JSON(LayoutVolume, layoutVolume_);
      DARABONBA_PTR_FROM_JSON(PassThrough, passThrough_);
      DARABONBA_PTR_FROM_JSON(PayloadType, payloadType_);
    };
    StartLiveMPUTaskRequestSeiParams() = default ;
    StartLiveMPUTaskRequestSeiParams(const StartLiveMPUTaskRequestSeiParams &) = default ;
    StartLiveMPUTaskRequestSeiParams(StartLiveMPUTaskRequestSeiParams &&) = default ;
    StartLiveMPUTaskRequestSeiParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartLiveMPUTaskRequestSeiParams() = default ;
    StartLiveMPUTaskRequestSeiParams& operator=(const StartLiveMPUTaskRequestSeiParams &) = default ;
    StartLiveMPUTaskRequestSeiParams& operator=(StartLiveMPUTaskRequestSeiParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->layoutVolume_ != nullptr
        && this->passThrough_ != nullptr && this->payloadType_ != nullptr; };
    // layoutVolume Field Functions 
    bool hasLayoutVolume() const { return this->layoutVolume_ != nullptr;};
    void deleteLayoutVolume() { this->layoutVolume_ = nullptr;};
    inline const Models::StartLiveMPUTaskRequestSeiParamsLayoutVolume & layoutVolume() const { DARABONBA_PTR_GET_CONST(layoutVolume_, Models::StartLiveMPUTaskRequestSeiParamsLayoutVolume) };
    inline Models::StartLiveMPUTaskRequestSeiParamsLayoutVolume layoutVolume() { DARABONBA_PTR_GET(layoutVolume_, Models::StartLiveMPUTaskRequestSeiParamsLayoutVolume) };
    inline StartLiveMPUTaskRequestSeiParams& setLayoutVolume(const Models::StartLiveMPUTaskRequestSeiParamsLayoutVolume & layoutVolume) { DARABONBA_PTR_SET_VALUE(layoutVolume_, layoutVolume) };
    inline StartLiveMPUTaskRequestSeiParams& setLayoutVolume(Models::StartLiveMPUTaskRequestSeiParamsLayoutVolume && layoutVolume) { DARABONBA_PTR_SET_RVALUE(layoutVolume_, layoutVolume) };


    // passThrough Field Functions 
    bool hasPassThrough() const { return this->passThrough_ != nullptr;};
    void deletePassThrough() { this->passThrough_ = nullptr;};
    inline const Models::StartLiveMPUTaskRequestSeiParamsPassThrough & passThrough() const { DARABONBA_PTR_GET_CONST(passThrough_, Models::StartLiveMPUTaskRequestSeiParamsPassThrough) };
    inline Models::StartLiveMPUTaskRequestSeiParamsPassThrough passThrough() { DARABONBA_PTR_GET(passThrough_, Models::StartLiveMPUTaskRequestSeiParamsPassThrough) };
    inline StartLiveMPUTaskRequestSeiParams& setPassThrough(const Models::StartLiveMPUTaskRequestSeiParamsPassThrough & passThrough) { DARABONBA_PTR_SET_VALUE(passThrough_, passThrough) };
    inline StartLiveMPUTaskRequestSeiParams& setPassThrough(Models::StartLiveMPUTaskRequestSeiParamsPassThrough && passThrough) { DARABONBA_PTR_SET_RVALUE(passThrough_, passThrough) };


    // payloadType Field Functions 
    bool hasPayloadType() const { return this->payloadType_ != nullptr;};
    void deletePayloadType() { this->payloadType_ = nullptr;};
    inline string payloadType() const { DARABONBA_PTR_GET_DEFAULT(payloadType_, "") };
    inline StartLiveMPUTaskRequestSeiParams& setPayloadType(string payloadType) { DARABONBA_PTR_SET_VALUE(payloadType_, payloadType) };


  protected:
    // The layout and volume SEI. If you leave this parameter empty, the default layout and volume SEI is used.
    std::shared_ptr<Models::StartLiveMPUTaskRequestSeiParamsLayoutVolume> layoutVolume_ = nullptr;
    // Specifies whether to pass through the SEI.
    std::shared_ptr<Models::StartLiveMPUTaskRequestSeiParamsPassThrough> passThrough_ = nullptr;
    // The custom payload_type of the SEI. Valid values: 100 to 254. If you do not specify this parameter, the default value 5 is used.
    std::shared_ptr<string> payloadType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
