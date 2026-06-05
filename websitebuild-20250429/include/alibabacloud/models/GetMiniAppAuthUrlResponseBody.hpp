// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMINIAPPAUTHURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMINIAPPAUTHURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetMiniAppAuthUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMiniAppAuthUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMiniAppAuthUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMiniAppAuthUrlResponseBody() = default ;
    GetMiniAppAuthUrlResponseBody(const GetMiniAppAuthUrlResponseBody &) = default ;
    GetMiniAppAuthUrlResponseBody(GetMiniAppAuthUrlResponseBody &&) = default ;
    GetMiniAppAuthUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMiniAppAuthUrlResponseBody() = default ;
    GetMiniAppAuthUrlResponseBody& operator=(const GetMiniAppAuthUrlResponseBody &) = default ;
    GetMiniAppAuthUrlResponseBody& operator=(GetMiniAppAuthUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthUrl, authUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthUrl, authUrl_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authUrl_ == nullptr; };
      // authUrl Field Functions 
      bool hasAuthUrl() const { return this->authUrl_ != nullptr;};
      void deleteAuthUrl() { this->authUrl_ = nullptr;};
      inline string getAuthUrl() const { DARABONBA_PTR_GET_DEFAULT(authUrl_, "") };
      inline Data& setAuthUrl(string authUrl) { DARABONBA_PTR_SET_VALUE(authUrl_, authUrl) };


    protected:
      shared_ptr<string> authUrl_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMiniAppAuthUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMiniAppAuthUrlResponseBody::Data) };
    inline GetMiniAppAuthUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMiniAppAuthUrlResponseBody::Data) };
    inline GetMiniAppAuthUrlResponseBody& setData(const GetMiniAppAuthUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMiniAppAuthUrlResponseBody& setData(GetMiniAppAuthUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMiniAppAuthUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetMiniAppAuthUrlResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
