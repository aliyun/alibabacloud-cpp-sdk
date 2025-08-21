// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDeviceByUserIdResponseBodyResultDeviceUnionIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceByUserIdResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceByUserIdResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceOpenId, deviceOpenId_);
      DARABONBA_PTR_TO_JSON(DeviceUnionIds, deviceUnionIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceByUserIdResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceOpenId, deviceOpenId_);
      DARABONBA_PTR_FROM_JSON(DeviceUnionIds, deviceUnionIds_);
    };
    ListDeviceByUserIdResponseBodyResult() = default ;
    ListDeviceByUserIdResponseBodyResult(const ListDeviceByUserIdResponseBodyResult &) = default ;
    ListDeviceByUserIdResponseBodyResult(ListDeviceByUserIdResponseBodyResult &&) = default ;
    ListDeviceByUserIdResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceByUserIdResponseBodyResult() = default ;
    ListDeviceByUserIdResponseBodyResult& operator=(const ListDeviceByUserIdResponseBodyResult &) = default ;
    ListDeviceByUserIdResponseBodyResult& operator=(ListDeviceByUserIdResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceOpenId_ != nullptr
        && this->deviceUnionIds_ != nullptr; };
    // deviceOpenId Field Functions 
    bool hasDeviceOpenId() const { return this->deviceOpenId_ != nullptr;};
    void deleteDeviceOpenId() { this->deviceOpenId_ = nullptr;};
    inline string deviceOpenId() const { DARABONBA_PTR_GET_DEFAULT(deviceOpenId_, "") };
    inline ListDeviceByUserIdResponseBodyResult& setDeviceOpenId(string deviceOpenId) { DARABONBA_PTR_SET_VALUE(deviceOpenId_, deviceOpenId) };


    // deviceUnionIds Field Functions 
    bool hasDeviceUnionIds() const { return this->deviceUnionIds_ != nullptr;};
    void deleteDeviceUnionIds() { this->deviceUnionIds_ = nullptr;};
    inline const vector<Models::ListDeviceByUserIdResponseBodyResultDeviceUnionIds> & deviceUnionIds() const { DARABONBA_PTR_GET_CONST(deviceUnionIds_, vector<Models::ListDeviceByUserIdResponseBodyResultDeviceUnionIds>) };
    inline vector<Models::ListDeviceByUserIdResponseBodyResultDeviceUnionIds> deviceUnionIds() { DARABONBA_PTR_GET(deviceUnionIds_, vector<Models::ListDeviceByUserIdResponseBodyResultDeviceUnionIds>) };
    inline ListDeviceByUserIdResponseBodyResult& setDeviceUnionIds(const vector<Models::ListDeviceByUserIdResponseBodyResultDeviceUnionIds> & deviceUnionIds) { DARABONBA_PTR_SET_VALUE(deviceUnionIds_, deviceUnionIds) };
    inline ListDeviceByUserIdResponseBodyResult& setDeviceUnionIds(vector<Models::ListDeviceByUserIdResponseBodyResultDeviceUnionIds> && deviceUnionIds) { DARABONBA_PTR_SET_RVALUE(deviceUnionIds_, deviceUnionIds) };


  protected:
    std::shared_ptr<string> deviceOpenId_ = nullptr;
    std::shared_ptr<vector<Models::ListDeviceByUserIdResponseBodyResultDeviceUnionIds>> deviceUnionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
