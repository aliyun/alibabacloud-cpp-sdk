// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPENJMETERSCENERESPONSEBODYSCENEFILELIST_HPP_
#define ALIBABACLOUD_MODELS_GETOPENJMETERSCENERESPONSEBODYSCENEFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetOpenJMeterSceneResponseBodySceneFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpenJMeterSceneResponseBodySceneFileList& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileOssAddress, fileOssAddress_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(SplitCsv, splitCsv_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpenJMeterSceneResponseBodySceneFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileOssAddress, fileOssAddress_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(SplitCsv, splitCsv_);
    };
    GetOpenJMeterSceneResponseBodySceneFileList() = default ;
    GetOpenJMeterSceneResponseBodySceneFileList(const GetOpenJMeterSceneResponseBodySceneFileList &) = default ;
    GetOpenJMeterSceneResponseBodySceneFileList(GetOpenJMeterSceneResponseBodySceneFileList &&) = default ;
    GetOpenJMeterSceneResponseBodySceneFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpenJMeterSceneResponseBodySceneFileList() = default ;
    GetOpenJMeterSceneResponseBodySceneFileList& operator=(const GetOpenJMeterSceneResponseBodySceneFileList &) = default ;
    GetOpenJMeterSceneResponseBodySceneFileList& operator=(GetOpenJMeterSceneResponseBodySceneFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->fileOssAddress_ == nullptr && return this->fileSize_ == nullptr && return this->fileType_ == nullptr && return this->id_ == nullptr && return this->md5_ == nullptr
        && return this->splitCsv_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetOpenJMeterSceneResponseBodySceneFileList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileOssAddress Field Functions 
    bool hasFileOssAddress() const { return this->fileOssAddress_ != nullptr;};
    void deleteFileOssAddress() { this->fileOssAddress_ = nullptr;};
    inline string fileOssAddress() const { DARABONBA_PTR_GET_DEFAULT(fileOssAddress_, "") };
    inline GetOpenJMeterSceneResponseBodySceneFileList& setFileOssAddress(string fileOssAddress) { DARABONBA_PTR_SET_VALUE(fileOssAddress_, fileOssAddress) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline GetOpenJMeterSceneResponseBodySceneFileList& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline GetOpenJMeterSceneResponseBodySceneFileList& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetOpenJMeterSceneResponseBodySceneFileList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline GetOpenJMeterSceneResponseBodySceneFileList& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // splitCsv Field Functions 
    bool hasSplitCsv() const { return this->splitCsv_ != nullptr;};
    void deleteSplitCsv() { this->splitCsv_ = nullptr;};
    inline bool splitCsv() const { DARABONBA_PTR_GET_DEFAULT(splitCsv_, false) };
    inline GetOpenJMeterSceneResponseBodySceneFileList& setSplitCsv(bool splitCsv) { DARABONBA_PTR_SET_VALUE(splitCsv_, splitCsv) };


  protected:
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The Object Storage Service (OSS) URL of the file.
    std::shared_ptr<string> fileOssAddress_ = nullptr;
    // The size of the file. Unit: bytes.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // The type of the file.
    std::shared_ptr<string> fileType_ = nullptr;
    // The ID of the file.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The MD5 value of the JAR package.
    std::shared_ptr<string> md5_ = nullptr;
    // Indicates whether the file is split.
    std::shared_ptr<bool> splitCsv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
