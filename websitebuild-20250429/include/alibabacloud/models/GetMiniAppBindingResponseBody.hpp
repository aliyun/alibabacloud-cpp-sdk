// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMINIAPPBINDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMINIAPPBINDINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetMiniAppBindingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMiniAppBindingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMiniAppBindingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMiniAppBindingResponseBody() = default ;
    GetMiniAppBindingResponseBody(const GetMiniAppBindingResponseBody &) = default ;
    GetMiniAppBindingResponseBody(GetMiniAppBindingResponseBody &&) = default ;
    GetMiniAppBindingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMiniAppBindingResponseBody() = default ;
    GetMiniAppBindingResponseBody& operator=(const GetMiniAppBindingResponseBody &) = default ;
    GetMiniAppBindingResponseBody& operator=(GetMiniAppBindingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthStatus, authStatus_);
        DARABONBA_PTR_TO_JSON(BizId, bizId_);
        DARABONBA_PTR_TO_JSON(IcpFiled, icpFiled_);
        DARABONBA_PTR_TO_JSON(PlatformAppid, platformAppid_);
        DARABONBA_PTR_TO_JSON(PreviewQrCodeUrl, previewQrCodeUrl_);
        DARABONBA_PTR_TO_JSON(ProductionQrCodeUrl, productionQrCodeUrl_);
        DARABONBA_PTR_TO_JSON(SettingValues, settingValues_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthStatus, authStatus_);
        DARABONBA_PTR_FROM_JSON(BizId, bizId_);
        DARABONBA_PTR_FROM_JSON(IcpFiled, icpFiled_);
        DARABONBA_PTR_FROM_JSON(PlatformAppid, platformAppid_);
        DARABONBA_PTR_FROM_JSON(PreviewQrCodeUrl, previewQrCodeUrl_);
        DARABONBA_PTR_FROM_JSON(ProductionQrCodeUrl, productionQrCodeUrl_);
        DARABONBA_PTR_FROM_JSON(SettingValues, settingValues_);
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
        && this->bizId_ == nullptr && this->icpFiled_ == nullptr && this->platformAppid_ == nullptr && this->previewQrCodeUrl_ == nullptr && this->productionQrCodeUrl_ == nullptr
        && this->settingValues_ == nullptr; };
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


      // icpFiled Field Functions 
      bool hasIcpFiled() const { return this->icpFiled_ != nullptr;};
      void deleteIcpFiled() { this->icpFiled_ = nullptr;};
      inline bool getIcpFiled() const { DARABONBA_PTR_GET_DEFAULT(icpFiled_, false) };
      inline Data& setIcpFiled(bool icpFiled) { DARABONBA_PTR_SET_VALUE(icpFiled_, icpFiled) };


      // platformAppid Field Functions 
      bool hasPlatformAppid() const { return this->platformAppid_ != nullptr;};
      void deletePlatformAppid() { this->platformAppid_ = nullptr;};
      inline string getPlatformAppid() const { DARABONBA_PTR_GET_DEFAULT(platformAppid_, "") };
      inline Data& setPlatformAppid(string platformAppid) { DARABONBA_PTR_SET_VALUE(platformAppid_, platformAppid) };


      // previewQrCodeUrl Field Functions 
      bool hasPreviewQrCodeUrl() const { return this->previewQrCodeUrl_ != nullptr;};
      void deletePreviewQrCodeUrl() { this->previewQrCodeUrl_ = nullptr;};
      inline string getPreviewQrCodeUrl() const { DARABONBA_PTR_GET_DEFAULT(previewQrCodeUrl_, "") };
      inline Data& setPreviewQrCodeUrl(string previewQrCodeUrl) { DARABONBA_PTR_SET_VALUE(previewQrCodeUrl_, previewQrCodeUrl) };


      // productionQrCodeUrl Field Functions 
      bool hasProductionQrCodeUrl() const { return this->productionQrCodeUrl_ != nullptr;};
      void deleteProductionQrCodeUrl() { this->productionQrCodeUrl_ = nullptr;};
      inline string getProductionQrCodeUrl() const { DARABONBA_PTR_GET_DEFAULT(productionQrCodeUrl_, "") };
      inline Data& setProductionQrCodeUrl(string productionQrCodeUrl) { DARABONBA_PTR_SET_VALUE(productionQrCodeUrl_, productionQrCodeUrl) };


      // settingValues Field Functions 
      bool hasSettingValues() const { return this->settingValues_ != nullptr;};
      void deleteSettingValues() { this->settingValues_ = nullptr;};
      inline const map<string, string> & getSettingValues() const { DARABONBA_PTR_GET_CONST(settingValues_, map<string, string>) };
      inline map<string, string> getSettingValues() { DARABONBA_PTR_GET(settingValues_, map<string, string>) };
      inline Data& setSettingValues(const map<string, string> & settingValues) { DARABONBA_PTR_SET_VALUE(settingValues_, settingValues) };
      inline Data& setSettingValues(map<string, string> && settingValues) { DARABONBA_PTR_SET_RVALUE(settingValues_, settingValues) };


    protected:
      // Authorization status
      shared_ptr<string> authStatus_ {};
      // Business ID
      shared_ptr<string> bizId_ {};
      // ICP filing status
      shared_ptr<bool> icpFiled_ {};
      // Miniapp ID
      shared_ptr<string> platformAppid_ {};
      // Preview QR code
      shared_ptr<string> previewQrCodeUrl_ {};
      // Production QR code
      shared_ptr<string> productionQrCodeUrl_ {};
      // Extension information
      shared_ptr<map<string, string>> settingValues_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMiniAppBindingResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMiniAppBindingResponseBody::Data) };
    inline GetMiniAppBindingResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMiniAppBindingResponseBody::Data) };
    inline GetMiniAppBindingResponseBody& setData(const GetMiniAppBindingResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMiniAppBindingResponseBody& setData(GetMiniAppBindingResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMiniAppBindingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Request result.
    shared_ptr<GetMiniAppBindingResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
