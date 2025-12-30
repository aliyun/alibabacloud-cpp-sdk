// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDINGSRESPONSEBODY_HPP_
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
  class DescribeRecordingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Recordings, recordings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Recordings, recordings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRecordingsResponseBody() = default ;
    DescribeRecordingsResponseBody(const DescribeRecordingsResponseBody &) = default ;
    DescribeRecordingsResponseBody(DescribeRecordingsResponseBody &&) = default ;
    DescribeRecordingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordingsResponseBody() = default ;
    DescribeRecordingsResponseBody& operator=(const DescribeRecordingsResponseBody &) = default ;
    DescribeRecordingsResponseBody& operator=(DescribeRecordingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Recordings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Recordings& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Recordings& obj) { 
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
      Recordings() = default ;
      Recordings(const Recordings &) = default ;
      Recordings(Recordings &&) = default ;
      Recordings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Recordings() = default ;
      Recordings& operator=(const Recordings &) = default ;
      Recordings& operator=(Recordings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->desktopName_ == nullptr && this->endTime_ == nullptr && this->endUserIds_ == nullptr && this->filePath_ == nullptr && this->policyGroupId_ == nullptr
        && this->recordingSize_ == nullptr && this->recordingType_ == nullptr && this->signedUrl_ == nullptr && this->startTime_ == nullptr; };
      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Recordings& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline Recordings& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Recordings& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // endUserIds Field Functions 
      bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
      void deleteEndUserIds() { this->endUserIds_ = nullptr;};
      inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
      inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
      inline Recordings& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
      inline Recordings& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline Recordings& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // policyGroupId Field Functions 
      bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
      void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
      inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
      inline Recordings& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


      // recordingSize Field Functions 
      bool hasRecordingSize() const { return this->recordingSize_ != nullptr;};
      void deleteRecordingSize() { this->recordingSize_ = nullptr;};
      inline int32_t getRecordingSize() const { DARABONBA_PTR_GET_DEFAULT(recordingSize_, 0) };
      inline Recordings& setRecordingSize(int32_t recordingSize) { DARABONBA_PTR_SET_VALUE(recordingSize_, recordingSize) };


      // recordingType Field Functions 
      bool hasRecordingType() const { return this->recordingType_ != nullptr;};
      void deleteRecordingType() { this->recordingType_ = nullptr;};
      inline string getRecordingType() const { DARABONBA_PTR_GET_DEFAULT(recordingType_, "") };
      inline Recordings& setRecordingType(string recordingType) { DARABONBA_PTR_SET_VALUE(recordingType_, recordingType) };


      // signedUrl Field Functions 
      bool hasSignedUrl() const { return this->signedUrl_ != nullptr;};
      void deleteSignedUrl() { this->signedUrl_ = nullptr;};
      inline string getSignedUrl() const { DARABONBA_PTR_GET_DEFAULT(signedUrl_, "") };
      inline Recordings& setSignedUrl(string signedUrl) { DARABONBA_PTR_SET_VALUE(signedUrl_, signedUrl) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Recordings& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The cloud computer ID.
      shared_ptr<string> desktopId_ {};
      // The cloud computer name.
      shared_ptr<string> desktopName_ {};
      // The end time of the recording.
      shared_ptr<string> endTime_ {};
      // The end user IDs.
      shared_ptr<vector<string>> endUserIds_ {};
      // The file path.
      shared_ptr<string> filePath_ {};
      // The policy ID.
      shared_ptr<string> policyGroupId_ {};
      // The size of the screen recording file. Unit: bytes.
      shared_ptr<int32_t> recordingSize_ {};
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
      shared_ptr<string> recordingType_ {};
      // The download URL of the screen recording file.
      shared_ptr<string> signedUrl_ {};
      // The start time of the recording.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->recordings_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRecordingsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // recordings Field Functions 
    bool hasRecordings() const { return this->recordings_ != nullptr;};
    void deleteRecordings() { this->recordings_ = nullptr;};
    inline const vector<DescribeRecordingsResponseBody::Recordings> & getRecordings() const { DARABONBA_PTR_GET_CONST(recordings_, vector<DescribeRecordingsResponseBody::Recordings>) };
    inline vector<DescribeRecordingsResponseBody::Recordings> getRecordings() { DARABONBA_PTR_GET(recordings_, vector<DescribeRecordingsResponseBody::Recordings>) };
    inline DescribeRecordingsResponseBody& setRecordings(const vector<DescribeRecordingsResponseBody::Recordings> & recordings) { DARABONBA_PTR_SET_VALUE(recordings_, recordings) };
    inline DescribeRecordingsResponseBody& setRecordings(vector<DescribeRecordingsResponseBody::Recordings> && recordings) { DARABONBA_PTR_SET_RVALUE(recordings_, recordings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecordingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The screen recording files.
    shared_ptr<vector<DescribeRecordingsResponseBody::Recordings>> recordings_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
