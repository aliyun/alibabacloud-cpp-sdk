// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPLAYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPLAYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeletePlayInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePlayInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletePhysicalFiles, deletePhysicalFiles_);
      DARABONBA_PTR_TO_JSON(FileURLs, fileURLs_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePlayInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletePhysicalFiles, deletePhysicalFiles_);
      DARABONBA_PTR_FROM_JSON(FileURLs, fileURLs_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    DeletePlayInfoRequest() = default ;
    DeletePlayInfoRequest(const DeletePlayInfoRequest &) = default ;
    DeletePlayInfoRequest(DeletePlayInfoRequest &&) = default ;
    DeletePlayInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePlayInfoRequest() = default ;
    DeletePlayInfoRequest& operator=(const DeletePlayInfoRequest &) = default ;
    DeletePlayInfoRequest& operator=(DeletePlayInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deletePhysicalFiles_ != nullptr
        && this->fileURLs_ != nullptr && this->mediaId_ != nullptr; };
    // deletePhysicalFiles Field Functions 
    bool hasDeletePhysicalFiles() const { return this->deletePhysicalFiles_ != nullptr;};
    void deleteDeletePhysicalFiles() { this->deletePhysicalFiles_ = nullptr;};
    inline bool deletePhysicalFiles() const { DARABONBA_PTR_GET_DEFAULT(deletePhysicalFiles_, false) };
    inline DeletePlayInfoRequest& setDeletePhysicalFiles(bool deletePhysicalFiles) { DARABONBA_PTR_SET_VALUE(deletePhysicalFiles_, deletePhysicalFiles) };


    // fileURLs Field Functions 
    bool hasFileURLs() const { return this->fileURLs_ != nullptr;};
    void deleteFileURLs() { this->fileURLs_ = nullptr;};
    inline string fileURLs() const { DARABONBA_PTR_GET_DEFAULT(fileURLs_, "") };
    inline DeletePlayInfoRequest& setFileURLs(string fileURLs) { DARABONBA_PTR_SET_VALUE(fileURLs_, fileURLs) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline DeletePlayInfoRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    // Specifies whether to delete the physical file of the media stream.
    // 
    // If the media asset is stored in your own Object Storage Service (OSS) bucket, you must authorize the service role AliyunICEDefaultRole in advance. <props="china">For more information, see [Authorize IMS to delete recording files in OSS](https://help.aliyun.com/document_detail/449331.html#p-ko2-wc7-iad).
    // 
    // You can delete only the physical files of transcoded streams, but not the physical files of source files.
    std::shared_ptr<bool> deletePhysicalFiles_ = nullptr;
    // The URL of the media stream file that you want to delete. Separate multiple URLs with commas (,).
    std::shared_ptr<string> fileURLs_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
