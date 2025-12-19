// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVALIDATEFILERESPONSEBODYFILES_HPP_
#define ALIBABACLOUD_MODELS_LISTVALIDATEFILERESPONSEBODYFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ListValidateFileResponseBodyFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListValidateFileResponseBodyFiles& obj) { 
      DARABONBA_PTR_TO_JSON(CatchAllNum, catchAllNum_);
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(DoNotMailNum, doNotMailNum_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(InvalidNum, invalidNum_);
      DARABONBA_PTR_TO_JSON(IsDownloadable, isDownloadable_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(ProcessedNum, processedNum_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(UnknownNum, unknownNum_);
      DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
      DARABONBA_PTR_TO_JSON(ValidNum, validNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListValidateFileResponseBodyFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(CatchAllNum, catchAllNum_);
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(DoNotMailNum, doNotMailNum_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(InvalidNum, invalidNum_);
      DARABONBA_PTR_FROM_JSON(IsDownloadable, isDownloadable_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(ProcessedNum, processedNum_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(UnknownNum, unknownNum_);
      DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
      DARABONBA_PTR_FROM_JSON(ValidNum, validNum_);
    };
    ListValidateFileResponseBodyFiles() = default ;
    ListValidateFileResponseBodyFiles(const ListValidateFileResponseBodyFiles &) = default ;
    ListValidateFileResponseBodyFiles(ListValidateFileResponseBodyFiles &&) = default ;
    ListValidateFileResponseBodyFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListValidateFileResponseBodyFiles() = default ;
    ListValidateFileResponseBodyFiles& operator=(const ListValidateFileResponseBodyFiles &) = default ;
    ListValidateFileResponseBodyFiles& operator=(ListValidateFileResponseBodyFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catchAllNum_ == nullptr
        && return this->completeTime_ == nullptr && return this->doNotMailNum_ == nullptr && return this->fileId_ == nullptr && return this->fileName_ == nullptr && return this->invalidNum_ == nullptr
        && return this->isDownloadable_ == nullptr && return this->percentage_ == nullptr && return this->processedNum_ == nullptr && return this->status_ == nullptr && return this->totalNum_ == nullptr
        && return this->unknownNum_ == nullptr && return this->uploadTime_ == nullptr && return this->validNum_ == nullptr; };
    // catchAllNum Field Functions 
    bool hasCatchAllNum() const { return this->catchAllNum_ != nullptr;};
    void deleteCatchAllNum() { this->catchAllNum_ = nullptr;};
    inline string catchAllNum() const { DARABONBA_PTR_GET_DEFAULT(catchAllNum_, "") };
    inline ListValidateFileResponseBodyFiles& setCatchAllNum(string catchAllNum) { DARABONBA_PTR_SET_VALUE(catchAllNum_, catchAllNum) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline ListValidateFileResponseBodyFiles& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // doNotMailNum Field Functions 
    bool hasDoNotMailNum() const { return this->doNotMailNum_ != nullptr;};
    void deleteDoNotMailNum() { this->doNotMailNum_ = nullptr;};
    inline string doNotMailNum() const { DARABONBA_PTR_GET_DEFAULT(doNotMailNum_, "") };
    inline ListValidateFileResponseBodyFiles& setDoNotMailNum(string doNotMailNum) { DARABONBA_PTR_SET_VALUE(doNotMailNum_, doNotMailNum) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ListValidateFileResponseBodyFiles& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListValidateFileResponseBodyFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // invalidNum Field Functions 
    bool hasInvalidNum() const { return this->invalidNum_ != nullptr;};
    void deleteInvalidNum() { this->invalidNum_ = nullptr;};
    inline string invalidNum() const { DARABONBA_PTR_GET_DEFAULT(invalidNum_, "") };
    inline ListValidateFileResponseBodyFiles& setInvalidNum(string invalidNum) { DARABONBA_PTR_SET_VALUE(invalidNum_, invalidNum) };


    // isDownloadable Field Functions 
    bool hasIsDownloadable() const { return this->isDownloadable_ != nullptr;};
    void deleteIsDownloadable() { this->isDownloadable_ = nullptr;};
    inline bool isDownloadable() const { DARABONBA_PTR_GET_DEFAULT(isDownloadable_, false) };
    inline ListValidateFileResponseBodyFiles& setIsDownloadable(bool isDownloadable) { DARABONBA_PTR_SET_VALUE(isDownloadable_, isDownloadable) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline string percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, "") };
    inline ListValidateFileResponseBodyFiles& setPercentage(string percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // processedNum Field Functions 
    bool hasProcessedNum() const { return this->processedNum_ != nullptr;};
    void deleteProcessedNum() { this->processedNum_ = nullptr;};
    inline string processedNum() const { DARABONBA_PTR_GET_DEFAULT(processedNum_, "") };
    inline ListValidateFileResponseBodyFiles& setProcessedNum(string processedNum) { DARABONBA_PTR_SET_VALUE(processedNum_, processedNum) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListValidateFileResponseBodyFiles& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline string totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, "") };
    inline ListValidateFileResponseBodyFiles& setTotalNum(string totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // unknownNum Field Functions 
    bool hasUnknownNum() const { return this->unknownNum_ != nullptr;};
    void deleteUnknownNum() { this->unknownNum_ = nullptr;};
    inline string unknownNum() const { DARABONBA_PTR_GET_DEFAULT(unknownNum_, "") };
    inline ListValidateFileResponseBodyFiles& setUnknownNum(string unknownNum) { DARABONBA_PTR_SET_VALUE(unknownNum_, unknownNum) };


    // uploadTime Field Functions 
    bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
    void deleteUploadTime() { this->uploadTime_ = nullptr;};
    inline string uploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
    inline ListValidateFileResponseBodyFiles& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


    // validNum Field Functions 
    bool hasValidNum() const { return this->validNum_ != nullptr;};
    void deleteValidNum() { this->validNum_ = nullptr;};
    inline string validNum() const { DARABONBA_PTR_GET_DEFAULT(validNum_, "") };
    inline ListValidateFileResponseBodyFiles& setValidNum(string validNum) { DARABONBA_PTR_SET_VALUE(validNum_, validNum) };


  protected:
    std::shared_ptr<string> catchAllNum_ = nullptr;
    std::shared_ptr<string> completeTime_ = nullptr;
    std::shared_ptr<string> doNotMailNum_ = nullptr;
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> invalidNum_ = nullptr;
    std::shared_ptr<bool> isDownloadable_ = nullptr;
    std::shared_ptr<string> percentage_ = nullptr;
    std::shared_ptr<string> processedNum_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> totalNum_ = nullptr;
    std::shared_ptr<string> unknownNum_ = nullptr;
    std::shared_ptr<string> uploadTime_ = nullptr;
    std::shared_ptr<string> validNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
