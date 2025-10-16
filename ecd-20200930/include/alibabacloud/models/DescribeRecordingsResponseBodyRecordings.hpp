// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDINGSRESPONSEBODYRECORDINGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDINGSRESPONSEBODYRECORDINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeRecordingsResponseBodyRecordings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordingsResponseBodyRecordings& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(RecordingSize, recordingSize_);
      DARABONBA_PTR_TO_JSON(RecordingType, recordingType_);
      DARABONBA_PTR_TO_JSON(SignedUrl, signedUrl_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordingsResponseBodyRecordings& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(RecordingSize, recordingSize_);
      DARABONBA_PTR_FROM_JSON(RecordingType, recordingType_);
      DARABONBA_PTR_FROM_JSON(SignedUrl, signedUrl_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRecordingsResponseBodyRecordings() = default ;
    DescribeRecordingsResponseBodyRecordings(const DescribeRecordingsResponseBodyRecordings &) = default ;
    DescribeRecordingsResponseBodyRecordings(DescribeRecordingsResponseBodyRecordings &&) = default ;
    DescribeRecordingsResponseBodyRecordings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordingsResponseBodyRecordings() = default ;
    DescribeRecordingsResponseBodyRecordings& operator=(const DescribeRecordingsResponseBodyRecordings &) = default ;
    DescribeRecordingsResponseBodyRecordings& operator=(DescribeRecordingsResponseBodyRecordings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && return this->desktopName_ == nullptr && return this->endTime_ == nullptr && return this->endUserIds_ == nullptr && return this->filePath_ == nullptr && return this->policyGroupId_ == nullptr
        && return this->recordingSize_ == nullptr && return this->recordingType_ == nullptr && return this->signedUrl_ == nullptr && return this->startTime_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeRecordingsResponseBodyRecordings& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeRecordingsResponseBodyRecordings& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRecordingsResponseBodyRecordings& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & endUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> endUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline DescribeRecordingsResponseBodyRecordings& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline DescribeRecordingsResponseBodyRecordings& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline DescribeRecordingsResponseBodyRecordings& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribeRecordingsResponseBodyRecordings& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // recordingSize Field Functions 
    bool hasRecordingSize() const { return this->recordingSize_ != nullptr;};
    void deleteRecordingSize() { this->recordingSize_ = nullptr;};
    inline int32_t recordingSize() const { DARABONBA_PTR_GET_DEFAULT(recordingSize_, 0) };
    inline DescribeRecordingsResponseBodyRecordings& setRecordingSize(int32_t recordingSize) { DARABONBA_PTR_SET_VALUE(recordingSize_, recordingSize) };


    // recordingType Field Functions 
    bool hasRecordingType() const { return this->recordingType_ != nullptr;};
    void deleteRecordingType() { this->recordingType_ = nullptr;};
    inline string recordingType() const { DARABONBA_PTR_GET_DEFAULT(recordingType_, "") };
    inline DescribeRecordingsResponseBodyRecordings& setRecordingType(string recordingType) { DARABONBA_PTR_SET_VALUE(recordingType_, recordingType) };


    // signedUrl Field Functions 
    bool hasSignedUrl() const { return this->signedUrl_ != nullptr;};
    void deleteSignedUrl() { this->signedUrl_ = nullptr;};
    inline string signedUrl() const { DARABONBA_PTR_GET_DEFAULT(signedUrl_, "") };
    inline DescribeRecordingsResponseBodyRecordings& setSignedUrl(string signedUrl) { DARABONBA_PTR_SET_VALUE(signedUrl_, signedUrl) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRecordingsResponseBodyRecordings& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The cloud computer ID.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The cloud computer name.
    std::shared_ptr<string> desktopName_ = nullptr;
    // The end time of the recording.
    std::shared_ptr<string> endTime_ = nullptr;
    // The end user IDs.
    std::shared_ptr<vector<string>> endUserIds_ = nullptr;
    // The file path.
    std::shared_ptr<string> filePath_ = nullptr;
    // The policy ID.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The size of the screen recording file. Unit: bytes.
    std::shared_ptr<int32_t> recordingSize_ = nullptr;
    // The type of event that triggers the recording.
    // 
    // Valid values:
    // 
    // *   byaction_cmd_ft: triggered by copy-paste or file transfer events.
    // *   period: triggered at scheduled intervals.
    // *   session: triggered by session lifecycle monitoring.
    // *   byaction_commands: triggered by copy-paste only.
    // *   alltime: continuous recording.
    // *   byaction_file_transfer: triggered by file transfer only.
    std::shared_ptr<string> recordingType_ = nullptr;
    // The download URL of the screen recording file.
    std::shared_ptr<string> signedUrl_ = nullptr;
    // The start time of the recording.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
