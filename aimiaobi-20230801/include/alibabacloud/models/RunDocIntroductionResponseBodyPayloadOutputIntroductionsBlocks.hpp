// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONRESPONSEBODYPAYLOADOUTPUTINTRODUCTIONSBLOCKS_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONRESPONSEBODYPAYLOADOUTPUTINTRODUCTIONSBLOCKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(PageId, pageId_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(PageId, pageId_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks() = default ;
    RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks(const RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks &) = default ;
    RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks(RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks &&) = default ;
    RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks() = default ;
    RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks& operator=(const RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks &) = default ;
    RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks& operator=(RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && return this->endTime_ == nullptr && return this->height_ == nullptr && return this->pageId_ == nullptr && return this->width_ == nullptr && return this->x_ == nullptr
        && return this->y_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // pageId Field Functions 
    bool hasPageId() const { return this->pageId_ != nullptr;};
    void deletePageId() { this->pageId_ = nullptr;};
    inline int32_t pageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, 0) };
    inline RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks& setPageId(int32_t pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline int32_t x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
    inline RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline int32_t y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
    inline RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> pageId_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
    std::shared_ptr<int32_t> x_ = nullptr;
    std::shared_ptr<int32_t> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
