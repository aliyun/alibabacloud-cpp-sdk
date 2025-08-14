// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEDIAINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEDIAINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteMediaInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMediaInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletePhysicalFiles, deletePhysicalFiles_);
      DARABONBA_PTR_TO_JSON(InputURLs, inputURLs_);
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMediaInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletePhysicalFiles, deletePhysicalFiles_);
      DARABONBA_PTR_FROM_JSON(InputURLs, inputURLs_);
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
    };
    DeleteMediaInfosRequest() = default ;
    DeleteMediaInfosRequest(const DeleteMediaInfosRequest &) = default ;
    DeleteMediaInfosRequest(DeleteMediaInfosRequest &&) = default ;
    DeleteMediaInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMediaInfosRequest() = default ;
    DeleteMediaInfosRequest& operator=(const DeleteMediaInfosRequest &) = default ;
    DeleteMediaInfosRequest& operator=(DeleteMediaInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deletePhysicalFiles_ != nullptr
        && this->inputURLs_ != nullptr && this->mediaIds_ != nullptr; };
    // deletePhysicalFiles Field Functions 
    bool hasDeletePhysicalFiles() const { return this->deletePhysicalFiles_ != nullptr;};
    void deleteDeletePhysicalFiles() { this->deletePhysicalFiles_ = nullptr;};
    inline bool deletePhysicalFiles() const { DARABONBA_PTR_GET_DEFAULT(deletePhysicalFiles_, false) };
    inline DeleteMediaInfosRequest& setDeletePhysicalFiles(bool deletePhysicalFiles) { DARABONBA_PTR_SET_VALUE(deletePhysicalFiles_, deletePhysicalFiles) };


    // inputURLs Field Functions 
    bool hasInputURLs() const { return this->inputURLs_ != nullptr;};
    void deleteInputURLs() { this->inputURLs_ = nullptr;};
    inline string inputURLs() const { DARABONBA_PTR_GET_DEFAULT(inputURLs_, "") };
    inline DeleteMediaInfosRequest& setInputURLs(string inputURLs) { DARABONBA_PTR_SET_VALUE(inputURLs_, inputURLs) };


    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string mediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline DeleteMediaInfosRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


  protected:
    // Specifies whether to delete the physical file of the media asset.
    // 
    // If the media asset is stored in your own OSS bucket, you must authorize the service role AliyunICEDefaultRole in advance. For more information<props="china">, see [Authorize IMS to delete recording files in OSS](https://help.aliyun.com/zh/ims/user-guide/record?spm=a2c4g.11186623.0.i8#0737d9c437bmn).
    std::shared_ptr<bool> deletePhysicalFiles_ = nullptr;
    // The URL of the media asset that you want to delete. The file corresponding to the URL must be registered with IMS. Separate multiple URLs with commas (,). The following two formats are supported:
    // 
    // 1.  http(s)://example-bucket.oss-cn-shanghai.aliyuncs.com/example.mp4?
    // 2.  OSS://example-bucket/example.mp4?\\
    //     In this format, it is considered by default that the region of the OSS bucket in which the media asset resides is the same as the region in which IMS is activated.
    std::shared_ptr<string> inputURLs_ = nullptr;
    // The ID of the media asset that you want to delete from Intelligent Media Services (IMS).
    // 
    // *   Separate multiple IDs with commas (,).
    // 
    // If you leave MediaIds empty, you must specify InputURLs.
    std::shared_ptr<string> mediaIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
