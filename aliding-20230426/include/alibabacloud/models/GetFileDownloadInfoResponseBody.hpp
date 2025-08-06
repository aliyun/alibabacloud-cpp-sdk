// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDOWNLOADINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDOWNLOADINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFileDownloadInfoResponseBodyHeaderSignatureInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFileDownloadInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDownloadInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(headerSignatureInfo, headerSignatureInfo_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDownloadInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(headerSignatureInfo, headerSignatureInfo_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetFileDownloadInfoResponseBody() = default ;
    GetFileDownloadInfoResponseBody(const GetFileDownloadInfoResponseBody &) = default ;
    GetFileDownloadInfoResponseBody(GetFileDownloadInfoResponseBody &&) = default ;
    GetFileDownloadInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDownloadInfoResponseBody() = default ;
    GetFileDownloadInfoResponseBody& operator=(const GetFileDownloadInfoResponseBody &) = default ;
    GetFileDownloadInfoResponseBody& operator=(GetFileDownloadInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headerSignatureInfo_ != nullptr
        && this->protocol_ != nullptr && this->requestId_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // headerSignatureInfo Field Functions 
    bool hasHeaderSignatureInfo() const { return this->headerSignatureInfo_ != nullptr;};
    void deleteHeaderSignatureInfo() { this->headerSignatureInfo_ = nullptr;};
    inline const GetFileDownloadInfoResponseBodyHeaderSignatureInfo & headerSignatureInfo() const { DARABONBA_PTR_GET_CONST(headerSignatureInfo_, GetFileDownloadInfoResponseBodyHeaderSignatureInfo) };
    inline GetFileDownloadInfoResponseBodyHeaderSignatureInfo headerSignatureInfo() { DARABONBA_PTR_GET(headerSignatureInfo_, GetFileDownloadInfoResponseBodyHeaderSignatureInfo) };
    inline GetFileDownloadInfoResponseBody& setHeaderSignatureInfo(const GetFileDownloadInfoResponseBodyHeaderSignatureInfo & headerSignatureInfo) { DARABONBA_PTR_SET_VALUE(headerSignatureInfo_, headerSignatureInfo) };
    inline GetFileDownloadInfoResponseBody& setHeaderSignatureInfo(GetFileDownloadInfoResponseBodyHeaderSignatureInfo && headerSignatureInfo) { DARABONBA_PTR_SET_RVALUE(headerSignatureInfo_, headerSignatureInfo) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetFileDownloadInfoResponseBody& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileDownloadInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetFileDownloadInfoResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetFileDownloadInfoResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<GetFileDownloadInfoResponseBodyHeaderSignatureInfo> headerSignatureInfo_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
