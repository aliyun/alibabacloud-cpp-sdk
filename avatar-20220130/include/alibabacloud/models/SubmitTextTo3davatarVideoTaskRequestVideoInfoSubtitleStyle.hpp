// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTEXTTO3DAVATARVIDEOTASKREQUESTVIDEOINFOSUBTITLESTYLE_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTEXTTO3DAVATARVIDEOTASKREQUESTVIDEOINFOSUBTITLESTYLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle& obj) { 
      DARABONBA_PTR_TO_JSON(Color, color_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutlineColor, outlineColor_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle& obj) { 
      DARABONBA_PTR_FROM_JSON(Color, color_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutlineColor, outlineColor_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle() = default ;
    SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle(const SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle &) = default ;
    SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle(SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle &&) = default ;
    SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle() = default ;
    SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle& operator=(const SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle &) = default ;
    SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle& operator=(SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->color_ != nullptr
        && this->name_ != nullptr && this->outlineColor_ != nullptr && this->size_ != nullptr && this->y_ != nullptr; };
    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outlineColor Field Functions 
    bool hasOutlineColor() const { return this->outlineColor_ != nullptr;};
    void deleteOutlineColor() { this->outlineColor_ = nullptr;};
    inline string outlineColor() const { DARABONBA_PTR_GET_DEFAULT(outlineColor_, "") };
    inline SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle& setOutlineColor(string outlineColor) { DARABONBA_PTR_SET_VALUE(outlineColor_, outlineColor) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline int32_t y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
    inline SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<string> color_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> outlineColor_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<int32_t> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
