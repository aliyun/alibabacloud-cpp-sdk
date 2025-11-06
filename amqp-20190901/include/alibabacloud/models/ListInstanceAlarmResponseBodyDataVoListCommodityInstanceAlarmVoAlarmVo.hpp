// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEALARMRESPONSEBODYDATAVOLISTCOMMODITYINSTANCEALARMVOALARMVO_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEALARMRESPONSEBODYDATAVOLISTCOMMODITYINSTANCEALARMVOALARMVO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_TO_JSON(AlarmDetails, alarmDetails_);
      DARABONBA_PTR_TO_JSON(HasConfigAlarm, hasConfigAlarm_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_FROM_JSON(AlarmDetails, alarmDetails_);
      DARABONBA_PTR_FROM_JSON(HasConfigAlarm, hasConfigAlarm_);
    };
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO() = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO(const ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO &) = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO(ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO &&) = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO() = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO& operator=(const ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO &) = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO& operator=(ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmCount_ == nullptr
        && return this->alarmDetails_ == nullptr && return this->hasConfigAlarm_ == nullptr; };
    // alarmCount Field Functions 
    bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
    void deleteAlarmCount() { this->alarmCount_ = nullptr;};
    inline int32_t alarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


    // alarmDetails Field Functions 
    bool hasAlarmDetails() const { return this->alarmDetails_ != nullptr;};
    void deleteAlarmDetails() { this->alarmDetails_ = nullptr;};
    inline const Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails & alarmDetails() const { DARABONBA_PTR_GET_CONST(alarmDetails_, Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails) };
    inline Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails alarmDetails() { DARABONBA_PTR_GET(alarmDetails_, Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails) };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO& setAlarmDetails(const Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails & alarmDetails) { DARABONBA_PTR_SET_VALUE(alarmDetails_, alarmDetails) };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO& setAlarmDetails(Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails && alarmDetails) { DARABONBA_PTR_SET_RVALUE(alarmDetails_, alarmDetails) };


    // hasConfigAlarm Field Functions 
    bool hasHasConfigAlarm() const { return this->hasConfigAlarm_ != nullptr;};
    void deleteHasConfigAlarm() { this->hasConfigAlarm_ = nullptr;};
    inline bool hasConfigAlarm() const { DARABONBA_PTR_GET_DEFAULT(hasConfigAlarm_, false) };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO& setHasConfigAlarm(bool hasConfigAlarm) { DARABONBA_PTR_SET_VALUE(hasConfigAlarm_, hasConfigAlarm) };


  protected:
    std::shared_ptr<int32_t> alarmCount_ = nullptr;
    std::shared_ptr<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails> alarmDetails_ = nullptr;
    std::shared_ptr<bool> hasConfigAlarm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
