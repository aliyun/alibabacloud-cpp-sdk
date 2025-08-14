// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobRequestOutputGroupOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequestOutputGroupOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequestOutputGroupOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitTranscodeJobRequestOutputGroupOutput() = default ;
    SubmitTranscodeJobRequestOutputGroupOutput(const SubmitTranscodeJobRequestOutputGroupOutput &) = default ;
    SubmitTranscodeJobRequestOutputGroupOutput(SubmitTranscodeJobRequestOutputGroupOutput &&) = default ;
    SubmitTranscodeJobRequestOutputGroupOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequestOutputGroupOutput() = default ;
    SubmitTranscodeJobRequestOutputGroupOutput& operator=(const SubmitTranscodeJobRequestOutputGroupOutput &) = default ;
    SubmitTranscodeJobRequestOutputGroupOutput& operator=(SubmitTranscodeJobRequestOutputGroupOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->media_ != nullptr
        && this->outputUrl_ != nullptr && this->type_ != nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline SubmitTranscodeJobRequestOutputGroupOutput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // outputUrl Field Functions 
    bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
    void deleteOutputUrl() { this->outputUrl_ = nullptr;};
    inline string outputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
    inline SubmitTranscodeJobRequestOutputGroupOutput& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitTranscodeJobRequestOutputGroupOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The media object.
    // 
    // *   If Type is set to OSS, set this parameter to the URL of an OSS object. Both the OSS and HTTP protocols are supported.
    // 
    // >  Before you use the OSS bucket in the URL, you must add the bucket on the [Storage Management](https://help.aliyun.com/document_detail/609918.html) page of the IMS console.
    // 
    // *   If Type is set to Media, set this parameter to the ID of a media asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> media_ = nullptr;
    // The URL of the output stream.\\
    // This parameter takes effect only when Type is set to Media. You can select a specific file within the media asset as an output.\\
    // Supported placeholders:
    // 
    // *   {MediaId}: the ID of the media asset.
    // *   {JobId}: the ID of the transcoding subjob.
    // *   {MediaBucket}: the bucket to which the media asset belongs.
    // *   {ExtName}: the file suffix, which uses the output format of the transcoding template.
    // *   {DestMd5}: the MD5 value of the transcoded output file.\\
    //     Notes:
    // 
    // 1.  This parameter must contain the {MediaId} and {JobId} placeholders.
    // 2.  The output bucket is the same as the bucket to which the media asset belongs.
    std::shared_ptr<string> outputUrl_ = nullptr;
    // The type of the media object. Valid values:
    // 
    // *   OSS: an OSS object.
    // *   Media: a media asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
