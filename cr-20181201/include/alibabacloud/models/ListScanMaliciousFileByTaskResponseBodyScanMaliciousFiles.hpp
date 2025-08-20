// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCANMALICIOUSFILEBYTASKRESPONSEBODYSCANMALICIOUSFILES_HPP_
#define ALIBABACLOUD_MODELS_LISTSCANMALICIOUSFILEBYTASKRESPONSEBODYSCANMALICIOUSFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MaliciousMd5, maliciousMd5_);
      DARABONBA_PTR_TO_JSON(MaliciousName, maliciousName_);
      DARABONBA_PTR_TO_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MaliciousMd5, maliciousMd5_);
      DARABONBA_PTR_FROM_JSON(MaliciousName, maliciousName_);
      DARABONBA_PTR_FROM_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles() = default ;
    ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles(const ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles &) = default ;
    ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles(ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles &&) = default ;
    ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles() = default ;
    ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles& operator=(const ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles &) = default ;
    ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles& operator=(ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->filePath_ != nullptr && this->firstScanTime_ != nullptr && this->level_ != nullptr && this->maliciousMd5_ != nullptr && this->maliciousName_ != nullptr
        && this->scanTaskId_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // firstScanTime Field Functions 
    bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
    void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
    inline int64_t firstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
    inline ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // maliciousMd5 Field Functions 
    bool hasMaliciousMd5() const { return this->maliciousMd5_ != nullptr;};
    void deleteMaliciousMd5() { this->maliciousMd5_ = nullptr;};
    inline string maliciousMd5() const { DARABONBA_PTR_GET_DEFAULT(maliciousMd5_, "") };
    inline ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles& setMaliciousMd5(string maliciousMd5) { DARABONBA_PTR_SET_VALUE(maliciousMd5_, maliciousMd5) };


    // maliciousName Field Functions 
    bool hasMaliciousName() const { return this->maliciousName_ != nullptr;};
    void deleteMaliciousName() { this->maliciousName_ = nullptr;};
    inline string maliciousName() const { DARABONBA_PTR_GET_DEFAULT(maliciousName_, "") };
    inline ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles& setMaliciousName(string maliciousName) { DARABONBA_PTR_SET_VALUE(maliciousName_, maliciousName) };


    // scanTaskId Field Functions 
    bool hasScanTaskId() const { return this->scanTaskId_ != nullptr;};
    void deleteScanTaskId() { this->scanTaskId_ = nullptr;};
    inline string scanTaskId() const { DARABONBA_PTR_GET_DEFAULT(scanTaskId_, "") };
    inline ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles& setScanTaskId(string scanTaskId) { DARABONBA_PTR_SET_VALUE(scanTaskId_, scanTaskId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the image was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The path of the file.
    std::shared_ptr<string> filePath_ = nullptr;
    // The time when the image was first scanned.
    std::shared_ptr<int64_t> firstScanTime_ = nullptr;
    // The severity of the malicious file.
    std::shared_ptr<string> level_ = nullptr;
    // The MD5 hash value of the malicious file.
    std::shared_ptr<string> maliciousMd5_ = nullptr;
    // The type of the malicious file.
    std::shared_ptr<string> maliciousName_ = nullptr;
    // The ID of the image scan task.
    std::shared_ptr<string> scanTaskId_ = nullptr;
    // The time when the image was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
