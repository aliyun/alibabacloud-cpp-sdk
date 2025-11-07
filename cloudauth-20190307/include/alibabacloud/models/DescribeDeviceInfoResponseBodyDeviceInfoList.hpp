// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICEINFORESPONSEBODYDEVICEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICEINFORESPONSEBODYDEVICEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeDeviceInfoResponseBodyDeviceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceInfoResponseBodyDeviceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceInfoResponseBodyDeviceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
    };
    DescribeDeviceInfoResponseBodyDeviceInfoList() = default ;
    DescribeDeviceInfoResponseBodyDeviceInfoList(const DescribeDeviceInfoResponseBodyDeviceInfoList &) = default ;
    DescribeDeviceInfoResponseBodyDeviceInfoList(DescribeDeviceInfoResponseBodyDeviceInfoList &&) = default ;
    DescribeDeviceInfoResponseBodyDeviceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceInfoResponseBodyDeviceInfoList() = default ;
    DescribeDeviceInfoResponseBodyDeviceInfoList& operator=(const DescribeDeviceInfoResponseBodyDeviceInfoList &) = default ;
    DescribeDeviceInfoResponseBodyDeviceInfoList& operator=(DescribeDeviceInfoResponseBodyDeviceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const vector<Models::DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo> & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, vector<Models::DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo>) };
    inline vector<Models::DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo> deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, vector<Models::DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo>) };
    inline DescribeDeviceInfoResponseBodyDeviceInfoList& setDeviceInfo(const vector<Models::DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo> & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline DescribeDeviceInfoResponseBodyDeviceInfoList& setDeviceInfo(vector<Models::DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo> && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo>> deviceInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
