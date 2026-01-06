// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultipartFileUploadInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultipartFileUploadInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(multipartHeaderSignatureInfos, multipartHeaderSignatureInfos_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultipartFileUploadInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(multipartHeaderSignatureInfos, multipartHeaderSignatureInfos_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetMultipartFileUploadInfosResponseBody() = default ;
    GetMultipartFileUploadInfosResponseBody(const GetMultipartFileUploadInfosResponseBody &) = default ;
    GetMultipartFileUploadInfosResponseBody(GetMultipartFileUploadInfosResponseBody &&) = default ;
    GetMultipartFileUploadInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultipartFileUploadInfosResponseBody() = default ;
    GetMultipartFileUploadInfosResponseBody& operator=(const GetMultipartFileUploadInfosResponseBody &) = default ;
    GetMultipartFileUploadInfosResponseBody& operator=(GetMultipartFileUploadInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MultipartHeaderSignatureInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MultipartHeaderSignatureInfos& obj) { 
        DARABONBA_PTR_TO_JSON(HeaderSignatureInfo, headerSignatureInfo_);
        DARABONBA_PTR_TO_JSON(PartNumber, partNumber_);
      };
      friend void from_json(const Darabonba::Json& j, MultipartHeaderSignatureInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(HeaderSignatureInfo, headerSignatureInfo_);
        DARABONBA_PTR_FROM_JSON(PartNumber, partNumber_);
      };
      MultipartHeaderSignatureInfos() = default ;
      MultipartHeaderSignatureInfos(const MultipartHeaderSignatureInfos &) = default ;
      MultipartHeaderSignatureInfos(MultipartHeaderSignatureInfos &&) = default ;
      MultipartHeaderSignatureInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MultipartHeaderSignatureInfos() = default ;
      MultipartHeaderSignatureInfos& operator=(const MultipartHeaderSignatureInfos &) = default ;
      MultipartHeaderSignatureInfos& operator=(MultipartHeaderSignatureInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HeaderSignatureInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HeaderSignatureInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ExpirationSeconds, expirationSeconds_);
          DARABONBA_PTR_TO_JSON(Headers, headers_);
          DARABONBA_PTR_TO_JSON(InternalResourceUrls, internalResourceUrls_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(ResourceUrls, resourceUrls_);
        };
        friend void from_json(const Darabonba::Json& j, HeaderSignatureInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ExpirationSeconds, expirationSeconds_);
          DARABONBA_PTR_FROM_JSON(Headers, headers_);
          DARABONBA_PTR_FROM_JSON(InternalResourceUrls, internalResourceUrls_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(ResourceUrls, resourceUrls_);
        };
        HeaderSignatureInfo() = default ;
        HeaderSignatureInfo(const HeaderSignatureInfo &) = default ;
        HeaderSignatureInfo(HeaderSignatureInfo &&) = default ;
        HeaderSignatureInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HeaderSignatureInfo() = default ;
        HeaderSignatureInfo& operator=(const HeaderSignatureInfo &) = default ;
        HeaderSignatureInfo& operator=(HeaderSignatureInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->expirationSeconds_ == nullptr
        && this->headers_ == nullptr && this->internalResourceUrls_ == nullptr && this->region_ == nullptr && this->resourceUrls_ == nullptr; };
        // expirationSeconds Field Functions 
        bool hasExpirationSeconds() const { return this->expirationSeconds_ != nullptr;};
        void deleteExpirationSeconds() { this->expirationSeconds_ = nullptr;};
        inline int32_t getExpirationSeconds() const { DARABONBA_PTR_GET_DEFAULT(expirationSeconds_, 0) };
        inline HeaderSignatureInfo& setExpirationSeconds(int32_t expirationSeconds) { DARABONBA_PTR_SET_VALUE(expirationSeconds_, expirationSeconds) };


        // headers Field Functions 
        bool hasHeaders() const { return this->headers_ != nullptr;};
        void deleteHeaders() { this->headers_ = nullptr;};
        inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
        inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
        inline HeaderSignatureInfo& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
        inline HeaderSignatureInfo& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


        // internalResourceUrls Field Functions 
        bool hasInternalResourceUrls() const { return this->internalResourceUrls_ != nullptr;};
        void deleteInternalResourceUrls() { this->internalResourceUrls_ = nullptr;};
        inline const vector<string> & getInternalResourceUrls() const { DARABONBA_PTR_GET_CONST(internalResourceUrls_, vector<string>) };
        inline vector<string> getInternalResourceUrls() { DARABONBA_PTR_GET(internalResourceUrls_, vector<string>) };
        inline HeaderSignatureInfo& setInternalResourceUrls(const vector<string> & internalResourceUrls) { DARABONBA_PTR_SET_VALUE(internalResourceUrls_, internalResourceUrls) };
        inline HeaderSignatureInfo& setInternalResourceUrls(vector<string> && internalResourceUrls) { DARABONBA_PTR_SET_RVALUE(internalResourceUrls_, internalResourceUrls) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline HeaderSignatureInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // resourceUrls Field Functions 
        bool hasResourceUrls() const { return this->resourceUrls_ != nullptr;};
        void deleteResourceUrls() { this->resourceUrls_ = nullptr;};
        inline const vector<string> & getResourceUrls() const { DARABONBA_PTR_GET_CONST(resourceUrls_, vector<string>) };
        inline vector<string> getResourceUrls() { DARABONBA_PTR_GET(resourceUrls_, vector<string>) };
        inline HeaderSignatureInfo& setResourceUrls(const vector<string> & resourceUrls) { DARABONBA_PTR_SET_VALUE(resourceUrls_, resourceUrls) };
        inline HeaderSignatureInfo& setResourceUrls(vector<string> && resourceUrls) { DARABONBA_PTR_SET_RVALUE(resourceUrls_, resourceUrls) };


      protected:
        shared_ptr<int32_t> expirationSeconds_ {};
        shared_ptr<map<string, string>> headers_ {};
        shared_ptr<vector<string>> internalResourceUrls_ {};
        shared_ptr<string> region_ {};
        shared_ptr<vector<string>> resourceUrls_ {};
      };

      virtual bool empty() const override { return this->headerSignatureInfo_ == nullptr
        && this->partNumber_ == nullptr; };
      // headerSignatureInfo Field Functions 
      bool hasHeaderSignatureInfo() const { return this->headerSignatureInfo_ != nullptr;};
      void deleteHeaderSignatureInfo() { this->headerSignatureInfo_ = nullptr;};
      inline const MultipartHeaderSignatureInfos::HeaderSignatureInfo & getHeaderSignatureInfo() const { DARABONBA_PTR_GET_CONST(headerSignatureInfo_, MultipartHeaderSignatureInfos::HeaderSignatureInfo) };
      inline MultipartHeaderSignatureInfos::HeaderSignatureInfo getHeaderSignatureInfo() { DARABONBA_PTR_GET(headerSignatureInfo_, MultipartHeaderSignatureInfos::HeaderSignatureInfo) };
      inline MultipartHeaderSignatureInfos& setHeaderSignatureInfo(const MultipartHeaderSignatureInfos::HeaderSignatureInfo & headerSignatureInfo) { DARABONBA_PTR_SET_VALUE(headerSignatureInfo_, headerSignatureInfo) };
      inline MultipartHeaderSignatureInfos& setHeaderSignatureInfo(MultipartHeaderSignatureInfos::HeaderSignatureInfo && headerSignatureInfo) { DARABONBA_PTR_SET_RVALUE(headerSignatureInfo_, headerSignatureInfo) };


      // partNumber Field Functions 
      bool hasPartNumber() const { return this->partNumber_ != nullptr;};
      void deletePartNumber() { this->partNumber_ = nullptr;};
      inline int32_t getPartNumber() const { DARABONBA_PTR_GET_DEFAULT(partNumber_, 0) };
      inline MultipartHeaderSignatureInfos& setPartNumber(int32_t partNumber) { DARABONBA_PTR_SET_VALUE(partNumber_, partNumber) };


    protected:
      shared_ptr<MultipartHeaderSignatureInfos::HeaderSignatureInfo> headerSignatureInfo_ {};
      shared_ptr<int32_t> partNumber_ {};
    };

    virtual bool empty() const override { return this->multipartHeaderSignatureInfos_ == nullptr
        && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // multipartHeaderSignatureInfos Field Functions 
    bool hasMultipartHeaderSignatureInfos() const { return this->multipartHeaderSignatureInfos_ != nullptr;};
    void deleteMultipartHeaderSignatureInfos() { this->multipartHeaderSignatureInfos_ = nullptr;};
    inline const vector<GetMultipartFileUploadInfosResponseBody::MultipartHeaderSignatureInfos> & getMultipartHeaderSignatureInfos() const { DARABONBA_PTR_GET_CONST(multipartHeaderSignatureInfos_, vector<GetMultipartFileUploadInfosResponseBody::MultipartHeaderSignatureInfos>) };
    inline vector<GetMultipartFileUploadInfosResponseBody::MultipartHeaderSignatureInfos> getMultipartHeaderSignatureInfos() { DARABONBA_PTR_GET(multipartHeaderSignatureInfos_, vector<GetMultipartFileUploadInfosResponseBody::MultipartHeaderSignatureInfos>) };
    inline GetMultipartFileUploadInfosResponseBody& setMultipartHeaderSignatureInfos(const vector<GetMultipartFileUploadInfosResponseBody::MultipartHeaderSignatureInfos> & multipartHeaderSignatureInfos) { DARABONBA_PTR_SET_VALUE(multipartHeaderSignatureInfos_, multipartHeaderSignatureInfos) };
    inline GetMultipartFileUploadInfosResponseBody& setMultipartHeaderSignatureInfos(vector<GetMultipartFileUploadInfosResponseBody::MultipartHeaderSignatureInfos> && multipartHeaderSignatureInfos) { DARABONBA_PTR_SET_RVALUE(multipartHeaderSignatureInfos_, multipartHeaderSignatureInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMultipartFileUploadInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetMultipartFileUploadInfosResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetMultipartFileUploadInfosResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<GetMultipartFileUploadInfosResponseBody::MultipartHeaderSignatureInfos>> multipartHeaderSignatureInfos_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
