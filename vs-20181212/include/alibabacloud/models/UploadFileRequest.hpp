// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UploadFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(OriginUrl, originUrl_);
      DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
    };
    friend void from_json(const Darabonba::Json& j, UploadFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(OriginUrl, originUrl_);
      DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
    };
    UploadFileRequest() = default ;
    UploadFileRequest(const UploadFileRequest &) = default ;
    UploadFileRequest(UploadFileRequest &&) = default ;
    UploadFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadFileRequest() = default ;
    UploadFileRequest& operator=(const UploadFileRequest &) = default ;
    UploadFileRequest& operator=(UploadFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->fileName_ != nullptr && this->md5_ != nullptr && this->originUrl_ != nullptr && this->targetPath_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UploadFileRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline UploadFileRequest& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // originUrl Field Functions 
    bool hasOriginUrl() const { return this->originUrl_ != nullptr;};
    void deleteOriginUrl() { this->originUrl_ = nullptr;};
    inline string originUrl() const { DARABONBA_PTR_GET_DEFAULT(originUrl_, "") };
    inline UploadFileRequest& setOriginUrl(string originUrl) { DARABONBA_PTR_SET_VALUE(originUrl_, originUrl) };


    // targetPath Field Functions 
    bool hasTargetPath() const { return this->targetPath_ != nullptr;};
    void deleteTargetPath() { this->targetPath_ = nullptr;};
    inline string targetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
    inline UploadFileRequest& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> md5_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> originUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
