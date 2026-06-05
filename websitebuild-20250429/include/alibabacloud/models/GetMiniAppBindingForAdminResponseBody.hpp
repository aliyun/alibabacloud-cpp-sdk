// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMINIAPPBINDINGFORADMINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMINIAPPBINDINGFORADMINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetMiniAppBindingForAdminResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMiniAppBindingForAdminResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMiniAppBindingForAdminResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMiniAppBindingForAdminResponseBody() = default ;
    GetMiniAppBindingForAdminResponseBody(const GetMiniAppBindingForAdminResponseBody &) = default ;
    GetMiniAppBindingForAdminResponseBody(GetMiniAppBindingForAdminResponseBody &&) = default ;
    GetMiniAppBindingForAdminResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMiniAppBindingForAdminResponseBody() = default ;
    GetMiniAppBindingForAdminResponseBody& operator=(const GetMiniAppBindingForAdminResponseBody &) = default ;
    GetMiniAppBindingForAdminResponseBody& operator=(GetMiniAppBindingForAdminResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthStatus, authStatus_);
        DARABONBA_PTR_TO_JSON(BizId, bizId_);
        DARABONBA_PTR_TO_JSON(PlatformAppid, platformAppid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthStatus, authStatus_);
        DARABONBA_PTR_FROM_JSON(BizId, bizId_);
        DARABONBA_PTR_FROM_JSON(PlatformAppid, platformAppid_);
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
      virtual bool empty() const override { return this->authStatus_ == nullptr
        && this->bizId_ == nullptr && this->platformAppid_ == nullptr; };
      // authStatus Field Functions 
      bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
      void deleteAuthStatus() { this->authStatus_ = nullptr;};
      inline string getAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, "") };
      inline Data& setAuthStatus(string authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


      // bizId Field Functions 
      bool hasBizId() const { return this->bizId_ != nullptr;};
      void deleteBizId() { this->bizId_ = nullptr;};
      inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
      inline Data& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      // platformAppid Field Functions 
      bool hasPlatformAppid() const { return this->platformAppid_ != nullptr;};
      void deletePlatformAppid() { this->platformAppid_ = nullptr;};
      inline string getPlatformAppid() const { DARABONBA_PTR_GET_DEFAULT(platformAppid_, "") };
      inline Data& setPlatformAppid(string platformAppid) { DARABONBA_PTR_SET_VALUE(platformAppid_, platformAppid) };


    protected:
      shared_ptr<string> authStatus_ {};
      shared_ptr<string> bizId_ {};
      shared_ptr<string> platformAppid_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMiniAppBindingForAdminResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMiniAppBindingForAdminResponseBody::Data) };
    inline GetMiniAppBindingForAdminResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMiniAppBindingForAdminResponseBody::Data) };
    inline GetMiniAppBindingForAdminResponseBody& setData(const GetMiniAppBindingForAdminResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMiniAppBindingForAdminResponseBody& setData(GetMiniAppBindingForAdminResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMiniAppBindingForAdminResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetMiniAppBindingForAdminResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
