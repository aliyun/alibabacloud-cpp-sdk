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
        && return this->completeTime_ == nullptr && return this->doNotMailNum_ == nullptr && return this->fileName_ == nullptr && return this->invalidNum_ == nullptr && return this->percentage_ == nullptr
        && return this->processedNum_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->totalNum_ == nullptr && return this->unknownNum_ == nullptr
        && return this->uploadTime_ == nullptr && return this->validNum_ == nullptr; };
    // catchAllNum Field Functions 
    bool hasCatchAllNum() const { return this->catchAllNum_ != nullptr;};
    void deleteCatchAllNum() { this->catchAllNum_ = nullptr;};
    inline string catchAllNum() const { DARABONBA_PTR_GET_DEFAULT(catchAllNum_, "") };
    inline GetValidateFileStatusResponseBody& setCatchAllNum(string catchAllNum) { DARABONBA_PTR_SET_VALUE(catchAllNum_, catchAllNum) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetValidateFileStatusResponseBody& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // doNotMailNum Field Functions 
    bool hasDoNotMailNum() const { return this->doNotMailNum_ != nullptr;};
    void deleteDoNotMailNum() { this->doNotMailNum_ = nullptr;};
    inline string doNotMailNum() const { DARABONBA_PTR_GET_DEFAULT(doNotMailNum_, "") };
    inline GetValidateFileStatusResponseBody& setDoNotMailNum(string doNotMailNum) { DARABONBA_PTR_SET_VALUE(doNotMailNum_, doNotMailNum) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetValidateFileStatusResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // invalidNum Field Functions 
    bool hasInvalidNum() const { return this->invalidNum_ != nullptr;};
    void deleteInvalidNum() { this->invalidNum_ = nullptr;};
    inline string invalidNum() const { DARABONBA_PTR_GET_DEFAULT(invalidNum_, "") };
    inline GetValidateFileStatusResponseBody& setInvalidNum(string invalidNum) { DARABONBA_PTR_SET_VALUE(invalidNum_, invalidNum) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline string percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, "") };
    inline GetValidateFileStatusResponseBody& setPercentage(string percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // processedNum Field Functions 
    bool hasProcessedNum() const { return this->processedNum_ != nullptr;};
    void deleteProcessedNum() { this->processedNum_ = nullptr;};
    inline string processedNum() const { DARABONBA_PTR_GET_DEFAULT(processedNum_, "") };
    inline GetValidateFileStatusResponseBody& setProcessedNum(string processedNum) { DARABONBA_PTR_SET_VALUE(processedNum_, processedNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetValidateFileStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetValidateFileStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline string totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, "") };
    inline GetValidateFileStatusResponseBody& setTotalNum(string totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // unknownNum Field Functions 
    bool hasUnknownNum() const { return this->unknownNum_ != nullptr;};
    void deleteUnknownNum() { this->unknownNum_ = nullptr;};
    inline string unknownNum() const { DARABONBA_PTR_GET_DEFAULT(unknownNum_, "") };
    inline GetValidateFileStatusResponseBody& setUnknownNum(string unknownNum) { DARABONBA_PTR_SET_VALUE(unknownNum_, unknownNum) };


    // uploadTime Field Functions 
    bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
    void deleteUploadTime() { this->uploadTime_ = nullptr;};
    inline string uploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
    inline GetValidateFileStatusResponseBody& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


    // validNum Field Functions 
    bool hasValidNum() const { return this->validNum_ != nullptr;};
    void deleteValidNum() { this->validNum_ = nullptr;};
    inline string validNum() const { DARABONBA_PTR_GET_DEFAULT(validNum_, "") };
    inline GetValidateFileStatusResponseBody& setValidNum(string validNum) { DARABONBA_PTR_SET_VALUE(validNum_, validNum) };


  protected:
    std::shared_ptr<string> catchAllNum_ = nullptr;
    std::shared_ptr<string> completeTime_ = nullptr;
    std::shared_ptr<string> doNotMailNum_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> invalidNum_ = nullptr;
    std::shared_ptr<string> percentage_ = nullptr;
    std::shared_ptr<string> processedNum_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
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
