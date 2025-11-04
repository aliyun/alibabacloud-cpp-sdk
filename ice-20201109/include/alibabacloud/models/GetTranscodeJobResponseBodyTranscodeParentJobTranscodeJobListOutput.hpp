// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput(const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput(GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput &&) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput& operator=(const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput& operator=(GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->media_ == nullptr
        && return this->outputUrl_ == nullptr && return this->type_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // outputUrl Field Functions 
    bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
    void deleteOutputUrl() { this->outputUrl_ = nullptr;};
    inline string outputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The media object.
    // 
    // *   If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported.
    // *   If Type is set to Media, the ID of a media asset is returned.
    std::shared_ptr<string> media_ = nullptr;
    // The path of the transcoded output stream. This parameter is required only when the output is a media asset.
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
