// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput(const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput(GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput &&) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput& operator=(const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput& operator=(GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput &&) = default ;
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
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // outputUrl Field Functions 
    bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
    void deleteOutputUrl() { this->outputUrl_ = nullptr;};
    inline string outputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The media object.
    // 
    // *   If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported.
    // *   If Type is set to Media, the ID of a media asset is returned.
    std::shared_ptr<string> media_ = nullptr;
    // The URL of the output stream.
    std::shared_ptr<string> outputUrl_ = nullptr;
    // The type of the media object. Valid values:
    // 
    // *   OSS: an OSS object.
    // *   Media: a media asset.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
