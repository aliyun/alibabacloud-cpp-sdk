// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDANDCHANELRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDANDCHANELRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceByUserIdAndChanelResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceByUserIdAndChanelResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceOpenId, deviceOpenId_);
      DARABONBA_PTR_TO_JSON(DeviceUnionIds, deviceUnionIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceByUserIdAndChanelResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceOpenId, deviceOpenId_);
      DARABONBA_PTR_FROM_JSON(DeviceUnionIds, deviceUnionIds_);
    };
    ListDeviceByUserIdAndChanelResponseBodyResult() = default ;
    ListDeviceByUserIdAndChanelResponseBodyResult(const ListDeviceByUserIdAndChanelResponseBodyResult &) = default ;
    ListDeviceByUserIdAndChanelResponseBodyResult(ListDeviceByUserIdAndChanelResponseBodyResult &&) = default ;
    ListDeviceByUserIdAndChanelResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceByUserIdAndChanelResponseBodyResult() = default ;
    ListDeviceByUserIdAndChanelResponseBodyResult& operator=(const ListDeviceByUserIdAndChanelResponseBodyResult &) = default ;
    ListDeviceByUserIdAndChanelResponseBodyResult& operator=(ListDeviceByUserIdAndChanelResponseBodyResult &&) = default ;
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
    inline ListDeviceByUserIdAndChanelResponseBodyResult& setDeviceOpenId(string deviceOpenId) { DARABONBA_PTR_SET_VALUE(deviceOpenId_, deviceOpenId) };


    // deviceUnionIds Field Functions 
    bool hasDeviceUnionIds() const { return this->deviceUnionIds_ != nullptr;};
    void deleteDeviceUnionIds() { this->deviceUnionIds_ = nullptr;};
    inline const vector<Models::ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds> & deviceUnionIds() const { DARABONBA_PTR_GET_CONST(deviceUnionIds_, vector<Models::ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds>) };
    inline vector<Models::ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds> deviceUnionIds() { DARABONBA_PTR_GET(deviceUnionIds_, vector<Models::ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds>) };
    inline ListDeviceByUserIdAndChanelResponseBodyResult& setDeviceUnionIds(const vector<Models::ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds> & deviceUnionIds) { DARABONBA_PTR_SET_VALUE(deviceUnionIds_, deviceUnionIds) };
    inline ListDeviceByUserIdAndChanelResponseBodyResult& setDeviceUnionIds(vector<Models::ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds> && deviceUnionIds) { DARABONBA_PTR_SET_RVALUE(deviceUnionIds_, deviceUnionIds) };


  protected:
    std::shared_ptr<string> deviceOpenId_ = nullptr;
    std::shared_ptr<vector<Models::ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds>> deviceUnionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
