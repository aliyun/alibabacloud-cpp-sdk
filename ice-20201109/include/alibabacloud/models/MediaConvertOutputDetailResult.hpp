// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAILRESULT_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAILRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaConvertOutputDetailFileMeta.hpp>
#include <alibabacloud/models/MediaConvertOutputDetailResultOutputFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertOutputDetailResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertOutputDetailResult& obj) { 
      DARABONBA_PTR_TO_JSON(OutFileMeta, outFileMeta_);
      DARABONBA_PTR_TO_JSON(OutputFile, outputFile_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertOutputDetailResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OutFileMeta, outFileMeta_);
      DARABONBA_PTR_FROM_JSON(OutputFile, outputFile_);
    };
    MediaConvertOutputDetailResult() = default ;
    MediaConvertOutputDetailResult(const MediaConvertOutputDetailResult &) = default ;
    MediaConvertOutputDetailResult(MediaConvertOutputDetailResult &&) = default ;
    MediaConvertOutputDetailResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertOutputDetailResult() = default ;
    MediaConvertOutputDetailResult& operator=(const MediaConvertOutputDetailResult &) = default ;
    MediaConvertOutputDetailResult& operator=(MediaConvertOutputDetailResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outFileMeta_ == nullptr
        && return this->outputFile_ == nullptr; };
    // outFileMeta Field Functions 
    bool hasOutFileMeta() const { return this->outFileMeta_ != nullptr;};
    void deleteOutFileMeta() { this->outFileMeta_ = nullptr;};
    inline const Models::MediaConvertOutputDetailFileMeta & outFileMeta() const { DARABONBA_PTR_GET_CONST(outFileMeta_, Models::MediaConvertOutputDetailFileMeta) };
    inline Models::MediaConvertOutputDetailFileMeta outFileMeta() { DARABONBA_PTR_GET(outFileMeta_, Models::MediaConvertOutputDetailFileMeta) };
    inline MediaConvertOutputDetailResult& setOutFileMeta(const Models::MediaConvertOutputDetailFileMeta & outFileMeta) { DARABONBA_PTR_SET_VALUE(outFileMeta_, outFileMeta) };
    inline MediaConvertOutputDetailResult& setOutFileMeta(Models::MediaConvertOutputDetailFileMeta && outFileMeta) { DARABONBA_PTR_SET_RVALUE(outFileMeta_, outFileMeta) };


    // outputFile Field Functions 
    bool hasOutputFile() const { return this->outputFile_ != nullptr;};
    void deleteOutputFile() { this->outputFile_ = nullptr;};
    inline const Models::MediaConvertOutputDetailResultOutputFile & outputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, Models::MediaConvertOutputDetailResultOutputFile) };
    inline Models::MediaConvertOutputDetailResultOutputFile outputFile() { DARABONBA_PTR_GET(outputFile_, Models::MediaConvertOutputDetailResultOutputFile) };
    inline MediaConvertOutputDetailResult& setOutputFile(const Models::MediaConvertOutputDetailResultOutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
    inline MediaConvertOutputDetailResult& setOutputFile(Models::MediaConvertOutputDetailResultOutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


  protected:
    std::shared_ptr<Models::MediaConvertOutputDetailFileMeta> outFileMeta_ = nullptr;
    std::shared_ptr<Models::MediaConvertOutputDetailResultOutputFile> outputFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
