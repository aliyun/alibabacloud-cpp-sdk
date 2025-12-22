// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCHARACTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCHARACTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeVideoCharacterResponseBodyDataFrames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeVideoCharacterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCharacterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Frames, frames_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCharacterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Frames, frames_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    RecognizeVideoCharacterResponseBodyData() = default ;
    RecognizeVideoCharacterResponseBodyData(const RecognizeVideoCharacterResponseBodyData &) = default ;
    RecognizeVideoCharacterResponseBodyData(RecognizeVideoCharacterResponseBodyData &&) = default ;
    RecognizeVideoCharacterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCharacterResponseBodyData() = default ;
    RecognizeVideoCharacterResponseBodyData& operator=(const RecognizeVideoCharacterResponseBodyData &) = default ;
    RecognizeVideoCharacterResponseBodyData& operator=(RecognizeVideoCharacterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frames_ == nullptr
        && return this->height_ == nullptr && return this->inputFile_ == nullptr && return this->width_ == nullptr; };
    // frames Field Functions 
    bool hasFrames() const { return this->frames_ != nullptr;};
    void deleteFrames() { this->frames_ = nullptr;};
    inline const vector<Models::RecognizeVideoCharacterResponseBodyDataFrames> & frames() const { DARABONBA_PTR_GET_CONST(frames_, vector<Models::RecognizeVideoCharacterResponseBodyDataFrames>) };
    inline vector<Models::RecognizeVideoCharacterResponseBodyDataFrames> frames() { DARABONBA_PTR_GET(frames_, vector<Models::RecognizeVideoCharacterResponseBodyDataFrames>) };
    inline RecognizeVideoCharacterResponseBodyData& setFrames(const vector<Models::RecognizeVideoCharacterResponseBodyDataFrames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
    inline RecognizeVideoCharacterResponseBodyData& setFrames(vector<Models::RecognizeVideoCharacterResponseBodyDataFrames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline RecognizeVideoCharacterResponseBodyData& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // inputFile Field Functions 
    bool hasInputFile() const { return this->inputFile_ != nullptr;};
    void deleteInputFile() { this->inputFile_ = nullptr;};
    inline string inputFile() const { DARABONBA_PTR_GET_DEFAULT(inputFile_, "") };
    inline RecognizeVideoCharacterResponseBodyData& setInputFile(string inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline RecognizeVideoCharacterResponseBodyData& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<vector<Models::RecognizeVideoCharacterResponseBodyDataFrames>> frames_ = nullptr;
    std::shared_ptr<int64_t> height_ = nullptr;
    std::shared_ptr<string> inputFile_ = nullptr;
    std::shared_ptr<int64_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
