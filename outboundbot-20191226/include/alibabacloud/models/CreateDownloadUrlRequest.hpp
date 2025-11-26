// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOWNLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOWNLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateDownloadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDownloadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadTaskId, downloadTaskId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDownloadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadTaskId, downloadTaskId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
    };
    CreateDownloadUrlRequest() = default ;
    CreateDownloadUrlRequest(const CreateDownloadUrlRequest &) = default ;
    CreateDownloadUrlRequest(CreateDownloadUrlRequest &&) = default ;
    CreateDownloadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDownloadUrlRequest() = default ;
    CreateDownloadUrlRequest& operator=(const CreateDownloadUrlRequest &) = default ;
    CreateDownloadUrlRequest& operator=(CreateDownloadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadTaskId_ == nullptr
        && return this->fileId_ == nullptr; };
    // downloadTaskId Field Functions 
    bool hasDownloadTaskId() const { return this->downloadTaskId_ != nullptr;};
    void deleteDownloadTaskId() { this->downloadTaskId_ = nullptr;};
    inline string downloadTaskId() const { DARABONBA_PTR_GET_DEFAULT(downloadTaskId_, "") };
    inline CreateDownloadUrlRequest& setDownloadTaskId(string downloadTaskId) { DARABONBA_PTR_SET_VALUE(downloadTaskId_, downloadTaskId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline CreateDownloadUrlRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> downloadTaskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
