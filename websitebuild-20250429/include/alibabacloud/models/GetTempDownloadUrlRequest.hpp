// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPDOWNLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPDOWNLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetTempDownloadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTempDownloadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetTempDownloadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
    };
    GetTempDownloadUrlRequest() = default ;
    GetTempDownloadUrlRequest(const GetTempDownloadUrlRequest &) = default ;
    GetTempDownloadUrlRequest(GetTempDownloadUrlRequest &&) = default ;
    GetTempDownloadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTempDownloadUrlRequest() = default ;
    GetTempDownloadUrlRequest& operator=(const GetTempDownloadUrlRequest &) = default ;
    GetTempDownloadUrlRequest& operator=(GetTempDownloadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ossKey_ == nullptr; };
    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline GetTempDownloadUrlRequest& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


  protected:
    shared_ptr<string> ossKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
