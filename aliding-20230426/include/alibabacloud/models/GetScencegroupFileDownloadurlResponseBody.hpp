// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENCEGROUPFILEDOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCENCEGROUPFILEDOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetScencegroupFileDownloadurlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScencegroupFileDownloadurlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetScencegroupFileDownloadurlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetScencegroupFileDownloadurlResponseBody() = default ;
    GetScencegroupFileDownloadurlResponseBody(const GetScencegroupFileDownloadurlResponseBody &) = default ;
    GetScencegroupFileDownloadurlResponseBody(GetScencegroupFileDownloadurlResponseBody &&) = default ;
    GetScencegroupFileDownloadurlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScencegroupFileDownloadurlResponseBody() = default ;
    GetScencegroupFileDownloadurlResponseBody& operator=(const GetScencegroupFileDownloadurlResponseBody &) = default ;
    GetScencegroupFileDownloadurlResponseBody& operator=(GetScencegroupFileDownloadurlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline GetScencegroupFileDownloadurlResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScencegroupFileDownloadurlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetScencegroupFileDownloadurlResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetScencegroupFileDownloadurlResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> downloadUrl_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
