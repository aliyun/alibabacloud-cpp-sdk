// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICERECORDLIFECYCLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICERECORDLIFECYCLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryDeviceRecordLifeCycleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceRecordLifeCycleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceList, deviceList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceRecordLifeCycleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceList, deviceList_);
    };
    QueryDeviceRecordLifeCycleRequest() = default ;
    QueryDeviceRecordLifeCycleRequest(const QueryDeviceRecordLifeCycleRequest &) = default ;
    QueryDeviceRecordLifeCycleRequest(QueryDeviceRecordLifeCycleRequest &&) = default ;
    QueryDeviceRecordLifeCycleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceRecordLifeCycleRequest() = default ;
    QueryDeviceRecordLifeCycleRequest& operator=(const QueryDeviceRecordLifeCycleRequest &) = default ;
    QueryDeviceRecordLifeCycleRequest& operator=(QueryDeviceRecordLifeCycleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceList_ == nullptr; };
    // deviceList Field Functions 
    bool hasDeviceList() const { return this->deviceList_ != nullptr;};
    void deleteDeviceList() { this->deviceList_ = nullptr;};
    inline const vector<string> & getDeviceList() const { DARABONBA_PTR_GET_CONST(deviceList_, vector<string>) };
    inline vector<string> getDeviceList() { DARABONBA_PTR_GET(deviceList_, vector<string>) };
    inline QueryDeviceRecordLifeCycleRequest& setDeviceList(const vector<string> & deviceList) { DARABONBA_PTR_SET_VALUE(deviceList_, deviceList) };
    inline QueryDeviceRecordLifeCycleRequest& setDeviceList(vector<string> && deviceList) { DARABONBA_PTR_SET_RVALUE(deviceList_, deviceList) };


  protected:
    // The list of IoT IDs of the IPC devices. An IoT ID is a unique identifier issued by IoT Platform for a device. You can call the IoT Platform [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation to query the IoT ID.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> deviceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
