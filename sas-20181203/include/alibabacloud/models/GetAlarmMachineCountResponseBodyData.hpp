// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALARMMACHINECOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETALARMMACHINECOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAlarmMachineCountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlarmMachineCountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MachineCount, machineCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlarmMachineCountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineCount, machineCount_);
    };
    GetAlarmMachineCountResponseBodyData() = default ;
    GetAlarmMachineCountResponseBodyData(const GetAlarmMachineCountResponseBodyData &) = default ;
    GetAlarmMachineCountResponseBodyData(GetAlarmMachineCountResponseBodyData &&) = default ;
    GetAlarmMachineCountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlarmMachineCountResponseBodyData() = default ;
    GetAlarmMachineCountResponseBodyData& operator=(const GetAlarmMachineCountResponseBodyData &) = default ;
    GetAlarmMachineCountResponseBodyData& operator=(GetAlarmMachineCountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->machineCount_ == nullptr; };
    // machineCount Field Functions 
    bool hasMachineCount() const { return this->machineCount_ != nullptr;};
    void deleteMachineCount() { this->machineCount_ = nullptr;};
    inline int32_t machineCount() const { DARABONBA_PTR_GET_DEFAULT(machineCount_, 0) };
    inline GetAlarmMachineCountResponseBodyData& setMachineCount(int32_t machineCount) { DARABONBA_PTR_SET_VALUE(machineCount_, machineCount) };


  protected:
    // The number of servers on which alerts are generated.
    std::shared_ptr<int32_t> machineCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
