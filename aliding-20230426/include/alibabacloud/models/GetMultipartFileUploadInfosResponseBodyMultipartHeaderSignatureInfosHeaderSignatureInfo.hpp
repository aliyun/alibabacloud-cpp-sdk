// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSRESPONSEBODYMULTIPARTHEADERSIGNATUREINFOSHEADERSIGNATUREINFO_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSRESPONSEBODYMULTIPARTHEADERSIGNATUREINFOSHEADERSIGNATUREINFO_HPP_
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
  class GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ExpirationSeconds, expirationSeconds_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(InternalResourceUrls, internalResourceUrls_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceUrls, resourceUrls_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpirationSeconds, expirationSeconds_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(InternalResourceUrls, internalResourceUrls_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceUrls, resourceUrls_);
    };
    GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo() = default ;
    GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo(const GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo &) = default ;
    GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo(GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo &&) = default ;
    GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo() = default ;
    GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo& operator=(const GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo &) = default ;
    GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo& operator=(GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expirationSeconds_ != nullptr
        && this->headers_ != nullptr && this->internalResourceUrls_ != nullptr && this->region_ != nullptr && this->resourceUrls_ != nullptr; };
    // expirationSeconds Field Functions 
    bool hasExpirationSeconds() const { return this->expirationSeconds_ != nullptr;};
    void deleteExpirationSeconds() { this->expirationSeconds_ = nullptr;};
    inline int32_t expirationSeconds() const { DARABONBA_PTR_GET_DEFAULT(expirationSeconds_, 0) };
    inline GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo& setExpirationSeconds(int32_t expirationSeconds) { DARABONBA_PTR_SET_VALUE(expirationSeconds_, expirationSeconds) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // internalResourceUrls Field Functions 
    bool hasInternalResourceUrls() const { return this->internalResourceUrls_ != nullptr;};
    void deleteInternalResourceUrls() { this->internalResourceUrls_ = nullptr;};
    inline const vector<string> & internalResourceUrls() const { DARABONBA_PTR_GET_CONST(internalResourceUrls_, vector<string>) };
    inline vector<string> internalResourceUrls() { DARABONBA_PTR_GET(internalResourceUrls_, vector<string>) };
    inline GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo& setInternalResourceUrls(const vector<string> & internalResourceUrls) { DARABONBA_PTR_SET_VALUE(internalResourceUrls_, internalResourceUrls) };
    inline GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo& setInternalResourceUrls(vector<string> && internalResourceUrls) { DARABONBA_PTR_SET_RVALUE(internalResourceUrls_, internalResourceUrls) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceUrls Field Functions 
    bool hasResourceUrls() const { return this->resourceUrls_ != nullptr;};
    void deleteResourceUrls() { this->resourceUrls_ = nullptr;};
    inline const vector<string> & resourceUrls() const { DARABONBA_PTR_GET_CONST(resourceUrls_, vector<string>) };
    inline vector<string> resourceUrls() { DARABONBA_PTR_GET(resourceUrls_, vector<string>) };
    inline GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo& setResourceUrls(const vector<string> & resourceUrls) { DARABONBA_PTR_SET_VALUE(resourceUrls_, resourceUrls) };
    inline GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfosHeaderSignatureInfo& setResourceUrls(vector<string> && resourceUrls) { DARABONBA_PTR_SET_RVALUE(resourceUrls_, resourceUrls) };


  protected:
    std::shared_ptr<int32_t> expirationSeconds_ = nullptr;
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<vector<string>> internalResourceUrls_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<vector<string>> resourceUrls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
