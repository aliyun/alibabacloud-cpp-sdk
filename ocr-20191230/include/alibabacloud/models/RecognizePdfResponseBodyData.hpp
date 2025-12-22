// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEPDFRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEPDFRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizePdfResponseBodyDataWordsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizePdfResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizePdfResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Angle, angle_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(OrgHeight, orgHeight_);
      DARABONBA_PTR_TO_JSON(OrgWidth, orgWidth_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(WordsInfo, wordsInfo_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizePdfResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Angle, angle_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(OrgHeight, orgHeight_);
      DARABONBA_PTR_FROM_JSON(OrgWidth, orgWidth_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(WordsInfo, wordsInfo_);
    };
    RecognizePdfResponseBodyData() = default ;
    RecognizePdfResponseBodyData(const RecognizePdfResponseBodyData &) = default ;
    RecognizePdfResponseBodyData(RecognizePdfResponseBodyData &&) = default ;
    RecognizePdfResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizePdfResponseBodyData() = default ;
    RecognizePdfResponseBodyData& operator=(const RecognizePdfResponseBodyData &) = default ;
    RecognizePdfResponseBodyData& operator=(RecognizePdfResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->angle_ == nullptr
        && return this->height_ == nullptr && return this->orgHeight_ == nullptr && return this->orgWidth_ == nullptr && return this->pageIndex_ == nullptr && return this->width_ == nullptr
        && return this->wordsInfo_ == nullptr; };
    // angle Field Functions 
    bool hasAngle() const { return this->angle_ != nullptr;};
    void deleteAngle() { this->angle_ = nullptr;};
    inline int64_t angle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0L) };
    inline RecognizePdfResponseBodyData& setAngle(int64_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline RecognizePdfResponseBodyData& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // orgHeight Field Functions 
    bool hasOrgHeight() const { return this->orgHeight_ != nullptr;};
    void deleteOrgHeight() { this->orgHeight_ = nullptr;};
    inline int64_t orgHeight() const { DARABONBA_PTR_GET_DEFAULT(orgHeight_, 0L) };
    inline RecognizePdfResponseBodyData& setOrgHeight(int64_t orgHeight) { DARABONBA_PTR_SET_VALUE(orgHeight_, orgHeight) };


    // orgWidth Field Functions 
    bool hasOrgWidth() const { return this->orgWidth_ != nullptr;};
    void deleteOrgWidth() { this->orgWidth_ = nullptr;};
    inline int64_t orgWidth() const { DARABONBA_PTR_GET_DEFAULT(orgWidth_, 0L) };
    inline RecognizePdfResponseBodyData& setOrgWidth(int64_t orgWidth) { DARABONBA_PTR_SET_VALUE(orgWidth_, orgWidth) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int64_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
    inline RecognizePdfResponseBodyData& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline RecognizePdfResponseBodyData& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // wordsInfo Field Functions 
    bool hasWordsInfo() const { return this->wordsInfo_ != nullptr;};
    void deleteWordsInfo() { this->wordsInfo_ = nullptr;};
    inline const vector<Models::RecognizePdfResponseBodyDataWordsInfo> & wordsInfo() const { DARABONBA_PTR_GET_CONST(wordsInfo_, vector<Models::RecognizePdfResponseBodyDataWordsInfo>) };
    inline vector<Models::RecognizePdfResponseBodyDataWordsInfo> wordsInfo() { DARABONBA_PTR_GET(wordsInfo_, vector<Models::RecognizePdfResponseBodyDataWordsInfo>) };
    inline RecognizePdfResponseBodyData& setWordsInfo(const vector<Models::RecognizePdfResponseBodyDataWordsInfo> & wordsInfo) { DARABONBA_PTR_SET_VALUE(wordsInfo_, wordsInfo) };
    inline RecognizePdfResponseBodyData& setWordsInfo(vector<Models::RecognizePdfResponseBodyDataWordsInfo> && wordsInfo) { DARABONBA_PTR_SET_RVALUE(wordsInfo_, wordsInfo) };


  protected:
    std::shared_ptr<int64_t> angle_ = nullptr;
    std::shared_ptr<int64_t> height_ = nullptr;
    std::shared_ptr<int64_t> orgHeight_ = nullptr;
    std::shared_ptr<int64_t> orgWidth_ = nullptr;
    std::shared_ptr<int64_t> pageIndex_ = nullptr;
    std::shared_ptr<int64_t> width_ = nullptr;
    std::shared_ptr<vector<Models::RecognizePdfResponseBodyDataWordsInfo>> wordsInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
