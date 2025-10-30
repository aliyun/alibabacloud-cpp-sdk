// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMBASEIMAGEREQUESTIMAGECONTROLTEXTVISIBLECONTROLMARGIN_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMBASEIMAGEREQUESTIMAGECONTROLTEXTVISIBLECONTROLMARGIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmBaseImageRequestImageControlTextVisibleControlMargin : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmBaseImageRequestImageControlTextVisibleControlMargin& obj) { 
      DARABONBA_PTR_TO_JSON(Bottom, bottom_);
      DARABONBA_PTR_TO_JSON(Left, left_);
      DARABONBA_PTR_TO_JSON(Right, right_);
      DARABONBA_PTR_TO_JSON(Top, top_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmBaseImageRequestImageControlTextVisibleControlMargin& obj) { 
      DARABONBA_PTR_FROM_JSON(Bottom, bottom_);
      DARABONBA_PTR_FROM_JSON(Left, left_);
      DARABONBA_PTR_FROM_JSON(Right, right_);
      DARABONBA_PTR_FROM_JSON(Top, top_);
    };
    CreateWmBaseImageRequestImageControlTextVisibleControlMargin() = default ;
    CreateWmBaseImageRequestImageControlTextVisibleControlMargin(const CreateWmBaseImageRequestImageControlTextVisibleControlMargin &) = default ;
    CreateWmBaseImageRequestImageControlTextVisibleControlMargin(CreateWmBaseImageRequestImageControlTextVisibleControlMargin &&) = default ;
    CreateWmBaseImageRequestImageControlTextVisibleControlMargin(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmBaseImageRequestImageControlTextVisibleControlMargin() = default ;
    CreateWmBaseImageRequestImageControlTextVisibleControlMargin& operator=(const CreateWmBaseImageRequestImageControlTextVisibleControlMargin &) = default ;
    CreateWmBaseImageRequestImageControlTextVisibleControlMargin& operator=(CreateWmBaseImageRequestImageControlTextVisibleControlMargin &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bottom_ == nullptr
        && return this->left_ == nullptr && return this->right_ == nullptr && return this->top_ == nullptr; };
    // bottom Field Functions 
    bool hasBottom() const { return this->bottom_ != nullptr;};
    void deleteBottom() { this->bottom_ = nullptr;};
    inline float bottom() const { DARABONBA_PTR_GET_DEFAULT(bottom_, 0.0) };
    inline CreateWmBaseImageRequestImageControlTextVisibleControlMargin& setBottom(float bottom) { DARABONBA_PTR_SET_VALUE(bottom_, bottom) };


    // left Field Functions 
    bool hasLeft() const { return this->left_ != nullptr;};
    void deleteLeft() { this->left_ = nullptr;};
    inline float left() const { DARABONBA_PTR_GET_DEFAULT(left_, 0.0) };
    inline CreateWmBaseImageRequestImageControlTextVisibleControlMargin& setLeft(float left) { DARABONBA_PTR_SET_VALUE(left_, left) };


    // right Field Functions 
    bool hasRight() const { return this->right_ != nullptr;};
    void deleteRight() { this->right_ = nullptr;};
    inline float right() const { DARABONBA_PTR_GET_DEFAULT(right_, 0.0) };
    inline CreateWmBaseImageRequestImageControlTextVisibleControlMargin& setRight(float right) { DARABONBA_PTR_SET_VALUE(right_, right) };


    // top Field Functions 
    bool hasTop() const { return this->top_ != nullptr;};
    void deleteTop() { this->top_ = nullptr;};
    inline float top() const { DARABONBA_PTR_GET_DEFAULT(top_, 0.0) };
    inline CreateWmBaseImageRequestImageControlTextVisibleControlMargin& setTop(float top) { DARABONBA_PTR_SET_VALUE(top_, top) };


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
