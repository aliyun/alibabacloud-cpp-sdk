// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILMONITORLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILMONITORLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList& obj) { 
      DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
      DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_TO_JSON(NetServiceId, netServiceId_);
      DARABONBA_PTR_TO_JSON(SendCount, sendCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList& obj) { 
      DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
      DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_FROM_JSON(NetServiceId, netServiceId_);
      DARABONBA_PTR_FROM_JSON(SendCount, sendCount_);
    };
    GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList(const GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList(GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList &&) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList& operator=(const GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList& operator=(GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cityCode_ != nullptr
        && this->monitorType_ != nullptr && this->netServiceId_ != nullptr && this->sendCount_ != nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline int64_t cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList& setCityCode(int64_t cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // monitorType Field Functions 
    bool hasMonitorType() const { return this->monitorType_ != nullptr;};
    void deleteMonitorType() { this->monitorType_ = nullptr;};
    inline int64_t monitorType() const { DARABONBA_PTR_GET_DEFAULT(monitorType_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList& setMonitorType(int64_t monitorType) { DARABONBA_PTR_SET_VALUE(monitorType_, monitorType) };


    // netServiceId Field Functions 
    bool hasNetServiceId() const { return this->netServiceId_ != nullptr;};
    void deleteNetServiceId() { this->netServiceId_ = nullptr;};
    inline int64_t netServiceId() const { DARABONBA_PTR_GET_DEFAULT(netServiceId_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList& setNetServiceId(int64_t netServiceId) { DARABONBA_PTR_SET_VALUE(netServiceId_, netServiceId) };


    // sendCount Field Functions 
    bool hasSendCount() const { return this->sendCount_ != nullptr;};
    void deleteSendCount() { this->sendCount_ = nullptr;};
    inline int64_t sendCount() const { DARABONBA_PTR_GET_DEFAULT(sendCount_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList& setSendCount(int64_t sendCount) { DARABONBA_PTR_SET_VALUE(sendCount_, sendCount) };


  protected:
    // The city code.
    std::shared_ptr<int64_t> cityCode_ = nullptr;
    // The type of the detection point.
    std::shared_ptr<int64_t> monitorType_ = nullptr;
    // The ID of the network service.
    std::shared_ptr<int64_t> netServiceId_ = nullptr;
    // The number of times that the system sends detection requests.
    std::shared_ptr<int64_t> sendCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
