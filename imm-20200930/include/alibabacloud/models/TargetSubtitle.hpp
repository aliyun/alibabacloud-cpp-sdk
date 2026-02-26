// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETSUBTITLE_HPP_
#define ALIBABACLOUD_MODELS_TARGETSUBTITLE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetSubtitle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetSubtitle& obj) { 
      DARABONBA_PTR_TO_JSON(DisableSubtitle, disableSubtitle_);
      DARABONBA_PTR_TO_JSON(ExtractSubtitle, extractSubtitle_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, TargetSubtitle& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableSubtitle, disableSubtitle_);
      DARABONBA_PTR_FROM_JSON(ExtractSubtitle, extractSubtitle_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
    };
    TargetSubtitle() = default ;
    TargetSubtitle(const TargetSubtitle &) = default ;
    TargetSubtitle(TargetSubtitle &&) = default ;
    TargetSubtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetSubtitle() = default ;
    TargetSubtitle& operator=(const TargetSubtitle &) = default ;
    TargetSubtitle& operator=(TargetSubtitle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExtractSubtitle : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExtractSubtitle& obj) { 
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, ExtractSubtitle& obj) { 
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      ExtractSubtitle() = default ;
      ExtractSubtitle(const ExtractSubtitle &) = default ;
      ExtractSubtitle(ExtractSubtitle &&) = default ;
      ExtractSubtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExtractSubtitle() = default ;
      ExtractSubtitle& operator=(const ExtractSubtitle &) = default ;
      ExtractSubtitle& operator=(ExtractSubtitle &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->format_ == nullptr
        && this->URI_ == nullptr; };
      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline ExtractSubtitle& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline ExtractSubtitle& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The format of the extracted subtitle file. Valid values:
      // 
      // *   ass
      // *   srt
      // *   webvtt
      shared_ptr<string> format_ {};
      // The prefix of the OSS URI where the extracted subtitles are stored. The OSS URI is in the oss://bucket/object format, where bucket specifies the name of the OSS bucket that is in the same region as the current project and object specifies the full file path that includes the file name extension.
      // 
      // *   Example: If the prefix is oss://examplebucket/outputSubtitle, an output subtitle file has a URI in the format of oss://examplebucket/outputSubitile_${index}.${ext}. In the URI format, ${ext} is the file name extension of the output subtitle file, and ${index} is the same 0-based index number as that of the corresponding source subtitle stream file.
      shared_ptr<string> URI_ {};
    };

    virtual bool empty() const override { return this->disableSubtitle_ == nullptr
        && this->extractSubtitle_ == nullptr && this->stream_ == nullptr; };
    // disableSubtitle Field Functions 
    bool hasDisableSubtitle() const { return this->disableSubtitle_ != nullptr;};
    void deleteDisableSubtitle() { this->disableSubtitle_ = nullptr;};
    inline bool getDisableSubtitle() const { DARABONBA_PTR_GET_DEFAULT(disableSubtitle_, false) };
    inline TargetSubtitle& setDisableSubtitle(bool disableSubtitle) { DARABONBA_PTR_SET_VALUE(disableSubtitle_, disableSubtitle) };


    // extractSubtitle Field Functions 
    bool hasExtractSubtitle() const { return this->extractSubtitle_ != nullptr;};
    void deleteExtractSubtitle() { this->extractSubtitle_ = nullptr;};
    inline const TargetSubtitle::ExtractSubtitle & getExtractSubtitle() const { DARABONBA_PTR_GET_CONST(extractSubtitle_, TargetSubtitle::ExtractSubtitle) };
    inline TargetSubtitle::ExtractSubtitle getExtractSubtitle() { DARABONBA_PTR_GET(extractSubtitle_, TargetSubtitle::ExtractSubtitle) };
    inline TargetSubtitle& setExtractSubtitle(const TargetSubtitle::ExtractSubtitle & extractSubtitle) { DARABONBA_PTR_SET_VALUE(extractSubtitle_, extractSubtitle) };
    inline TargetSubtitle& setExtractSubtitle(TargetSubtitle::ExtractSubtitle && extractSubtitle) { DARABONBA_PTR_SET_RVALUE(extractSubtitle_, extractSubtitle) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline const vector<int32_t> & getStream() const { DARABONBA_PTR_GET_CONST(stream_, vector<int32_t>) };
    inline vector<int32_t> getStream() { DARABONBA_PTR_GET(stream_, vector<int32_t>) };
    inline TargetSubtitle& setStream(const vector<int32_t> & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
    inline TargetSubtitle& setStream(vector<int32_t> && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


  protected:
    // Specifies whether to disable subtitle generation. Valid values:
    // 
    // *   true
    // *   false (default)
    // 
    // >  If you call the GenerateVideoPlaylist operation and subtitles are required, you must set this parameter to false.
    shared_ptr<bool> disableSubtitle_ {};
    // The subtitle extraction settings.
    // 
    // >  The GenerateVideoPlaylist operation does not support this parameter.
    shared_ptr<TargetSubtitle::ExtractSubtitle> extractSubtitle_ {};
    // The index numbers of subtitle streams that need to be processed. If you set this parameter to null (default) or a value greater than 100, all subtitle streams are processed.
    // 
    // *   For example, you can set the parameter to `[0,1]` to process subtitle streams with index numbers 0 and 1, `[1]` to process only the subtitle stream with the index number 1, and `[101]` to process all subtitle streams.
    // 
    // >  If you specify an index number but no subtitle stream with the index number is found, the index number is ignored.
    shared_ptr<vector<int32_t>> stream_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
