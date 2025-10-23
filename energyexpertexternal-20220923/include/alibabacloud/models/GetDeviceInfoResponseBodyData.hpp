// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDeviceInfoResponseBodyDataRecordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDeviceInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(deviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(deviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(firstTypeName, firstTypeName_);
      DARABONBA_PTR_TO_JSON(recordList, recordList_);
      DARABONBA_PTR_TO_JSON(secondTypeName, secondTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(deviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(deviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(firstTypeName, firstTypeName_);
      DARABONBA_PTR_FROM_JSON(recordList, recordList_);
      DARABONBA_PTR_FROM_JSON(secondTypeName, secondTypeName_);
    };
    GetDeviceInfoResponseBodyData() = default ;
    GetDeviceInfoResponseBodyData(const GetDeviceInfoResponseBodyData &) = default ;
    GetDeviceInfoResponseBodyData(GetDeviceInfoResponseBodyData &&) = default ;
    GetDeviceInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceInfoResponseBodyData() = default ;
    GetDeviceInfoResponseBodyData& operator=(const GetDeviceInfoResponseBodyData &) = default ;
    GetDeviceInfoResponseBodyData& operator=(GetDeviceInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && return this->deviceName_ == nullptr && return this->firstTypeName_ == nullptr && return this->recordList_ == nullptr && return this->secondTypeName_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline GetDeviceInfoResponseBodyData& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline GetDeviceInfoResponseBodyData& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // firstTypeName Field Functions 
    bool hasFirstTypeName() const { return this->firstTypeName_ != nullptr;};
    void deleteFirstTypeName() { this->firstTypeName_ = nullptr;};
    inline string firstTypeName() const { DARABONBA_PTR_GET_DEFAULT(firstTypeName_, "") };
    inline GetDeviceInfoResponseBodyData& setFirstTypeName(string firstTypeName) { DARABONBA_PTR_SET_VALUE(firstTypeName_, firstTypeName) };


    // recordList Field Functions 
    bool hasRecordList() const { return this->recordList_ != nullptr;};
    void deleteRecordList() { this->recordList_ = nullptr;};
    inline const vector<Models::GetDeviceInfoResponseBodyDataRecordList> & recordList() const { DARABONBA_PTR_GET_CONST(recordList_, vector<Models::GetDeviceInfoResponseBodyDataRecordList>) };
    inline vector<Models::GetDeviceInfoResponseBodyDataRecordList> recordList() { DARABONBA_PTR_GET(recordList_, vector<Models::GetDeviceInfoResponseBodyDataRecordList>) };
    inline GetDeviceInfoResponseBodyData& setRecordList(const vector<Models::GetDeviceInfoResponseBodyDataRecordList> & recordList) { DARABONBA_PTR_SET_VALUE(recordList_, recordList) };
    inline GetDeviceInfoResponseBodyData& setRecordList(vector<Models::GetDeviceInfoResponseBodyDataRecordList> && recordList) { DARABONBA_PTR_SET_RVALUE(recordList_, recordList) };


    // secondTypeName Field Functions 
    bool hasSecondTypeName() const { return this->secondTypeName_ != nullptr;};
    void deleteSecondTypeName() { this->secondTypeName_ = nullptr;};
    inline string secondTypeName() const { DARABONBA_PTR_GET_DEFAULT(secondTypeName_, "") };
    inline GetDeviceInfoResponseBodyData& setSecondTypeName(string secondTypeName) { DARABONBA_PTR_SET_VALUE(secondTypeName_, secondTypeName) };


  protected:
    // The ID of the device.
    std::shared_ptr<string> deviceId_ = nullptr;
    // The name of the device.
    std::shared_ptr<string> deviceName_ = nullptr;
    // The level 1 meter type.
    std::shared_ptr<string> firstTypeName_ = nullptr;
    // The device parameters.
    std::shared_ptr<vector<Models::GetDeviceInfoResponseBodyDataRecordList>> recordList_ = nullptr;
    // The level 2 meter type.
    std::shared_ptr<string> secondTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
