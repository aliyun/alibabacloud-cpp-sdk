// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITNOTEPOSTPROCESSINGSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITNOTEPOSTPROCESSINGSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetAuditNotePostProcessingStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditNotePostProcessingStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CompletionTime, completionTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(NoteId, noteId_);
      DARABONBA_PTR_TO_JSON(ProcessedLines, processedLines_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalLines, totalLines_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditNotePostProcessingStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletionTime, completionTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
      DARABONBA_PTR_FROM_JSON(ProcessedLines, processedLines_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalLines, totalLines_);
    };
    GetAuditNotePostProcessingStatusResponseBodyData() = default ;
    GetAuditNotePostProcessingStatusResponseBodyData(const GetAuditNotePostProcessingStatusResponseBodyData &) = default ;
    GetAuditNotePostProcessingStatusResponseBodyData(GetAuditNotePostProcessingStatusResponseBodyData &&) = default ;
    GetAuditNotePostProcessingStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditNotePostProcessingStatusResponseBodyData() = default ;
    GetAuditNotePostProcessingStatusResponseBodyData& operator=(const GetAuditNotePostProcessingStatusResponseBodyData &) = default ;
    GetAuditNotePostProcessingStatusResponseBodyData& operator=(GetAuditNotePostProcessingStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completionTime_ != nullptr
        && this->createTime_ != nullptr && this->errorMessage_ != nullptr && this->noteId_ != nullptr && this->processedLines_ != nullptr && this->status_ != nullptr
        && this->totalLines_ != nullptr; };
    // completionTime Field Functions 
    bool hasCompletionTime() const { return this->completionTime_ != nullptr;};
    void deleteCompletionTime() { this->completionTime_ = nullptr;};
    inline string completionTime() const { DARABONBA_PTR_GET_DEFAULT(completionTime_, "") };
    inline GetAuditNotePostProcessingStatusResponseBodyData& setCompletionTime(string completionTime) { DARABONBA_PTR_SET_VALUE(completionTime_, completionTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetAuditNotePostProcessingStatusResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetAuditNotePostProcessingStatusResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline string noteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, "") };
    inline GetAuditNotePostProcessingStatusResponseBodyData& setNoteId(string noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


    // processedLines Field Functions 
    bool hasProcessedLines() const { return this->processedLines_ != nullptr;};
    void deleteProcessedLines() { this->processedLines_ = nullptr;};
    inline int32_t processedLines() const { DARABONBA_PTR_GET_DEFAULT(processedLines_, 0) };
    inline GetAuditNotePostProcessingStatusResponseBodyData& setProcessedLines(int32_t processedLines) { DARABONBA_PTR_SET_VALUE(processedLines_, processedLines) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAuditNotePostProcessingStatusResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalLines Field Functions 
    bool hasTotalLines() const { return this->totalLines_ != nullptr;};
    void deleteTotalLines() { this->totalLines_ = nullptr;};
    inline int32_t totalLines() const { DARABONBA_PTR_GET_DEFAULT(totalLines_, 0) };
    inline GetAuditNotePostProcessingStatusResponseBodyData& setTotalLines(int32_t totalLines) { DARABONBA_PTR_SET_VALUE(totalLines_, totalLines) };


  protected:
    std::shared_ptr<string> completionTime_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> noteId_ = nullptr;
    std::shared_ptr<int32_t> processedLines_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> totalLines_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
