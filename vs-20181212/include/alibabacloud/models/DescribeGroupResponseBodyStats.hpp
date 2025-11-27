// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPRESPONSEBODYSTATS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPRESPONSEBODYSTATS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeGroupResponseBodyStats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupResponseBodyStats& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceNum, deviceNum_);
      DARABONBA_PTR_TO_JSON(IedNum, iedNum_);
      DARABONBA_PTR_TO_JSON(IpcNum, ipcNum_);
      DARABONBA_PTR_TO_JSON(PlatformNum, platformNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupResponseBodyStats& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceNum, deviceNum_);
      DARABONBA_PTR_FROM_JSON(IedNum, iedNum_);
      DARABONBA_PTR_FROM_JSON(IpcNum, ipcNum_);
      DARABONBA_PTR_FROM_JSON(PlatformNum, platformNum_);
    };
    DescribeGroupResponseBodyStats() = default ;
    DescribeGroupResponseBodyStats(const DescribeGroupResponseBodyStats &) = default ;
    DescribeGroupResponseBodyStats(DescribeGroupResponseBodyStats &&) = default ;
    DescribeGroupResponseBodyStats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupResponseBodyStats() = default ;
    DescribeGroupResponseBodyStats& operator=(const DescribeGroupResponseBodyStats &) = default ;
    DescribeGroupResponseBodyStats& operator=(DescribeGroupResponseBodyStats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceNum_ == nullptr
        && return this->iedNum_ == nullptr && return this->ipcNum_ == nullptr && return this->platformNum_ == nullptr; };
    // deviceNum Field Functions 
    bool hasDeviceNum() const { return this->deviceNum_ != nullptr;};
    void deleteDeviceNum() { this->deviceNum_ = nullptr;};
    inline int64_t deviceNum() const { DARABONBA_PTR_GET_DEFAULT(deviceNum_, 0L) };
    inline DescribeGroupResponseBodyStats& setDeviceNum(int64_t deviceNum) { DARABONBA_PTR_SET_VALUE(deviceNum_, deviceNum) };


    // iedNum Field Functions 
    bool hasIedNum() const { return this->iedNum_ != nullptr;};
    void deleteIedNum() { this->iedNum_ = nullptr;};
    inline int64_t iedNum() const { DARABONBA_PTR_GET_DEFAULT(iedNum_, 0L) };
    inline DescribeGroupResponseBodyStats& setIedNum(int64_t iedNum) { DARABONBA_PTR_SET_VALUE(iedNum_, iedNum) };


    // ipcNum Field Functions 
    bool hasIpcNum() const { return this->ipcNum_ != nullptr;};
    void deleteIpcNum() { this->ipcNum_ = nullptr;};
    inline int64_t ipcNum() const { DARABONBA_PTR_GET_DEFAULT(ipcNum_, 0L) };
    inline DescribeGroupResponseBodyStats& setIpcNum(int64_t ipcNum) { DARABONBA_PTR_SET_VALUE(ipcNum_, ipcNum) };


    // platformNum Field Functions 
    bool hasPlatformNum() const { return this->platformNum_ != nullptr;};
    void deletePlatformNum() { this->platformNum_ = nullptr;};
    inline int64_t platformNum() const { DARABONBA_PTR_GET_DEFAULT(platformNum_, 0L) };
    inline DescribeGroupResponseBodyStats& setPlatformNum(int64_t platformNum) { DARABONBA_PTR_SET_VALUE(platformNum_, platformNum) };


  protected:
    std::shared_ptr<int64_t> deviceNum_ = nullptr;
    std::shared_ptr<int64_t> iedNum_ = nullptr;
    std::shared_ptr<int64_t> ipcNum_ = nullptr;
    std::shared_ptr<int64_t> platformNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
