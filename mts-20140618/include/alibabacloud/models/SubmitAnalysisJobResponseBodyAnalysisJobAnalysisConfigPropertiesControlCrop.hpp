// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBANALYSISCONFIGPROPERTIESCONTROLCROP_HPP_
#define ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBANALYSISCONFIGPROPERTIESCONTROLCROP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Left, left_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Top, top_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Left, left_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Top, top_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop(const SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop(SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop &&) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop& operator=(const SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop& operator=(SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->height_ == nullptr
        && return this->left_ == nullptr && return this->mode_ == nullptr && return this->top_ == nullptr && return this->width_ == nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // left Field Functions 
    bool hasLeft() const { return this->left_ != nullptr;};
    void deleteLeft() { this->left_ = nullptr;};
    inline string left() const { DARABONBA_PTR_GET_DEFAULT(left_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop& setLeft(string left) { DARABONBA_PTR_SET_VALUE(left_, left) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // top Field Functions 
    bool hasTop() const { return this->top_ != nullptr;};
    void deleteTop() { this->top_ = nullptr;};
    inline string top() const { DARABONBA_PTR_GET_DEFAULT(top_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop& setTop(string top) { DARABONBA_PTR_SET_VALUE(top_, top) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The height of the video after the margins were cropped out.
    // 
    // > This parameter is invalid if the **Mode** parameter is set to Auto or None.
    std::shared_ptr<string> height_ = nullptr;
    // The left margin that was cropped out.
    // 
    // > This parameter is invalid if the **Mode** parameter is set to Auto or None.
    std::shared_ptr<string> left_ = nullptr;
    // The cropping mode. Valid values:
    // 
    // *   **Auto**: Cropping was automatically run. This is the default value.
    // *   **Force**: Cropping was forced to run.
    // *   **None**: Cropping was forced not to run.
    std::shared_ptr<string> mode_ = nullptr;
    // The top margin that was cropped out.
    // 
    // > This parameter is invalid if the **Mode** parameter is set to Auto or None.
    std::shared_ptr<string> top_ = nullptr;
    // The width of the video after the margins were cropped out.
    // 
    // > This parameter is invalid if the **Mode** parameter is set to Auto or None.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
