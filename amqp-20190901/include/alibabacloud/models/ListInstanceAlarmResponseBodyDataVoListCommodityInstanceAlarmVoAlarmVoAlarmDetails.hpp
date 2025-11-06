// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEALARMRESPONSEBODYDATAVOLISTCOMMODITYINSTANCEALARMVOALARMVOALARMDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEALARMRESPONSEBODYDATAVOLISTCOMMODITYINSTANCEALARMVOALARMVOALARMDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmDetail, alarmDetail_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmDetail, alarmDetail_);
    };
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails() = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails(const ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails &) = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails(ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails &&) = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails() = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails& operator=(const ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails &) = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails& operator=(ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmDetail_ == nullptr; };
    // alarmDetail Field Functions 
    bool hasAlarmDetail() const { return this->alarmDetail_ != nullptr;};
    void deleteAlarmDetail() { this->alarmDetail_ = nullptr;};
    inline const vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail> & alarmDetail() const { DARABONBA_PTR_GET_CONST(alarmDetail_, vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail>) };
    inline vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail> alarmDetail() { DARABONBA_PTR_GET(alarmDetail_, vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail>) };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails& setAlarmDetail(const vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail> & alarmDetail) { DARABONBA_PTR_SET_VALUE(alarmDetail_, alarmDetail) };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetails& setAlarmDetail(vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail> && alarmDetail) { DARABONBA_PTR_SET_RVALUE(alarmDetail_, alarmDetail) };


  protected:
    std::shared_ptr<vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail>> alarmDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
