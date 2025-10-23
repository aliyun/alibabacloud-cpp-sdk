// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDeviceListResponseBodyDataDeviceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDeviceListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(deviceList, deviceList_);
      DARABONBA_PTR_TO_JSON(factoryId, factoryId_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(deviceList, deviceList_);
      DARABONBA_PTR_FROM_JSON(factoryId, factoryId_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetDeviceListResponseBodyData() = default ;
    GetDeviceListResponseBodyData(const GetDeviceListResponseBodyData &) = default ;
    GetDeviceListResponseBodyData(GetDeviceListResponseBodyData &&) = default ;
    GetDeviceListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceListResponseBodyData() = default ;
    GetDeviceListResponseBodyData& operator=(const GetDeviceListResponseBodyData &) = default ;
    GetDeviceListResponseBodyData& operator=(GetDeviceListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->deviceList_ == nullptr && return this->factoryId_ == nullptr && return this->httpCode_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDeviceListResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // deviceList Field Functions 
    bool hasDeviceList() const { return this->deviceList_ != nullptr;};
    void deleteDeviceList() { this->deviceList_ = nullptr;};
    inline const vector<Models::GetDeviceListResponseBodyDataDeviceList> & deviceList() const { DARABONBA_PTR_GET_CONST(deviceList_, vector<Models::GetDeviceListResponseBodyDataDeviceList>) };
    inline vector<Models::GetDeviceListResponseBodyDataDeviceList> deviceList() { DARABONBA_PTR_GET(deviceList_, vector<Models::GetDeviceListResponseBodyDataDeviceList>) };
    inline GetDeviceListResponseBodyData& setDeviceList(const vector<Models::GetDeviceListResponseBodyDataDeviceList> & deviceList) { DARABONBA_PTR_SET_VALUE(deviceList_, deviceList) };
    inline GetDeviceListResponseBodyData& setDeviceList(vector<Models::GetDeviceListResponseBodyDataDeviceList> && deviceList) { DARABONBA_PTR_SET_RVALUE(deviceList_, deviceList) };


    // factoryId Field Functions 
    bool hasFactoryId() const { return this->factoryId_ != nullptr;};
    void deleteFactoryId() { this->factoryId_ = nullptr;};
    inline string factoryId() const { DARABONBA_PTR_GET_DEFAULT(factoryId_, "") };
    inline GetDeviceListResponseBodyData& setFactoryId(string factoryId) { DARABONBA_PTR_SET_VALUE(factoryId_, factoryId) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetDeviceListResponseBodyData& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDeviceListResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The code returned for the request.
    std::shared_ptr<string> code_ = nullptr;
    // The devices.
    std::shared_ptr<vector<Models::GetDeviceListResponseBodyDataDeviceList>> deviceList_ = nullptr;
    // The ID of the site.
    std::shared_ptr<string> factoryId_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpCode_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
