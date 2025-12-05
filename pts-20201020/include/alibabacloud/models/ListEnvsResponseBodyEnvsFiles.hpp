// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVSRESPONSEBODYENVSFILES_HPP_
#define ALIBABACLOUD_MODELS_LISTENVSRESPONSEBODYENVSFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class ListEnvsResponseBodyEnvsFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvsResponseBodyEnvsFiles& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileOssAddress, fileOssAddress_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvsResponseBodyEnvsFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileOssAddress, fileOssAddress_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
    };
    ListEnvsResponseBodyEnvsFiles() = default ;
    ListEnvsResponseBodyEnvsFiles(const ListEnvsResponseBodyEnvsFiles &) = default ;
    ListEnvsResponseBodyEnvsFiles(ListEnvsResponseBodyEnvsFiles &&) = default ;
    ListEnvsResponseBodyEnvsFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvsResponseBodyEnvsFiles() = default ;
    ListEnvsResponseBodyEnvsFiles& operator=(const ListEnvsResponseBodyEnvsFiles &) = default ;
    ListEnvsResponseBodyEnvsFiles& operator=(ListEnvsResponseBodyEnvsFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && return this->fileName_ == nullptr && return this->fileOssAddress_ == nullptr && return this->fileSize_ == nullptr && return this->md5_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline ListEnvsResponseBodyEnvsFiles& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListEnvsResponseBodyEnvsFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileOssAddress Field Functions 
    bool hasFileOssAddress() const { return this->fileOssAddress_ != nullptr;};
    void deleteFileOssAddress() { this->fileOssAddress_ = nullptr;};
    inline string fileOssAddress() const { DARABONBA_PTR_GET_DEFAULT(fileOssAddress_, "") };
    inline ListEnvsResponseBodyEnvsFiles& setFileOssAddress(string fileOssAddress) { DARABONBA_PTR_SET_VALUE(fileOssAddress_, fileOssAddress) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline ListEnvsResponseBodyEnvsFiles& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline ListEnvsResponseBodyEnvsFiles& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


  protected:
    // The ID of the file.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The OSS address of the file.
    std::shared_ptr<string> fileOssAddress_ = nullptr;
    // The size of the file. Unit: bytes.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // The MD5 checksum of the file.
    std::shared_ptr<string> md5_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
