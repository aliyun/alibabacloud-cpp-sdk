// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSAPPKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSAPPKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePdnsAppKeysResponseBodyAppKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsAppKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsAppKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppKeys, appKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsAppKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKeys, appKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePdnsAppKeysResponseBody() = default ;
    DescribePdnsAppKeysResponseBody(const DescribePdnsAppKeysResponseBody &) = default ;
    DescribePdnsAppKeysResponseBody(DescribePdnsAppKeysResponseBody &&) = default ;
    DescribePdnsAppKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsAppKeysResponseBody() = default ;
    DescribePdnsAppKeysResponseBody& operator=(const DescribePdnsAppKeysResponseBody &) = default ;
    DescribePdnsAppKeysResponseBody& operator=(DescribePdnsAppKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKeys_ == nullptr
        && return this->requestId_ == nullptr; };
    // appKeys Field Functions 
    bool hasAppKeys() const { return this->appKeys_ != nullptr;};
    void deleteAppKeys() { this->appKeys_ = nullptr;};
    inline const vector<DescribePdnsAppKeysResponseBodyAppKeys> & appKeys() const { DARABONBA_PTR_GET_CONST(appKeys_, vector<DescribePdnsAppKeysResponseBodyAppKeys>) };
    inline vector<DescribePdnsAppKeysResponseBodyAppKeys> appKeys() { DARABONBA_PTR_GET(appKeys_, vector<DescribePdnsAppKeysResponseBodyAppKeys>) };
    inline DescribePdnsAppKeysResponseBody& setAppKeys(const vector<DescribePdnsAppKeysResponseBodyAppKeys> & appKeys) { DARABONBA_PTR_SET_VALUE(appKeys_, appKeys) };
    inline DescribePdnsAppKeysResponseBody& setAppKeys(vector<DescribePdnsAppKeysResponseBodyAppKeys> && appKeys) { DARABONBA_PTR_SET_RVALUE(appKeys_, appKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsAppKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribePdnsAppKeysResponseBodyAppKeys>> appKeys_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
