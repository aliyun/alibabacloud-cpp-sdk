// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICESTATUSINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICESTATUSINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceStatusInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceStatusInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Online, online_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceStatusInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Online, online_);
    };
    GetDeviceStatusInfoResponseBodyResult() = default ;
    GetDeviceStatusInfoResponseBodyResult(const GetDeviceStatusInfoResponseBodyResult &) = default ;
    GetDeviceStatusInfoResponseBodyResult(GetDeviceStatusInfoResponseBodyResult &&) = default ;
    GetDeviceStatusInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceStatusInfoResponseBodyResult() = default ;
    GetDeviceStatusInfoResponseBodyResult& operator=(const GetDeviceStatusInfoResponseBodyResult &) = default ;
    GetDeviceStatusInfoResponseBodyResult& operator=(GetDeviceStatusInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->online_ != nullptr; };
    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline int32_t online() const { DARABONBA_PTR_GET_DEFAULT(online_, 0) };
    inline GetDeviceStatusInfoResponseBodyResult& setOnline(int32_t online) { DARABONBA_PTR_SET_VALUE(online_, online) };


  protected:
    std::shared_ptr<int32_t> online_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
