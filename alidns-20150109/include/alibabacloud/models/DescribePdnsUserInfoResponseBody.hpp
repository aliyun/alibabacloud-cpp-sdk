// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSUSERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSUSERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePdnsUserInfoResponseBodyUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsUserInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsUserInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsUserInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    DescribePdnsUserInfoResponseBody() = default ;
    DescribePdnsUserInfoResponseBody(const DescribePdnsUserInfoResponseBody &) = default ;
    DescribePdnsUserInfoResponseBody(DescribePdnsUserInfoResponseBody &&) = default ;
    DescribePdnsUserInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsUserInfoResponseBody() = default ;
    DescribePdnsUserInfoResponseBody& operator=(const DescribePdnsUserInfoResponseBody &) = default ;
    DescribePdnsUserInfoResponseBody& operator=(DescribePdnsUserInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->userInfo_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsUserInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const DescribePdnsUserInfoResponseBodyUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, DescribePdnsUserInfoResponseBodyUserInfo) };
    inline DescribePdnsUserInfoResponseBodyUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, DescribePdnsUserInfoResponseBodyUserInfo) };
    inline DescribePdnsUserInfoResponseBody& setUserInfo(const DescribePdnsUserInfoResponseBodyUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline DescribePdnsUserInfoResponseBody& setUserInfo(DescribePdnsUserInfoResponseBodyUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the user.
    std::shared_ptr<DescribePdnsUserInfoResponseBodyUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
