// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEDGECONTAINERAPPRESOURCERESERVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEDGECONTAINERAPPRESOURCERESERVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateEdgeContainerAppResourceReserveRequestReserveSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateEdgeContainerAppResourceReserveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEdgeContainerAppResourceReserveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DurationTime, durationTime_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Forever, forever_);
      DARABONBA_PTR_TO_JSON(ReserveSet, reserveSet_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEdgeContainerAppResourceReserveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DurationTime, durationTime_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Forever, forever_);
      DARABONBA_PTR_FROM_JSON(ReserveSet, reserveSet_);
    };
    UpdateEdgeContainerAppResourceReserveRequest() = default ;
    UpdateEdgeContainerAppResourceReserveRequest(const UpdateEdgeContainerAppResourceReserveRequest &) = default ;
    UpdateEdgeContainerAppResourceReserveRequest(UpdateEdgeContainerAppResourceReserveRequest &&) = default ;
    UpdateEdgeContainerAppResourceReserveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEdgeContainerAppResourceReserveRequest() = default ;
    UpdateEdgeContainerAppResourceReserveRequest& operator=(const UpdateEdgeContainerAppResourceReserveRequest &) = default ;
    UpdateEdgeContainerAppResourceReserveRequest& operator=(UpdateEdgeContainerAppResourceReserveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->durationTime_ != nullptr && this->enable_ != nullptr && this->forever_ != nullptr && this->reserveSet_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateEdgeContainerAppResourceReserveRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // durationTime Field Functions 
    bool hasDurationTime() const { return this->durationTime_ != nullptr;};
    void deleteDurationTime() { this->durationTime_ = nullptr;};
    inline string durationTime() const { DARABONBA_PTR_GET_DEFAULT(durationTime_, "") };
    inline UpdateEdgeContainerAppResourceReserveRequest& setDurationTime(string durationTime) { DARABONBA_PTR_SET_VALUE(durationTime_, durationTime) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateEdgeContainerAppResourceReserveRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // forever Field Functions 
    bool hasForever() const { return this->forever_ != nullptr;};
    void deleteForever() { this->forever_ = nullptr;};
    inline bool forever() const { DARABONBA_PTR_GET_DEFAULT(forever_, false) };
    inline UpdateEdgeContainerAppResourceReserveRequest& setForever(bool forever) { DARABONBA_PTR_SET_VALUE(forever_, forever) };


    // reserveSet Field Functions 
    bool hasReserveSet() const { return this->reserveSet_ != nullptr;};
    void deleteReserveSet() { this->reserveSet_ = nullptr;};
    inline const vector<UpdateEdgeContainerAppResourceReserveRequestReserveSet> & reserveSet() const { DARABONBA_PTR_GET_CONST(reserveSet_, vector<UpdateEdgeContainerAppResourceReserveRequestReserveSet>) };
    inline vector<UpdateEdgeContainerAppResourceReserveRequestReserveSet> reserveSet() { DARABONBA_PTR_GET(reserveSet_, vector<UpdateEdgeContainerAppResourceReserveRequestReserveSet>) };
    inline UpdateEdgeContainerAppResourceReserveRequest& setReserveSet(const vector<UpdateEdgeContainerAppResourceReserveRequestReserveSet> & reserveSet) { DARABONBA_PTR_SET_VALUE(reserveSet_, reserveSet) };
    inline UpdateEdgeContainerAppResourceReserveRequest& setReserveSet(vector<UpdateEdgeContainerAppResourceReserveRequestReserveSet> && reserveSet) { DARABONBA_PTR_SET_RVALUE(reserveSet_, reserveSet) };


  protected:
    // The application ID, which can be obtained by calling the [ListEdgeContainerApps](~~ListEdgeContainerApps~~) operation.
    std::shared_ptr<string> appId_ = nullptr;
    // The end time of the reservation. The input time is UTC. It takes +8 hours to enter Beijing time. For example, if the current time is 2006-01-02 06:04:05, you need to enter "2006-01-02T14:04:05Z".
    std::shared_ptr<string> durationTime_ = nullptr;
    // Whether to enable resource reservation.
    std::shared_ptr<bool> enable_ = nullptr;
    // Whether to permanently enable the reservation. Once it is enabled, you are not allowed to set the reservation deadline.
    std::shared_ptr<bool> forever_ = nullptr;
    // Reserved resource list.
    std::shared_ptr<vector<UpdateEdgeContainerAppResourceReserveRequestReserveSet>> reserveSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
