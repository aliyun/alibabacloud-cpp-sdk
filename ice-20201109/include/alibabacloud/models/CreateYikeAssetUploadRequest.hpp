// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEYIKEASSETUPLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEYIKEASSETUPLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateYikeAssetUploadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateYikeAssetUploadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileExt, fileExt_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateYikeAssetUploadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileExt, fileExt_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
    };
    CreateYikeAssetUploadRequest() = default ;
    CreateYikeAssetUploadRequest(const CreateYikeAssetUploadRequest &) = default ;
    CreateYikeAssetUploadRequest(CreateYikeAssetUploadRequest &&) = default ;
    CreateYikeAssetUploadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateYikeAssetUploadRequest() = default ;
    CreateYikeAssetUploadRequest& operator=(const CreateYikeAssetUploadRequest &) = default ;
    CreateYikeAssetUploadRequest& operator=(CreateYikeAssetUploadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileExt_ == nullptr
        && this->fileType_ == nullptr; };
    // fileExt Field Functions 
    bool hasFileExt() const { return this->fileExt_ != nullptr;};
    void deleteFileExt() { this->fileExt_ = nullptr;};
    inline string getFileExt() const { DARABONBA_PTR_GET_DEFAULT(fileExt_, "") };
    inline CreateYikeAssetUploadRequest& setFileExt(string fileExt) { DARABONBA_PTR_SET_VALUE(fileExt_, fileExt) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline CreateYikeAssetUploadRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


  protected:
    // This parameter is required.
    shared_ptr<string> fileExt_ {};
    shared_ptr<string> fileType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
