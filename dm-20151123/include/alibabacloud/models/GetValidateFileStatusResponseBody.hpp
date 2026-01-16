// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVALIDATEFILESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVALIDATEFILESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetValidateFileStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetValidateFileStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CatchAllNum, catchAllNum_);
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(DoNotMailNum, doNotMailNum_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(InvalidNum, invalidNum_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(ProcessedNum, processedNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(UnknownNum, unknownNum_);
      DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
      DARABONBA_PTR_TO_JSON(ValidNum, validNum_);
    };
    friend void from_json(const Darabonba::Json& j, GetValidateFileStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CatchAllNum, catchAllNum_);
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(DoNotMailNum, doNotMailNum_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(InvalidNum, invalidNum_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(ProcessedNum, processedNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(UnknownNum, unknownNum_);
      DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
      DARABONBA_PTR_FROM_JSON(ValidNum, validNum_);
    };
    GetValidateFileStatusResponseBody() = default ;
    GetValidateFileStatusResponseBody(const GetValidateFileStatusResponseBody &) = default ;
    GetValidateFileStatusResponseBody(GetValidateFileStatusResponseBody &&) = default ;
    GetValidateFileStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetValidateFileStatusResponseBody() = default ;
    GetValidateFileStatusResponseBody& operator=(const GetValidateFileStatusResponseBody &) = default ;
    GetValidateFileStatusResponseBody& operator=(GetValidateFileStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catchAllNum_ == nullptr
        && this->completeTime_ == nullptr && this->doNotMailNum_ == nullptr && this->fileId_ == nullptr && this->fileName_ == nullptr && this->invalidNum_ == nullptr
        && this->percentage_ == nullptr && this->processedNum_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->totalNum_ == nullptr
        && this->unknownNum_ == nullptr && this->uploadTime_ == nullptr && this->validNum_ == nullptr; };
    // catchAllNum Field Functions 
    bool hasCatchAllNum() const { return this->catchAllNum_ != nullptr;};
    void deleteCatchAllNum() { this->catchAllNum_ = nullptr;};
    inline string getCatchAllNum() const { DARABONBA_PTR_GET_DEFAULT(catchAllNum_, "") };
    inline GetValidateFileStatusResponseBody& setCatchAllNum(string catchAllNum) { DARABONBA_PTR_SET_VALUE(catchAllNum_, catchAllNum) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetValidateFileStatusResponseBody& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // doNotMailNum Field Functions 
    bool hasDoNotMailNum() const { return this->doNotMailNum_ != nullptr;};
    void deleteDoNotMailNum() { this->doNotMailNum_ = nullptr;};
    inline string getDoNotMailNum() const { DARABONBA_PTR_GET_DEFAULT(doNotMailNum_, "") };
    inline GetValidateFileStatusResponseBody& setDoNotMailNum(string doNotMailNum) { DARABONBA_PTR_SET_VALUE(doNotMailNum_, doNotMailNum) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline GetValidateFileStatusResponseBody& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetValidateFileStatusResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // invalidNum Field Functions 
    bool hasInvalidNum() const { return this->invalidNum_ != nullptr;};
    void deleteInvalidNum() { this->invalidNum_ = nullptr;};
    inline string getInvalidNum() const { DARABONBA_PTR_GET_DEFAULT(invalidNum_, "") };
    inline GetValidateFileStatusResponseBody& setInvalidNum(string invalidNum) { DARABONBA_PTR_SET_VALUE(invalidNum_, invalidNum) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline string getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, "") };
    inline GetValidateFileStatusResponseBody& setPercentage(string percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // processedNum Field Functions 
    bool hasProcessedNum() const { return this->processedNum_ != nullptr;};
    void deleteProcessedNum() { this->processedNum_ = nullptr;};
    inline string getProcessedNum() const { DARABONBA_PTR_GET_DEFAULT(processedNum_, "") };
    inline GetValidateFileStatusResponseBody& setProcessedNum(string processedNum) { DARABONBA_PTR_SET_VALUE(processedNum_, processedNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetValidateFileStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetValidateFileStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline string getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, "") };
    inline GetValidateFileStatusResponseBody& setTotalNum(string totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // unknownNum Field Functions 
    bool hasUnknownNum() const { return this->unknownNum_ != nullptr;};
    void deleteUnknownNum() { this->unknownNum_ = nullptr;};
    inline string getUnknownNum() const { DARABONBA_PTR_GET_DEFAULT(unknownNum_, "") };
    inline GetValidateFileStatusResponseBody& setUnknownNum(string unknownNum) { DARABONBA_PTR_SET_VALUE(unknownNum_, unknownNum) };


    // uploadTime Field Functions 
    bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
    void deleteUploadTime() { this->uploadTime_ = nullptr;};
    inline string getUploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
    inline GetValidateFileStatusResponseBody& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


    // validNum Field Functions 
    bool hasValidNum() const { return this->validNum_ != nullptr;};
    void deleteValidNum() { this->validNum_ = nullptr;};
    inline string getValidNum() const { DARABONBA_PTR_GET_DEFAULT(validNum_, "") };
    inline GetValidateFileStatusResponseBody& setValidNum(string validNum) { DARABONBA_PTR_SET_VALUE(validNum_, validNum) };


  protected:
    shared_ptr<string> catchAllNum_ {};
    shared_ptr<string> completeTime_ {};
    shared_ptr<string> doNotMailNum_ {};
    shared_ptr<string> fileId_ {};
    shared_ptr<string> fileName_ {};
    shared_ptr<string> invalidNum_ {};
    shared_ptr<string> percentage_ {};
    shared_ptr<string> processedNum_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> totalNum_ {};
    shared_ptr<string> unknownNum_ {};
    shared_ptr<string> uploadTime_ {};
    shared_ptr<string> validNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
