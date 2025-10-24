// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFPSHOTFILESRESPONSEBODYFPSHOTFILELISTFPSHOTFILE_HPP_
#define ALIBABACLOUD_MODELS_LISTFPSHOTFILESRESPONSEBODYFPSHOTFILELISTFPSHOTFILE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListFpShotFilesResponseBodyFpShotFileListFpShotFileInputFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListFpShotFilesResponseBodyFpShotFileListFpShotFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFpShotFilesResponseBodyFpShotFileListFpShotFile& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(StoreTime, storeTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListFpShotFilesResponseBodyFpShotFileListFpShotFile& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(StoreTime, storeTime_);
    };
    ListFpShotFilesResponseBodyFpShotFileListFpShotFile() = default ;
    ListFpShotFilesResponseBodyFpShotFileListFpShotFile(const ListFpShotFilesResponseBodyFpShotFileListFpShotFile &) = default ;
    ListFpShotFilesResponseBodyFpShotFileListFpShotFile(ListFpShotFilesResponseBodyFpShotFileListFpShotFile &&) = default ;
    ListFpShotFilesResponseBodyFpShotFileListFpShotFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFpShotFilesResponseBodyFpShotFileListFpShotFile() = default ;
    ListFpShotFilesResponseBodyFpShotFileListFpShotFile& operator=(const ListFpShotFilesResponseBodyFpShotFileListFpShotFile &) = default ;
    ListFpShotFilesResponseBodyFpShotFileListFpShotFile& operator=(ListFpShotFilesResponseBodyFpShotFileListFpShotFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && return this->inputFile_ == nullptr && return this->primaryKey_ == nullptr && return this->storeTime_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ListFpShotFilesResponseBodyFpShotFileListFpShotFile& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // inputFile Field Functions 
    bool hasInputFile() const { return this->inputFile_ != nullptr;};
    void deleteInputFile() { this->inputFile_ = nullptr;};
    inline const Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFileInputFile & inputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFileInputFile) };
    inline Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFileInputFile inputFile() { DARABONBA_PTR_GET(inputFile_, Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFileInputFile) };
    inline ListFpShotFilesResponseBodyFpShotFileListFpShotFile& setInputFile(const Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFileInputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
    inline ListFpShotFilesResponseBodyFpShotFileListFpShotFile& setInputFile(Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFileInputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline ListFpShotFilesResponseBodyFpShotFileListFpShotFile& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // storeTime Field Functions 
    bool hasStoreTime() const { return this->storeTime_ != nullptr;};
    void deleteStoreTime() { this->storeTime_ = nullptr;};
    inline string storeTime() const { DARABONBA_PTR_GET_DEFAULT(storeTime_, "") };
    inline ListFpShotFilesResponseBodyFpShotFileListFpShotFile& setStoreTime(string storeTime) { DARABONBA_PTR_SET_VALUE(storeTime_, storeTime) };


  protected:
    // The ID of the video file.
    std::shared_ptr<string> fileId_ = nullptr;
    // The information about the input file.
    std::shared_ptr<Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFileInputFile> inputFile_ = nullptr;
    // The unique primary key of the input video.
    std::shared_ptr<string> primaryKey_ = nullptr;
    // The time when the media fingerprint file was stored. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
    // 
    // > This parameter is available only in the China (Beijing), China (Hangzhou), and China (Shanghai) regions.
    std::shared_ptr<string> storeTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
