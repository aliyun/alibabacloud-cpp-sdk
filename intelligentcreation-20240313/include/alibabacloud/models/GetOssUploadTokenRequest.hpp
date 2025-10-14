// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSUPLOADTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSUPLOADTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetOssUploadTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssUploadTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(fileType, fileType_);
      DARABONBA_PTR_TO_JSON(uploadType, uploadType_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssUploadTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(fileType, fileType_);
      DARABONBA_PTR_FROM_JSON(uploadType, uploadType_);
    };
    GetOssUploadTokenRequest() = default ;
    GetOssUploadTokenRequest(const GetOssUploadTokenRequest &) = default ;
    GetOssUploadTokenRequest(GetOssUploadTokenRequest &&) = default ;
    GetOssUploadTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssUploadTokenRequest() = default ;
    GetOssUploadTokenRequest& operator=(const GetOssUploadTokenRequest &) = default ;
    GetOssUploadTokenRequest& operator=(GetOssUploadTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->fileType_ == nullptr && return this->uploadType_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetOssUploadTokenRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline GetOssUploadTokenRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // uploadType Field Functions 
    bool hasUploadType() const { return this->uploadType_ != nullptr;};
    void deleteUploadType() { this->uploadType_ = nullptr;};
    inline int32_t uploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, 0) };
    inline GetOssUploadTokenRequest& setUploadType(int32_t uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileType_ = nullptr;
    std::shared_ptr<int32_t> uploadType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
