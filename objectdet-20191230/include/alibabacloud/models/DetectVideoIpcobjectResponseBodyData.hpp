// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVIDEOIPCOBJECTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTVIDEOIPCOBJECTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectVideoIPCObjectResponseBodyDataFrames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVideoIPCObjectResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVideoIPCObjectResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Frames, frames_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVideoIPCObjectResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Frames, frames_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    DetectVideoIPCObjectResponseBodyData() = default ;
    DetectVideoIPCObjectResponseBodyData(const DetectVideoIPCObjectResponseBodyData &) = default ;
    DetectVideoIPCObjectResponseBodyData(DetectVideoIPCObjectResponseBodyData &&) = default ;
    DetectVideoIPCObjectResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVideoIPCObjectResponseBodyData() = default ;
    DetectVideoIPCObjectResponseBodyData& operator=(const DetectVideoIPCObjectResponseBodyData &) = default ;
    DetectVideoIPCObjectResponseBodyData& operator=(DetectVideoIPCObjectResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->frames_ != nullptr
        && this->height_ != nullptr && this->inputFile_ != nullptr && this->width_ != nullptr; };
    // frames Field Functions 
    bool hasFrames() const { return this->frames_ != nullptr;};
    void deleteFrames() { this->frames_ = nullptr;};
    inline const vector<Models::DetectVideoIPCObjectResponseBodyDataFrames> & frames() const { DARABONBA_PTR_GET_CONST(frames_, vector<Models::DetectVideoIPCObjectResponseBodyDataFrames>) };
    inline vector<Models::DetectVideoIPCObjectResponseBodyDataFrames> frames() { DARABONBA_PTR_GET(frames_, vector<Models::DetectVideoIPCObjectResponseBodyDataFrames>) };
    inline DetectVideoIPCObjectResponseBodyData& setFrames(const vector<Models::DetectVideoIPCObjectResponseBodyDataFrames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
    inline DetectVideoIPCObjectResponseBodyData& setFrames(vector<Models::DetectVideoIPCObjectResponseBodyDataFrames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline DetectVideoIPCObjectResponseBodyData& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // inputFile Field Functions 
    bool hasInputFile() const { return this->inputFile_ != nullptr;};
    void deleteInputFile() { this->inputFile_ = nullptr;};
    inline string inputFile() const { DARABONBA_PTR_GET_DEFAULT(inputFile_, "") };
    inline DetectVideoIPCObjectResponseBodyData& setInputFile(string inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline DetectVideoIPCObjectResponseBodyData& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<vector<Models::DetectVideoIPCObjectResponseBodyDataFrames>> frames_ = nullptr;
    std::shared_ptr<int64_t> height_ = nullptr;
    std::shared_ptr<string> inputFile_ = nullptr;
    std::shared_ptr<int64_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
