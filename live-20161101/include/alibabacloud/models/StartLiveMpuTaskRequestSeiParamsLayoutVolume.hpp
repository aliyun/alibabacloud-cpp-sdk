// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUESTSEIPARAMSLAYOUTVOLUME_HPP_
#define ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUESTSEIPARAMSLAYOUTVOLUME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartLiveMPUTaskRequestSeiParamsLayoutVolume : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartLiveMPUTaskRequestSeiParamsLayoutVolume& obj) { 
      DARABONBA_PTR_TO_JSON(FollowIdr, followIdr_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
    };
    friend void from_json(const Darabonba::Json& j, StartLiveMPUTaskRequestSeiParamsLayoutVolume& obj) { 
      DARABONBA_PTR_FROM_JSON(FollowIdr, followIdr_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
    };
    StartLiveMPUTaskRequestSeiParamsLayoutVolume() = default ;
    StartLiveMPUTaskRequestSeiParamsLayoutVolume(const StartLiveMPUTaskRequestSeiParamsLayoutVolume &) = default ;
    StartLiveMPUTaskRequestSeiParamsLayoutVolume(StartLiveMPUTaskRequestSeiParamsLayoutVolume &&) = default ;
    StartLiveMPUTaskRequestSeiParamsLayoutVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartLiveMPUTaskRequestSeiParamsLayoutVolume() = default ;
    StartLiveMPUTaskRequestSeiParamsLayoutVolume& operator=(const StartLiveMPUTaskRequestSeiParamsLayoutVolume &) = default ;
    StartLiveMPUTaskRequestSeiParamsLayoutVolume& operator=(StartLiveMPUTaskRequestSeiParamsLayoutVolume &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->followIdr_ == nullptr
        && return this->interval_ == nullptr; };
    // followIdr Field Functions 
    bool hasFollowIdr() const { return this->followIdr_ != nullptr;};
    void deleteFollowIdr() { this->followIdr_ = nullptr;};
    inline string followIdr() const { DARABONBA_PTR_GET_DEFAULT(followIdr_, "") };
    inline StartLiveMPUTaskRequestSeiParamsLayoutVolume& setFollowIdr(string followIdr) { DARABONBA_PTR_SET_VALUE(followIdr_, followIdr) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline StartLiveMPUTaskRequestSeiParamsLayoutVolume& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


  protected:
    // Specifies whether to include the SEI in an Instantaneous Decoder Refresh (IDR) frame. Valid values:
    // 
    // *   **0**: does not include the SEI.
    // *   **1**: includes the SEI.
    std::shared_ptr<string> followIdr_ = nullptr;
    // The interval at which the SEI is sent. Valid values: [1000,5000]. Unit: milliseconds.
    std::shared_ptr<string> interval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
