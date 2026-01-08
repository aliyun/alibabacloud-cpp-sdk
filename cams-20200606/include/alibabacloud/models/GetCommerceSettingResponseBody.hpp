// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMERCESETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMERCESETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetCommerceSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommerceSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommerceSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCommerceSettingResponseBody() = default ;
    GetCommerceSettingResponseBody(const GetCommerceSettingResponseBody &) = default ;
    GetCommerceSettingResponseBody(GetCommerceSettingResponseBody &&) = default ;
    GetCommerceSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommerceSettingResponseBody() = default ;
    GetCommerceSettingResponseBody& operator=(const GetCommerceSettingResponseBody &) = default ;
    GetCommerceSettingResponseBody& operator=(GetCommerceSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CartEnable, cartEnable_);
        DARABONBA_PTR_TO_JSON(CatalogVisible, catalogVisible_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CartEnable, cartEnable_);
        DARABONBA_PTR_FROM_JSON(CatalogVisible, catalogVisible_);
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
      virtual bool empty() const override { return this->cartEnable_ == nullptr
        && this->catalogVisible_ == nullptr; };
      // cartEnable Field Functions 
      bool hasCartEnable() const { return this->cartEnable_ != nullptr;};
      void deleteCartEnable() { this->cartEnable_ = nullptr;};
      inline bool getCartEnable() const { DARABONBA_PTR_GET_DEFAULT(cartEnable_, false) };
      inline Data& setCartEnable(bool cartEnable) { DARABONBA_PTR_SET_VALUE(cartEnable_, cartEnable) };


      // catalogVisible Field Functions 
      bool hasCatalogVisible() const { return this->catalogVisible_ != nullptr;};
      void deleteCatalogVisible() { this->catalogVisible_ = nullptr;};
      inline bool getCatalogVisible() const { DARABONBA_PTR_GET_DEFAULT(catalogVisible_, false) };
      inline Data& setCatalogVisible(bool catalogVisible) { DARABONBA_PTR_SET_VALUE(catalogVisible_, catalogVisible) };


    protected:
      // Indicates whether the shopping cart button is displayed. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> cartEnable_ {};
      // Indicates whether the catalog button is displayed. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> catalogVisible_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetCommerceSettingResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCommerceSettingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCommerceSettingResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCommerceSettingResponseBody::Data) };
    inline GetCommerceSettingResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCommerceSettingResponseBody::Data) };
    inline GetCommerceSettingResponseBody& setData(const GetCommerceSettingResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCommerceSettingResponseBody& setData(GetCommerceSettingResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCommerceSettingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCommerceSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCommerceSettingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Access denied for detailed information.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other values indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/196974.html).
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetCommerceSettingResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
