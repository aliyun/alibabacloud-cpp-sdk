// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserDevicesResponseBodyDevices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Devices, devices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Devices, devices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListUserDevicesResponseBody() = default ;
    ListUserDevicesResponseBody(const ListUserDevicesResponseBody &) = default ;
    ListUserDevicesResponseBody(ListUserDevicesResponseBody &&) = default ;
    ListUserDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDevicesResponseBody() = default ;
    ListUserDevicesResponseBody& operator=(const ListUserDevicesResponseBody &) = default ;
    ListUserDevicesResponseBody& operator=(ListUserDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->devices_ != nullptr
        && this->requestId_ != nullptr && this->totalNum_ != nullptr; };
    // devices Field Functions 
    bool hasDevices() const { return this->devices_ != nullptr;};
    void deleteDevices() { this->devices_ = nullptr;};
    inline const vector<ListUserDevicesResponseBodyDevices> & devices() const { DARABONBA_PTR_GET_CONST(devices_, vector<ListUserDevicesResponseBodyDevices>) };
    inline vector<ListUserDevicesResponseBodyDevices> devices() { DARABONBA_PTR_GET(devices_, vector<ListUserDevicesResponseBodyDevices>) };
    inline ListUserDevicesResponseBody& setDevices(const vector<ListUserDevicesResponseBodyDevices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
    inline ListUserDevicesResponseBody& setDevices(vector<ListUserDevicesResponseBodyDevices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListUserDevicesResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<vector<ListUserDevicesResponseBodyDevices>> devices_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
