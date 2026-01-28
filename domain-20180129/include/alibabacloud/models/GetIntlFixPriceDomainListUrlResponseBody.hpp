// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTLFIXPRICEDOMAINLISTURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTLFIXPRICEDOMAINLISTURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class GetIntlFixPriceDomainListUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntlFixPriceDomainListUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntlFixPriceDomainListUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIntlFixPriceDomainListUrlResponseBody() = default ;
    GetIntlFixPriceDomainListUrlResponseBody(const GetIntlFixPriceDomainListUrlResponseBody &) = default ;
    GetIntlFixPriceDomainListUrlResponseBody(GetIntlFixPriceDomainListUrlResponseBody &&) = default ;
    GetIntlFixPriceDomainListUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntlFixPriceDomainListUrlResponseBody() = default ;
    GetIntlFixPriceDomainListUrlResponseBody& operator=(const GetIntlFixPriceDomainListUrlResponseBody &) = default ;
    GetIntlFixPriceDomainListUrlResponseBody& operator=(GetIntlFixPriceDomainListUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadUrl_ == nullptr; };
      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline Module& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    protected:
      // The URL for downloading the list that contains available fixed-price domain names at the international site (alibabacloud.com).
      shared_ptr<string> downloadUrl_ {};
    };

    virtual bool empty() const override { return this->module_ == nullptr
        && this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetIntlFixPriceDomainListUrlResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, GetIntlFixPriceDomainListUrlResponseBody::Module) };
    inline GetIntlFixPriceDomainListUrlResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, GetIntlFixPriceDomainListUrlResponseBody::Module) };
    inline GetIntlFixPriceDomainListUrlResponseBody& setModule(const GetIntlFixPriceDomainListUrlResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetIntlFixPriceDomainListUrlResponseBody& setModule(GetIntlFixPriceDomainListUrlResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIntlFixPriceDomainListUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetIntlFixPriceDomainListUrlResponseBody::Module> module_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
