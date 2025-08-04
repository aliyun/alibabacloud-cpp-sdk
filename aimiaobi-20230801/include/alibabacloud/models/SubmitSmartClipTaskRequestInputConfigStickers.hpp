// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTINPUTCONFIGSTICKERS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTINPUTCONFIGSTICKERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSmartClipTaskRequestInputConfigStickersStickerId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartClipTaskRequestInputConfigStickers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartClipTaskRequestInputConfigStickers& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(StickerId, stickerId_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartClipTaskRequestInputConfigStickers& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(StickerId, stickerId_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    SubmitSmartClipTaskRequestInputConfigStickers() = default ;
    SubmitSmartClipTaskRequestInputConfigStickers(const SubmitSmartClipTaskRequestInputConfigStickers &) = default ;
    SubmitSmartClipTaskRequestInputConfigStickers(SubmitSmartClipTaskRequestInputConfigStickers &&) = default ;
    SubmitSmartClipTaskRequestInputConfigStickers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartClipTaskRequestInputConfigStickers() = default ;
    SubmitSmartClipTaskRequestInputConfigStickers& operator=(const SubmitSmartClipTaskRequestInputConfigStickers &) = default ;
    SubmitSmartClipTaskRequestInputConfigStickers& operator=(SubmitSmartClipTaskRequestInputConfigStickers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->stickerId_ != nullptr && this->width_ != nullptr && this->x_ != nullptr && this->y_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline double height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline SubmitSmartClipTaskRequestInputConfigStickers& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // stickerId Field Functions 
    bool hasStickerId() const { return this->stickerId_ != nullptr;};
    void deleteStickerId() { this->stickerId_ = nullptr;};
    inline const Models::SubmitSmartClipTaskRequestInputConfigStickersStickerId & stickerId() const { DARABONBA_PTR_GET_CONST(stickerId_, Models::SubmitSmartClipTaskRequestInputConfigStickersStickerId) };
    inline Models::SubmitSmartClipTaskRequestInputConfigStickersStickerId stickerId() { DARABONBA_PTR_GET(stickerId_, Models::SubmitSmartClipTaskRequestInputConfigStickersStickerId) };
    inline SubmitSmartClipTaskRequestInputConfigStickers& setStickerId(const Models::SubmitSmartClipTaskRequestInputConfigStickersStickerId & stickerId) { DARABONBA_PTR_SET_VALUE(stickerId_, stickerId) };
    inline SubmitSmartClipTaskRequestInputConfigStickers& setStickerId(Models::SubmitSmartClipTaskRequestInputConfigStickersStickerId && stickerId) { DARABONBA_PTR_SET_RVALUE(stickerId_, stickerId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline double width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline SubmitSmartClipTaskRequestInputConfigStickers& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline double x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline SubmitSmartClipTaskRequestInputConfigStickers& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline double y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline SubmitSmartClipTaskRequestInputConfigStickers& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    // This parameter is required.
    std::shared_ptr<double> height_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::SubmitSmartClipTaskRequestInputConfigStickersStickerId> stickerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> width_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> x_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
