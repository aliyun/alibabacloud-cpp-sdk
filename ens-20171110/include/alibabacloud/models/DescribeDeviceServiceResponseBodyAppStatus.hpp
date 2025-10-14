// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYAPPSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYAPPSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDeviceServiceResponseBodyAppStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceServiceResponseBodyAppStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(StatusDescrip, statusDescrip_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceServiceResponseBodyAppStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(StatusDescrip, statusDescrip_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeDeviceServiceResponseBodyAppStatus() = default ;
    DescribeDeviceServiceResponseBodyAppStatus(const DescribeDeviceServiceResponseBodyAppStatus &) = default ;
    DescribeDeviceServiceResponseBodyAppStatus(DescribeDeviceServiceResponseBodyAppStatus &&) = default ;
    DescribeDeviceServiceResponseBodyAppStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceServiceResponseBodyAppStatus() = default ;
    DescribeDeviceServiceResponseBodyAppStatus& operator=(const DescribeDeviceServiceResponseBodyAppStatus &) = default ;
    DescribeDeviceServiceResponseBodyAppStatus& operator=(DescribeDeviceServiceResponseBodyAppStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->phase_ == nullptr
        && return this->statusDescrip_ == nullptr && return this->updateTime_ == nullptr; };
    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline DescribeDeviceServiceResponseBodyAppStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // statusDescrip Field Functions 
    bool hasStatusDescrip() const { return this->statusDescrip_ != nullptr;};
    void deleteStatusDescrip() { this->statusDescrip_ = nullptr;};
    inline string statusDescrip() const { DARABONBA_PTR_GET_DEFAULT(statusDescrip_, "") };
    inline DescribeDeviceServiceResponseBodyAppStatus& setStatusDescrip(string statusDescrip) { DARABONBA_PTR_SET_VALUE(statusDescrip_, statusDescrip) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDeviceServiceResponseBodyAppStatus& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The status of the application. The value is of the enumeration type. Valid values:
    // 
    // Three intermediate states:
    // 
    // *   CREATING
    // *   UPDATING
    // *   DELETING
    // 
    // Four final states:
    // 
    // *   CREATE_FAILED
    // *   UPDATE_FAILED
    // *   DELETE_FAILED
    // *   RUNNING
    std::shared_ptr<string> phase_ = nullptr;
    // The description of the application status.
    std::shared_ptr<string> statusDescrip_ = nullptr;
    // The time when the status was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
