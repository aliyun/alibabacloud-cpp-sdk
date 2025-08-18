// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFBOTAPPKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWAFBOTAPPKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafBotAppKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafBotAppKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafBotAppKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetWafBotAppKeyResponseBody() = default ;
    GetWafBotAppKeyResponseBody(const GetWafBotAppKeyResponseBody &) = default ;
    GetWafBotAppKeyResponseBody(GetWafBotAppKeyResponseBody &&) = default ;
    GetWafBotAppKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafBotAppKeyResponseBody() = default ;
    GetWafBotAppKeyResponseBody& operator=(const GetWafBotAppKeyResponseBody &) = default ;
    GetWafBotAppKeyResponseBody& operator=(GetWafBotAppKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->requestId_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline GetWafBotAppKeyResponseBody& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWafBotAppKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Application key.
    std::shared_ptr<string> appKey_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
