// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSAPPKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSAPPKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePdnsAppKeyResponseBodyAppKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsAppKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsAppKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsAppKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePdnsAppKeyResponseBody() = default ;
    DescribePdnsAppKeyResponseBody(const DescribePdnsAppKeyResponseBody &) = default ;
    DescribePdnsAppKeyResponseBody(DescribePdnsAppKeyResponseBody &&) = default ;
    DescribePdnsAppKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsAppKeyResponseBody() = default ;
    DescribePdnsAppKeyResponseBody& operator=(const DescribePdnsAppKeyResponseBody &) = default ;
    DescribePdnsAppKeyResponseBody& operator=(DescribePdnsAppKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->requestId_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline const DescribePdnsAppKeyResponseBodyAppKey & appKey() const { DARABONBA_PTR_GET_CONST(appKey_, DescribePdnsAppKeyResponseBodyAppKey) };
    inline DescribePdnsAppKeyResponseBodyAppKey appKey() { DARABONBA_PTR_GET(appKey_, DescribePdnsAppKeyResponseBodyAppKey) };
    inline DescribePdnsAppKeyResponseBody& setAppKey(const DescribePdnsAppKeyResponseBodyAppKey & appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };
    inline DescribePdnsAppKeyResponseBody& setAppKey(DescribePdnsAppKeyResponseBodyAppKey && appKey) { DARABONBA_PTR_SET_RVALUE(appKey_, appKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsAppKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribePdnsAppKeyResponseBodyAppKey> appKey_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
