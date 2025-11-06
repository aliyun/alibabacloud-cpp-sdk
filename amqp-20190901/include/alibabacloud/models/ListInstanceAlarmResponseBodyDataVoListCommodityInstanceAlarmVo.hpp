// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEALARMRESPONSEBODYDATAVOLISTCOMMODITYINSTANCEALARMVO_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEALARMRESPONSEBODYDATAVOLISTCOMMODITYINSTANCEALARMVO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmVO, alarmVO_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmVO, alarmVO_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO() = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO(const ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO &) = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO(ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO &&) = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO() = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO& operator=(const ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO &) = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO& operator=(ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmVO_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr; };
    // alarmVO Field Functions 
    bool hasAlarmVO() const { return this->alarmVO_ != nullptr;};
    void deleteAlarmVO() { this->alarmVO_ = nullptr;};
    inline const Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO & alarmVO() const { DARABONBA_PTR_GET_CONST(alarmVO_, Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO) };
    inline Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO alarmVO() { DARABONBA_PTR_GET(alarmVO_, Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO) };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO& setAlarmVO(const Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO & alarmVO) { DARABONBA_PTR_SET_VALUE(alarmVO_, alarmVO) };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO& setAlarmVO(Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO && alarmVO) { DARABONBA_PTR_SET_RVALUE(alarmVO_, alarmVO) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    std::shared_ptr<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVO> alarmVO_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
