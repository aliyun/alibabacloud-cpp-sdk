// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGSUBTITLESOVERWRITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGSUBTITLESOVERWRITEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParamsFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams& obj) { 
      DARABONBA_PTR_TO_JSON(CharEnc, charEnc_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(Format, format_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams& obj) { 
      DARABONBA_PTR_FROM_JSON(CharEnc, charEnc_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
    };
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams &&) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams& operator=(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams& operator=(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->charEnc_ == nullptr
        && return this->file_ == nullptr && return this->format_ == nullptr; };
    // charEnc Field Functions 
    bool hasCharEnc() const { return this->charEnc_ != nullptr;};
    void deleteCharEnc() { this->charEnc_ = nullptr;};
    inline string charEnc() const { DARABONBA_PTR_GET_DEFAULT(charEnc_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams& setCharEnc(string charEnc) { DARABONBA_PTR_SET_VALUE(charEnc_, charEnc) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParamsFile & file() const { DARABONBA_PTR_GET_CONST(file_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParamsFile) };
    inline Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParamsFile file() { DARABONBA_PTR_GET(file_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParamsFile) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams& setFile(const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParamsFile & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams& setFile(Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParamsFile && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParams& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


  protected:
    // The file encoding format.
    std::shared_ptr<string> charEnc_ = nullptr;
    // The subtitle file.
    std::shared_ptr<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitlesOverwriteParamsFile> file_ = nullptr;
    // The format of the subtitle file.
    std::shared_ptr<string> format_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
