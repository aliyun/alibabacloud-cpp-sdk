// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYRESPONSEBODYDATACPTIMESELECTLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYRESPONSEBODYDATACPTIMESELECTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes.hpp>
#include <alibabacloud/models/CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList& obj) { 
      DARABONBA_PTR_TO_JSON(AppointTimes, appointTimes_);
      DARABONBA_PTR_TO_JSON(PrePrice, prePrice_);
      DARABONBA_PTR_TO_JSON(RealTime, realTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppointTimes, appointTimes_);
      DARABONBA_PTR_FROM_JSON(PrePrice, prePrice_);
      DARABONBA_PTR_FROM_JSON(RealTime, realTime_);
    };
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList() = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList(const CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList &) = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList(CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList &&) = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList() = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList& operator=(const CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList &) = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList& operator=(CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appointTimes_ == nullptr
        && return this->prePrice_ == nullptr && return this->realTime_ == nullptr; };
    // appointTimes Field Functions 
    bool hasAppointTimes() const { return this->appointTimes_ != nullptr;};
    void deleteAppointTimes() { this->appointTimes_ = nullptr;};
    inline const vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes> & appointTimes() const { DARABONBA_PTR_GET_CONST(appointTimes_, vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes>) };
    inline vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes> appointTimes() { DARABONBA_PTR_GET(appointTimes_, vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes>) };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList& setAppointTimes(const vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes> & appointTimes) { DARABONBA_PTR_SET_VALUE(appointTimes_, appointTimes) };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList& setAppointTimes(vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes> && appointTimes) { DARABONBA_PTR_SET_RVALUE(appointTimes_, appointTimes) };


    // prePrice Field Functions 
    bool hasPrePrice() const { return this->prePrice_ != nullptr;};
    void deletePrePrice() { this->prePrice_ = nullptr;};
    inline string prePrice() const { DARABONBA_PTR_GET_DEFAULT(prePrice_, "") };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList& setPrePrice(string prePrice) { DARABONBA_PTR_SET_VALUE(prePrice_, prePrice) };


    // realTime Field Functions 
    bool hasRealTime() const { return this->realTime_ != nullptr;};
    void deleteRealTime() { this->realTime_ = nullptr;};
    inline const Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime & realTime() const { DARABONBA_PTR_GET_CONST(realTime_, Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime) };
    inline Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime realTime() { DARABONBA_PTR_GET(realTime_, Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime) };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList& setRealTime(const Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime & realTime) { DARABONBA_PTR_SET_VALUE(realTime_, realTime) };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList& setRealTime(Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime && realTime) { DARABONBA_PTR_SET_RVALUE(realTime_, realTime) };


  protected:
    // The available time for the scheduled pickup. If the current courier company cannot accept the scheduled pickup, this field is left empty.
    std::shared_ptr<vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes>> appointTimes_ = nullptr;
    // The estimated price. Unit: CNY. The value is accurate to two decimal places. The value of this parameter is displayed if an estimated weight is specified.
    std::shared_ptr<string> prePrice_ = nullptr;
    // The information about whether the real-time order can be selected.
    std::shared_ptr<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime> realTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
