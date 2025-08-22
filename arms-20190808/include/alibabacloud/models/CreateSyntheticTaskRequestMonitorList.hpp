// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTMONITORLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTMONITORLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskRequestMonitorList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskRequestMonitorList& obj) { 
      DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
      DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_TO_JSON(NetServiceId, netServiceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskRequestMonitorList& obj) { 
      DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
      DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_FROM_JSON(NetServiceId, netServiceId_);
    };
    CreateSyntheticTaskRequestMonitorList() = default ;
    CreateSyntheticTaskRequestMonitorList(const CreateSyntheticTaskRequestMonitorList &) = default ;
    CreateSyntheticTaskRequestMonitorList(CreateSyntheticTaskRequestMonitorList &&) = default ;
    CreateSyntheticTaskRequestMonitorList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskRequestMonitorList() = default ;
    CreateSyntheticTaskRequestMonitorList& operator=(const CreateSyntheticTaskRequestMonitorList &) = default ;
    CreateSyntheticTaskRequestMonitorList& operator=(CreateSyntheticTaskRequestMonitorList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cityCode_ != nullptr
        && this->monitorType_ != nullptr && this->netServiceId_ != nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline int64_t cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, 0L) };
    inline CreateSyntheticTaskRequestMonitorList& setCityCode(int64_t cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // monitorType Field Functions 
    bool hasMonitorType() const { return this->monitorType_ != nullptr;};
    void deleteMonitorType() { this->monitorType_ = nullptr;};
    inline int64_t monitorType() const { DARABONBA_PTR_GET_DEFAULT(monitorType_, 0L) };
    inline CreateSyntheticTaskRequestMonitorList& setMonitorType(int64_t monitorType) { DARABONBA_PTR_SET_VALUE(monitorType_, monitorType) };


    // netServiceId Field Functions 
    bool hasNetServiceId() const { return this->netServiceId_ != nullptr;};
    void deleteNetServiceId() { this->netServiceId_ = nullptr;};
    inline int64_t netServiceId() const { DARABONBA_PTR_GET_DEFAULT(netServiceId_, 0L) };
    inline CreateSyntheticTaskRequestMonitorList& setNetServiceId(int64_t netServiceId) { DARABONBA_PTR_SET_VALUE(netServiceId_, netServiceId) };


  protected:
    // The ID of the city to which the monitoring point belongs.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> cityCode_ = nullptr;
    // The carrier type:
    // 
    // *   IDC
    // *   LastMilie
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> monitorType_ = nullptr;
    // The ID of the carrier.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> netServiceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
