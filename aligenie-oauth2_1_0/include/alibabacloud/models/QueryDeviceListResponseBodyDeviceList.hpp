// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICELISTRESPONSEBODYDEVICELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICELISTRESPONSEBODYDEVICELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDeviceListResponseBodyDeviceListDeviceUnionIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class QueryDeviceListResponseBodyDeviceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceListResponseBodyDeviceList& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceIconUrl, deviceIconUrl_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(DeviceOpenId, deviceOpenId_);
      DARABONBA_PTR_TO_JSON(DeviceUnionIds, deviceUnionIds_);
      DARABONBA_PTR_TO_JSON(Online, online_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceListResponseBodyDeviceList& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceIconUrl, deviceIconUrl_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(DeviceOpenId, deviceOpenId_);
      DARABONBA_PTR_FROM_JSON(DeviceUnionIds, deviceUnionIds_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
    };
    QueryDeviceListResponseBodyDeviceList() = default ;
    QueryDeviceListResponseBodyDeviceList(const QueryDeviceListResponseBodyDeviceList &) = default ;
    QueryDeviceListResponseBodyDeviceList(QueryDeviceListResponseBodyDeviceList &&) = default ;
    QueryDeviceListResponseBodyDeviceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceListResponseBodyDeviceList() = default ;
    QueryDeviceListResponseBodyDeviceList& operator=(const QueryDeviceListResponseBodyDeviceList &) = default ;
    QueryDeviceListResponseBodyDeviceList& operator=(QueryDeviceListResponseBodyDeviceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceIconUrl_ != nullptr
        && this->deviceName_ != nullptr && this->deviceOpenId_ != nullptr && this->deviceUnionIds_ != nullptr && this->online_ != nullptr; };
    // deviceIconUrl Field Functions 
    bool hasDeviceIconUrl() const { return this->deviceIconUrl_ != nullptr;};
    void deleteDeviceIconUrl() { this->deviceIconUrl_ = nullptr;};
    inline string deviceIconUrl() const { DARABONBA_PTR_GET_DEFAULT(deviceIconUrl_, "") };
    inline QueryDeviceListResponseBodyDeviceList& setDeviceIconUrl(string deviceIconUrl) { DARABONBA_PTR_SET_VALUE(deviceIconUrl_, deviceIconUrl) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline QueryDeviceListResponseBodyDeviceList& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // deviceOpenId Field Functions 
    bool hasDeviceOpenId() const { return this->deviceOpenId_ != nullptr;};
    void deleteDeviceOpenId() { this->deviceOpenId_ = nullptr;};
    inline string deviceOpenId() const { DARABONBA_PTR_GET_DEFAULT(deviceOpenId_, "") };
    inline QueryDeviceListResponseBodyDeviceList& setDeviceOpenId(string deviceOpenId) { DARABONBA_PTR_SET_VALUE(deviceOpenId_, deviceOpenId) };


    // deviceUnionIds Field Functions 
    bool hasDeviceUnionIds() const { return this->deviceUnionIds_ != nullptr;};
    void deleteDeviceUnionIds() { this->deviceUnionIds_ = nullptr;};
    inline const vector<Models::QueryDeviceListResponseBodyDeviceListDeviceUnionIds> & deviceUnionIds() const { DARABONBA_PTR_GET_CONST(deviceUnionIds_, vector<Models::QueryDeviceListResponseBodyDeviceListDeviceUnionIds>) };
    inline vector<Models::QueryDeviceListResponseBodyDeviceListDeviceUnionIds> deviceUnionIds() { DARABONBA_PTR_GET(deviceUnionIds_, vector<Models::QueryDeviceListResponseBodyDeviceListDeviceUnionIds>) };
    inline QueryDeviceListResponseBodyDeviceList& setDeviceUnionIds(const vector<Models::QueryDeviceListResponseBodyDeviceListDeviceUnionIds> & deviceUnionIds) { DARABONBA_PTR_SET_VALUE(deviceUnionIds_, deviceUnionIds) };
    inline QueryDeviceListResponseBodyDeviceList& setDeviceUnionIds(vector<Models::QueryDeviceListResponseBodyDeviceListDeviceUnionIds> && deviceUnionIds) { DARABONBA_PTR_SET_RVALUE(deviceUnionIds_, deviceUnionIds) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline string online() const { DARABONBA_PTR_GET_DEFAULT(online_, "") };
    inline QueryDeviceListResponseBodyDeviceList& setOnline(string online) { DARABONBA_PTR_SET_VALUE(online_, online) };


  protected:
    std::shared_ptr<string> deviceIconUrl_ = nullptr;
    std::shared_ptr<string> deviceName_ = nullptr;
    std::shared_ptr<string> deviceOpenId_ = nullptr;
    std::shared_ptr<vector<Models::QueryDeviceListResponseBodyDeviceListDeviceUnionIds>> deviceUnionIds_ = nullptr;
    std::shared_ptr<string> online_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
