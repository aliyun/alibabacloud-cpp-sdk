// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class DescribeRecordingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VoiceSliceRecordingListJson, voiceSliceRecordingListJson_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VoiceSliceRecordingListJson, voiceSliceRecordingListJson_);
    };
    DescribeRecordingResponseBody() = default ;
    DescribeRecordingResponseBody(const DescribeRecordingResponseBody &) = default ;
    DescribeRecordingResponseBody(DescribeRecordingResponseBody &&) = default ;
    DescribeRecordingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordingResponseBody() = default ;
    DescribeRecordingResponseBody& operator=(const DescribeRecordingResponseBody &) = default ;
    DescribeRecordingResponseBody& operator=(DescribeRecordingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->filePath_ == nullptr && this->requestId_ == nullptr && this->voiceSliceRecordingListJson_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeRecordingResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline DescribeRecordingResponseBody& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecordingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // voiceSliceRecordingListJson Field Functions 
    bool hasVoiceSliceRecordingListJson() const { return this->voiceSliceRecordingListJson_ != nullptr;};
    void deleteVoiceSliceRecordingListJson() { this->voiceSliceRecordingListJson_ = nullptr;};
    inline string getVoiceSliceRecordingListJson() const { DARABONBA_PTR_GET_DEFAULT(voiceSliceRecordingListJson_, "") };
    inline DescribeRecordingResponseBody& setVoiceSliceRecordingListJson(string voiceSliceRecordingListJson) { DARABONBA_PTR_SET_VALUE(voiceSliceRecordingListJson_, voiceSliceRecordingListJson) };


  protected:
    // The file name.
    shared_ptr<string> fileName_ {};
    // The file download URL.
    shared_ptr<string> filePath_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> voiceSliceRecordingListJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
