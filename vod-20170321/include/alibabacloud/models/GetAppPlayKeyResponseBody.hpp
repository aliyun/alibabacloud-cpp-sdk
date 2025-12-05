// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPPLAYKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPPLAYKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAppPlayKeyResponseBodyAppPlayKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAppPlayKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppPlayKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppPlayKey, appPlayKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppPlayKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPlayKey, appPlayKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAppPlayKeyResponseBody() = default ;
    GetAppPlayKeyResponseBody(const GetAppPlayKeyResponseBody &) = default ;
    GetAppPlayKeyResponseBody(GetAppPlayKeyResponseBody &&) = default ;
    GetAppPlayKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppPlayKeyResponseBody() = default ;
    GetAppPlayKeyResponseBody& operator=(const GetAppPlayKeyResponseBody &) = default ;
    GetAppPlayKeyResponseBody& operator=(GetAppPlayKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appPlayKey_ == nullptr
        && return this->requestId_ == nullptr; };
    // appPlayKey Field Functions 
    bool hasAppPlayKey() const { return this->appPlayKey_ != nullptr;};
    void deleteAppPlayKey() { this->appPlayKey_ = nullptr;};
    inline const GetAppPlayKeyResponseBodyAppPlayKey & appPlayKey() const { DARABONBA_PTR_GET_CONST(appPlayKey_, GetAppPlayKeyResponseBodyAppPlayKey) };
    inline GetAppPlayKeyResponseBodyAppPlayKey appPlayKey() { DARABONBA_PTR_GET(appPlayKey_, GetAppPlayKeyResponseBodyAppPlayKey) };
    inline GetAppPlayKeyResponseBody& setAppPlayKey(const GetAppPlayKeyResponseBodyAppPlayKey & appPlayKey) { DARABONBA_PTR_SET_VALUE(appPlayKey_, appPlayKey) };
    inline GetAppPlayKeyResponseBody& setAppPlayKey(GetAppPlayKeyResponseBodyAppPlayKey && appPlayKey) { DARABONBA_PTR_SET_RVALUE(appPlayKey_, appPlayKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppPlayKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetAppPlayKeyResponseBodyAppPlayKey> appPlayKey_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
