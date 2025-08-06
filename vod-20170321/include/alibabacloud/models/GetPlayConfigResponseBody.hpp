// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPlayConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlayConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(PlayDeviceAbilityList, playDeviceAbilityList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(PlayDeviceAbilityList, playDeviceAbilityList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPlayConfigResponseBody() = default ;
    GetPlayConfigResponseBody(const GetPlayConfigResponseBody &) = default ;
    GetPlayConfigResponseBody(GetPlayConfigResponseBody &&) = default ;
    GetPlayConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlayConfigResponseBody() = default ;
    GetPlayConfigResponseBody& operator=(const GetPlayConfigResponseBody &) = default ;
    GetPlayConfigResponseBody& operator=(GetPlayConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configType_ != nullptr
        && this->playDeviceAbilityList_ != nullptr && this->requestId_ != nullptr; };
    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetPlayConfigResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // playDeviceAbilityList Field Functions 
    bool hasPlayDeviceAbilityList() const { return this->playDeviceAbilityList_ != nullptr;};
    void deletePlayDeviceAbilityList() { this->playDeviceAbilityList_ = nullptr;};
    inline const vector<string> & playDeviceAbilityList() const { DARABONBA_PTR_GET_CONST(playDeviceAbilityList_, vector<string>) };
    inline vector<string> playDeviceAbilityList() { DARABONBA_PTR_GET(playDeviceAbilityList_, vector<string>) };
    inline GetPlayConfigResponseBody& setPlayDeviceAbilityList(const vector<string> & playDeviceAbilityList) { DARABONBA_PTR_SET_VALUE(playDeviceAbilityList_, playDeviceAbilityList) };
    inline GetPlayConfigResponseBody& setPlayDeviceAbilityList(vector<string> && playDeviceAbilityList) { DARABONBA_PTR_SET_RVALUE(playDeviceAbilityList_, playDeviceAbilityList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPlayConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> configType_ = nullptr;
    std::shared_ptr<vector<string>> playDeviceAbilityList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
