// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHLOGINTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFRESHLOGINTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class RefreshLoginTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshLoginTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshLoginTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RefreshLoginTokenResponseBody() = default ;
    RefreshLoginTokenResponseBody(const RefreshLoginTokenResponseBody &) = default ;
    RefreshLoginTokenResponseBody(RefreshLoginTokenResponseBody &&) = default ;
    RefreshLoginTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshLoginTokenResponseBody() = default ;
    RefreshLoginTokenResponseBody& operator=(const RefreshLoginTokenResponseBody &) = default ;
    RefreshLoginTokenResponseBody& operator=(RefreshLoginTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loginToken_ != nullptr
        && this->requestId_ != nullptr; };
    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string loginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline RefreshLoginTokenResponseBody& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefreshLoginTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> loginToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
