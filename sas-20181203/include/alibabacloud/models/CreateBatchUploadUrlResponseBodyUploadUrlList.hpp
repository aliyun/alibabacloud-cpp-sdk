// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHUPLOADURLRESPONSEBODYUPLOADURLLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHUPLOADURLRESPONSEBODYUPLOADURLLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateBatchUploadUrlResponseBodyUploadUrlListContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateBatchUploadUrlResponseBodyUploadUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchUploadUrlResponseBodyUploadUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(FileExist, fileExist_);
      DARABONBA_PTR_TO_JSON(InternalUrl, internalUrl_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(PublicUrl, publicUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchUploadUrlResponseBodyUploadUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(FileExist, fileExist_);
      DARABONBA_PTR_FROM_JSON(InternalUrl, internalUrl_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(PublicUrl, publicUrl_);
    };
    CreateBatchUploadUrlResponseBodyUploadUrlList() = default ;
    CreateBatchUploadUrlResponseBodyUploadUrlList(const CreateBatchUploadUrlResponseBodyUploadUrlList &) = default ;
    CreateBatchUploadUrlResponseBodyUploadUrlList(CreateBatchUploadUrlResponseBodyUploadUrlList &&) = default ;
    CreateBatchUploadUrlResponseBodyUploadUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchUploadUrlResponseBodyUploadUrlList() = default ;
    CreateBatchUploadUrlResponseBodyUploadUrlList& operator=(const CreateBatchUploadUrlResponseBodyUploadUrlList &) = default ;
    CreateBatchUploadUrlResponseBodyUploadUrlList& operator=(CreateBatchUploadUrlResponseBodyUploadUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->context_ != nullptr
        && this->expire_ != nullptr && this->fileExist_ != nullptr && this->internalUrl_ != nullptr && this->md5_ != nullptr && this->publicUrl_ != nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const Models::CreateBatchUploadUrlResponseBodyUploadUrlListContext & context() const { DARABONBA_PTR_GET_CONST(context_, Models::CreateBatchUploadUrlResponseBodyUploadUrlListContext) };
    inline Models::CreateBatchUploadUrlResponseBodyUploadUrlListContext context() { DARABONBA_PTR_GET(context_, Models::CreateBatchUploadUrlResponseBodyUploadUrlListContext) };
    inline CreateBatchUploadUrlResponseBodyUploadUrlList& setContext(const Models::CreateBatchUploadUrlResponseBodyUploadUrlListContext & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline CreateBatchUploadUrlResponseBodyUploadUrlList& setContext(Models::CreateBatchUploadUrlResponseBodyUploadUrlListContext && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline string expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
    inline CreateBatchUploadUrlResponseBodyUploadUrlList& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // fileExist Field Functions 
    bool hasFileExist() const { return this->fileExist_ != nullptr;};
    void deleteFileExist() { this->fileExist_ = nullptr;};
    inline bool fileExist() const { DARABONBA_PTR_GET_DEFAULT(fileExist_, false) };
    inline CreateBatchUploadUrlResponseBodyUploadUrlList& setFileExist(bool fileExist) { DARABONBA_PTR_SET_VALUE(fileExist_, fileExist) };


    // internalUrl Field Functions 
    bool hasInternalUrl() const { return this->internalUrl_ != nullptr;};
    void deleteInternalUrl() { this->internalUrl_ = nullptr;};
    inline string internalUrl() const { DARABONBA_PTR_GET_DEFAULT(internalUrl_, "") };
    inline CreateBatchUploadUrlResponseBodyUploadUrlList& setInternalUrl(string internalUrl) { DARABONBA_PTR_SET_VALUE(internalUrl_, internalUrl) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline CreateBatchUploadUrlResponseBodyUploadUrlList& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // publicUrl Field Functions 
    bool hasPublicUrl() const { return this->publicUrl_ != nullptr;};
    void deletePublicUrl() { this->publicUrl_ = nullptr;};
    inline string publicUrl() const { DARABONBA_PTR_GET_DEFAULT(publicUrl_, "") };
    inline CreateBatchUploadUrlResponseBodyUploadUrlList& setPublicUrl(string publicUrl) { DARABONBA_PTR_SET_VALUE(publicUrl_, publicUrl) };


  protected:
    // The signature information.
    std::shared_ptr<Models::CreateBatchUploadUrlResponseBodyUploadUrlListContext> context_ = nullptr;
    // The timestamp when the values of the parameters expire. Unit: milliseconds.
    std::shared_ptr<string> expire_ = nullptr;
    // Indicates whether the file exists in the cloud. Valid values:
    // 
    // *   **true**: The file exists in the cloud. You do not need to upload the file.
    // *   **false**: The file does not exist in the cloud. You must upload the file.
    std::shared_ptr<bool> fileExist_ = nullptr;
    // The internal endpoint of the URL to which the file is uploaded.
    std::shared_ptr<string> internalUrl_ = nullptr;
    // The identifier of the file.
    std::shared_ptr<string> md5_ = nullptr;
    // The public endpoint of the URL to which the file is uploaded.
    std::shared_ptr<string> publicUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
