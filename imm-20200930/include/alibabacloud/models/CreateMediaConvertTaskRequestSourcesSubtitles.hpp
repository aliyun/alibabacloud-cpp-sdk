// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUESTSOURCESSUBTITLES_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUESTSOURCESSUBTITLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateMediaConvertTaskRequestSourcesSubtitles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaConvertTaskRequestSourcesSubtitles& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(TimeOffset, timeOffset_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaConvertTaskRequestSourcesSubtitles& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(TimeOffset, timeOffset_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    CreateMediaConvertTaskRequestSourcesSubtitles() = default ;
    CreateMediaConvertTaskRequestSourcesSubtitles(const CreateMediaConvertTaskRequestSourcesSubtitles &) = default ;
    CreateMediaConvertTaskRequestSourcesSubtitles(CreateMediaConvertTaskRequestSourcesSubtitles &&) = default ;
    CreateMediaConvertTaskRequestSourcesSubtitles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaConvertTaskRequestSourcesSubtitles() = default ;
    CreateMediaConvertTaskRequestSourcesSubtitles& operator=(const CreateMediaConvertTaskRequestSourcesSubtitles &) = default ;
    CreateMediaConvertTaskRequestSourcesSubtitles& operator=(CreateMediaConvertTaskRequestSourcesSubtitles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->language_ != nullptr
        && this->timeOffset_ != nullptr && this->URI_ != nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateMediaConvertTaskRequestSourcesSubtitles& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // timeOffset Field Functions 
    bool hasTimeOffset() const { return this->timeOffset_ != nullptr;};
    void deleteTimeOffset() { this->timeOffset_ = nullptr;};
    inline double timeOffset() const { DARABONBA_PTR_GET_DEFAULT(timeOffset_, 0.0) };
    inline CreateMediaConvertTaskRequestSourcesSubtitles& setTimeOffset(double timeOffset) { DARABONBA_PTR_SET_VALUE(timeOffset_, timeOffset) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline CreateMediaConvertTaskRequestSourcesSubtitles& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The subtitle language. If you specify this parameter, comply with the ISO 639-2 standard. This parameter is left empty by default.
    std::shared_ptr<string> language_ = nullptr;
    // The time offset of the subtitle. Unit: seconds. Default value: 0.
    std::shared_ptr<double> timeOffset_ = nullptr;
    // The URI of the Object Storage Service (OSS) bucket. Specify the value in the `oss://${Bucket}/${Object}` format. `${Bucket}` specifies the name of the OSS bucket that resides in the same region with the current project. `${Object}` specifies the complete path to the file whose name contains an extension. The following subtitle formats are supported: srt, vtt, mov_text, ass, dvd_sub, and pgs.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
