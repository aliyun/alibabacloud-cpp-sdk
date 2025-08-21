// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTIMAGECONTROLLOGOVISIBLECONTROLMARGIN_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTIMAGECONTROLLOGOVISIBLECONTROLMARGIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin& obj) { 
      DARABONBA_PTR_TO_JSON(Bottom, bottom_);
      DARABONBA_PTR_TO_JSON(Left, left_);
      DARABONBA_PTR_TO_JSON(Right, right_);
      DARABONBA_PTR_TO_JSON(Top, top_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin& obj) { 
      DARABONBA_PTR_FROM_JSON(Bottom, bottom_);
      DARABONBA_PTR_FROM_JSON(Left, left_);
      DARABONBA_PTR_FROM_JSON(Right, right_);
      DARABONBA_PTR_FROM_JSON(Top, top_);
    };
    CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin() = default ;
    CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin(const CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin &) = default ;
    CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin(CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin &&) = default ;
    CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin() = default ;
    CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin& operator=(const CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin &) = default ;
    CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin& operator=(CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bottom_ != nullptr
        && this->left_ != nullptr && this->right_ != nullptr && this->top_ != nullptr; };
    // bottom Field Functions 
    bool hasBottom() const { return this->bottom_ != nullptr;};
    void deleteBottom() { this->bottom_ = nullptr;};
    inline float bottom() const { DARABONBA_PTR_GET_DEFAULT(bottom_, 0.0) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin& setBottom(float bottom) { DARABONBA_PTR_SET_VALUE(bottom_, bottom) };


    // left Field Functions 
    bool hasLeft() const { return this->left_ != nullptr;};
    void deleteLeft() { this->left_ = nullptr;};
    inline float left() const { DARABONBA_PTR_GET_DEFAULT(left_, 0.0) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin& setLeft(float left) { DARABONBA_PTR_SET_VALUE(left_, left) };


    // right Field Functions 
    bool hasRight() const { return this->right_ != nullptr;};
    void deleteRight() { this->right_ = nullptr;};
    inline float right() const { DARABONBA_PTR_GET_DEFAULT(right_, 0.0) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin& setRight(float right) { DARABONBA_PTR_SET_VALUE(right_, right) };


    // top Field Functions 
    bool hasTop() const { return this->top_ != nullptr;};
    void deleteTop() { this->top_ = nullptr;};
    inline float top() const { DARABONBA_PTR_GET_DEFAULT(top_, 0.0) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin& setTop(float top) { DARABONBA_PTR_SET_VALUE(top_, top) };


  protected:
    std::shared_ptr<float> bottom_ = nullptr;
    std::shared_ptr<float> left_ = nullptr;
    std::shared_ptr<float> right_ = nullptr;
    std::shared_ptr<float> top_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
