// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICESBYACCOUNTRESPONSEBODYDEVICEIDS_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICESBYACCOUNTRESPONSEBODYDEVICEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryDevicesByAccountResponseBodyDeviceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDevicesByAccountResponseBodyDeviceIds& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDevicesByAccountResponseBodyDeviceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
    };
    QueryDevicesByAccountResponseBodyDeviceIds() = default ;
    QueryDevicesByAccountResponseBodyDeviceIds(const QueryDevicesByAccountResponseBodyDeviceIds &) = default ;
    QueryDevicesByAccountResponseBodyDeviceIds(QueryDevicesByAccountResponseBodyDeviceIds &&) = default ;
    QueryDevicesByAccountResponseBodyDeviceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDevicesByAccountResponseBodyDeviceIds() = default ;
    QueryDevicesByAccountResponseBodyDeviceIds& operator=(const QueryDevicesByAccountResponseBodyDeviceIds &) = default ;
    QueryDevicesByAccountResponseBodyDeviceIds& operator=(QueryDevicesByAccountResponseBodyDeviceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceId_ != nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline const vector<string> & deviceId() const { DARABONBA_PTR_GET_CONST(deviceId_, vector<string>) };
    inline vector<string> deviceId() { DARABONBA_PTR_GET(deviceId_, vector<string>) };
    inline QueryDevicesByAccountResponseBodyDeviceIds& setDeviceId(const vector<string> & deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };
    inline QueryDevicesByAccountResponseBodyDeviceIds& setDeviceId(vector<string> && deviceId) { DARABONBA_PTR_SET_RVALUE(deviceId_, deviceId) };


  protected:
    std::shared_ptr<vector<string>> deviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
