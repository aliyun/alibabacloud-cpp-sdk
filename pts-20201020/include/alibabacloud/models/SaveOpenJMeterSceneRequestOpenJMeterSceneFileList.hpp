// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEOPENJMETERSCENEREQUESTOPENJMETERSCENEFILELIST_HPP_
#define ALIBABACLOUD_MODELS_SAVEOPENJMETERSCENEREQUESTOPENJMETERSCENEFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SaveOpenJMeterSceneRequestOpenJMeterSceneFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveOpenJMeterSceneRequestOpenJMeterSceneFileList& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileOssAddress, fileOssAddress_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(SplitCsv, splitCsv_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, SaveOpenJMeterSceneRequestOpenJMeterSceneFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileOssAddress, fileOssAddress_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(SplitCsv, splitCsv_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    SaveOpenJMeterSceneRequestOpenJMeterSceneFileList() = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneFileList(const SaveOpenJMeterSceneRequestOpenJMeterSceneFileList &) = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneFileList(SaveOpenJMeterSceneRequestOpenJMeterSceneFileList &&) = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveOpenJMeterSceneRequestOpenJMeterSceneFileList() = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneFileList& operator=(const SaveOpenJMeterSceneRequestOpenJMeterSceneFileList &) = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneFileList& operator=(SaveOpenJMeterSceneRequestOpenJMeterSceneFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && return this->fileName_ == nullptr && return this->fileOssAddress_ == nullptr && return this->fileSize_ == nullptr && return this->md5_ == nullptr && return this->splitCsv_ == nullptr
        && return this->tags_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneFileList& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneFileList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileOssAddress Field Functions 
    bool hasFileOssAddress() const { return this->fileOssAddress_ != nullptr;};
    void deleteFileOssAddress() { this->fileOssAddress_ = nullptr;};
    inline string fileOssAddress() const { DARABONBA_PTR_GET_DEFAULT(fileOssAddress_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneFileList& setFileOssAddress(string fileOssAddress) { DARABONBA_PTR_SET_VALUE(fileOssAddress_, fileOssAddress) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneFileList& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneFileList& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // splitCsv Field Functions 
    bool hasSplitCsv() const { return this->splitCsv_ != nullptr;};
    void deleteSplitCsv() { this->splitCsv_ = nullptr;};
    inline bool splitCsv() const { DARABONBA_PTR_GET_DEFAULT(splitCsv_, false) };
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneFileList& setSplitCsv(bool splitCsv) { DARABONBA_PTR_SET_VALUE(splitCsv_, splitCsv) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneFileList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The file ID.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // The name of the test file.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // The Object Storage Service (OSS) path that is used to access the test file over the Internet.
    // 
    // >  Only test files in the China (Shanghai) region can be accessed.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileOssAddress_ = nullptr;
    // The file size. The total file size cannot exceed 500 MB. Unit: bytes.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // The MD5 hash of the test file.
    std::shared_ptr<string> md5_ = nullptr;
    // Specifies whether to split the test file. This parameter is valid only for CSV files.
    std::shared_ptr<bool> splitCsv_ = nullptr;
    // The file tag.
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
