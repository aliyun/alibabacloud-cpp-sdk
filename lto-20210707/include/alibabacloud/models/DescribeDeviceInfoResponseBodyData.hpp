// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeDeviceInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_TO_JSON(DeviceCount, deviceCount_);
      DARABONBA_PTR_TO_JSON(DistributableCount, distributableCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_FROM_JSON(DeviceCount, deviceCount_);
      DARABONBA_PTR_FROM_JSON(DistributableCount, distributableCount_);
    };
    DescribeDeviceInfoResponseBodyData() = default ;
    DescribeDeviceInfoResponseBodyData(const DescribeDeviceInfoResponseBodyData &) = default ;
    DescribeDeviceInfoResponseBodyData(DescribeDeviceInfoResponseBodyData &&) = default ;
    DescribeDeviceInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceInfoResponseBodyData() = default ;
    DescribeDeviceInfoResponseBodyData& operator=(const DescribeDeviceInfoResponseBodyData &) = default ;
    DescribeDeviceInfoResponseBodyData& operator=(DescribeDeviceInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedCount_ == nullptr
        && return this->deviceCount_ == nullptr && return this->distributableCount_ == nullptr; };
    // authorizedCount Field Functions 
    bool hasAuthorizedCount() const { return this->authorizedCount_ != nullptr;};
    void deleteAuthorizedCount() { this->authorizedCount_ = nullptr;};
    inline int32_t authorizedCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedCount_, 0) };
    inline DescribeDeviceInfoResponseBodyData& setAuthorizedCount(int32_t authorizedCount) { DARABONBA_PTR_SET_VALUE(authorizedCount_, authorizedCount) };


    // deviceCount Field Functions 
    bool hasDeviceCount() const { return this->deviceCount_ != nullptr;};
    void deleteDeviceCount() { this->deviceCount_ = nullptr;};
    inline int32_t deviceCount() const { DARABONBA_PTR_GET_DEFAULT(deviceCount_, 0) };
    inline DescribeDeviceInfoResponseBodyData& setDeviceCount(int32_t deviceCount) { DARABONBA_PTR_SET_VALUE(deviceCount_, deviceCount) };


    // distributableCount Field Functions 
    bool hasDistributableCount() const { return this->distributableCount_ != nullptr;};
    void deleteDistributableCount() { this->distributableCount_ = nullptr;};
    inline int32_t distributableCount() const { DARABONBA_PTR_GET_DEFAULT(distributableCount_, 0) };
    inline DescribeDeviceInfoResponseBodyData& setDistributableCount(int32_t distributableCount) { DARABONBA_PTR_SET_VALUE(distributableCount_, distributableCount) };


  protected:
    std::shared_ptr<int32_t> authorizedCount_ = nullptr;
    std::shared_ptr<int32_t> deviceCount_ = nullptr;
    std::shared_ptr<int32_t> distributableCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
