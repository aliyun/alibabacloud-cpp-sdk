// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEDGECONTAINERAPPRESOURCERESERVESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEDGECONTAINERAPPRESOURCERESERVESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateEdgeContainerAppResourceReserveShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEdgeContainerAppResourceReserveShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DurationTime, durationTime_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Forever, forever_);
      DARABONBA_PTR_TO_JSON(ReserveSet, reserveSetShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEdgeContainerAppResourceReserveShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DurationTime, durationTime_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Forever, forever_);
      DARABONBA_PTR_FROM_JSON(ReserveSet, reserveSetShrink_);
    };
    UpdateEdgeContainerAppResourceReserveShrinkRequest() = default ;
    UpdateEdgeContainerAppResourceReserveShrinkRequest(const UpdateEdgeContainerAppResourceReserveShrinkRequest &) = default ;
    UpdateEdgeContainerAppResourceReserveShrinkRequest(UpdateEdgeContainerAppResourceReserveShrinkRequest &&) = default ;
    UpdateEdgeContainerAppResourceReserveShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEdgeContainerAppResourceReserveShrinkRequest() = default ;
    UpdateEdgeContainerAppResourceReserveShrinkRequest& operator=(const UpdateEdgeContainerAppResourceReserveShrinkRequest &) = default ;
    UpdateEdgeContainerAppResourceReserveShrinkRequest& operator=(UpdateEdgeContainerAppResourceReserveShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->durationTime_ != nullptr && this->enable_ != nullptr && this->forever_ != nullptr && this->reserveSetShrink_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateEdgeContainerAppResourceReserveShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // durationTime Field Functions 
    bool hasDurationTime() const { return this->durationTime_ != nullptr;};
    void deleteDurationTime() { this->durationTime_ = nullptr;};
    inline string durationTime() const { DARABONBA_PTR_GET_DEFAULT(durationTime_, "") };
    inline UpdateEdgeContainerAppResourceReserveShrinkRequest& setDurationTime(string durationTime) { DARABONBA_PTR_SET_VALUE(durationTime_, durationTime) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateEdgeContainerAppResourceReserveShrinkRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // forever Field Functions 
    bool hasForever() const { return this->forever_ != nullptr;};
    void deleteForever() { this->forever_ = nullptr;};
    inline bool forever() const { DARABONBA_PTR_GET_DEFAULT(forever_, false) };
    inline UpdateEdgeContainerAppResourceReserveShrinkRequest& setForever(bool forever) { DARABONBA_PTR_SET_VALUE(forever_, forever) };


    // reserveSetShrink Field Functions 
    bool hasReserveSetShrink() const { return this->reserveSetShrink_ != nullptr;};
    void deleteReserveSetShrink() { this->reserveSetShrink_ = nullptr;};
    inline string reserveSetShrink() const { DARABONBA_PTR_GET_DEFAULT(reserveSetShrink_, "") };
    inline UpdateEdgeContainerAppResourceReserveShrinkRequest& setReserveSetShrink(string reserveSetShrink) { DARABONBA_PTR_SET_VALUE(reserveSetShrink_, reserveSetShrink) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> durationTime_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<bool> forever_ = nullptr;
    std::shared_ptr<string> reserveSetShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
