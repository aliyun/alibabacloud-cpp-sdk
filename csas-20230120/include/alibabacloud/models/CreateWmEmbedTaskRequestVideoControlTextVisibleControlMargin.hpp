// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTVIDEOCONTROLTEXTVISIBLECONTROLMARGIN_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTVIDEOCONTROLTEXTVISIBLECONTROLMARGIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin& obj) { 
      DARABONBA_PTR_TO_JSON(Bottom, bottom_);
      DARABONBA_PTR_TO_JSON(Right, right_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin& obj) { 
      DARABONBA_PTR_FROM_JSON(Bottom, bottom_);
      DARABONBA_PTR_FROM_JSON(Right, right_);
    };
    CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin() = default ;
    CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin(const CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin &) = default ;
    CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin(CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin &&) = default ;
    CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin() = default ;
    CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin& operator=(const CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin &) = default ;
    CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin& operator=(CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bottom_ == nullptr
        && return this->right_ == nullptr; };
    // bottom Field Functions 
    bool hasBottom() const { return this->bottom_ != nullptr;};
    void deleteBottom() { this->bottom_ = nullptr;};
    inline int32_t bottom() const { DARABONBA_PTR_GET_DEFAULT(bottom_, 0) };
    inline CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin& setBottom(int32_t bottom) { DARABONBA_PTR_SET_VALUE(bottom_, bottom) };


    // right Field Functions 
    bool hasRight() const { return this->right_ != nullptr;};
    void deleteRight() { this->right_ = nullptr;};
    inline int32_t right() const { DARABONBA_PTR_GET_DEFAULT(right_, 0) };
    inline CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin& setRight(int32_t right) { DARABONBA_PTR_SET_VALUE(right_, right) };


  protected:
    std::shared_ptr<int32_t> bottom_ = nullptr;
    std::shared_ptr<int32_t> right_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
