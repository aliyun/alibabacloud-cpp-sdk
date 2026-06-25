// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFAULTINJECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFAULTINJECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateFaultInjectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFaultInjectionRequest& obj) { 
      DARABONBA_ANY_TO_JSON(FaultArgs, faultArgs_);
      DARABONBA_PTR_TO_JSON(FaultType, faultType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFaultInjectionRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(FaultArgs, faultArgs_);
      DARABONBA_PTR_FROM_JSON(FaultType, faultType_);
    };
    CreateFaultInjectionRequest() = default ;
    CreateFaultInjectionRequest(const CreateFaultInjectionRequest &) = default ;
    CreateFaultInjectionRequest(CreateFaultInjectionRequest &&) = default ;
    CreateFaultInjectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFaultInjectionRequest() = default ;
    CreateFaultInjectionRequest& operator=(const CreateFaultInjectionRequest &) = default ;
    CreateFaultInjectionRequest& operator=(CreateFaultInjectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faultArgs_ == nullptr
        && this->faultType_ == nullptr; };
    // faultArgs Field Functions 
    bool hasFaultArgs() const { return this->faultArgs_ != nullptr;};
    void deleteFaultArgs() { this->faultArgs_ = nullptr;};
    inline     const Darabonba::Json & getFaultArgs() const { DARABONBA_GET(faultArgs_) };
    Darabonba::Json & getFaultArgs() { DARABONBA_GET(faultArgs_) };
    inline CreateFaultInjectionRequest& setFaultArgs(const Darabonba::Json & faultArgs) { DARABONBA_SET_VALUE(faultArgs_, faultArgs) };
    inline CreateFaultInjectionRequest& setFaultArgs(Darabonba::Json && faultArgs) { DARABONBA_SET_RVALUE(faultArgs_, faultArgs) };


    // faultType Field Functions 
    bool hasFaultType() const { return this->faultType_ != nullptr;};
    void deleteFaultType() { this->faultType_ = nullptr;};
    inline string getFaultType() const { DARABONBA_PTR_GET_DEFAULT(faultType_, "") };
    inline CreateFaultInjectionRequest& setFaultType(string faultType) { DARABONBA_PTR_SET_VALUE(faultType_, faultType) };


  protected:
    // The parameters for each fault type are described as follows:
    // 
    // 1. CpuFullloadTask (CPU full load fault)
    //    `{ "FaultType": "CpuFullloadTask", "FaultArgs": { "FaultAction": "fullload", "CpuPercent": 50 } }`
    // 
    // 2. MemLoadTask (Memory load fault)
    //    `{ "FaultType": "MemLoadTask", "FaultArgs": { "FaultAction": "load", "MemPercent": 80 } }`
    // 
    // 3. NetworkTask (Network fault)
    //    3.a. NetworkDelayAction (Network delay)
    //    `{ "FaultType": "NetworkTask", "FaultArgs": { "FaultAction": "delay", "Time": 3000, "Offset": 100 } }`
    //    3.b. NetworkCorruptAction (Network packet corruption)
    //    `{ "FaultType": "NetworkTask", "FaultArgs": { "FaultAction": "corrupt", "Percent": 50 } }`
    //    3.c. NetworkLossAction (Network packet loss)
    //    `{ "FaultType": "NetworkTask", "FaultArgs": { "FaultAction": "loss", "Percent": 30 } }`
    // 
    // 4. DiskBurnTask (Disk read/write fault)
    //    `{ "FaultType": "DiskBurnTask", "FaultArgs": { "FaultAction": "burn", "Read": true, "Write": true, "Size": 100 } }`
    // 
    // 5. DiskFillTask (Disk fill fault)
    //    `{ "FaultType": "DiskFillTask", "FaultArgs": { "FaultAction": "fill", "Percent": 80 } }`
    Darabonba::Json faultArgs_ {};
    // The fault type.
    // Device faults: 1. CPU full load fault. 2. Memory load fault. 3. Network fault. 4. Disk read/write fault. 5. Disk fill fault.
    shared_ptr<string> faultType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
