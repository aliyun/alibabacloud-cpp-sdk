// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENDIFYAUTOLOGINURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSENDIFYAUTOLOGINURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetSendifyAutoLoginURLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSendifyAutoLoginURLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoLoginURL, autoLoginURL_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSendifyAutoLoginURLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoLoginURL, autoLoginURL_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSendifyAutoLoginURLResponseBody() = default ;
    GetSendifyAutoLoginURLResponseBody(const GetSendifyAutoLoginURLResponseBody &) = default ;
    GetSendifyAutoLoginURLResponseBody(GetSendifyAutoLoginURLResponseBody &&) = default ;
    GetSendifyAutoLoginURLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSendifyAutoLoginURLResponseBody() = default ;
    GetSendifyAutoLoginURLResponseBody& operator=(const GetSendifyAutoLoginURLResponseBody &) = default ;
    GetSendifyAutoLoginURLResponseBody& operator=(GetSendifyAutoLoginURLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoLoginURL_ == nullptr
        && this->requestId_ == nullptr; };
    // autoLoginURL Field Functions 
    bool hasAutoLoginURL() const { return this->autoLoginURL_ != nullptr;};
    void deleteAutoLoginURL() { this->autoLoginURL_ = nullptr;};
    inline string getAutoLoginURL() const { DARABONBA_PTR_GET_DEFAULT(autoLoginURL_, "") };
    inline GetSendifyAutoLoginURLResponseBody& setAutoLoginURL(string autoLoginURL) { DARABONBA_PTR_SET_VALUE(autoLoginURL_, autoLoginURL) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSendifyAutoLoginURLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> autoLoginURL_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
